//
//  UIWindow+MSVisibleTouches.h
//  MSitLab
//
//  Created by mr.scorpion on 16/4/16.
//  Copyright © 2016年 mr.scorpion. All rights reserved.
//

#import <UIKit/UIKit.h>

/// 可视化触摸
@interface UIWindow (MSVisibleTouches)
@property(nonatomic, assign) BOOL ms_touchesVisible;               //!< 触摸是否可见
@end
