//
//  GTGeoJson.h
//  GeoToll
//
//  Created by Garrett Genova on 8/28/18.
//  Copyright © 2018 Garrett Genova. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GTGeoFence.h"
#import "GeoTollSDK.h"

@interface GTGeoJson : NSObject

+ (GTGeoJson *) sharedObj;

@property (nonatomic) NSString *type;
@property (nonatomic, strong) NSMutableArray *geofences;

- (void)updateGeoJson:(NSString *)geoJsonString version:(NSInteger)version;
- (void)buildLayeredGeofences;

@end
