/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBBannerGestureHandler.h>

@class _UIDynamicValueAnimation;

@interface SBBannerPullDownGestureHandler : SBBannerGestureHandler {

	char _pulledDown;
	char _startedPulledDown;
	_UIDynamicValueAnimation* _animation;
	char _invalidated;
	char _completed;

}
-(void)_updateWithDisplacement:(float)arg1 velocity:(float)arg2 ;
-(char)handleGestureType:(int)arg1 state:(int)arg2 location:(CGPoint)arg3 displacement:(float)arg4 velocity:(float)arg5 ;
-(char)_shouldFinishWithLocation:(CGPoint)arg1 velocity:(float)arg2 ;
-(void)_finishGestureWithDisplacement:(float)arg1 velocity:(float)arg2 ;
-(id)_newAnimationForShow:(char)arg1 withDisplacement:(double)arg2 velocity:(double)arg3 ;
-(float)_pullDownDistance;
-(float)_finalDisplacementForShow:(char)arg1 ;
-(id)_boundaryForShow:(char)arg1 finalDisplacement:(float)arg2 ;
-(id)_pullForShow:(char)arg1 finalDisplacement:(float)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)_stopAnimating;
@end
