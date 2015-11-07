/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface CAMSnapshotView : UIView {

	char _blurred;
	char _dimmed;
	char __supportsBlur;
	UIView* _snapshotView;
	UIView* __lowQualityBlurView;
	UIView* __dimmingView;

}

@property (nonatomic,readonly) UIView * snapshotView;                     //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) char blurred;                                //@synthesize blurred=_blurred - In the implementation block
@property (assign,nonatomic) char dimmed;                                 //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,readonly) char _supportsBlur;                        //@synthesize _supportsBlur=__supportsBlur - In the implementation block
@property (nonatomic,readonly) UIView * _lowQualityBlurView;              //@synthesize _lowQualityBlurView=__lowQualityBlurView - In the implementation block
@property (nonatomic,readonly) UIView * _dimmingView;                     //@synthesize _dimmingView=__dimmingView - In the implementation block
-(UIView *)snapshotView;
-(UIView *)_dimmingView;
-(id)initWithView:(id)arg1 ;
-(void)setBlurred:(char)arg1 ;
-(void)setDimmed:(char)arg1 ;
-(void)setBlurred:(char)arg1 animated:(char)arg2 style:(int)arg3 withCompletionBlock:(/*^block*/id)arg4 ;
-(void)updateToMatchLayoutOfView:(id)arg1 ;
-(void)setDimmed:(char)arg1 animated:(char)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_applySnapshotBlurForStyle:(int)arg1 animated:(char)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_removeSnapshotBlurForStyle:(int)arg1 animated:(char)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_applyLowQualityBlurForStyle:(int)arg1 animated:(char)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_removeLowQualityBlurForStyle:(int)arg1 animated:(char)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(void)_applySnapshotDimAnimated:(char)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_removeSnapshotDimAnimated:(char)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_setupBlurOnSnapshot;
-(void)_prepareForApplyingBlurForStyle:(int)arg1 applying:(char)arg2 inputRadiusAmount:(float*)arg3 inputRadiusDuration:(double*)arg4 inputRadiusDelay:(double*)arg5 inputRadiusTimingFunction:(id*)arg6 opacityAmount:(float*)arg7 opacityDuration:(double*)arg8 opacityDelay:(double*)arg9 opacityTimingFunction:(id*)arg10 ;
-(UIView *)_lowQualityBlurView;
-(void)_setupLowQualityBlurOnSnapshot;
-(void)_prepareForApplyingLowQualityBlurForStyle:(int)arg1 applying:(char)arg2 opacityAmount:(float*)arg3 opacityDuration:(double*)arg4 opacityDelay:(double*)arg5 opacityTimingFunction:(id*)arg6 targetView:(id*)arg7 ;
-(void)_setupDimOnSnapshot;
-(char)blurred;
-(char)dimmed;
-(char)_supportsBlur;
@end

