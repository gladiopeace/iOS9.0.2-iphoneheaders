/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class UITouch;

@interface UIPinchGestureRecognizer : UIGestureRecognizer {

	float _initialTouchDistance;
	float _initialTouchScale;
	double _lastTouchTime;
	float _velocity;
	float _previousVelocity;
	float _scaleThreshold;
	CGAffineTransform _transform;
	CGPoint _anchorSceneReferencePoint;
	UITouch* _touches[2];
	float _hysteresis;
	id _transformAnalyzer;
	unsigned _endsOnSingleTouch : 1;
	char __enableNestedHysteresis;

}

@property (assign,nonatomic) float scale; 
@property (nonatomic,readonly) float velocity; 
@property (assign,nonatomic) float scaleThreshold;                                                    //@synthesize scaleThreshold=_scaleThreshold - In the implementation block
@property (nonatomic,readonly) CGPoint anchorPoint; 
@property (assign,setter=_setHysteresis:,getter=_hysteresis,nonatomic) float hysteresis;              //@synthesize hysteresis=_hysteresis - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform;                                             //@synthesize transform=_transform - In the implementation block
@property (assign,nonatomic) char _enableNestedHysteresis;                                            //@synthesize _enableNestedHysteresis=__enableNestedHysteresis - In the implementation block
+(char)_shouldDefaultToTouches;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(float)_hysteresis;
-(void)_setHysteresis:(float)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(float)velocity;
-(CGPoint)anchorPoint;
-(void)set_enableNestedHysteresis:(char)arg1 ;
-(void)_resetGestureRecognizer;
-(char)_endsOnSingleTouch;
-(void)_setEndsOnSingleTouch:(char)arg1 ;
-(float)scaleThreshold;
-(void)setScaleThreshold:(float)arg1 ;
-(char)_enableNestedHysteresis;
@end

