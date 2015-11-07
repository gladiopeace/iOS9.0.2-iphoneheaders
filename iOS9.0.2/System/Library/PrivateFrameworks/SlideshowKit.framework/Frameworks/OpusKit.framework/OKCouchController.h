/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OKCouchControllerDelegate;
@class OKPresentationCouch, OKPresentationCouchStep;

@interface OKCouchController : NSObject {

	OKPresentationCouch* _couch;
	OKPresentationCouchStep* _lastStep;
	unsigned _stepMode;
	double _currentStepStartTime;
	double _readinessWaitStartTime;
	float _progress;
	unsigned _startValidityBarrier;
	unsigned _executionValidityBarrier;
	int _stopCounter;
	char _isPlaying;
	char _hasStartedToWait;
	char _loops;
	id<OKCouchControllerDelegate> _delegate;
	double _defaultStepDuration;
	double _currentStepDuration;
	double _delayForReadinessWaitNotification;

}

@property (assign) id<OKCouchControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double defaultStepDuration;                            //@synthesize defaultStepDuration=_defaultStepDuration - In the implementation block
@property (nonatomic,readonly) double currentStepDuration;                          //@synthesize currentStepDuration=_currentStepDuration - In the implementation block
@property (assign,nonatomic) char loops;                                            //@synthesize loops=_loops - In the implementation block
@property (assign,nonatomic) double delayForReadinessWaitNotification;              //@synthesize delayForReadinessWaitNotification=_delayForReadinessWaitNotification - In the implementation block
-(void)setDelegate:(id<OKCouchControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<OKCouchControllerDelegate>)delegate;
-(char)loops;
-(void)setLoops:(char)arg1 ;
-(void)stopPlayback;
-(void)startPlayback;
-(void)overrideMode:(unsigned)arg1 andCurrentStepDuration:(double)arg2 ;
-(double)currentStepDuration;
-(void)allowPlayback;
-(void)preventPlayback;
-(char)canStartPlayback;
-(void)startPlaybackAfterDelay:(double)arg1 ;
-(id)initWithCouch:(id)arg1 andDelegate:(id)arg2 ;
-(void)setDelayForReadinessWaitNotification:(double)arg1 ;
-(void)setDefaultStepDuration:(double)arg1 ;
-(void)_dispatchNextStep;
-(id)_nextCouchStep:(id)arg1 ;
-(void)_executeStep:(id)arg1 forTargetPageViewController:(id)arg2 ;
-(double)defaultStepDuration;
-(double)delayForReadinessWaitNotification;
@end

