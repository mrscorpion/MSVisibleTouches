//
//  NSObject+MSMethodSwizzling.h
//  MSitLab
//
//  Created by mr.scorpion on 16/3/22.
//  Copyright © 2016年 mr.scorpion. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>

@interface NSObject (MSMethodSwizzling)

/// 交换实例方法
+ (BOOL)ms_swizzleInstanceMethod:(SEL)originalSelector with:(SEL)newSelector;

/// 交换类方法
+ (BOOL)ms_swizzleClassMethod:(SEL)originalSelector with:(SEL)newSelector;
@end
