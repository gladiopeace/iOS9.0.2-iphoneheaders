/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class SCNParticleSystem, NSArray, OKDocument, NSDictionary, NSString;

@interface OKWidgetParticleEmitter : NSObject <OKSettingsSupport> {

	SCNParticleSystem* _particuleSystem;
	NSArray* _colliderNodeNames;
	OKDocument* _document;
	NSDictionary* _settings;

}

@property (nonatomic,retain,readonly) SCNParticleSystem * particuleSystem;              //@synthesize particuleSystem=_particuleSystem - In the implementation block
@property (nonatomic,retain,readonly) NSArray * colliderNodeNames;                      //@synthesize colliderNodeNames=_colliderNodeNames - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
-(void)dealloc;
-(id)initWithSettings:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(char)settingLoops;
-(void)setSettingLoops:(char)arg1 ;
-(float)settingBirthRate;
-(void)setSettingBirthRate:(float)arg1 ;
-(NSArray *)colliderNodeNames;
-(SCNParticleSystem *)particuleSystem;
-(void)loadParticleImage:(id)arg1 ;
-(void)setSettingFileName:(id)arg1 ;
-(void)setSettingEmissionDuration:(float)arg1 ;
-(float)settingEmissionDuration;
-(void)setSettingEmissionDurationVariation:(float)arg1 ;
-(float)settingEmissionDurationVariation;
-(void)setSettingIdleDuration:(float)arg1 ;
-(float)settingIdleDuration;
-(void)setSettingIdleDurationVariation:(float)arg1 ;
-(float)settingIdleDurationVariation;
-(void)setSettingBirthRateVariation:(float)arg1 ;
-(float)settingBirthRateVariation;
-(void)setSettingWarmupDuration:(float)arg1 ;
-(float)settingWarmupDuration;
-(void)setSettingEmitterShape:(id)arg1 ;
-(id)settingEmitterShape;
-(void)setSettingBirthLocation:(int)arg1 ;
-(int)settingBirthLocation;
-(void)setSettingBirthDirection:(int)arg1 ;
-(int)settingBirthDirection;
-(void)setSettingSpreadingAngle:(float)arg1 ;
-(float)settingSpreadingAngle;
-(void)setSettingEmittingDirection:(SCNVector3)arg1 ;
-(SCNVector3)settingEmittingDirection;
-(void)setSettingAcceleration:(SCNVector3)arg1 ;
-(SCNVector3)settingAcceleration;
-(void)setSettingLocal:(char)arg1 ;
-(char)settingLocal;
-(void)setSettingParticleAngle:(float)arg1 ;
-(float)settingParticleAngle;
-(void)setSettingParticleAngleVariation:(float)arg1 ;
-(float)settingParticleAngleVariation;
-(void)setSettingParticleVelocity:(float)arg1 ;
-(float)settingParticleVelocity;
-(void)setSettingParticleVelocityVariation:(float)arg1 ;
-(float)settingParticleVelocityVariation;
-(void)setSettingParticleAngularVelocity:(float)arg1 ;
-(float)settingParticleAngularVelocity;
-(void)setSettingParticleAngularVelocityVariation:(float)arg1 ;
-(float)settingParticleAngularVelocityVariation;
-(void)setSettingParticleLifeSpan:(float)arg1 ;
-(float)settingParticleLifeSpan;
-(void)setSettingParticleLifeSpanVariation:(float)arg1 ;
-(float)settingParticleLifeSpanVariation;
-(void)setSettingSystemSpawnedOnDying:(id)arg1 ;
-(id)settingSystemSpawnedOnDying;
-(void)setSettingSystemSpawnedOnCollision:(id)arg1 ;
-(id)settingSystemSpawnedOnCollision;
-(void)setSettingSystemSpawnedOnLiving:(id)arg1 ;
-(id)settingSystemSpawnedOnLiving;
-(void)setSettingParticleImage:(id)arg1 ;
-(id)settingParticleImage;
-(void)setSettingImageSequenceColumnCount:(unsigned)arg1 ;
-(unsigned)settingImageSequenceColumnCount;
-(void)setSettingImageSequenceRowCount:(unsigned)arg1 ;
-(unsigned)settingImageSequenceRowCount;
-(void)setSettingImageSequenceInitialFrame:(float)arg1 ;
-(float)settingImageSequenceInitialFrame;
-(void)setSettingImageSequenceInitialFrameVariation:(float)arg1 ;
-(float)settingImageSequenceInitialFrameVariation;
-(void)setSettingImageSequenceFrameRate:(float)arg1 ;
-(float)settingImageSequenceFrameRate;
-(void)setSettingImageSequenceFrameRateVariation:(float)arg1 ;
-(float)settingImageSequenceFrameRateVariation;
-(void)setSettingImageSequenceAnimationMode:(int)arg1 ;
-(int)settingImageSequenceAnimationMode;
-(void)setSettingParticleColor:(id)arg1 ;
-(id)settingParticleColor;
-(void)setSettingParticleColorVariation:(SCNVector4)arg1 ;
-(SCNVector4)settingParticleColorVariation;
-(void)setSettingParticleSize:(float)arg1 ;
-(float)settingParticleSize;
-(void)setSettingParticleSizeVariation:(float)arg1 ;
-(float)settingParticleSizeVariation;
-(void)setSettingBlendMode:(int)arg1 ;
-(int)settingBlendMode;
-(void)setSettingBlackPassEnabled:(char)arg1 ;
-(char)settingBlackPassEnabled;
-(void)setSettingOrientationMode:(int)arg1 ;
-(int)settingOrientationMode;
-(void)setSettingSortingMode:(int)arg1 ;
-(int)settingSortingMode;
-(void)setSettingLightingEnabled:(char)arg1 ;
-(char)settingLightingEnabled;
-(void)setSettingSoftParticlesEnabled:(char)arg1 ;
-(char)settingSoftParticlesEnabled;
-(void)setSettingAffectedByGravity:(char)arg1 ;
-(char)settingAffectedByGravity;
-(void)setSettingAffectedByPhysicsFields:(char)arg1 ;
-(char)settingAffectedByPhysicsFields;
-(void)setSettingParticleDiesOnCollision:(char)arg1 ;
-(char)settingParticleDiesOnCollision;
-(void)setSettingColliderNodeNames:(id)arg1 ;
-(id)settingColliderNodeNames;
-(void)setSettingParticleMass:(float)arg1 ;
-(float)settingParticleMass;
-(void)setSettingParticleMassVariation:(float)arg1 ;
-(float)settingParticleMassVariation;
-(void)setSettingParticleBounce:(float)arg1 ;
-(float)settingParticleBounce;
-(void)setSettingParticleBounceVariation:(float)arg1 ;
-(float)settingParticleBounceVariation;
-(void)setSettingParticleFriction:(float)arg1 ;
-(float)settingParticleFriction;
-(void)setSettingParticleFrictionVariation:(float)arg1 ;
-(float)settingParticleFrictionVariation;
-(void)setSettingDampingFactor:(float)arg1 ;
-(float)settingDampingFactor;
-(void)setSettingSpeedFactor:(float)arg1 ;
-(float)settingSpeedFactor;
-(void)setSettingStretchFactor:(float)arg1 ;
-(float)settingStretchFactor;
-(void)setSettingFresnelExponent:(float)arg1 ;
-(float)settingFresnelExponent;
-(void)setSettingPropertyControllers:(id)arg1 ;
-(id)settingPropertyControllers;
@end

