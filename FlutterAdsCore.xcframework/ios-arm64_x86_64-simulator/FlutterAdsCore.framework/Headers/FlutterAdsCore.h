//
//  FlutterAdsCore.h
//  FlutterAdsCore
//
//  Created by Zero on 2025/11/12.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface FlutterAdsCore : NSObject

/// 共享实例
+ (instancetype)sharedInstance;

/// 简单的测试方法 - 返回 Hello 消息
- (NSString *)sayHello;

/// 带名称的 Hello 方法
- (NSString *)sayHelloTo:(NSString *)name;

/// 获取库版本
+ (NSString *)libraryVersion;

@end

NS_ASSUME_NONNULL_END
