/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAMExpandableMenuButtonDelegate.h>

@protocol CAMControlVisibilityUpdateDelegate;
@class CAMFlashButton, CAMElapsedTimeView, CAMHDRButton, CAMFlipButton, CAMTimerButton, CAMIrisButton, UIView, NSMutableArray, CAMExpandableMenuButton;

@interface CAMTopBar : UIView <CAMExpandableMenuButtonDelegate> {

	id<CAMControlVisibilityUpdateDelegate> _visibilityUpdateDelegate;
	int _style;
	int _backgroundStyle;
	CAMFlashButton* _flashButton;
	CAMElapsedTimeView* _elapsedTimeView;
	CAMHDRButton* _HDRButton;
	CAMFlipButton* _flipButton;
	CAMTimerButton* _timerButton;
	CAMIrisButton* _irisButton;
	int _orientation;
	UIView* __backgroundView;
	NSMutableArray* __allowedControls;
	CAMExpandableMenuButton* __expandedMenuButton;
	UIEdgeInsets __expandedMenuButtonTappableInsets;

}

@property (assign,nonatomic,__weak) id<CAMControlVisibilityUpdateDelegate> visibilityUpdateDelegate;                                   //@synthesize visibilityUpdateDelegate=_visibilityUpdateDelegate - In the implementation block
@property (assign,nonatomic) int style;                                                                                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int backgroundStyle;                                                                                      //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,retain) CAMFlashButton * flashButton;                                                                             //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,retain) CAMElapsedTimeView * elapsedTimeView;                                                                     //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) CAMHDRButton * HDRButton;                                                                                 //@synthesize HDRButton=_HDRButton - In the implementation block
@property (nonatomic,retain) CAMFlipButton * flipButton;                                                                               //@synthesize flipButton=_flipButton - In the implementation block
@property (nonatomic,retain) CAMTimerButton * timerButton;                                                                             //@synthesize timerButton=_timerButton - In the implementation block
@property (nonatomic,retain) CAMIrisButton * irisButton;                                                                               //@synthesize irisButton=_irisButton - In the implementation block
@property (assign,nonatomic) int orientation;                                                                                          //@synthesize orientation=_orientation - In the implementation block
@property (getter=isFloating,nonatomic,readonly) char floating; 
@property (nonatomic,readonly) UIView * _backgroundView;                                                                               //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _allowedControls;                                                                      //@synthesize _allowedControls=__allowedControls - In the implementation block
@property (setter=_setExpandedMenuButton:,nonatomic,retain) CAMExpandableMenuButton * _expandedMenuButton;                             //@synthesize _expandedMenuButton=__expandedMenuButton - In the implementation block
@property (assign,setter=_setExpandedMenuButtonTappableInsets:,nonatomic) UIEdgeInsets _expandedMenuButtonTappableInsets;              //@synthesize _expandedMenuButtonTappableInsets=__expandedMenuButtonTappableInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(UIView *)_backgroundView;
-(void)setOrientation:(int)arg1 ;
-(int)backgroundStyle;
-(void)setBackgroundStyle:(int)arg1 ;
-(int)orientation;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)setStyle:(int)arg1 animated:(char)arg2 ;
-(void)setBackgroundStyle:(int)arg1 animated:(char)arg2 ;
-(CAMElapsedTimeView *)elapsedTimeView;
-(CAMFlipButton *)flipButton;
-(float)_opacityForBackgroundStyle:(int)arg1 ;
-(CAMExpandableMenuButton *)_expandedMenuButton;
-(CGRect)expandedFrameForMenuButton:(id)arg1 ;
-(CAMHDRButton *)HDRButton;
-(CAMTimerButton *)timerButton;
-(CGRect)collapsedFrameForMenuButton:(id)arg1 ;
-(void)_setExpandedMenuButton:(id)arg1 ;
-(void)_updateControlVisibilityAnimated:(char)arg1 ;
-(void)collapseMenuButton:(id)arg1 animated:(char)arg2 ;
-(void)expandMenuButton:(id)arg1 animated:(char)arg2 ;
-(void)setFlipButton:(CAMFlipButton *)arg1 ;
-(void)setFlashButton:(CAMFlashButton *)arg1 ;
-(void)setElapsedTimeView:(CAMElapsedTimeView *)arg1 ;
-(void)setHDRButton:(CAMHDRButton *)arg1 ;
-(void)setTimerButton:(CAMTimerButton *)arg1 ;
-(CAMFlashButton *)flashButton;
-(void)configureForMode:(int)arg1 ;
-(void)setVisibilityUpdateDelegate:(id<CAMControlVisibilityUpdateDelegate>)arg1 ;
-(char)_shouldExpandButtonsHorizontally;
-(void)configureForMode:(int)arg1 animated:(char)arg2 ;
-(CAMIrisButton *)irisButton;
-(void)setIrisButton:(CAMIrisButton *)arg1 ;
-(char)shouldHideFlashButtonForMode:(int)arg1 device:(int)arg2 ;
-(char)shouldHideHDRButtonForMode:(int)arg1 device:(int)arg2 ;
-(char)shouldHideElapsedTimeViewForMode:(int)arg1 device:(int)arg2 ;
-(char)shouldHideIrisButtonForMode:(int)arg1 device:(int)arg2 ;
-(char)shouldHideFlipButtonForMode:(int)arg1 device:(int)arg2 ;
-(char)shouldHideTimerButtonForMode:(int)arg1 device:(int)arg2 ;
-(void)_commonCAMTopBarInitialization;
-(void)_layoutDefaultStyle;
-(void)_layoutFloatingStyle;
-(void)_layoutFloatingRecordingStyle;
-(float)_backgroundCornerRadiusForStyle:(int)arg1 ;
-(char)_backgroundMasksToBoundsForStyle:(int)arg1 ;
-(NSMutableArray *)_allowedControls;
-(void)_layoutControls:(id)arg1 apply:(char)arg2 withExpandedMenuButton:(id)arg3 collapsingMenuButton:(id)arg4 collapsingFrame:(CGRect*)arg5 ;
-(float)_interpolatedFloatingBarHeight;
-(id)_allowedControlsForStillImageMode;
-(id)_allowedControlsForSquareMode;
-(id)_allowedControlsForVideoMode;
-(id)_allowedControlsForPanoramaMode;
-(id)_allowedControlsForTimelapseMode;
-(id<CAMControlVisibilityUpdateDelegate>)visibilityUpdateDelegate;
-(UIEdgeInsets)_expandedMenuButtonTappableInsets;
-(void)sensitiveConfigureForMode:(int)arg1 ;
-(void)_setExpandedMenuButtonTappableInsets:(UIEdgeInsets)arg1 ;
-(char)isFloating;
@end

