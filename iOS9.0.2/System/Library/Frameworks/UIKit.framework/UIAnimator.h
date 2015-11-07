/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface UIAnimator : NSObject {

	NSMutableArray* _animations;
	double _lastUpdateTime;
	id _heartbeat[3];
	int _heartbeatClientCount[3];

}
+(void)disableAnimation;
+(void)enableAnimation;
+(id)sharedAnimator;
-(void)dealloc;
-(void)removeAnimationsForTarget:(id)arg1 ofKind:(Class)arg2 ;
-(void)addAnimation:(id)arg1 withDuration:(double)arg2 start:(char)arg3 ;
-(void)stopAnimation:(id)arg1 ;
-(void)_addAnimation:(id)arg1 withDuration:(double)arg2 start:(char)arg3 startTime:(double)arg4 ;
-(void)_startAnimation:(id)arg1 withStartTime:(double)arg2 ;
-(void)addAnimations:(id)arg1 withDuration:(double)arg2 start:(char)arg3 ;
-(void)removeAnimationsForTarget:(id)arg1 ;
-(void)startAnimation:(id)arg1 ;
-(float)fractionForAnimation:(id)arg1 ;
-(void)_advanceAnimationsOfType:(int)arg1 withTimestamp:(double)arg2 ;
-(void)_TimerHeartbeatCallback:(id)arg1 ;
-(void)_TVHeartbeatCallback:(id)arg1 ;
-(void)_LCDHeartbeatCallback:(id)arg1 ;
-(char)_isRunningAnimation:(id)arg1 ;
@end

