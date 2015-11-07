/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDate.h>

@class NSTimeZone, NSString;

@interface NSCalendarDate : NSDate {

	unsigned refCount;
	double _timeIntervalSinceReferenceDate;
	NSTimeZone* _timeZone;
	NSString* _formatString;
	void* _reserved;

}
+(id)combinedDateWithYMDFrom:(id)arg1 HMSFrom:(id)arg2 componentDatesTimezone:(id)arg3 ;
+(id)calendarDate;
+(id)dateWithYear:(int)arg1 month:(unsigned)arg2 day:(unsigned)arg3 hour:(unsigned)arg4 minute:(unsigned)arg5 second:(unsigned)arg6 timeZone:(id)arg7 ;
+(id)dateWithString:(id)arg1 calendarFormat:(id)arg2 ;
+(id)dateWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3 ;
+(id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3 ;
+(id)distantFuture;
+(id)distantPast;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)tzDateToDateInGMT:(id)arg1 ;
-(id)gmtDateToDateInTimeZone:(id)arg1 ;
-(id)nearestMidnight;
-(void)getGregorianDate:(SCD_Struct_NS9*)arg1 ;
-(id)ekmsuidGMTDateToDateInTimeZone:(id)arg1 ;
-(id)ekmsuidStringForYearMonthDay;
-(void)setCalendarFormat:(id)arg1 ;
-(id)initWithYear:(int)arg1 month:(unsigned)arg2 day:(unsigned)arg3 hour:(unsigned)arg4 minute:(unsigned)arg5 second:(unsigned)arg6 timeZone:(id)arg7 ;
-(id)calendarFormat;
-(id)descriptionWithCalendarFormat:(id)arg1 locale:(id)arg2 ;
-(id)initWithString:(id)arg1 calendarFormat:(id)arg2 locale:(id)arg3 ;
-(id)timeZoneDetail;
-(int)dayOfCommonEra;
-(int)yearOfCommonEra;
-(int)monthOfYear;
-(int)dayOfMonth;
-(int)dayOfYear;
-(int)minuteOfHour;
-(int)secondOfMinute;
-(int)microsecondOfSecond;
-(id)dateByAddingYears:(int)arg1 months:(int)arg2 days:(int)arg3 hours:(int)arg4 minutes:(int)arg5 seconds:(int)arg6 ;
-(void)years:(int*)arg1 months:(int*)arg2 days:(int*)arg3 hours:(int*)arg4 minutes:(int*)arg5 seconds:(int*)arg6 sinceDate:(id)arg7 ;
-(id)addTimeInterval:(double)arg1 ;
-(id)descriptionWithCalendarFormat:(id)arg1 ;
-(id)initWithString:(id)arg1 calendarFormat:(id)arg2 ;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(oneway void)release;
-(id)description;
-(double)timeIntervalSinceReferenceDate;
-(void)setTimeZone:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)initWithString:(id)arg1 ;
-(id)timeZone;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
-(int)dayOfWeek;
-(int)hourOfDay;
-(id)descriptionWithLocale:(id)arg1 ;
@end

