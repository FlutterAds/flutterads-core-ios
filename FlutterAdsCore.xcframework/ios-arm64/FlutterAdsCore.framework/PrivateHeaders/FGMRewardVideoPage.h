//
//  FGMRewardVideoPage.h
//  flutter_gromore_ads
//
//  Created by Zero on 2023/10/7.
//

#import "FGMBasePage.h"
// 激励视频
@interface FGMRewardVideoPage : FGMBasePage<BUNativeExpressRewardedVideoAdDelegate>
@property (strong,nonatomic) BUNativeExpressRewardedVideoAd *ad;
// 服务端验证的自定义信息
@property (copy,nonatomic) NSString *customData;
// 服务端验证的用户信息
@property (copy,nonatomic) NSString *userId;
@end
