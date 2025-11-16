//
//  FGMSplashPage.h
//  flutter_gromore_ads
//
//  Created by zero on 2021/12/11.
//

#import <Foundation/Foundation.h>
#import "FGMBasePage.h"

// 开屏广告
@interface FGMSplashPage :FGMBasePage
// 开屏
@property (strong,nonatomic) BUSplashAd *ad;
@property (retain,nonatomic) UIView *bottomView;
@property (assign,nonatomic ) BOOL fullScreenAd;
// 广告是否展示中
@property (assign,nonatomic ) BOOL isDisplay;
// 是否仅预加载,不展示
@property (assign,nonatomic ) BOOL preload;
// 预加载完成
@property (assign,nonatomic ) BOOL isLoaded;
// 显示开屏页面
- (void) showSplashPage;
// 销毁广告并重置设置
- (void) destoryPage;
@end
