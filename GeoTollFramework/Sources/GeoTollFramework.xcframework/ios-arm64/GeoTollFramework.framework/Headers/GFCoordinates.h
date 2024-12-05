//
//  GFCoordinates.h
//  GeoToll
//
//  Created by Garrett Genova on 8/29/18.
//  Copyright © 2018 Garrett Genova. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GFCoordinates : NSObject

@property (nonatomic) NSNumber *latitude;
@property (nonatomic) NSNumber *longitude;

- (id)initWithCoordinates:(NSArray *)coordinates;

@end
