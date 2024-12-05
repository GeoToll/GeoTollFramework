//
//  GFGantry.h
//  GeoTollFramework
//
//  Created by Redpen on 10/05/22.
//  Copyright © 2022 Garrett Genova. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GFCoordinates.h"
#import "GFGeometry.h"
#import <MapKit/MapKit.h>

@interface GFGantry : NSObject

@property (nonatomic) NSString *name;
@property (assign) NSInteger radius;
@property (nonatomic) NSMutableArray *coords;
@property (nonatomic) GFGeometry *geometry;

- (id)initWithDictionary:(NSDictionary *)dictionary;

@end
