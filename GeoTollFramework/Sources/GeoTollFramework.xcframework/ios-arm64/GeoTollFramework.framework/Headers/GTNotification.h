//
//  GTNotification.h
//  GeoToll
//
//  Created by Garrett Genova on 1/21/21.
//  Copyright © 2021 Garrett Genova. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "GTConstants.h"

NS_ASSUME_NONNULL_BEGIN

@interface GTNotification : NSObject

@property (nonatomic) NSString* name;
@property (nonatomic) NSString* _Nullable status;
@property (nonatomic) NSString* _Nullable message;
@property (nonatomic) NSInteger statusCode;
@property (nonatomic, readonly) NSInteger tollRunId;
@property (nonatomic) NSDictionary* _Nullable resultsData;
@property (nonatomic, readonly) NSString* sdkVersion;

- (id)initWithName:(NSString *)name status:(NSString *)status message:(NSString *)message statusCode:(NSInteger)statusCode resultsData:(_Nullable id)resultsData;

@end

NS_ASSUME_NONNULL_END
