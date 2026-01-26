//
//  FlutterAdsPrivacyProvider.h
//  FlutterAdsCore
//
//  Created by Zero on 2025/11/12.
//

#import <Foundation/Foundation.h>
#import <BUAdSDK/BUAdSDK.h>

@interface FlutterAdsPrivacyProvider : NSObject <BUAdSDKPrivacyProvider>

/// 自定义经度
@property (nonatomic, assign) double longitude;
/// 自定义纬度
@property (nonatomic, assign) double latitude;
/// 是否允许使用地理位置
@property (nonatomic, assign) BOOL canUseLocation;

@end
