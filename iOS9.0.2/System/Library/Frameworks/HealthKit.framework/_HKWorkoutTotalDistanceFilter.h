/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/_HKFilter.h>

@class HKQuantity;

@interface _HKWorkoutTotalDistanceFilter : _HKFilter {

	HKQuantity* _totalDistance;
	unsigned _operatorType;

}

@property (nonatomic,readonly) HKQuantity * totalDistance;              //@synthesize totalDistance=_totalDistance - In the implementation block
@property (nonatomic,readonly) unsigned operatorType;                   //@synthesize operatorType=_operatorType - In the implementation block
+(id)filterForKeyPath:(id)arg1 predicateOperatorType:(unsigned)arg2 value:(id)arg3 dataTypes:(id)arg4 ;
+(id)filterWithTotalDistance:(id)arg1 operatorType:(unsigned)arg2 ;
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(HKQuantity *)totalDistance;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)acceptsDataObject:(id)arg1 ;
-(unsigned)operatorType;
@end

