/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>

@class CAMediaTimingFunction, NSString;

@interface PKUISpringAnimationFactory : NSObject <_UIBasicAnimationFactory> {

	double _duration;
	char _needsDurationUpdate;
	/*^block*/id _animationDelayHandler;
	float _mass;
	float _stiffness;
	float _damping;
	float _velocity;
	CAMediaTimingFunction* _timing;
	double _maximumVendedDelay;

}

@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic) float mass;                                  //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) float stiffness;                             //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) float damping;                               //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) float velocity;                              //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timing;              //@synthesize timing=_timing - In the implementation block
@property (nonatomic,readonly) double maximumVendedDelay;                 //@synthesize maximumVendedDelay=_maximumVendedDelay - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)springAnimationWithKeyPath:(id)arg1 ;
+(id)springAnimationWithKeyPath:(id)arg1 velocity:(float)arg2 ;
+(id)defaultTimingFunction;
-(id)initWithVelocity:(float)arg1 ;
-(id)springAnimationWithKeyPath:(id)arg1 ;
-(void)setAnimationDelayHandler:(/*^block*/id)arg1 ;
-(id)springAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)initWithVelocity:(float)arg1 timing:(id)arg2 ;
-(id)initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 velocity:(float)arg4 timing:(id)arg5 ;
-(id)_springAnimationWithKeyPath:(id)arg1 ;
-(id)_springAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(void)_updateDurationIfNecessary;
-(id)initWithMass:(float)arg1 stiffness:(float)arg2 damping:(float)arg3 velocity:(float)arg4 ;
-(/*^block*/id)animationDelayHandler;
-(float)stiffness;
-(double)maximumVendedDelay;
-(void)dealloc;
-(id)init;
-(void)setVelocity:(float)arg1 ;
-(void)setStiffness:(float)arg1 ;
-(void)setDamping:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(double)duration;
-(float)velocity;
-(float)damping;
-(float)mass;
-(CAMediaTimingFunction *)timing;
-(void)setTiming:(CAMediaTimingFunction *)arg1 ;
@end

