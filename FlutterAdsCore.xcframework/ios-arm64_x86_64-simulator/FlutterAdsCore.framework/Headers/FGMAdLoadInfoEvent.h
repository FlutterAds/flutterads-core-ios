//
//  FGMAdLoadInfoEvent.h
//  flutter_gromore_ads
//

#import <Foundation/Foundation.h>
#import "FGMAdEvent.h"
#import <BUAdSDK/BUAdSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface FGMAdLoadInfoEvent : FGMAdEvent
- (instancetype)initWithAdId:(NSString *)adId loadInfoList:(NSArray<BUMAdLoadInfo *> *)loadInfoList;
@end

NS_ASSUME_NONNULL_END
