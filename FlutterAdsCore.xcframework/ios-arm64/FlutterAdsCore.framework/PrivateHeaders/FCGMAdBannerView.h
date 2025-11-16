//
//  FGMAdBannerView.h
//  flutter_gromore_ads
//
//  Created by Zero on 2023/1/12.
//

#import "FGMBasePage.h"

@interface FCGMAdBannerView : FGMBasePage
- (nonnull instancetype)initWithFrame:(CGRect)frame
                       viewIdentifier:(int64_t)viewId
                            arguments:(id _Nullable)args;

- (nonnull UIView*)view;
@end
