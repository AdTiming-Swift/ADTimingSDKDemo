//
//  AdTimingAds.h
//  AdTiming SDK
//
//  Copyright 2017 AdTiming Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^initCompletionHandler)(NSError *error);

NS_ASSUME_NONNULL_BEGIN

@interface AdTimingAds : NSObject

/// init SDK with the APP_KEY.
+ (void)initWithAppKey:(NSString*)appKey;
/// init SDK with the APP_KEY, and receive result handler.
+ (void)initWithAppKey:(NSString*)appKey completionHandler:(initCompletionHandler)completionHandler;
/// current SDK version
+ (NSString *)SDKVersion;
/// log enable,default is YES
+ (void)setLogEnable:(BOOL)logEnable;
//Check that `AdTiming` has been initialized
+ (BOOL)isInitialized;

@end

NS_ASSUME_NONNULL_END
