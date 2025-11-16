//
//  FGMBasePage.h
//  flutter_gromore_ads
//
//  Created by zero on 2021/12/11.
//

#import <Foundation/Foundation.h>
#import <FlutterAdsCore/FGMGroMore.h>
#import <FlutterAdsCore/FGMAdErrorEvent.h>
#import <FlutterAdsCore/FGMADRewardEvent.h>
#import <FlutterAdsCore/FGMAdEcpmEvent.h>
#import <FlutterAdsCore/FGMAdDefines.h>
#import <FlutterAdsCore/FGMAdEventHandler.h>
// 基础广告页面
@interface FGMBasePage : NSObject
// 广告位 id
@property (strong,nonatomic) NSString *posId;
// 窗口
@property (strong,nonatomic) UIWindow *mainWin;
// 跟控制器
@property (strong,nonatomic) UIViewController *rootController;
// 事件回调
@property (nonatomic, copy) FGMAdEventCallback eventCallback;
//显示广告
- (void) showAd:(id _Nullable) arguments;
// 加载广告
- (void) loadAd:(id _Nullable) arguments;
// 发送广告事件
- (void) sendEvent:(FGMAdEvent*) event;
// 发送广告事件
- (void) sendEventAction:(NSString*) action;
// 发送错误广告事件
- (void) sendErrorEvent:(NSError*) error;
// 发送  Ecmp 事件
- (void) sendEcmpEvent:(BUMRitInfo*) info;

// 设置事件回调
- (void) sendEventCallback:(NSString *)event arguments:(NSDictionary *) arguments;
@end
