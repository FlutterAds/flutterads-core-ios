//
//  FeedAdManager.h
//  flutter_pangle_ads
//
//  Created by zero on 2021/11/29.
//

#import <Foundation/Foundation.h>
#import "FGMGroMore.h"

@interface FGMFeedAdManager : NSObject
+ (instancetype) share;
// 加入到缓存中
- (void) putAd:(NSNumber*) key value:(BUNativeAd*) value;
// 从缓存中获取
- (BUNativeAd*) getAd:(NSNumber*) key;
// 从缓存中删除
- (void) removeAd:(NSNumber*) key;

@end
