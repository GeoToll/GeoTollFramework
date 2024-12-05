//
//  GTToken.h
//  GeoToll
//
//  Created by Garrett Genova on 1/21/21.
//  Copyright © 2021 Garrett Genova. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GTSession : NSObject

NS_ASSUME_NONNULL_BEGIN
@property (class, readonly, strong) GTSession * session NS_SWIFT_NAME(shared);
NS_ASSUME_NONNULL_END
@property (nonatomic) BOOL isDebugging;

+ (instancetype _Nullable )session;

#pragma mark SDK info

- (void)setSdkStatus:(BOOL)sdkStatus;
- (BOOL)getsdkStatus;

- (void)setIntialProccessStatus:(BOOL)status;
- (BOOL)getInitialProcessStatus;

#pragma mark Token

- (void)setToken:(NSString *_Nullable)token;
- (NSString *_Nullable)getToken;

- (void)setRefToken:(NSString *_Nullable)refToken;
- (NSString *_Nullable)getRefToken;

- (void)setTokenExpiration:(NSDate *_Nullable)tokenExpiration;
- (NSDate *_Nullable)getTokenExpiration;

- (void)setRefTokenExpiration:(NSDate *_Nullable)tokenExpiration;
- (NSDate *_Nullable)getRefTokenExpiration;

- (void)setTokenRefreshDate:(NSDate *_Nullable)tokenRefreshDate;
- (NSDate *_Nullable)getTokenRefreshDate;

- (void)updateRefTokenExpiration:(NSString *_Nullable)token;

- (void)updateTokenExpiration:(NSString *_Nullable)token;

#pragma mark User info

- (void)setDeviceId:(NSString *_Nullable)deviceId;
- (NSString *_Nullable)getDeviceId;

- (void)setUserId:(NSInteger)userId;
- (NSInteger)getUserId;

- (void)setUserEmail:(NSString* _Nullable)userEmail;
- (NSString* _Nullable)getuserEmail;

- (void)setUserFName:(NSString* _Nullable)userFName;
- (NSString* _Nullable)getuserFName;

- (void)setUserLName:(NSString* _Nullable)userLName;
- (NSString* _Nullable)getuserLName;

- (void)setUserPhone:(NSString* _Nullable)userPhone;
- (NSString* _Nullable)getuserPhone;

- (void)setIsSubuser:(BOOL)isSubUser;
- (BOOL)getIsSubuser;

- (void)setOldPassword:(NSString* _Nullable)password;
- (NSString* _Nullable)getOldPassword;

- (void)setRequirePaymentSetup:(BOOL)requirePaymentRequire;
- (BOOL)getRequirePaymentSetup;

- (void)setRequirePaymentSetupDescription:(NSString* _Nullable)description;
- (NSString* _Nullable)getRequirePaymentSetupDescription;

#pragma mark App Info

- (void)setAppVersion:(NSString* _Nullable)appVersion;
- (NSString* _Nullable)getAppVersion;

- (void)setLocationPermissionRequestStatus:(BOOL)status;
- (BOOL)getLocationPermissionRequestStatus;

- (void)setLocationPermission:(NSString* _Nullable)status;
- (NSString* _Nullable)getLocationPermission;

- (void)setPreviousLocationPermission:(NSString* _Nullable)status;
- (NSString* _Nullable)getPreviousLocationPermission;

- (void)setBluetoothPermissionRequestStatus:(BOOL)status;
- (BOOL)getBluetoothPermissionRequestStatus;

- (void)setBluetoothManagerState:(NSString* _Nullable)state;
- (NSString* _Nullable)getBluetoothManagerState;

- (void)setPreviousBluetoothManagerState:(NSString* _Nullable)state;
- (NSString* _Nullable)getPreviousBluetoothManagerState;

- (void)setCameraPermissionRequestStatus:(BOOL)status;
- (BOOL)getCameraPermissionRequestStatus;

- (void)setNotificationPermissionRequestStatus:(BOOL)status;
- (BOOL)getNotificationPermissionRequestStatus;

- (void)setPreviousNotificationManagerState:(NSString* _Nullable)state;
- (NSString* _Nullable)getPreviousNotificationsManagerState;

- (void)setDebugSequence:(double)sequence;
- (double)getDebugSequence;

- (void)setIsLoggedIn:(BOOL)loggedIn;
- (BOOL)getIsLoggedIn;

- (void)setIsTourShown:(BOOL)isShown;
- (BOOL)getIsTourShown;

#pragma mark Device Info

- (void)setPreviousPowerMode:(BOOL)mode;
- (BOOL)getPreviousPowerMode;

- (void)setIsInternetAvailable:(BOOL)isAvailable;
- (BOOL)getIsInternetAvailable;

- (void)setNetworkStatus:(NSInteger)status;
- (NSInteger)getNetworkStatus;

