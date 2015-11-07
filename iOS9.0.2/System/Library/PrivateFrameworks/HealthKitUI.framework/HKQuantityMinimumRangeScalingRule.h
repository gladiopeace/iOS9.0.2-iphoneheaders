/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HKAbstractMinimumRangeScalingRule.h>

@class HKQuantity, NSDictionary, HKUnit;

@interface HKQuantityMinimumRangeScalingRule : HKAbstractMinimumRangeScalingRule {

	HKQuantity* _defaultYAxisRangeQuantity;
	NSDictionary* _axisRangeQuantityOverrides;
	HKUnit* _unit;

}

@property (nonatomic,retain) HKUnit * unit;              //@synthesize unit=_unit - In the implementation block
+(id)ruleWithDefaultYAxisRange:(id)arg1 axisRangeOverrides:(id)arg2 ;
-(char)isCompatibleWithQuantityType:(id)arg1 ;
-(void)_convertQuantities;
-(HKUnit *)unit;
-(void)setUnit:(HKUnit *)arg1 ;
@end

