/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIResponderForwardable.h>

@protocol _UITouchPhaseChangeDelegate;
@class UIResponder, UIWindow, UIView, NSMutableArray, NSString, NSArray;

@interface UITouch : NSObject <_UIResponderForwardable> {

	float _movementMagnitudeSquared;
	double _timestamp;
	int _phase;
	unsigned _tapCount;
	int _edgeType;
	UIWindow* _window;
	UIView* _view;
	UIView* _warpedIntoView;
	NSMutableArray* _gestureRecognizers;
	NSMutableArray* _forwardingRecord;
	CGPoint _locationInWindow;
	CGPoint _previousLocationInWindow;
	float _previousPressure;
	unsigned char _pathIndex;
	unsigned char _pathIdentity;
	float _pathMajorRadius;
	float _majorRadiusTolerance;
	float _pressure;
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	}  _touchFlags;
	char _eaten;
	char _needsForceUpdate;
	long _forceCorrelationToken;
	float _maximumPossiblePressure;
	IOHIDEventRef _hidEvent;
	int _type;
	id<_UITouchPhaseChangeDelegate> __phaseChangeDelegate;
	UIWindow* __windowServerHitTestWindow;
	CGSize _displacement;
	unsigned long long _senderID;

}

@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) int phase; 
@property (assign,nonatomic) unsigned tapCount; 
@property (assign,nonatomic) char isTap; 
@property (assign,nonatomic) char sentTouchesEnded; 
@property (assign,nonatomic) float majorRadius; 
@property (assign,nonatomic) float majorRadiusTolerance; 
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) UIView * view; 
@property (nonatomic,retain) UIView * warpedIntoView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setForwardablePhase:,nonatomic) int _forwardablePhase; 
@property (setter=_setResponder:,nonatomic,retain) UIResponder * _responder; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) int phase; 
@property (nonatomic,readonly) unsigned tapCount; 
@property (assign,nonatomic) int type;                                                                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) float majorRadius;                                                                               //@synthesize pathMajorRadius=_pathMajorRadius - In the implementation block
@property (nonatomic,readonly) float majorRadiusTolerance;                                                                      //@synthesize majorRadiusTolerance=_majorRadiusTolerance - In the implementation block
@property (nonatomic,readonly) UIWindow * window; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,copy,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,readonly) float force; 
@property (nonatomic,readonly) float maximumPossibleForce; 
@property (assign,setter=_setPathIndex:,nonatomic) unsigned char _pathIndex;                                                    //@synthesize pathIndex=_pathIndex - In the implementation block
@property (assign,setter=_setPathIdentity:,nonatomic) unsigned char _pathIdentity;                                              //@synthesize pathIdentity=_pathIdentity - In the implementation block
@property (nonatomic,readonly) float _pressure;                                                                                 //@synthesize pressure=_pressure - In the implementation block
@property (assign,setter=_setEdgeType:,nonatomic) int _edgeType;                                                                //@synthesize edgeType=_edgeType - In the implementation block
@property (assign,setter=_setEaten:,getter=_isEaten,nonatomic) char _eaten;                                                     //@synthesize eaten=_eaten - In the implementation block
@property (assign,setter=_setDisplacement:,nonatomic) CGSize _displacement;                                                     //@synthesize displacement=_displacement - In the implementation block
@property (setter=_setPhaseChangeDelegate:,nonatomic,retain) id<_UITouchPhaseChangeDelegate> _phaseChangeDelegate;              //@synthesize _phaseChangeDelegate=__phaseChangeDelegate - In the implementation block
@property (setter=_setWindowServerHitTestWindow:,nonatomic,retain) UIWindow * _windowServerHitTestWindow;                       //@synthesize _windowServerHitTestWindow=__windowServerHitTestWindow - In the implementation block
@property (assign,setter=_setNeedsForceUpdate:,nonatomic) char _needsForceUpdate;                                               //@synthesize needsForceUpdate=_needsForceUpdate - In the implementation block
@property (assign,setter=_setForceCorrelationToken:,nonatomic) long _forceCorrelationToken;                                     //@synthesize forceCorrelationToken=_forceCorrelationToken - In the implementation block
@property (assign,setter=_setMaximumPossiblePressure:,nonatomic) float _maximumPossiblePressure;                                //@synthesize maximumPossiblePressure=_maximumPossiblePressure - In the implementation block
@property (nonatomic,readonly) float _unclampedForce; 
@property (assign,setter=_setSenderID:,nonatomic) unsigned long long _senderID;                                                 //@synthesize senderID=_senderID - In the implementation block
@property (assign,setter=_setHidEvent:,nonatomic) IOHIDEventRef _hidEvent;                                                      //@synthesize hidEvent=_hidEvent - In the implementation block
+(id)_createTouchesWithGSEvent:(GSEventRef)arg1 phase:(int)arg2 view:(id)arg3 ;
-(CGPoint)pu_locationInPresentationLayerOfView:(id)arg1 ;
-(CGPoint)locationInNode:(id)arg1 ;
-(CGPoint)previousLocationInNode:(id)arg1 ;
-(void)dealloc;
-(UIWindow *)window;
-(NSString *)description;
-(UIView *)view;
-(double)timestamp;
-(CGPoint)locationInView:(id)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(IOHIDEventRef)_hidEvent;
-(void)setIsTap:(char)arg1 ;
-(int)phase;
-(char)isTap;
-(void)setTapCount:(unsigned)arg1 ;
-(char)_isEaten;
-(void)setPhase:(int)arg1 ;
-(void)_setEaten:(char)arg1 ;
-(float)force;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(NSArray *)gestureRecognizers;
-(void)_setForwardablePhase:(int)arg1 ;
-(UIResponder *)_responder;
-(void)_setResponder:(id)arg1 ;
-(char)sentTouchesEnded;
-(void)_clearGestureRecognizers;
-(void)_addGestureRecognizer:(id)arg1 ;
-(void)setView:(UIView *)arg1 ;
-(id)_clone;
-(void)_setPreviousTouch:(id)arg1 ;
-(float)_pressure;
-(void)_setLocationInWindow:(CGPoint)arg1 resetPrevious:(char)arg2 ;
-(void)_setPressure:(float)arg1 resetPrevious:(char)arg2 ;
-(void)_setHidEvent:(IOHIDEventRef)arg1 ;
-(void)_setPathIndex:(unsigned char)arg1 ;
-(void)_setPathIdentity:(unsigned char)arg1 ;
-(void)setMajorRadius:(float)arg1 ;
-(void)setMajorRadiusTolerance:(float)arg1 ;
-(void)_setType:(int)arg1 ;
-(void)_setSenderID:(unsigned long long)arg1 ;
-(void)_setMaximumPossiblePressure:(float)arg1 ;
-(UIWindow *)_windowServerHitTestWindow;
-(CGSize)_displacement;
-(unsigned char)_pathIndex;
-(void)_setDisplacement:(CGSize)arg1 ;
-(void)_setWindowServerHitTestWindow:(id)arg1 ;
-(void)_setEdgeType:(int)arg1 ;
-(UIView *)warpedIntoView;
-(void)setWarpedIntoView:(UIView *)arg1 ;
-(void)_setIsFirstTouchForView:(char)arg1 ;
-(void)_updateMovementMagnitudeForLocation:(CGPoint)arg1 ;
-(unsigned long long)_senderID;
-(void)setSentTouchesEnded:(char)arg1 ;
-(int)_edgeType;
-(id)_gestureRecognizers;
-(char)isDelayed;
-(CGPoint)previousLocationInView:(id)arg1 ;
-(unsigned)tapCount;
-(int)info;
-(id)_forwardingRecord;
-(SEL)_responderSelectorForPhase:(int)arg1 ;
-(char)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3 ;
-(float)_pathMajorRadius;
-(CGPoint)_locationInSceneReferenceSpace;
-(void)_removeGestureRecognizer:(id)arg1 ;
-(char)_isFirstTouchForView;
-(int)_forwardablePhase;
-(char)_isAbandoningForwardingRecord;
-(id)_mutableForwardingRecord;
-(void)_abandonForwardingRecord;
-(void)_clonePropertiesToTouch:(id)arg1 ;
-(void)_updateMovementMagnitudeFromLocation:(CGPoint)arg1 toLocation:(CGPoint)arg2 ;
-(float)majorRadius;
-(float)_unclampedForce;
-(float)maximumPossibleForce;
-(char)_supportsForce;
-(float)_maximumPossiblePressure;
-(float)_standardForceAmount;
-(void)setIsDelayed:(char)arg1 ;
-(void)_loadStateFromTouch:(id)arg1 ;
-(char)_edgeForcePending;
-(char)_edgeForceActive;
-(unsigned char)_pathIdentity;
-(float)majorRadiusTolerance;
-(long)_forceCorrelationToken;
-(void)_setForceCorrelationToken:(long)arg1 ;
-(char)_needsForceUpdate;
-(void)_setNeedsForceUpdate:(char)arg1 ;
-(id<_UITouchPhaseChangeDelegate>)_phaseChangeDelegate;
-(void)_setPhaseChangeDelegate:(id)arg1 ;
-(id)_phaseDescription;
-(CGPoint)_locationInWindow:(id)arg1 ;
-(CGPoint)_previousLocationInWindow:(id)arg1 ;
-(CGPoint)_previousLocationInSceneReferenceSpace;
-(int)_compareIndex:(id)arg1 ;
-(char)_isStationaryRelativeToTouches:(id)arg1 ;
-(float)_distanceFrom:(id)arg1 inView:(id)arg2 ;
@end

