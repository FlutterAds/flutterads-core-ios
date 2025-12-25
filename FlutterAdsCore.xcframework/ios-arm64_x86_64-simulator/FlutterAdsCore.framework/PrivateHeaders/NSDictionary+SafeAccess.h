#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (SafeAccess)

#pragma mark - String

/**
 * 安全获取 NSString
 * 如果 key 不存在或类型不匹配（非 String 或 Number），返回 nil
 */
- (nullable NSString *)safe_stringForKey:(id)key;

/**
 * 安全获取 NSString，提供默认值
 */
- (NSString *)safe_stringForKey:(id)key defaultValue:(NSString *)defaultValue;

#pragma mark - Number Value

/**
 * 安全获取 NSNumber
 */
- (nullable NSNumber *)safe_numberForKey:(id)key;

/**
 * 安全获取 int
 * 如果 key 不存在或不能转换为 int，返回 0
 */
- (int)safe_intForKey:(id)key;
- (int)safe_intForKey:(id)key defaultValue:(int)defaultValue;

/**
 * 安全获取 NSInteger
 */
- (NSInteger)safe_integerForKey:(id)key;
- (NSInteger)safe_integerForKey:(id)key defaultValue:(NSInteger)defaultValue;

/**
 * 安全获取 long long
 */
- (long long)safe_longLongForKey:(id)key;
- (long long)safe_longLongForKey:(id)key defaultValue:(long long)defaultValue;

/**
 * 安全获取 float
 */
- (float)safe_floatForKey:(id)key;
- (float)safe_floatForKey:(id)key defaultValue:(float)defaultValue;

/**
 * 安全获取 double
 */
- (double)safe_doubleForKey:(id)key;
- (double)safe_doubleForKey:(id)key defaultValue:(double)defaultValue;

/**
 * 安全获取 BOOL
 * 支持 NSNumber, NSString (@"true", @"YES", @"1")
 */
- (BOOL)safe_boolForKey:(id)key;
- (BOOL)safe_boolForKey:(id)key defaultValue:(BOOL)defaultValue;

#pragma mark - Collections

/**
 * 安全获取 NSDictionary
 */
- (nullable NSDictionary *)safe_dictionaryForKey:(id)key;

/**
 * 安全获取 NSArray
 */
- (nullable NSArray *)safe_arrayForKey:(id)key;

@end

NS_ASSUME_NONNULL_END
