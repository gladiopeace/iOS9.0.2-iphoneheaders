/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CABehavior.h>

@class NSArray;

@interface CADynamicsBehavior : CABehavior

@property (copy) NSArray * springs; 
@property (copy) NSArray * forceFields; 
@property (assign) double timeStep; 
@property (assign) double minimumTimeStep; 
@property (assign) float stoppedVelocity; 
@property (assign) float stoppedAngularVelocity; 
@property (assign) float springScale; 
@property (assign) float drag; 
@property (assign) float angularDrag; 
@property (assign) char reactsToCollisions; 
@property (assign) double collisionInterval; 
+(id)defaultValueForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(NSArray *)springs;
-(NSArray *)forceFields;
-(double)minimumTimeStep;
-(float)stoppedVelocity;
-(float)stoppedAngularVelocity;
-(double)collisionInterval;
-(float)springScale;
-(float)drag;
-(float)angularDrag;
-(char)reactsToCollisions;
-(void)setForceFields:(NSArray *)arg1 ;
-(void)setMinimumTimeStep:(double)arg1 ;
-(void)setStoppedVelocity:(float)arg1 ;
-(void)setStoppedAngularVelocity:(float)arg1 ;
-(void)setCollisionInterval:(double)arg1 ;
-(void)setSpringScale:(float)arg1 ;
-(void)setDrag:(float)arg1 ;
-(void)setAngularDrag:(float)arg1 ;
-(void)setTimeStep:(double)arg1 ;
-(double)timeStep;
-(void)setSprings:(NSArray *)arg1 ;
-(void)setReactsToCollisions:(char)arg1 ;
@end

