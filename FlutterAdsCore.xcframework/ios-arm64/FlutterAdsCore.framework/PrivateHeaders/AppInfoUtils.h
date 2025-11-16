#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AppInfoUtils : NSObject

+ (NSString *)getBundleIdentifier;
+ (NSString *)getAppName;
+ (NSString *)getAppVersion;
+ (NSString *)getBuildNumber;

@end

NS_ASSUME_NONNULL_END