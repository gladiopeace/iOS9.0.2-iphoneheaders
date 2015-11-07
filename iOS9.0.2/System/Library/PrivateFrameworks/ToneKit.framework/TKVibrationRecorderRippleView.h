/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKit/UIView.h>

@protocol TKVibrationRecorderStyleProvider;
@class NSMutableArray, NSMutableDictionary, CAAnimation;

@interface TKVibrationRecorderRippleView : UIView {

	char _trackingTouch;
	char _needsCurrentSpeedRefresh;
	char _animating;
	float _fingerStillSpeed;
	float _fingerMovingSpeed;
	float _firstRippleInitialRadius;
	float _fadeOutRadius;
	id<TKVibrationRecorderStyleProvider> _styleProvider;
	unsigned _numberOfRipplesForCurrentTouch;
	NSMutableArray* _recentTouchesContextQueue;
	NSMutableArray* _reusableTouchContexts;
	float _currentSpeedCoefficient;
	NSMutableArray* _ringLayersQueue;
	NSMutableArray* _reusableRingLayers;
	NSMutableDictionary* _ringLayersByIdentifiers;
	unsigned _lastRingLayerIdentifier;
	CAAnimation* _ringEnlargementAnimation;
	CGPoint _currentTouchLocation;
	double _currentTouchStartTime;

}

