//
//  GTAPIManager.swift
//  GeoTollFramework
//
//  Created by Ajmera Infotech on 13/04/23.
//  Copyright © 2023 GeoToll. All rights reserved.
//

import Foundation
import Alamofire

@objcMembers
open class GTAPIManager: NSObject {
    
    private let requestQueue = DispatchQueue(label: "com.geotoll.GTAPIManager.requestQueue")
    private let tollrunQueue = DispatchQueue(label: "com.geotoll.GTAPIManager.tollrunQueue")
    private let maxRetries = 3
    
    @objc public static let sharedInstance = GTAPIManager()
    
    private override init() {
        super.init()
    }

    /// Perform an API request with retry logic and error handling
    private func performAPIRequest(url: String, params: Any?, token: String?, method: HTTPMethod, shouldDownload: Bool = false, fileName: String = "", isVehicle: Bool, completion: @escaping (Result<Any, GTErrors>) -> Void, currentRetry: Int = 0) {
        guard GTSystemMonitor.sharedInstanceUtility.isInternetAvailable() else {
            completion(.failure(.noInternet(APIError(message: "No Internet Connection"))))
            return
        }

        GTApiRequest.instance.request(method: method, param: params, url: url, shouldDownload: shouldDownload, fileName: fileName) { [weak self] result in
            guard let self = self else { return }
            
            switch result {
            case .success(let data):
                if isVehicle {
                    GTSession.shared.updateVehiclesArray(data as? [AnyHashable: Any])
                } else {
                    GTSession.shared.parseData(data as? [AnyHashable: Any])
                }
                completion(.success(data))
                
            case .failure(let error):
                // Skip retry for specific URLs
                if url == APIConfig.instance.getAuthURL() {
                    completion(.failure(error))
                    return
                }

                // Handle 401 Unauthorized
                if case .apiError(let apiError) = error, apiError.statusCode == 401 {
                    self.handleAuthorizationFailure(url: url, params: params, method: method, shouldDownload: shouldDownload, fileName: fileName, isVehicle: isVehicle, currentRetry: currentRetry, completion: completion)
                    return
                }

                // Retry logic
                if self.shouldRetry(error, currentRetry: currentRetry) {
                    self.retryRequest(url: url, params: params, token: token, method: method, shouldDownload: shouldDownload, fileName: fileName, isVehicle: isVehicle, completion: completion, currentRetry: currentRetry + 1)
                } else {
                    completion(.failure(error))
                }
            }
        }
    }

    /// Retry logic for API requests
    private func retryRequest(url: String, params: Any?, token: String?, method: HTTPMethod, shouldDownload: Bool, fileName: String, isVehicle: Bool, completion: @escaping (Result<Any, GTErrors>) -> Void, currentRetry: Int) {
        let queue = url.contains("/tollrun") ? tollrunQueue : requestQueue
        queue.async { [weak self] in
            self?.performAPIRequest(url: url, params: params, token: token, method: method, shouldDownload: shouldDownload, fileName: fileName, isVehicle: isVehicle, completion: completion, currentRetry: currentRetry)
        }
    }

    /// Handle authorization failure and notify user
    private func handleAuthorizationFailure(url: String, params: Any?, method: HTTPMethod, shouldDownload: Bool, fileName: String, isVehicle: Bool, currentRetry: Int, completion: @escaping (Result<Any, GTErrors>) -> Void) {
        GTUserAuditManager.sharedInstance.validateAndStoreUserAudit(event: AuditEventCode.API_ERROR.rawValue, value: "API \(url) resulted in 401 Unauthorized")
        GTTokenManager.instance.refreshToken { [weak self] didRefreshToken in
            guard let self = self else { return }
            if didRefreshToken {
                // Retry the original request after token refresh.
                self.retryRequest(url: url, params: params, token: GTSession.shared.getToken(), method: method, shouldDownload: shouldDownload, fileName: fileName, isVehicle: isVehicle, completion: completion, currentRetry: currentRetry)
            } else {
                // Token refresh failed, notify the user.
                completion(.failure(.apiError(APIError(message: "Authorization failed. Please try again."))))
            }
        }
    }

    /// Determine if a request should be retried
    private func shouldRetry(_ error: GTErrors, currentRetry: Int) -> Bool {
        guard currentRetry < maxRetries else { return false }
        if case let .apiError(apiError) = error, let statusCode = apiError.statusCode {
            return ![400, 401, 500].contains(statusCode)
        }
        return true
    }

    /// Enqueue a request to the general request queue
    private func enqueueRequest(_ requestClosure: @escaping () -> Void) {
        requestQueue.async(execute: requestClosure)
    }

    // MARK: - Public API Request Methods
    
    public func performPOSTAction(url: String, params: Any?, token: String?, shouldDownload: Bool = false, fileName: String = "", isVehicle: Bool = false, completion: @escaping (Result<Any, GTErrors>) -> Void) {
        let queue = url.contains("/tollrun") ? tollrunQueue : requestQueue
        queue.async { [weak self] in
            self?.performAPIRequest(url: url, params: params, token: token, method: .post, shouldDownload: shouldDownload, fileName: fileName, isVehicle: isVehicle, completion: completion)
        }
    }

    public func performGETAction(url: String, params: Any?, token: String?, shouldDownload: Bool = false, completion: @escaping (Result<Any, GTErrors>) -> Void) {
        let queue = url.contains("/tollrun") ? tollrunQueue : requestQueue
        queue.async { [weak self] in
            self?.performAPIRequest(url: url, params: params, token: token, method: .get, isVehicle: false, completion: completion)
        }
    }

    public func performDELETEAction(url: String, params: Any?, token: String?, shouldDownload: Bool = false, completion: @escaping (Result<Any, GTErrors>) -> Void) {
        let queue = url.contains("/tollrun") ? tollrunQueue : requestQueue
        queue.async { [weak self] in
            self?.performAPIRequest(url: url, params: params, token: token, method: .delete, isVehicle: false, completion: completion)
        }
    }

    public func performPUTAction(url: String, params: Any?, token: String?, shouldDownload: Bool = false, completion: @escaping (Result<Any, GTErrors>) -> Void) {
        let queue = url.contains("/tollrun") ? tollrunQueue : requestQueue
        queue.async { [weak self] in
            self?.performAPIRequest(url: url, params: params, token: token, method: .put, isVehicle: false, completion: completion)
        }
    }
}
