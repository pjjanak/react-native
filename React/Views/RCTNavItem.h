/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <UIKit/UIKit.h>

@interface RCTNavItem : UIView

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *rightButtonTitle;
@property (nonatomic, copy) NSString *backButtonTitle;
@property (nonatomic, assign) BOOL navigationBarHidden;
@property (nonatomic, copy) UIColor *tintColor;
@property (nonatomic, copy) UIColor *barTintColor;
@property (nonatomic, copy) UIColor *titleTextColor;

@end
