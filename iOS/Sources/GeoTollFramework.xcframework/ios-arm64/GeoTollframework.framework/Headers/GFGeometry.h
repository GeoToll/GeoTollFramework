//
//  GFGeometry.h
//  GeoToll
//
//  Created by Garrett Genova on 8/28/18.
//  Copyright © 2018 Garrett Genova. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GFCoordinates.h"
#import <MapKit/MapKit.h>

@interface GFGeometry : NSObject

@property (nonatomic) NSString *type;
@property (nonatomic) NSMutableArray *coordinates;
@property (nonatomic) MKPolygon *polygon;

- (id)initWithDictionary:(NSDictionary *)dictionary;

@end
