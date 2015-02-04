//
//  UIToast.h
//  UIToast
//
//  Created by Francesco Perrotti-Garcia on 1/27/15.
//  Copyright (c) 2015 Francesco Perrotti-Garcia. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIToast : UIView

// Class
+ (UIToast *)makeText:(NSString *)text;
+ (UIToast *)makeText:(NSString *)text duration:(NSTimeInterval)duration;

- (instancetype)initWithText:(NSString *)text duration:(NSTimeInterval)duration;
- (void)show;
- (void)hide;
- (void)cancel;

@property (nonatomic) NSTimeInterval duration;
@property (nonatomic) UIEdgeInsets insets;
@property (nonatomic, strong) NSString *text;
@property (nonatomic) NSTimeInterval fadeInTime;
@property (nonatomic) NSTimeInterval fadeOutTime;
@property (nonatomic) NSTimeInterval delay;
@property (nonatomic) CGFloat viewAlpha;

@property (nonatomic) CGFloat fontSize;

@property (nonatomic) BOOL roundEdges;

@end
