//
//  FGMAdDefines.h
//  Pods
//
//  Created by Zero on 2025/11/15.
//
#import <Foundation/Foundation.h>

// 定义通用的广告回调类型
typedef void (^FGMAdCallback)(id _Nullable callback);
// 事件回调 - 专门处理广告事件
typedef void (^FGMAdEventCallback)(NSString *event, NSDictionary * arguments);
