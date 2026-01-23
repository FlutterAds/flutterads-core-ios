//
//  FGMAdFeedView.h
//  flutter_gromore_ads
//
//  Created by Zero on 2023/10/7.
//

#import "FGMBasePage.h"

// 信息流view
@interface FCGMAdFeedView : FGMBasePage<BUNativeAdDelegate>
@property int64_t viewId;
- (nonnull instancetype) initWithFrame:(CGRect)frame
                        viewIdentifier:(int64_t)viewId
                             arguments:(id _Nullable)args;
- (nonnull UIView*) view;
- (void) disposeAd;
@end
