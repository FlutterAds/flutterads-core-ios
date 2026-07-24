#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

extern NSString *const kFlutterAdsLicenseTips;

@interface SimpleLicenseManager : NSObject

@property (class, nonatomic, readonly) NSString *tips;
@property (nonatomic, assign) BOOL isDebug;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly, strong) NSString *message;

+ (instancetype)sharedInstance;

- (void)requestValidation;
- (void)performValidation;
- (BOOL)isValid;
- (void)setDebug:(BOOL)debug;

@end

NS_ASSUME_NONNULL_END