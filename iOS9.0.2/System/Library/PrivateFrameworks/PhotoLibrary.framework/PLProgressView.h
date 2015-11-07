/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel, UIProgressView, UIView, NSNumberFormatter, _UIBackdropView;

@interface PLProgressView : UIView {

	UIButton* _cancelButton;
	UILabel* _labelView;
	UIProgressView* _progressView;
	UIView* _topDivider;
	unsigned _didLayout : 1;
	unsigned _didSetPermanantTextOnLabelView : 1;
	NSNumberFormatter* _progressFormatter;
	int _backgroundType;
	UIView* _backgroundView;
	UIView* _backgroundTintedView;
	_UIBackdropView* _backgroundBlurredView;
	char _showsCancelButton;
	/*^block*/id _cancelationHandler;

}

@property (assign,nonatomic) int backgroundType;                                   //@synthesize backgroundType=_backgroundType - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundTintedView;                        //@synthesize backgroundTintedView=_backgroundTintedView - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backgroundBlurredView;              //@synthesize backgroundBlurredView=_backgroundBlurredView - In the implementation block
@property (assign,nonatomic) float percentComplete; 
@property (assign,nonatomic) char showsCancelButton;                               //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
@property (nonatomic,copy) id cancelationHandler;                                  //@synthesize cancelationHandler=_cancelationHandler - In the implementation block
-(void)setCancelationHandler:(id)arg1 ;
-(void)_cancel:(id)arg1 ;
-(void)updateUIForPublishingAgent:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(float)percentComplete;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setShowsCancelButton:(char)arg1 ;
-(char)showsCancelButton;
-(void)setPercentComplete:(float)arg1 ;
-(void)setLabelText:(id)arg1 ;
-(void)_installBackgroundView;
-(void)_syncToBackgroundType;
-(void)_removeBackgroundTintedView;
-(void)_removeBackgroundBlurredView;
-(void)_installBackgroundBlurredView;
-(void)_installBackgroundTintedView;
-(_UIBackdropView *)backgroundBlurredView;
-(void)setBackgroundBlurredView:(_UIBackdropView *)arg1 ;
-(UIView *)backgroundTintedView;
-(void)setBackgroundTintedView:(UIView *)arg1 ;
-(id)cancelationHandler;
-(int)backgroundType;
-(void)setBackgroundType:(int)arg1 ;
@end

