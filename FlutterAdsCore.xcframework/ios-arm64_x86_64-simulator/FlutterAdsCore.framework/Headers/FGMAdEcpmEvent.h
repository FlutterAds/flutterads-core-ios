//
//  FGMAdEcpmEvent.h
//  flutter_gromore_ads
//
//  Created by zero on 2023/10/24.
//

#import "FGMAdEvent.h"

// 获取 Ecmp 事件
@interface FGMAdEcpmEvent : FGMAdEvent
// Ecmp 信息
@property (strong,nonatomic) BUMRitInfo *ecmpInfo;

// 构造广告激励事件
-(id) initWithAdId:(NSString *)adId ecmpInfo:(BUMRitInfo *) ecmpInfo;
@end
