/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/TKVibrationRecorderTouchSurfaceDelegate.h>

@protocol TKVibrationRecorderViewDelegate, UILayoutSupport, TKVibrationRecorderStyleProvider;
@class UILabel, UIToolbar, TKVibrationRecorderProgressView, TKVibrationRecorderTouchSurface, NSLayoutConstraint, NSString;

@interface TKVibrationRecorderView : UIView <TKVibrationRecorderTouchSurfaceDelegate> {

	char _replayModeEnabled;
	char _waitingForEndOfCurrentVibrationComponent;
	char _animatingProgress;
	id<TKVibrationRecorderViewDelegate> _delegate;
	id<UILayoutSupport> _topLayoutGuide;
	id<TKVibrationRecorderStyleProvider> _styleProvider;
	UILabel* _instructionsLabel;
	UIToolbar* _controlsToolbar;
	TKVibrationRecorderProgressView* _progressView;
	TKVibrationRecorderTouchSurface* _touchSurface;
	NSLayoutConstraint* _controlsToolbarTopConstraint;
	NSLayoutConstraint* _progressToolbarBottomConstraint;
	NSLayoutConstraint* _touchSurfaceTopConstraint;
	int _leftButtonIdentifier;
	int _rightButtonIdentifier;
	double _vibrationPatternMaximumDuration;
	double _currentVibrationProgressDidStartTimestamp;
	double _currentVibrationComponentDidStartTimestamp;

}

