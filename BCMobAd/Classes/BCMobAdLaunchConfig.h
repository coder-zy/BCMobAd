//
//  BCMobAdLaunchConfig.h
//  BCMobAdsSDK
//
//  Created by zhangyang on 2019/1/16.
//  Copyright © 2019 zhangyang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <AVFoundation/AVFoundation.h>

NS_ASSUME_NONNULL_BEGIN

/** 显示完成动画类型 */
typedef NS_ENUM(NSInteger , ShowCompleteAnimate) {
    /** 无动画 */
    ShowCompleteAnimateNone = 1,
    /** 普通淡入(default) */
    ShowCompleteAnimateFadein = 2,
    /** 放大淡入 */
    ShowCompleteAnimateLite = 3,
    /** 左右翻转(类似网易云音乐) */
    ShowCompleteAnimateFlipFromLeft = 4,
    /** 下上翻转 */
    ShowCompleteAnimateFlipFromBottom = 5,
    /** 向上翻页 */
    ShowCompleteAnimateCurlUp = 6,
};

/**
 *  跳转Button类型
 */
typedef NS_ENUM(NSInteger,SkipButtonType) {
    SkipButtonTypeNone      = 1,//无
    /** 方形 */
    SkipButtonTypeTime      = 2,//方形:倒计时
    SkipButtonTypeText      = 3,//方形:跳过
    SkipButtonTypeTimeText  = 4,//方形:倒计时+跳过 (default)
    /** 圆形 */
    SkipButtonTypeRoundTime = 5,//圆形:倒计时
    SkipButtonTypeRoundText = 6,//圆形:跳过
    SkipButtonTypeRoundProgressTime = 7,//圆形:进度圈+倒计时
    SkipButtonTypeRoundProgressText = 8,//圆形:进度圈+跳过
};
/**
 开屏广告配置，图片/视频
 */
@interface BCMobAdLaunchConfig : NSObject

#pragma mark 通用属性
/**
 广告显示时间（默认5，单位：秒）
 */
@property (nonatomic,assign)NSInteger skipTime;
/**
 跳过按钮可选样式
 */
@property(nonatomic,assign)SkipButtonType skipButtonType;

/** 显示完成后的动画(默认 ShowCompleteAnimateFadein) */
@property(nonatomic,assign)ShowCompleteAnimate showCompleteAnimate;

/** 显示完成后的动画时间(默认 0.8 , 单位:秒) */
@property(nonatomic,assign)CGFloat showCompleteAnimateTime;

/** 开屏广告的frame(默认 [UIScreen mainScreen].bounds)
 *  如非特殊需要，请不要设置
 */
@property (nonatomic,assign) CGRect adFrame;

/** 自定义跳过按钮(若定义此视图,将会自动替换跳过按钮) */
@property(nonatomic,strong) UIView *customSkipView;

/** 子视图(若定义此属性,这些视图将会被自动添加在广告视图上,frame相对于window) */
@property(nonatomic,copy,nullable) NSArray<UIView *> *subViews;

@end

#pragma mark - 图片开屏广告相关
@interface BCMobAdLaunchImageConfig : BCMobAdLaunchConfig

/** 图片广告缩放模式(default UIViewContentModeScaleToFill) */
@property(nonatomic,assign)UIViewContentMode imageContentMode;

/** 设置GIF动图是否只循环播放一次(YES:只播放一次,NO:循环播放,default NO,仅对动图设置有效) */
@property (nonatomic, assign) BOOL GIFImageCycleOnce;

+(BCMobAdLaunchImageConfig *)defaultConfig;

@end

#pragma mark - 视频开屏广告相关
@interface BCMobAdLaunchVideoConfig : BCMobAdLaunchConfig

/** 视频缩放模式(default AVLayerVideoGravityResizeAspectFill) */
@property (nonatomic, copy) AVLayerVideoGravity videoGravity;

/** 设置视频是否只循环播放一次(YES:只播放一次,NO循环播放,default NO) */
@property (nonatomic, assign) BOOL videoCycleOnce;

/** 是否关闭音频(default NO) */
@property (nonatomic, assign) BOOL muted;

+(BCMobAdLaunchVideoConfig *)defaultConfig;

@end

NS_ASSUME_NONNULL_END
