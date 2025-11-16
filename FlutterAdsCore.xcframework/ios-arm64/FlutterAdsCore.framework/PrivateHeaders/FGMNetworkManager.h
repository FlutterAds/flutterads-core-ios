#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void (^FGMNetworkCompletion)(NSDictionary * _Nullable response, NSError * _Nullable error);

@interface FGMNetworkManager : NSObject

+ (instancetype)sharedManager;

- (void)POST:(NSString *)URLString
  parameters:(NSDictionary *)parameters
  completion:(FGMNetworkCompletion)completion;

- (void)POST:(NSString *)URLString
  parameters:(NSDictionary *)parameters
     timeout:(NSTimeInterval)timeout
  completion:(FGMNetworkCompletion)completion;

@end

NS_ASSUME_NONNULL_END