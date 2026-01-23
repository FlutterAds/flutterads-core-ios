//
//  FeedAdLoad.h
//  flutter_pangle_ads
//
//  Created by zero on 2021/11/29.
//

#import <Foundation/Foundation.h>
#import "FGMBasePage.h"

@interface FGMFeedAdLoad : FGMBasePage<BUNativeAdsManagerDelegate>
@property (strong,nonatomic,nonnull) FGMAdCallback callback;
@property (strong,nonatomic,nullable) BUNativeAdsManager *adManager;
@property (nonatomic) BOOL isDraw;

// 加载信息流广告列表
-(void) loadFeedAdList:(id _Nullable) arguments callback:(FGMAdCallback _Nullable) callback;
-(void) destory;
@end