- (void)setLastBatteryLevel:(NSInteger)level;
- (NSInteger)getLastBatteryLevel;

- (void)setAirplaneModeOn:(BOOL)isOn;
- (BOOL)getAirplaneModeOn;

- (void)setFCMToken:(NSString* _Nullable)token;
- (NSString* _Nullable)getFCMToken;

#pragma mark User settings

- (void)setLogLevel:(NSInteger)logLevel;
- (NSInteger)getLogLevel;

- (void)setIsDebugging:(BOOL)debug;
- (BOOL)getIsDebugging;

- (void)setNotificationEnabled:(BOOL)enabled;
- (BOOL)getNotificationEnabled;

- (void)setVerificationSettings:(NSDictionary *_Nullable)gtEmailVerified;
- (NSDictionary *_Nullable)getVerificationSettings;

- (void)setRUCEnabled:(BOOL)rucEnabled;
- (BOOL)getRUCEnabled;

- (void)setETollEnabled:(BOOL)eTollEnabled;
- (BOOL)getETollEnabled;

- (void)setETollRentalEnabled:(BOOL)eTollRentalEnabled;
- (BOOL)getETollRentalEnabled;

- (void)setAllowDirectRegistration:(BOOL)allowDirectRegistration;
- (BOOL)getAllowDirectRegistration;

- (void)setAllowAddVehicle:(BOOL)allowAddVehicle;
- (BOOL)getAllowAddVehicle;

- (void)setPasswordChangeRequired:(BOOL)changeRequired;
- (BOOL)getPasswordChangeRequired;

- (void)setLocationPermissionRequired:(BOOL)isRequired;
- (BOOL)getLocationPermissionRequired;

- (void)setBluetoothPermissionRequired:(BOOL)isRequired;
- (BOOL)getBluetoothPermissionRequired;

- (void)setCameraPermissionRequired:(BOOL)isRequired;
- (BOOL)getCameraPermissionRequired;

- (void)setNotificationPermissionRequired:(BOOL)isRequired;
- (BOOL)getNotificationPermissionRequired;

- (void)setNonBLETolling:(BOOL)enabled;
- (BOOL)getNonBLETolling;

- (void)setVehiclesSpeed:(NSMutableArray *_Nullable)vehiclesSpeed;
- (NSMutableArray *_Nullable)getVehiclesSpeed;

- (void)setMinVehicleSpeedEToll:(NSInteger)speed;
- (NSInteger)getMinVehicleSpeedEToll;

- (void)setUserTimeZone:(NSString *_Nullable)timeZone;
- (NSString *_Nullable)getUserTimeZone;

- (NSString *_Nullable)getNextUnverifiedField;

#pragma mark Vehicle info

- (void)setVehicles:(NSMutableArray* _Nullable)vehicles;
- (NSMutableArray* _Nullable)getVehicles;

- (void)setTollrunVehicleBDAddress:(NSString *_Nullable)bdAddress;
- (NSString *_Nullable)getTollrunVehicleBDAddress;

- (void)setTollrunVehicleFriendlyName:(NSString *_Nullable)name;
- (NSString *_Nullable)getTollrunVehicleFriendlyName;

- (void)setVehicleId:(NSInteger)vehicleId;
- (NSInteger)getVehicleId;

- (void)setVehicleModel:(NSString* _Nullable)vehicleModel;
- (NSString* _Nullable)getVehicleModel;

- (void)setVehicleMake:(NSString* _Nullable)vehicleMake;
- (NSString* _Nullable)getVehicleMake;

- (void)setVehicleVin:(NSString* _Nullable)vehicleVin;
- (NSString* _Nullable)getVehicleVin;

- (void)setVehicleYear:(NSString* _Nullable)vehicleYear;
- (NSString* _Nullable)getVehicleYear;

#pragma mark - Endpoints

- (void)setApi2Url:(NSString *_Nullable)api2Url;
- (NSString *_Nullable)getApi2Url;

- (void)setPrivacyPolicyUrl:(NSString *_Nullable)url;
- (NSString *_Nullable)getPrivacyPolicyUrl;

- (void)setTermsUrl:(NSString *_Nullable)url;
- (NSString *_Nullable)getTermsUrl;

- (void)setHelpUrl:(NSString *_Nullable)helpUrl;
- (NSString *_Nullable)getHelpUrl;

- (void)setContactUsUrl:(NSString *_Nullable)contactUsUrl;
- (NSString *_Nullable)getContactUsUrl;

- (void)setParticipantAgreementURL:(NSString *_Nullable)agreementUrl;
- (NSString *_Nullable)getParticipantAgreementURL;

#pragma mark - Toll run info

- (BOOL)hasTollRun;

- (BOOL)hasTempTollRun;

- (BOOL)hasPrevTollRun;

- (void)setTollRunId:(NSInteger)tollRunId;
- (NSInteger)getTollRunId;

