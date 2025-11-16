//
//  FlutterAdsCore.h
//  FlutterAdsCore
//
//  Created by Zero on 2025/11/12.
//

#import <Foundation/Foundation.h>
#import "FGMAdDefines.h"
#import "FGMAdEventDefines.h"
#import <FlutterAdsCore/FGMGroMore.h>


/// 广告核心类
@interface FlutterAdsCore : NSObject

/// 共享实例
+ (instancetype)sharedInstance;

/// 简单的测试方法 - 返回 Hello 消息
- (NSString *)sayHello;

/// 带名称的 Hello 方法
- (NSString *)sayHelloTo:(NSString *)name;

/// 获取库版本
+ (NSString *)libraryVersion;

// ViewId
extern NSString *const kGMAdBannerViewId;
extern NSString *const kGMAdFeedViewId;
extern NSString *const kGMAdDrawFeedViewId;
// 初始化
- (void) initAd:(id _Nullable)arguments callback:(FGMAdCallback _Nullable) callback;
// 预加载
- (void) preload:(id _Nullable)arguments;
// 开屏广告
- (void) showSplashAd:(id _Nullable)arguments;
// 插屏广告
- (void) showInterstitialAd:(id _Nullable)arguments;
// 激励视频广告
- (void) showRewardVideoAd:(id _Nullable)arguments;
// 加载信息流广告
- (void) loadFeedAd:(id _Nullable)arguments callback:(FGMAdCallback _Nullable) callback;
// 清除信息流广告
- (void) clearFeedAd:(id _Nullable)arguments;
// 运行测试助手
- (void) launchTestTools;
@end
