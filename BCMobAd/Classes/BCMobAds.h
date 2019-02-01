//
//  BCMobAd.h
//  BCMobAdsSDK
//
//  Created by zhangyang on 2019/1/28.
//  Copyright © 2019 zhangyang. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 广告SDK初始化类
 */
@interface BCMobAds : NSObject

/** 设置日志输出 */
+(void)setLogEnable:(BOOL)enable;

/** 初始化广告的应用ID及对应的Key */
+(void)configWithAppID:(NSString *)appId appKey:(NSString *)appKey;
@end

NS_ASSUME_NONNULL_END
