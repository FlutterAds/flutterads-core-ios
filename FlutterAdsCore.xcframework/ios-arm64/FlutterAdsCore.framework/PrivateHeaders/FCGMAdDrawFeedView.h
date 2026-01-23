//
//  FGMAdDrawFeedView.h
//  flutter_gromore_ads
//
//  Created by Zero on 2025/6/24.
//

#import "FGMBasePage.h"

// Draw 信息流view
@interface FCGMAdDrawFeedView : FGMBasePage<BUNativeAdDelegate>
@property int64_t viewId;
- (nonnull instancetype) initWithFrame:(CGRect)frame
                        viewIdentifier:(int64_t)viewId
                             arguments:(id _Nullable)args;
- (nonnull UIView*) view;
- (void) disposeAd;
@end
