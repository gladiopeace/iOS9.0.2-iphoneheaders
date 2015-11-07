/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDynamicAnimation.h>

@class NSMutableArray, NSArray;

@interface _UIDynamicAnimationGroup : _UIDynamicAnimation {

	/*^block*/id _applier;
	NSMutableArray* _animations;
	NSMutableArray* _runningAnimations;

}

@property (nonatomic,copy) NSArray * animations;              //@synthesize animations=_animations - In the implementation block
-(void)dealloc;
-(void)runWithCompletion:(/*^block*/id)arg1 ;
-(char)_animateForInterval:(double)arg1 ;
-(void)setAnimations:(NSArray *)arg1 ;
-(NSArray *)animations;
-(void)_stopAnimation;
-(void)_appendSubclassDescription:(id)arg1 atLevel:(int)arg2 ;
-(void)runWithGroupApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 forScreen:(id)arg3 runLoopMode:(id)arg4 ;
-(void)runWithGroupApplier:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addAnimation:(id)arg1 ;
-(void)removeAnimation:(id)arg1 ;
@end

