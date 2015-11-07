/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class NSTimer, NSMutableSet, NSSet;

@interface StocksTapDragGestureRecognizer : UIGestureRecognizer {

	NSTimer* _touchDelayTimer;
	NSMutableSet* _touches;
	float _requiredPressDelay;
	unsigned _minimumNumberOfTouches;
	unsigned _maximumNumberOfTouches;
	CGRect _touchableBounds;

}

@property (nonatomic,readonly) NSSet * touches;                            //@synthesize touches=_touches - In the implementation block
@property (assign,nonatomic) float requiredPressDelay;                     //@synthesize requiredPressDelay=_requiredPressDelay - In the implementation block
@property (assign,nonatomic) unsigned minimumNumberOfTouches;              //@synthesize minimumNumberOfTouches=_minimumNumberOfTouches - In the implementation block
@property (assign,nonatomic) unsigned maximumNumberOfTouches;              //@synthesize maximumNumberOfTouches=_maximumNumberOfTouches - In the implementation block
@property (assign,nonatomic) CGRect touchableBounds;                       //@synthesize touchableBounds=_touchableBounds - In the implementation block
-(void)setMaximumNumberOfTouches:(unsigned)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setMinimumNumberOfTouches:(unsigned)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(NSSet *)touches;
-(unsigned)minimumNumberOfTouches;
-(unsigned)maximumNumberOfTouches;
-(void)touchDelayTimerFired:(id)arg1 ;
-(float)requiredPressDelay;
-(void)setRequiredPressDelay:(float)arg1 ;
-(CGRect)touchableBounds;
-(void)setTouchableBounds:(CGRect)arg1 ;
@end

