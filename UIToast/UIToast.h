//
//  UIToast.h
//  UIToast
//
//  Created by Francesco Perrotti-Garcia on 1/27/15.
//  Copyright (c) 2015 Francesco Perrotti-Garcia. All rights reserved.
//

#import <UIKit/UIKit.h>

#ifdef DEBUG_UITOAST
#define UIToastLog(format, ...) NSLog(format, ##__VA_ARGS__)
#else
#define UIToastLog(format, ...)
#endif

@interface UIToast : UIView

/**
 *  Returns a UIToast with the given text that will remain on screen for the standard time period
 *
 *  @param text The text to be displayed on the toast
 *
 *  @return A UIToast with the given text
 */
+ (UIToast *)makeText:(NSString *)text;

/**
 *  Returns a UIToast with the given text that will remain on screen for the given period of time
 *
 *  @param text     The text to be displayed on the toast
 *  @param duration The time interval to wait before hiding the toast
 *
 *  @return A UIToast with the given text that will disappear after a given period of time
 */
+ (UIToast *)makeText:(NSString *)text duration:(NSTimeInterval)duration;

/**
 *  Returns a UIToast with the given text that will remain on screen for the given period of time
 *
 *  @param text     The text to be displayed on the toast
 *  @param duration The time interval to wait before hiding the toast
 *
 *  @return A UIToast with the given text that will disappear after a given period of time
 */
- (instancetype)initWithText:(NSString *)text duration:(NSTimeInterval)duration;

/**
 *  Shows the toast.
 */
- (void)show;

/**
 *  Hides the toast.
 */
- (void)hide;

/**
 *  Hides the toast. Currently an alias to hide. May change in future versions.
 */
- (void)cancel;

/**
 *  Time interval do wait before hiding the toast. Defaults to 3.0.
 */
@property (nonatomic) NSTimeInterval duration;

/**
 *  Insets for the text. Defaults to (4.0, 5.0, 3.0, 6.0).
 */
@property (nonatomic) UIEdgeInsets insets;

/**
 *  Text of the toast.
 */
@property (nonatomic, strong) NSString *text;

/**
 *  Fade in time. Defaults to 0.5.
 */
@property (nonatomic) NSTimeInterval fadeInTime;

/**
 *  Fade out time. Defaults to 0.5.
 */
@property (nonatomic) NSTimeInterval fadeOutTime;

/**
 *  Time interval to wait before showing toast. Defaults to 0.
 */
@property (nonatomic) NSTimeInterval delay;

/**
 *  Alpha of the toast. Defaults to 0.7;
 */
@property (nonatomic) CGFloat viewAlpha;


/**
 *  Size of the text font. Defaults to System font size + 2.0;
 */
@property (nonatomic) CGFloat fontSize;


/**
 *  Makes the toast have roundEdges when set to YES. Defaults to YES.
 */
@property (nonatomic) BOOL roundEdges;

@end
