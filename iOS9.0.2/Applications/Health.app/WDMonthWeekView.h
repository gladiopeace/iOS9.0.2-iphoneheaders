/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HKCalendarWeekView.h>

@class NSSet;

@interface WDMonthWeekView : HKCalendarWeekView {

	NSSet* _weekendDays;

}

@property (retain) NSSet * weekendDays;              //@synthesize weekendDays=_weekendDays - In the implementation block
-(void)setWeekendDays:(NSSet *)arg1 ;
-(NSSet *)weekendDays;
-(Class)cellClass;
-(id)initWithDateCache:(id)arg1 ;
-(Class)monthTitleClass;
-(void)didUpdateCell:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)pressedOnCalendarDay:(int)arg1 cell:(id)arg2 down:(char)arg3 ;
-(void)selectedCalendarDay:(id)arg1 ;
@end
