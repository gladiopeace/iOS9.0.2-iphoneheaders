/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class MusicInteractiveBackdropView, _UIBackdropViewSettings, UIView;

@interface MusicInteractiveBlurringView : UIView {

	MusicInteractiveBackdropView* _backdropView;
	_UIBackdropViewSettings* _destinationSettings;
	UIView* _tintView;
	float _tintAlphaProgressMultiplier;

}

@property (nonatomic,readonly) UIView * tintView;                            //@synthesize tintView=_tintView - In the implementation block
@property (assign,nonatomic) float tintAlphaProgressMultiplier;              //@synthesize tintAlphaProgressMultiplier=_tintAlphaProgressMultiplier - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForTransition;
-(UIView *)tintView;
-(void)setTransitionProgress:(float)arg1 ;
-(char)_shouldUseHighQualityGraphics;
-(void)transitionCompleted;
-(float)tintAlphaProgressMultiplier;
-(void)setTintAlphaProgressMultiplier:(float)arg1 ;
@end

