/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIBasicAnimationFactory;
#import <UIKit/UIKit-Structs.h>
@class NSString, UIView, NSMutableArray, NSUUID, CAMediaTimingFunction;

@interface UIViewAnimationState : NSObject {

	UIViewAnimationState* _nextState;
	NSString* _animationID;
	void* _context;
	id _delegate;
	double _duration;
	double _delay;
	double _frameInterval;
	double _start;
	int _curve;
	float _repeatCount;
	int _transition;
	UIView* _transitionView;
	int _filter;
	UIView* _filterView;
	float _filterValue;
	SEL _willStartSelector;
	SEL _didEndSelector;
	int _didEndCount;
	CGPoint _position;
	unsigned _willStartSent : 1;
	unsigned _useCurrentLayerState : 1;
	unsigned _cacheTransition : 1;
	unsigned _autoreverses : 1;
	unsigned _roundsToInteger : 1;
	unsigned _preventsAdditive : 1;
	unsigned _layoutSubviews : 1;
	NSMutableArray* _trackedAnimations;
	NSUUID* _uuid;
	id<_UIBasicAnimationFactory> _animationFactory;
	CAMediaTimingFunction* _customCurve;
	char _animationFactoryMakesPerAnimationCustomCurves;
	/*^block*/id _alongsideAnimations;
	NSMutableArray* _addedCompletions;
	char _animationDidStopSent;
	char _allowUserInteractionToCutOffEndOfAnimation;
	UIViewAnimationState* _retainedSelf;
	NSMutableArray* _viewsPendingConstraintBasedAnimation;

}

@property (nonatomic,readonly) char _allowsUserInteraction; 
+(void)_addViewForConstraintBasedAnimation:(id)arg1 ;
+(void)pushViewAnimationState:(id)arg1 context:(void*)arg2 ;
+(void)popAnimationState;
+(void)_addConstraintPendingAnimation:(id)arg1 container:(id)arg2 ;
+(void)_addSystemPostAnimationAction:(/*^block*/id)arg1 ;
-(id)init;
-(void)_acceptEarlyAnimationCutoff:(id)arg1 ;
-(void)_runAlongsideAnimations;
-(void)_trackAnimation:(id)arg1 withAnimationKey:(id)arg2 forKeyPath:(id)arg3 inLayer:(id)arg4 ;
-(void)_setAlongsideAnimations:(/*^block*/id)arg1 ;
-(void)_addAnimationStateForTracking:(id)arg1 ;
-(void)pop;
-(void)sendDelegateAnimationDidStop:(id)arg1 finished:(char)arg2 ;
-(char)_shouldAnimateAdditivelyForKey:(id)arg1 onLayer:(id)arg2 ;
-(char)_shouldStartFromCurrentStateForLayer:(id)arg1 key:(id)arg2 ;
-(id)_defaultAnimationForKey:(id)arg1 ;
-(void)configureAnimation:(id)arg1 forLayer:(id)arg2 forKey:(id)arg3 ;
-(void)setAnimationAttributes:(id)arg1 correctZeroDuration:(char)arg2 skipDelegateAssignment:(char)arg3 customCurve:(id)arg4 ;
-(id)animationForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(void)setupCustomTimingCurve;
-(void)setAnimationAttributes:(id)arg1 correctZeroDuration:(char)arg2 skipDelegateAssignment:(char)arg3 ;
-(void)setAnimationAttributes:(id)arg1 ;
-(void)_runConstraintBasedLayoutAnimations;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)_removeAnimationStateFromTrackingMap:(char)arg1 disableTrackingIfNeeded:(char)arg2 ;
-(char)_allowsUserInteraction;
-(char)_allowsUserInteractionToCutOffEndOfAnimation;
-(id)_trackedAnimations;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3 ;
-(void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned)arg4 factory:(id)arg5 parentState:(id)arg6 start:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(void)animationDidStart:(id)arg1 ;
-(void)_removeAnimationStateFromTrackingMap:(char)arg1 ;
@end