- (void)setLastTollRunId:(NSInteger)tollRunId;
- (NSInteger)getLastTollRunId;

- (void)setTempTollRunId:(NSInteger)tempTollRunId;
- (NSInteger)getTempTollRunId;

- (void)setTollRunVehicleId:(NSInteger)tollRunVehicleId;
- (NSInteger)getTollRunVehicleId;

#pragma mark - GeoFence

- (void)setGeoJson:(NSString *_Nullable)geoJson;
- (NSString *_Nullable)getGeoJson;

- (void)setGeoJsonVersion:(NSInteger)geoJsonVersion;
- (NSInteger)getGeoJsonVersion;

- (void)setPreviousGeoFence:(NSString *_Nullable)geoFence;
- (NSString *_Nullable)getPreviousGeoFence;

#pragma mark - Bluetooth / Audio Session

- (void)setConnectedBluetooth:(NSString* _Nullable)connectedBluetooth;
- (NSString* _Nullable)getConnectedBluetooth;

- (void)setAudioOutputs:(NSMutableArray*_Nullable)dictionary;
- (NSMutableArray* _Nullable)getAudioOutputs;

- (void)setAudioInputs:(NSMutableArray*_Nullable)dictionary;
- (NSMutableArray* _Nullable)getAudioInputs;

- (void)setBDAddress:(NSString*_Nullable)BDAddress;
- (NSString*_Nullable)getBDAddress;

- (void)setAudioDeviceName:(NSString*_Nullable)name;
- (NSString*_Nullable)getAudioDeviceName;

- (void)setAudioDeviceBDAddress:(NSString*_Nullable)bdAddress;
- (NSString*_Nullable)getAudioDeviceBDAddress;

- (void)setTollRunAudioRouteChangeSpeedMPH:(NSInteger)speed;
- (NSInteger)getTollRunAudioRouteChangeSpeedMPH;

- (void)setVehicleBDAddressArray:(NSMutableArray*_Nullable)array;
- (NSMutableArray*_Nullable)getVehicleBDAddressArray;

- (void)setPreviousRouteName:(NSString*_Nullable)name;
- (NSString*_Nullable)getPreviousRouteName;

- (void)setPreviousVehicleBDAddress:(NSString*_Nullable)bdAddress;
- (NSString*_Nullable)getPreviousVehicleBDAddress;

#pragma mark - GPS

- (void)setLastGpsSequence:(NSInteger)sequence;
- (NSInteger)getLastGpsSequence;

- (void)setLastGpsLog:(NSDictionary *_Nullable)gpsLog;
- (NSDictionary *_Nullable)getLastGepLog;

- (void)setGPSDistanceFilterMeters:(NSInteger)meterValue;
- (NSInteger)getGPSDistanceFilterMeters;

- (void)setBatchSubmissionIntervalMin:(NSInteger)timeValue;
- (NSInteger)getBatchSubmissionIntervalMin;

- (void)setMinGPSLogAccuracy:(NSInteger)accuracy;
- (NSInteger)getMinGPSLogAccuracy;

- (void)setLastGPSDate:(NSDate *_Nullable)date;
- (NSDate *_Nullable)getLastGPSDate;

- (void)setPreviousSpeed:(NSString*_Nullable)speed;
- (NSString*_Nullable)getPreviousSpeed;

#pragma mark - Location Manager

- (void)setLocationAlwaysAllowed:(BOOL)alwaysAllowed;
- (BOOL)getLocationAlwaysAllowed;

- (void)setLocationWhileInUse:(BOOL)whileInUse;
- (BOOL)getLocationWhileInUse;

#pragma mark - User Notifications

- (void)setUserNotifications:(NSMutableArray*_Nullable)messages;
- (NSMutableArray* _Nullable)getUserNotifications;

- (void)setUserNotificationCount:(NSInteger)count;
- (NSInteger)getUserNotificationCount;

#pragma mark - Parse and Store

- (void) parseData: (NSDictionary *_Nullable) dictionary;
- (void) parseUser: (NSDictionary *_Nullable) dictionary;
- (void) parseTimeZone: (NSDictionary *_Nullable) dictionary;
- (void) parseSettings: (NSDictionary *_Nullable) dictionary;
- (void) parseDevicePermissions: (NSDictionary *_Nullable) dictionary;
- (void) parseAgencyProducts: (NSDictionary *_Nullable) dictionary;
- (void) parseMessages: (NSDictionary *_Nullable) messages;
- (void) parseConfig: (NSDictionary *_Nullable) dictionary;
- (void) parseAppNotifications: (NSDictionary *_Nullable) dictionary;

#pragma mark - Vehicles handler

- (void) updateVehiclesArray:(NSDictionary *_Nullable) vehicle;
- (void) createVehicleBDArray:(NSMutableArray *_Nullable) vehicles;

#pragma mark - Session Handler

- (void)clearSession;

@end
