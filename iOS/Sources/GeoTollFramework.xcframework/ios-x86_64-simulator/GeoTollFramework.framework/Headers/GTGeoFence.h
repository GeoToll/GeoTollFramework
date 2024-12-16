//
//  GeoFence.h
//  GeoToll
//
//  Created by Garrett Genova on 8/28/18.
//  Copyright © 2018 Garrett Genova. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GFGeometry.h"
#import "GFProperties.h"

@interface GTGeoFence : NSObject

@property (nonatomic) NSString *type;
@property (nonatomic) NSString *parent;
@property (nonatomic) NSString *name;
@property (assign) NSInteger layer;
@property (nonatomic) GFProperties *properties;
@property (nonatomic) GFGeometry *geometry;
@property (nonatomic) NSMutableArray *childGeoFences;

- (id)initWithDictionary:(NSDictionary *)dictionary;

@end