@property (assign,nonatomic) float fingerStillSpeed;                                                                           //@synthesize fingerStillSpeed=_fingerStillSpeed - In the implementation block
@property (assign,nonatomic) float fingerMovingSpeed;                                                                          //@synthesize fingerMovingSpeed=_fingerMovingSpeed - In the implementation block
@property (assign,nonatomic) float firstRippleInitialRadius;                                                                   //@synthesize firstRippleInitialRadius=_firstRippleInitialRadius - In the implementation block
@property (assign,nonatomic) float fadeOutRadius;                                                                              //@synthesize fadeOutRadius=_fadeOutRadius - In the implementation block
@property (getter=_isTouchDown,nonatomic,readonly) char _touchDown; 
@property (setter=_setStyleProvider:,nonatomic,retain) id<TKVibrationRecorderStyleProvider> _styleProvider;                    //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,setter=_setCurrentTouchLocation:,nonatomic) CGPoint _currentTouchLocation;                                   //@synthesize currentTouchLocation=_currentTouchLocation - In the implementation block
@property (assign,setter=_setCurrentTouchStartTime:,nonatomic) double _currentTouchStartTime;                                  //@synthesize currentTouchStartTime=_currentTouchStartTime - In the implementation block
@property (assign,setter=_setNumberOfRipplesForCurrentTouch:,nonatomic) unsigned _numberOfRipplesForCurrentTouch;              //@synthesize numberOfRipplesForCurrentTouch=_numberOfRipplesForCurrentTouch - In the implementation block
@property (assign,setter=_setTrackingTouch:,getter=_isTrackingTouch,nonatomic) char _trackingTouch;                            //@synthesize trackingTouch=_trackingTouch - In the implementation block
@property (setter=_setRecentTouchesContextQueue:,nonatomic,retain) NSMutableArray * _recentTouchesContextQueue;                //@synthesize recentTouchesContextQueue=_recentTouchesContextQueue - In the implementation block
@property (setter=_setReusableTouchContexts:,nonatomic,retain) NSMutableArray * _reusableTouchContexts;                        //@synthesize reusableTouchContexts=_reusableTouchContexts - In the implementation block
@property (assign,setter=_setCurrentSpeedCoefficient:,nonatomic) float _currentSpeedCoefficient;                               //@synthesize currentSpeedCoefficient=_currentSpeedCoefficient - In the implementation block
@property (assign,setter=_setNeedsCurrentSpeedRefresh:,nonatomic) char _needsCurrentSpeedRefresh;                              //@synthesize needsCurrentSpeedRefresh=_needsCurrentSpeedRefresh - In the implementation block
@property (nonatomic,readonly) float _currentSpeed; 
@property (assign,setter=_setAnimating:,getter=_isAnimating,nonatomic) char _animating;                                        //@synthesize animating=_animating - In the implementation block
@property (setter=_setRingLayersQueue:,nonatomic,retain) NSMutableArray * _ringLayersQueue;                                    //@synthesize ringLayersQueue=_ringLayersQueue - In the implementation block
@property (setter=_setReusableRingLayers:,nonatomic,retain) NSMutableArray * _reusableRingLayers;                              //@synthesize reusableRingLayers=_reusableRingLayers - In the implementation block
@property (setter=_setRingLayersByIdentifiers:,nonatomic,retain) NSMutableDictionary * _ringLayersByIdentifiers;               //@synthesize ringLayersByIdentifiers=_ringLayersByIdentifiers - In the implementation block
@property (assign,setter=_setLastRingLayerIdentifier:,nonatomic) unsigned _lastRingLayerIdentifier;                            //@synthesize lastRingLayerIdentifier=_lastRingLayerIdentifier - In the implementation block
@property (setter=_setRingEnlargementAnimation:,nonatomic,retain) CAAnimation * _ringEnlargementAnimation;                     //@synthesize ringEnlargementAnimation=_ringEnlargementAnimation - In the implementation block
-(void)_startAnimation;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
-(void)_setAnimating:(char)arg1 ;
-(char)_isAnimating;
-(id<TKVibrationRecorderStyleProvider>)_styleProvider;
-(void)_setStyleProvider:(id)arg1 ;
-(void)_stopAnimation;
-(void)_setTrackingTouch:(char)arg1 ;
-(void)setFingerStillSpeed:(float)arg1 ;
-(void)setFingerMovingSpeed:(float)arg1 ;
-(void)setFirstRippleInitialRadius:(float)arg1 ;
-(void)setFadeOutRadius:(float)arg1 ;
-(id)initWithStyleProvider:(id)arg1 ;
-(void)_setReusableTouchContexts:(id)arg1 ;
-(void)_setRecentTouchesContextQueue:(id)arg1 ;
-(void)_setRingLayersQueue:(id)arg1 ;
-(void)_setReusableRingLayers:(id)arg1 ;
-(void)_setRingLayersByIdentifiers:(id)arg1 ;
-(void)_setRingEnlargementAnimation:(id)arg1 ;
-(void)_updateRingEnlargementAnimation;
-(NSMutableArray *)_reusableRingLayers;
-(char)_isTrackingTouch;
-(CGPoint)_currentTouchLocation;
-(NSMutableArray *)_ringLayersQueue;
-(float)_currentSpeed;
-(unsigned)_numberOfRipplesForCurrentTouch;
-(double)_currentTouchStartTime;
-(void)_enqueueRingLayerWithTimeIntervalSinceCreation:(double)arg1 normalizedLocation:(CGPoint)arg2 speed:(float)arg3 ;
-(void)_setNumberOfRipplesForCurrentTouch:(unsigned)arg1 ;
-(NSMutableArray *)_recentTouchesContextQueue;
-(id)_reusableTouchContextObject;
-(void)_setNeedsCurrentSpeedRefresh:(char)arg1 ;
-(void)_enqueueReusableTouchContextObject:(id)arg1 ;
-(char)_needsCurrentSpeedRefresh;
-(void)_setCurrentSpeedCoefficient:(float)arg1 ;
-(float)fingerStillSpeed;
-(float)fingerMovingSpeed;
-(float)_currentSpeedCoefficient;
-(NSMutableArray *)_reusableTouchContexts;
-(void)_refresh:(id)arg1 ;
-(float)firstRippleInitialRadius;
-(float)fadeOutRadius;
-(id)_reusableRingLayer;
-(unsigned)_lastRingLayerIdentifier;
-(void)_setLastRingLayerIdentifier:(unsigned)arg1 ;
-(NSMutableDictionary *)_ringLayersByIdentifiers;
-(CAAnimation *)_ringEnlargementAnimation;
-(void)_enqueueReusableRingLayer:(id)arg1 ;
-(void)_setCurrentTouchStartTime:(double)arg1 ;
-(void)_setCurrentTouchLocation:(CGPoint)arg1 ;
-(void)_touchBeganAtLocation:(CGPoint)arg1 ;
-(void)_touchMovedToLocation:(CGPoint)arg1 ;
-(void)_touchEndedAtLocation:(CGPoint)arg1 ;
-(char)_isTouchDown;
@end

