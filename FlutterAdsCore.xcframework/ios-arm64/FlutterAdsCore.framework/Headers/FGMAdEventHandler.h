//
//  FGMAdEventHandler.h
//  FlutterAdsCore
//
//  Created by Zero on 2025/11/14.
//

#import <Foundation/Foundation.h>
#import "FGMAdEvent.h"
#import "FGMAdErrorEvent.h"
#import "FGMADRewardEvent.h"
#import "FGMAdEcpmEvent.h"
#import "FGMAdDefines.h"

@interface FGMAdEventHandler : NSObject
// 回调方法
@property (strong,nonatomic,nonnull) FGMAdCallback callback;
/// 共享实例
+ (instancetype)sharedInstance;

// 设置回调方法
- (void) setEventCallback:(FGMAdCallback _Nonnull)callback;
// 发送广告事件
- (void) sendEvent:(FGMAdEvent*) event;
// 发送广告事件
- (void) sendEventAction:(NSString *) posId actioin:(NSString*) action;
// 发送错误广告事件
- (void) sendErrorEvent:(NSString *) posId error:(NSError*) error;
// 发送  Ecmp 事件
- (void) sendEcmpEvent:(NSString *) posId info:(BUMRitInfo*) info;
@end

