/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UISlider.h>

@protocol CAMZoomSliderDelegate;
@class NSTimer, UIImageView, UIView;

@interface CAMZoomSlider : UISlider {

	char _minimumAutozooming;
	char _maximumAutozooming;
	char __autozooming;
	char _rightToLeft;
	id<CAMZoomSliderDelegate> _delegate;
	NSTimer* __visibilityTimer;
	UIImageView* __thumbImageView;
	UIView* __minTrackMaskView;
	UIView* __maxTrackMaskView;
	UIEdgeInsets _alignmentRectInsets;

}

@property (assign,nonatomic,__weak) id<CAMZoomSliderDelegate> delegate;                                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;                                             //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (assign,getter=isMinimumAutozooming,nonatomic) char minimumAutozooming;                          //@synthesize minimumAutozooming=_minimumAutozooming - In the implementation block
@property (assign,getter=isMaximumAutozooming,nonatomic) char maximumAutozooming;                          //@synthesize maximumAutozooming=_maximumAutozooming - In the implementation block
@property (nonatomic,readonly) NSTimer * _visibilityTimer;                                                 //@synthesize _visibilityTimer=__visibilityTimer - In the implementation block
@property (assign,setter=_setAutozooming:,getter=_isAutozooming,nonatomic) char _autozooming;              //@synthesize _autozooming=__autozooming - In the implementation block
@property (nonatomic,readonly) UIImageView * _thumbImageView;                                              //@synthesize _thumbImageView=__thumbImageView - In the implementation block
@property (nonatomic,readonly) UIView * _minTrackMaskView;                                                 //@synthesize _minTrackMaskView=__minTrackMaskView - In the implementation block
@property (nonatomic,readonly) UIView * _maxTrackMaskView;                                                 //@synthesize _maxTrackMaskView=__maxTrackMaskView - In the implementation block
@property (assign,getter=isRightToLeft,nonatomic) char rightToLeft;                                        //@synthesize rightToLeft=_rightToLeft - In the implementation block
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<CAMZoomSliderDelegate>)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<CAMZoomSliderDelegate>)delegate;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(id)createThumbView;
-(CGRect)minimumValueImageRectForBounds:(CGRect)arg1 ;
-(CGRect)maximumValueImageRectForBounds:(CGRect)arg1 ;
-(UIView *)_minTrackMaskView;
-(UIView *)_maxTrackMaskView;
-(void)_commonCAMZoomSliderInitialization;
-(int)locationOfTouch:(id)arg1 ;
-(void)_setMinimumAutozooming:(char)arg1 ;
-(void)_setMaximumAutozooming:(char)arg1 ;
-(char)_isMinimumOrMaximumAutozooming;
-(char)isMinimumAutozooming;
-(char)isMaximumAutozooming;
-(void)_updateAutozooming;
-(void)_stopVisibilityTimer;
-(void)_beginAutozooming;
-(void)_endAutozooming;
-(void)_startVisibilityTimer;
-(void)_hideZoomSlider:(id)arg1 ;
-(void)_postHideZoomSliderAnimation;
-(char)visibilityTimerIsValid;
-(void)makeVisible;
-(void)makeInvisible;
-(NSTimer *)_visibilityTimer;
-(char)_isAutozooming;
-(void)_setAutozooming:(char)arg1 ;
-(UIImageView *)_thumbImageView;
-(void)setRightToLeft:(char)arg1 ;
-(char)isRightToLeft;
@end

