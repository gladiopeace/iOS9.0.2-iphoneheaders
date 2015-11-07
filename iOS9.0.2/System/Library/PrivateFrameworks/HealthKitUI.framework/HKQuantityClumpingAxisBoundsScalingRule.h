/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKInteractiveChartsAxisScalingRule.h>

@class NSDictionary, NSArray, HKUnit, NSString;

@interface HKQuantityClumpingAxisBoundsScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {

	NSDictionary* _chartBoundsRuleChoicesByUnit;
	NSArray* _chartBoundsRuleChoices;
	HKUnit* _unit;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ruleWithChartBoundsRuleChoicesByUnit:(id)arg1 ;
-(id)yValueRangeForRange:(id)arg1 zoomLevel:(int)arg2 ;
-(void)_convertQuantityRanges;
-(void)setUnit:(id)arg1 ;
@end

