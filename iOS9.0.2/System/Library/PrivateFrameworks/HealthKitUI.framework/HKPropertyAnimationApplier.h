/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, CADisplayLink;

@interface HKPropertyAnimationApplier : NSObject {

	NSMutableDictionary* _animations;
	CADisplayLink* _displayLink;

}
-(id)init;
-(void)_displayLinkFired:(id)arg1 ;
-(void)cancelAnimationsForProperty:(id)arg1 ;
-(void)applyAnimation:(id)arg1 ;
-(void)_startDisplayLinkIfNecessary;
-(void)_stopDisplayLinkIfNecessary;
-(void)_applyAnimations;
-(void)_cleanupCompletedAnimations;
@end

