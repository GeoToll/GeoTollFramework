//
//  GFProperties.h
//  GeoToll
//
//  Created by Garrett Genova on 8/28/18.
//  Copyright © 2018 Garrett Genova. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GFGantry.h"

@interface GFProperties : NSObject

@property (nonatomic) NSString *parent;
@property (nonatomic) NSString *name;
@property (assign) NSInteger layer;
@property (nonatomic) NSMutableArray *gantries;

- (id)initWithDictionary:(NSDictionary *)dictionary;

@end
