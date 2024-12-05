//
//  GeoTollSDK.h
//  GeoToll
//
//  Created by Garrett Genova on 1/20/21.
//  Copyright © 2021 Garrett Genova. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import "GTSession.h"

@import Connectivity;
@class GTGlobalStateLogging;

@class GTApiRequest;

@interface GeoTollSDK : NSObject
/**
 *  'GeoTollSDK' is the entry point to the GeoToll SDK.
 *
 *  @return GeoTollSDK instance (singleton).
 */
+ (instancetype)instance;
- (void)initWithSession:(GTSession *)session withHandler:(void (^)(BOOL))handler;

- (void)checkAudioSession;
/**
 * Start Location Update
 */
- (void)start;

/**
 * Stop Location Update
 */
- (void)stop;

- (GTApiRequest *) getApiRequest;

- (void)share;
- (void)intializeManagers;
- (void)removeRecordsFromLocalDatabase;

- (BOOL)hasLocationPermissions;
- (BOOL)hasActiveTollRun;
- (NSString *)getSDKVersion;
- (NSString *)getApi2Url;

@end