@property (assign,nonatomic) id<TKVibrationRecorderViewDelegate> delegate;                                                                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<UILayoutSupport> topLayoutGuide; 
@property (setter=_setStyleProvider:,nonatomic,retain) id<TKVibrationRecorderStyleProvider> _styleProvider;                                                                                       //@synthesize styleProvider=_styleProvider - In the implementation block
@property (setter=_setTopLayoutGuide:,nonatomic,retain) id<UILayoutSupport> _topLayoutGuide;                                                                                                      //@synthesize topLayoutGuide=_topLayoutGuide - In the implementation block
@property (setter=_setInstructionsLabel:,nonatomic,retain) UILabel * _instructionsLabel;                                                                                                          //@synthesize instructionsLabel=_instructionsLabel - In the implementation block
@property (setter=_setControlsToolbar:,nonatomic,retain) UIToolbar * _controlsToolbar;                                                                                                            //@synthesize controlsToolbar=_controlsToolbar - In the implementation block
@property (setter=_setProgressView:,nonatomic,retain) TKVibrationRecorderProgressView * _progressView;                                                                                            //@synthesize progressView=_progressView - In the implementation block
@property (setter=_setTouchSurface:,nonatomic,retain) TKVibrationRecorderTouchSurface * _touchSurface;                                                                                            //@synthesize touchSurface=_touchSurface - In the implementation block
@property (setter=_setControlsToolbarTopConstraint:,nonatomic,retain) NSLayoutConstraint * _controlsToolbarTopConstraint;                                                                         //@synthesize controlsToolbarTopConstraint=_controlsToolbarTopConstraint - In the implementation block
@property (setter=_setProgressToolbarBottomConstraint:,nonatomic,retain) NSLayoutConstraint * _progressToolbarBottomConstraint;                                                                   //@synthesize progressToolbarBottomConstraint=_progressToolbarBottomConstraint - In the implementation block
@property (setter=_setTouchSurfaceTopConstraint:,nonatomic,retain) NSLayoutConstraint * _touchSurfaceTopConstraint;                                                                               //@synthesize touchSurfaceTopConstraint=_touchSurfaceTopConstraint - In the implementation block
@property (assign,setter=_setReplayModeEnabled:,getter=_isReplayModeEnabled,nonatomic) char _replayModeEnabled;                                                                                   //@synthesize replayModeEnabled=_replayModeEnabled - In the implementation block
@property (assign,setter=_setLeftButtonIdentifier:,nonatomic) int _leftButtonIdentifier;                                                                                                          //@synthesize leftButtonIdentifier=_leftButtonIdentifier - In the implementation block
@property (assign,setter=_setRightButtonIdentifier:,nonatomic) int _rightButtonIdentifier;                                                                                                        //@synthesize rightButtonIdentifier=_rightButtonIdentifier - In the implementation block
@property (assign,setter=_setVibrationPatternMaximumDuration:,nonatomic) double _vibrationPatternMaximumDuration;                                                                                 //@synthesize vibrationPatternMaximumDuration=_vibrationPatternMaximumDuration - In the implementation block
@property (assign,setter=_setCurrentVibrationProgressDidStartTimestamp:,nonatomic) double _currentVibrationProgressDidStartTimestamp;                                                             //@synthesize currentVibrationProgressDidStartTimestamp=_currentVibrationProgressDidStartTimestamp - In the implementation block
@property (assign,setter=_setCurrentVibrationComponentDidStartTimestamp:,nonatomic) double _currentVibrationComponentDidStartTimestamp;                                                           //@synthesize currentVibrationComponentDidStartTimestamp=_currentVibrationComponentDidStartTimestamp - In the implementation block
@property (assign,setter=_setWaitingForEndOfCurrentVibrationComponent:,getter=_isWaitingForEndOfCurrentVibrationComponent,nonatomic) char _waitingForEndOfCurrentVibrationComponent;              //@synthesize waitingForEndOfCurrentVibrationComponent=_waitingForEndOfCurrentVibrationComponent - In the implementation block
@property (assign,setter=_setAnimatingProgress:,getter=_isAnimatingProgress,nonatomic) char _animatingProgress;                                                                                   //@synthesize animatingProgress=_animatingProgress - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateProgress:(id)arg1 ;
-(TKVibrationRecorderProgressView *)_progressView;
-(void)_setProgressView:(id)arg1 ;
-(void)setDelegate:(id<TKVibrationRecorderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(id<TKVibrationRecorderViewDelegate>)delegate;
-(id<UILayoutSupport>)topLayoutGuide;
-(id<TKVibrationRecorderStyleProvider>)_styleProvider;
-(void)_setStyleProvider:(id)arg1 ;
-(id)initWithVibrationPatternMaximumDuration:(double)arg1 ;
-(void)setTopLayoutGuide:(id<UILayoutSupport>)arg1 ;
-(void)_setWaitingForEndOfCurrentVibrationComponent:(char)arg1 ;
-(void)startAnimatingProgress;
-(void)enterReplayModeWithVibrationPattern:(id)arg1 ;
-(void)enterRecordingMode;
-(char)_isWaitingForEndOfCurrentVibrationComponent;
-(double)_currentVibrationProgressDidStartTimestamp;
-(void)_setCurrentVibrationProgressDidStartTimestamp:(double)arg1 ;
-(void)exitRecordingModeWithPlayButtonEnabled:(char)arg1 ;
-(void)exitReplayMode;
-(void)stopAnimatingProgress;
-(void)_setVibrationPatternMaximumDuration:(double)arg1 ;
-(void)_setControlsToolbarTopConstraint:(id)arg1 ;
-(void)_setControlsToolbar:(id)arg1 ;
-(void)_setProgressToolbarBottomConstraint:(id)arg1 ;
-(void)_setTouchSurfaceTopConstraint:(id)arg1 ;
-(void)_setTouchSurface:(id)arg1 ;
-(void)_setInstructionsLabel:(id)arg1 ;
-(void)_enterWaitingModeWithAnimation:(char)arg1 enablePlayButton:(char)arg2 ;
-(void)_setTopLayoutGuide:(id)arg1 ;
-(TKVibrationRecorderTouchSurface *)_touchSurface;
-(id<UILayoutSupport>)_topLayoutGuide;
-(NSLayoutConstraint *)_touchSurfaceTopConstraint;
-(void)_setLeftButtonIdentifier:(int)arg1 ;
-(void)_setRightButtonIdentifier:(int)arg1 ;
-(id)_titleForControlsToolbarButtonWithIdentifier:(int)arg1 ;
-(void)_handleLeftButtonTapped:(id)arg1 ;
-(void)_handleRightButtonTapped:(id)arg1 ;
-(UIToolbar *)_controlsToolbar;
-(int)_leftButtonIdentifier;
-(int)_rightButtonIdentifier;
-(void)_setLeftButtonIdentifier:(int)arg1 enabled:(char)arg2 rightButtonIdentifier:(int)arg3 enabled:(char)arg4 animated:(char)arg5 ;
-(UILabel *)_instructionsLabel;
-(void)_exitWaitingModeWithAnimation:(char)arg1 ;
-(char)_isReplayModeEnabled;
-(void)_setReplayModeEnabled:(char)arg1 ;
-(void)_setAnimatingProgress:(char)arg1 ;
-(char)_isAnimatingProgress;
-(double)_vibrationPatternMaximumDuration;
-(double)_currentVibrationComponentDidStartTimestamp;
-(NSLayoutConstraint *)_controlsToolbarTopConstraint;
-(NSLayoutConstraint *)_progressToolbarBottomConstraint;
-(void)_setCurrentVibrationComponentDidStartTimestamp:(double)arg1 ;
-(char)vibrationRecorderTouchSurfaceDidEnterRecordingMode:(id)arg1 ;
-(void)vibrationComponentDidStartForVibrationRecorderTouchSurface:(id)arg1 ;
-(void)vibrationComponentDidEndForVibrationRecorderTouchSurface:(id)arg1 ;
-(void)vibrationRecorderTouchSurface:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2 ;
-(void)vibrationRecorderTouchSurfaceDidFinishReplayingVibration:(id)arg1 ;
@end

