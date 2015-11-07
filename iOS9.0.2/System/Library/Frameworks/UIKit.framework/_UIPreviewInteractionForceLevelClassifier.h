/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIForceLevelClassifier.h>

@interface _UIPreviewInteractionForceLevelClassifier : _UIForceLevelClassifier {

	float _smoothedForce;
	float _maximumForce;
	double _timeMark;
	double _currentTime;
	double _previousTime;
	float _popOffsetInitial;
	float _popOffsetLongterm;
	float _popOffsetDecayAlpha;
	float _lowpassForceAlpha;
	float _popDecayingOffset;
	float _popReductionForce;
	float _progressToStrongThreshold;
	char _allowsPopOffsetDecay;
	float _revealThreshold;
	float _standardThreshold;
	float _strongThreshold;
	float _hintAndPeekInterval;
	float _hintReductionForce;
	float _actualHintForce;
	float _actualPeekForce;
	float _actualPopForce;
	unsigned _peekPopCount;
	double _transitionInterval;
	double _actualHintTime;
	double _actualPeekTime;
	double _actualPopTime;

}

@property (assign,nonatomic) float revealThreshold;                  //@synthesize revealThreshold=_revealThreshold - In the implementation block
@property (assign,nonatomic) float standardThreshold;                //@synthesize standardThreshold=_standardThreshold - In the implementation block
@property (assign,nonatomic) float strongThreshold;                  //@synthesize strongThreshold=_strongThreshold - In the implementation block
@property (assign,nonatomic) float hintAndPeekInterval;              //@synthesize hintAndPeekInterval=_hintAndPeekInterval - In the implementation block
@property (assign,nonatomic) float hintReductionForce;               //@synthesize hintReductionForce=_hintReductionForce - In the implementation block
@property (assign,nonatomic) double transitionInterval;              //@synthesize transitionInterval=_transitionInterval - In the implementation block
@property (nonatomic,readonly) float actualHintForce;                //@synthesize actualHintForce=_actualHintForce - In the implementation block
@property (nonatomic,readonly) float actualPeekForce;                //@synthesize actualPeekForce=_actualPeekForce - In the implementation block
@property (nonatomic,readonly) float actualPopForce;                 //@synthesize actualPopForce=_actualPopForce - In the implementation block
@property (nonatomic,readonly) double actualHintTime;                //@synthesize actualHintTime=_actualHintTime - In the implementation block
@property (nonatomic,readonly) double actualPeekTime;                //@synthesize actualPeekTime=_actualPeekTime - In the implementation block
@property (nonatomic,readonly) double actualPopTime;                 //@synthesize actualPopTime=_actualPopTime - In the implementation block
@property (nonatomic,readonly) unsigned peekPopCount;                //@synthesize peekPopCount=_peekPopCount - In the implementation block
-(id)init;
-(void)reset;
-(void)touchForceMultiplierDidChange;
-(void)observeTouchWithForceValue:(float)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(CGPoint)arg3 ;
-(char)wantsUnclampedForceValues;
-(id)transformerFromTouchForceMessageToProgressToForceLevel:(int)arg1 minimumRequiredForceLevel:(int)arg2 ;
-(float)_denormalizedTouchForceValue:(float)arg1 ;
-(float)_calculateProgressOfTouchForceValue:(float)arg1 toForceLevel:(int)arg2 minimumRequiredForceLevel:(int)arg3 ;
-(float)_thresholdForForceLevel:(int)arg1 ;
-(float)_normalizedTouchForceValue:(float)arg1 ;
-(int)_forceLevelForTouchForceValue:(float)arg1 ;
-(float)revealThreshold;
-(void)setRevealThreshold:(float)arg1 ;
-(float)standardThreshold;
-(void)setStandardThreshold:(float)arg1 ;
-(float)strongThreshold;
-(void)setStrongThreshold:(float)arg1 ;
-(float)hintAndPeekInterval;
-(void)setHintAndPeekInterval:(float)arg1 ;
-(float)hintReductionForce;
-(void)setHintReductionForce:(float)arg1 ;
-(double)transitionInterval;
-(void)setTransitionInterval:(double)arg1 ;
-(float)actualHintForce;
-(float)actualPeekForce;
-(float)actualPopForce;
-(double)actualHintTime;
-(double)actualPeekTime;
-(double)actualPopTime;
-(unsigned)peekPopCount;
@end

