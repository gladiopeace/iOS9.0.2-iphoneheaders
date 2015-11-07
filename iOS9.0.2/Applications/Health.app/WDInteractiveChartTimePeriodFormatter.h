/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/WDInteractiveChartDataFormatter.h>

@class WDTimePeriodDataUnitValueFormatter;

@interface WDInteractiveChartTimePeriodFormatter : WDInteractiveChartDataFormatter {

	WDTimePeriodDataUnitValueFormatter* _timePeriodFormatter;
	double _timePeriod;

}

@property (assign,nonatomic) double timePeriod;              //@synthesize timePeriod=_timePeriod - In the implementation block
-(id)formattedStringWithMajorFont:(id)arg1 minorFont:(id)arg2 unitController:(id)arg3 dataUnitGroup:(id)arg4 ;
-(id)_prefixStringWithDataUnitGroup:(id)arg1 ;
-(double)timePeriod;
-(void)setTimePeriod:(double)arg1 ;
@end

