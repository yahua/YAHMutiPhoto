//
//  YHMultiPhotoViewController.h
//  YHMultiPhotoViewController
//
//  Created by wangshiwen on 15/9/14.
//  Copyright (c) 2015年 yahua. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YAHMutiZoomPhoto.h"


@interface YAHMultiPhotoViewController : UIViewController

@property (nonatomic, copy) void(^dismissBlock)(YAHMultiPhotoViewController *multiCtr);
@property (nonatomic, assign) BOOL saveToAlbum; //保存相册按钮，默认关闭

/**
 *  无动画的弹出查看大图界面
 *
 *  @param photos      大图数据（ZoomPhoto）
 *  @param thumbPhotos 小图数据（ZoomPhoto）
 *  @param index       显示第几张图 第一张为0
 */
- (id)initWithImage:(NSArray *)photos thumbImage:(NSArray *)thumbPhotos selectIndex:(NSInteger)index;

/**
 *  有动画的弹出查看大图界面
 *
 *  @param photos      大图数据（ZoomPhoto）
 *  @param thumbPhotos 小图数据（ZoomPhoto）
 *  @param frames      小图的初始位置
 *  @param index       显示第几张图 第一张为0
 */
- (id)initWithImage:(NSArray *)photos thumbImage:(NSArray *)thumbPhotos originFrame:(NSArray *)frames selectIndex:(NSInteger)index;

/** 手动关闭 */
- (void)onclose;

@end
