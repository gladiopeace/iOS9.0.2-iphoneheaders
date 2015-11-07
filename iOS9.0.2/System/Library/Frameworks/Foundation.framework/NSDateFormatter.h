/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSObservable.h>
#import <libobjc.A.dylib/NSObserver.h>

@protocol OS_dispatch_semaphore;
@class NSMutableDictionary, NSObject, NSString, NSLocale, NSTimeZone, NSCalendar, NSDate, NSArray;

@interface NSDateFormatter : NSFormatter <NSObservable, NSObserver> {

	NSMutableDictionary* _attributes;
	CFDateFormatterRef _formatter;
	unsigned _counter;
	NSObject*<OS_dispatch_semaphore> _lock;
	int _cacheGeneration;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int formattingContext; 
@property (copy) NSString * dateFormat; 
@property (assign) unsigned dateStyle; 
@property (assign) unsigned timeStyle; 
@property (copy) NSLocale * locale; 
@property (assign) char generatesCalendarDates; 
@property (assign) unsigned formatterBehavior; 
@property (copy) NSTimeZone * timeZone; 
@property (copy) NSCalendar * calendar; 
@property (getter=isLenient) char lenient; 
@property (copy) NSDate * twoDigitStartDate; 
@property (copy) NSDate * defaultDate; 
@property (copy) NSArray * eraSymbols; 
@property (copy) NSArray * monthSymbols; 
@property (copy) NSArray * shortMonthSymbols; 
@property (copy) NSArray * weekdaySymbols; 
@property (copy) NSArray * shortWeekdaySymbols; 
@property (copy) NSString * AMSymbol; 
@property (copy) NSString * PMSymbol; 
@property (copy) NSArray * longEraSymbols; 
@property (copy) NSArray * veryShortMonthSymbols; 
@property (copy) NSArray * standaloneMonthSymbols; 
@property (copy) NSArray * shortStandaloneMonthSymbols; 
@property (copy) NSArray * veryShortStandaloneMonthSymbols; 
@property (copy) NSArray * veryShortWeekdaySymbols; 
@property (copy) NSArray * standaloneWeekdaySymbols; 
@property (copy) NSArray * shortStandaloneWeekdaySymbols; 
@property (copy) NSArray * veryShortStandaloneWeekdaySymbols; 
@property (copy) NSArray * quarterSymbols; 
@property (copy) NSArray * shortQuarterSymbols; 
@property (copy) NSArray * standaloneQuarterSymbols; 
@property (copy) NSArray * shortStandaloneQuarterSymbols; 
@property (copy) NSDate * gregorianStartDate; 
@property (assign) char doesRelativeDateFormatting; 
+(id)mf_formatDate:(id)arg1 shortStyle:(char)arg2 ;
+(id)CalSharedDateFormatter;
+(void)setDefaultFormatterBehavior:(unsigned)arg1 ;
+(unsigned)defaultFormatterBehavior;
+(id)_componentsFromFormatString:(id)arg1 ;
+(id)_formatStringFromComponents:(id)arg1 ;
+(void)initialize;
+(id)dateFormatFromTemplate:(id)arg1 options:(unsigned)arg2 locale:(id)arg3 ;
+(id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned)arg2 timeStyle:(unsigned)arg3 ;
-(NSDate *)gregorianStartDate;
-(void)setGregorianStartDate:(NSDate *)arg1 ;
-(int)formattingContext;
-(unsigned)dateStyle;
-(unsigned)timeStyle;
-(char)_mayDecorateAttributedStringForObjectValue:(id)arg1 ;
-(int)_cacheGenerationCount;
-(char)_tracksCacheGenerationCount;
-(void)_clearFormatter;
-(void)_regenerateFormatter;
-(unsigned)formatterBehavior;
-(char)isLenient;
-(char)_usesCharacterDirection;
-(void)_setUsesCharacterDirection:(char)arg1 ;
-(id)_timeZone_forOldMethods;
-(id)_locale_forOldMethods;
-(void)_regenerateFormatterIfAbsent;
-(id)_getLocaleAlreadyLocked:(char)arg1 ;
-(void)_setDateFormat:(id)arg1 alreadyLocked:(char)arg2 ;
-(char)generatesCalendarDates;
-(void)setGeneratesCalendarDates:(char)arg1 ;
-(id)_dateFormat;
-(void)_setDateFormat:(id)arg1 ;
-(void)_setIsLenient:(char)arg1 ;
-(NSDate *)twoDigitStartDate;
-(void)setTwoDigitStartDate:(NSDate *)arg1 ;
-(NSDate *)defaultDate;
-(void)setDefaultDate:(NSDate *)arg1 ;
-(NSArray *)eraSymbols;
-(void)setEraSymbols:(NSArray *)arg1 ;
-(NSArray *)monthSymbols;
-(void)setMonthSymbols:(NSArray *)arg1 ;
-(void)setShortMonthSymbols:(NSArray *)arg1 ;
-(void)setWeekdaySymbols:(NSArray *)arg1 ;
-(NSArray *)shortWeekdaySymbols;
-(void)setShortWeekdaySymbols:(NSArray *)arg1 ;
-(void)setAMSymbol:(NSString *)arg1 ;
-(void)setPMSymbol:(NSString *)arg1 ;
-(NSArray *)longEraSymbols;
-(void)setLongEraSymbols:(NSArray *)arg1 ;
-(NSArray *)veryShortMonthSymbols;
-(void)setVeryShortMonthSymbols:(NSArray *)arg1 ;
-(void)setStandaloneMonthSymbols:(NSArray *)arg1 ;
-(void)setShortStandaloneMonthSymbols:(NSArray *)arg1 ;
-(NSArray *)veryShortStandaloneMonthSymbols;
-(void)setVeryShortStandaloneMonthSymbols:(NSArray *)arg1 ;
-(NSArray *)veryShortWeekdaySymbols;
-(void)setVeryShortWeekdaySymbols:(NSArray *)arg1 ;
-(void)setStandaloneWeekdaySymbols:(NSArray *)arg1 ;
-(void)setShortStandaloneWeekdaySymbols:(NSArray *)arg1 ;
-(NSArray *)veryShortStandaloneWeekdaySymbols;
-(void)setVeryShortStandaloneWeekdaySymbols:(NSArray *)arg1 ;
-(NSArray *)quarterSymbols;
-(void)setQuarterSymbols:(NSArray *)arg1 ;
-(NSArray *)shortQuarterSymbols;
-(void)setShortQuarterSymbols:(NSArray *)arg1 ;
-(NSArray *)standaloneQuarterSymbols;
-(void)setStandaloneQuarterSymbols:(NSArray *)arg1 ;
-(NSArray *)shortStandaloneQuarterSymbols;
-(void)setShortStandaloneQuarterSymbols:(NSArray *)arg1 ;
-(char)doesRelativeDateFormatting;
-(id)_attributedStringWithFieldsFromDate:(id)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout NSRange*)arg3 error:(out id*)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDateFormat:(NSString *)arg1 ;
-(id)stringFromDate:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(void)setDateStyle:(unsigned)arg1 ;
-(void)setTimeStyle:(unsigned)arg1 ;
-(void)setLocalizedDateFormatFromTemplate:(id)arg1 ;
-(void)setDoesRelativeDateFormatting:(char)arg1 ;
-(NSString *)AMSymbol;
-(NSString *)PMSymbol;
-(void)receiveObservedValue:(id)arg1 ;
-(void)_reset;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSCalendar *)calendar;
-(NSLocale *)locale;
-(void)_invalidateCache;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setFormatterBehavior:(unsigned)arg1 ;
-(id)dateFromString:(id)arg1 ;
-(char)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(NSArray *)standaloneMonthSymbols;
-(NSArray *)weekdaySymbols;
-(NSArray *)standaloneWeekdaySymbols;
-(NSArray *)shortMonthSymbols;
-(NSArray *)shortStandaloneMonthSymbols;
-(NSArray *)shortStandaloneWeekdaySymbols;
-(void)finalize;
-(void)setLenient:(char)arg1 ;
-(NSString *)dateFormat;
-(void)setFormattingContext:(int)arg1 ;
@end

