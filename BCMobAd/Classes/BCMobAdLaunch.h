//
//  BCMobAdLaunch.h
//  BCMobAdsSDK
//
//  Created by zhangyang on 2018/12/29.
//  Copyright © 2018 zhangyang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BCMobAdLaunchConfig.h"

NS_ASSUME_NONNULL_BEGIN

#pragma mark - 开屏广告回调
@class BCMobAdLaunch;
/**
 开屏广告回调
 */
@protocol BCMobAdLaunchDelegate <NSObject>

/** 启动来源 */
typedef NS_ENUM(NSInteger,LaunchSourceType) {
    LaunchSourceTypeImage = 1,//default
    LaunchSourceTypeScreen = 2,
};

/**
 广告显示成功
 @param mobAdLaunch BCMobAdLaunch
 */
-(void)bcmobadLaunchShowSuccess:(BCMobAdLaunch *)mobAdLaunch;
/**
 广告显示失败
 @param mobAdLaunch BCMobAdLaunch
 */
-(void)bcmobadLaunchShowFail:(BCMobAdLaunch *)mobAdLaunch withError:(NSString *)err;
@end

/**
 开屏广告接口主入口类
 */
@interface BCMobAdLaunch : NSObject

@property(nonatomic,weak) id<BCMobAdLaunchDelegate> adLaunchDelegate;

///** 申请的APPID */
//@property(nonatomic,strong)NSString *appID;

/** 开屏广告位ID，不设置可能无法返回广告 */
@property(nonatomic,strong)NSString *adUnitID;

///** 申请的APPKey */
//@property(nonatomic,strong)NSString *appKey;

/** 图片类型广告显示详细配置 (不设置时使用默认方案)
 半屏广告请设置广告区域的frame（建议只设置高度）
 */
@property(nonatomic,strong) BCMobAdLaunchImageConfig *imageAdConfig;

/** 视频类型广告显示详细配置  (不设置时使用默认方案) */
@property(nonatomic,strong) BCMobAdLaunchVideoConfig *videoAdConfig;

@property(nonatomic,assign) LaunchSourceType launchSourceType;

/**
 等待广告数据时间 默认3秒
 */
@property(nonatomic,assign) NSInteger waitDataTime;

/** 获取广告并显示 */
-(void) loadAndDisplayLaunchAd;

/**
 手动移除广告
 @param animated 是否需要动画
 */
+(void)skipWithAnimated:(BOOL)animated;
@end

NS_ASSUME_NONNULL_END
