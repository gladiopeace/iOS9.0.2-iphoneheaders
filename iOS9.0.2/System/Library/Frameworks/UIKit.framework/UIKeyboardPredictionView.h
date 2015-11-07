/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIKBBackgroundView, UIKeyboardPredictionBarGrabber, NSMutableArray, NSString, UIView, UILabel, UIKBKeyView, UITouch, NSTimer, NSArray, TIKeyboardCandidate, NSDate;

@interface UIKeyboardPredictionView : UIView {

	UIKBBackgroundView* m_backgroundView;
	UIKeyboardPredictionBarGrabber* m_grabber;
	NSMutableArray* m_predictionCells;
	unsigned m_activeIndex;
	float m_width;
	NSString* m_openQuote;
	NSString* m_closeQuote;
	UIView* m_message;
	UILabel* m_messageLabel;
	UIKBKeyView* m_messageKeyView;
	double m_messageShownTime;
	CGPoint m_initLocation;
	char m_dragging;
	char m_hasLongCandidates;
	char m_currentInputModeEnablePrediction;
	unsigned m_autocorrectionCell;
	char m_delayActive;
	char m_isMinimized;
	UIKBKeyView* m_collapsedView;
	int _notifyBatterySaverToken;
	UITouch* _activeTouch;
	int _state;
	NSTimer* _updateTimer;
	NSArray* _scheduledPredictions;
	TIKeyboardCandidate* _scheduledAutocorrection;
	NSDate* _lastUpdateDate;

}

@property (nonatomic,retain) UITouch * activeTouch;                                      //@synthesize activeTouch=_activeTouch - In the implementation block
@property (assign,nonatomic) char show; 
@property (assign,nonatomic) int state;                                                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSTimer * updateTimer;                                      //@synthesize updateTimer=_updateTimer - In the implementation block
@property (nonatomic,retain) NSArray * scheduledPredictions;                             //@synthesize scheduledPredictions=_scheduledPredictions - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * scheduledAutocorrection;              //@synthesize scheduledAutocorrection=_scheduledAutocorrection - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdateDate;                                    //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
+(id)sharedInstance;
+(id)activeInstance;
+(unsigned)numberOfCandidates;
+(float)predictionViewWidthForOrientation:(int)arg1 ;
+(float)predictionViewHeightForState:(int)arg1 orientation:(int)arg2 ;
+(float)overlapHeight;
-(char)enabled;
-(char)show;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)description;
-(int)state;
-(void)dimKeys:(id)arg1 ;
-(void)setState:(int)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(UITouch *)activeTouch;
-(void)setActiveTouch:(UITouch *)arg1 ;
-(void)suspend;
-(float)heightForInterfaceOrientation:(int)arg1 ;
-(id)autocorrection;
-(void)setPredictionViewState:(int)arg1 animate:(char)arg2 ;
-(int)stateForCurrentPreferences;
-(void)setPredictionViewState:(int)arg1 animate:(char)arg2 notify:(char)arg3 ;
-(void)setShow:(char)arg1 ;
-(void)updateBackgroundWithRenderConfig:(id)arg1 ;
-(NSTimer *)updateTimer;
-(void)inputModeDidChange;
-(void)setLastUpdateDate:(NSDate *)arg1 ;
-(void)releaseMessage;
-(void)setTouchedCellState:(int)arg1 ;
-(unsigned)indexForPoint:(CGPoint)arg1 ;
-(void)setActiveCellWithIndex:(unsigned)arg1 ;
-(void)commitPrediction:(id)arg1 ;
-(void)delayActivateCellForPrediction:(id)arg1 ;
-(void)deactivateCandidate;
-(void)acceptCandidateAtCell:(id)arg1 ;
-(id)labelTextForPrediction:(id)arg1 typedString:(id)arg2 ;
-(NSArray *)scheduledPredictions;
-(TIKeyboardCandidate *)scheduledAutocorrection;
-(void)_setPredictions:(id)arg1 autocorrection:(id)arg2 ;
-(void)setScheduledPredictions:(NSArray *)arg1 ;
-(void)setScheduledAutocorrection:(TIKeyboardCandidate *)arg1 ;
-(void)updateTimerFired:(id)arg1 ;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(NSDate *)lastUpdateDate;
-(void)touchUpdateTimer;
-(int)messageCount;
-(int)maxMessageCount;
-(void)removeMessage;
-(void)initCells;
-(float)heightBeforeStateChangeForInterfaceOrientation:(int)arg1 ;
-(void)showMessageWithSize:(CGSize)arg1 ;
-(void)suppressLayoutSubviewsForCellLabels:(char)arg1 ;
-(unsigned)predictionCount;
-(void)acceptCandidate;
-(void)activateCandidateAtPoint:(CGPoint)arg1 ;
-(void)setPredictions:(id)arg1 autocorrection:(id)arg2 ;
@end

