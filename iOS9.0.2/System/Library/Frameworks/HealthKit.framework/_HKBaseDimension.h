/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/_HKDimension.h>
#import <libobjc.A.dylib/_HKFactor.h>

@class NSString, HKBaseUnit, HKUnit;

@interface _HKBaseDimension : _HKDimension <_HKFactor> {

	NSString* _name;
	HKBaseUnit* _reducibleBaseUnit;
	HKUnit* _reducedUnit;
	double _reductionCoefficient;

}

@property (nonatomic,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) HKBaseUnit * reducibleBaseUnit;              //@synthesize reducibleBaseUnit=_reducibleBaseUnit - In the implementation block
@property (nonatomic,retain) HKUnit * reducedUnit;                        //@synthesize reducedUnit=_reducedUnit - In the implementation block
@property (assign,nonatomic) double reductionCoefficient;                 //@synthesize reductionCoefficient=_reductionCoefficient - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_uniquedDefinedDimensionWithName:(id)arg1 ;
+(id)_uniquedDimensionWithName:(id)arg1 configuration:(/*^block*/id)arg2 ;
+(id)conductance;
+(id)nullDimension;
+(id)length;
+(id)time;
+(id)mass;
+(id)pressure;
+(id)volume;
+(id)energy;
+(id)temperature;
-(id)_initWithName:(id)arg1 ;
-(id)_baseDimensions;
-(char)canBeReduced;
-(HKUnit *)reducedUnit;
-(void)setReducibleBaseUnit:(HKBaseUnit *)arg1 ;
-(void)setReducedUnit:(HKUnit *)arg1 ;
-(HKBaseUnit *)reducibleBaseUnit;
-(double)reductionCoefficient;
-(void)setReductionCoefficient:(double)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSString *)name;
-(id)unitString;
@end

