/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@protocol FMMapGestureRecognizerDelegate;
@class UITouch, NSMutableArray, NSTimer;

@interface FMMapGestureRecognizer : UIGestureRecognizer {

	char _isSwipeEnabled;
	char _isTrackingTouches;
	char _isSwipingFromTheEdge;
	char _isSwipingGestureEnded;
	char _isRTLOrientation;
	id<FMMapGestureRecognizerDelegate> _touchDelegate;
	int _touchRadius;
	UITouch* _previousTouch;
	float _swipeThreshold;
	float _velocity;
	NSMutableArray* _otherGestures;
	NSTimer* _doubleTapTimer;
	CGPoint _initialTouchLocation;
	CGPoint _lastTouchPoint;

}

@property (assign,nonatomic,__weak) id<FMMapGestureRecognizerDelegate> touchDelegate;              //@synthesize touchDelegate=_touchDelegate - In the implementation block
@property (assign,nonatomic) int touchRadius;                                                      //@synthesize touchRadius=_touchRadius - In the implementation block
@property (assign,nonatomic) char isSwipeEnabled;                                                  //@synthesize isSwipeEnabled=_isSwipeEnabled - In the implementation block
@property (assign,nonatomic) CGPoint initialTouchLocation;                                         //@synthesize initialTouchLocation=_initialTouchLocation - In the implementation block
@property (nonatomic,retain) UITouch * previousTouch;                                              //@synthesize previousTouch=_previousTouch - In the implementation block
@property (assign,nonatomic) CGPoint lastTouchPoint;                                               //@synthesize lastTouchPoint=_lastTouchPoint - In the implementation block
@property (assign,nonatomic) float swipeThreshold;                                                 //@synthesize swipeThreshold=_swipeThreshold - In the implementation block
@property (assign,nonatomic) float velocity;                                                       //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) char isTrackingTouches;                                               //@synthesize isTrackingTouches=_isTrackingTouches - In the implementation block
@property (assign,nonatomic) char isSwipingFromTheEdge;                                            //@synthesize isSwipingFromTheEdge=_isSwipingFromTheEdge - In the implementation block
@property (assign,nonatomic) char isSwipingGestureEnded;                                           //@synthesize isSwipingGestureEnded=_isSwipingGestureEnded - In the implementation block
@property (assign,nonatomic) char isRTLOrientation;                                                //@synthesize isRTLOrientation=_isRTLOrientation - In the implementation block
@property (nonatomic,retain) NSMutableArray * otherGestures;                                       //@synthesize otherGestures=_otherGestures - In the implementation block
@property (nonatomic,retain) NSTimer * doubleTapTimer;                                             //@synthesize doubleTapTimer=_doubleTapTimer - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setVelocity:(float)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(float)velocity;
-(char)canBePreventedByGestureRecognizer:(id)arg1 ;
-(char)canPreventGestureRecognizer:(id)arg1 ;
-(id<FMMapGestureRecognizerDelegate>)touchDelegate;
-(void)setTouchDelegate:(id<FMMapGestureRecognizerDelegate>)arg1 ;
-(void)setIsSwipeEnabled:(char)arg1 ;
-(void)setTouchRadius:(int)arg1 ;
-(void)setOtherGestures:(NSMutableArray *)arg1 ;
-(NSTimer *)doubleTapTimer;
-(void)setDoubleTapTimer:(NSTimer *)arg1 ;
-(void)setIsTrackingTouches:(char)arg1 ;
-(void)setSwipeThreshold:(float)arg1 ;
-(void)setIsRTLOrientation:(char)arg1 ;
-(char)isRTLOrientation;
-(void)setInitialTouchLocation:(CGPoint)arg1 ;
-(char)isSwipeEnabled;
-(CGPoint)initialTouchLocation;
-(void)setIsSwipingFromTheEdge:(char)arg1 ;
-(void)setIsSwipingGestureEnded:(char)arg1 ;
-(char)isSwipingFromTheEdge;
-(void)setLastTouchPoint:(CGPoint)arg1 ;
-(void)finishSwipeGesture:(float)arg1 ;
-(float)distanceBetweenPointA:(CGPoint)arg1 andPointB:(CGPoint)arg2 ;
-(UITouch *)previousTouch;
-(int)touchRadius;
-(void)mapTappedTimer;
-(void)setPreviousTouch:(UITouch *)arg1 ;
-(float)swipeThreshold;
-(char)isTrackingTouches;
-(char)isSwipingGestureEnded;
-(CGPoint)lastTouchPoint;
-(NSMutableArray *)otherGestures;
-(void)invalidateGesture;
@end

