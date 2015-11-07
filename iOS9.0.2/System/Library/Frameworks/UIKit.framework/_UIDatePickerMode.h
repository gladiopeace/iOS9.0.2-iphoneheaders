/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSDateComponents, NSString, NSArray, UIColor, UIFont, NSNumberFormatter, _UIDatePickerView, NSDate;

@interface _UIDatePickerMode : NSObject {

	NSDateComponents* _selectedDateComponents;
	NSDateComponents* _baseDateComponents;
	unsigned* _elements;
	int _yearsSinceBaseDate;
	NSRange _maxDayRange;
	NSRange _maxMonthRange;
	NSString* _localizedFormatString;
	NSArray* _dateFormatters;
	UIColor* _todayTextColor;
	UIFont* _amPmFont;
	UIFont* _font;
	UIFont* _defaultTimeFont;
	NSString* _amString;
	NSString* _pmString;
	NSDateComponents* _todayDateComponents;
	NSNumberFormatter* _formatter;
	_UIDatePickerView* _datePickerView;
	char _isUsingJapaneseCalendar;
	unsigned _numberOfComponents;
	int _minuteInterval;
	NSDate* _minimumDate;
	NSDateComponents* _minimumDateComponents;
	NSDate* _maximumDate;
	NSDateComponents* _maximumDateComponents;
	NSDate* _baseDate;
	NSDate* _originatingDate;
	double _todaySinceReferenceDate;

}

@property (nonatomic,readonly) int datePickerMode; 
@property (nonatomic,readonly) float rowHeight; 
@property (assign,nonatomic) unsigned numberOfComponents;                                      //@synthesize numberOfComponents=_numberOfComponents - In the implementation block
@property (nonatomic,readonly) int displayedCalendarUnits; 
@property (nonatomic,readonly) UIColor * todayTextColor; 
@property (assign,nonatomic) int minuteInterval;                                               //@synthesize minuteInterval=_minuteInterval - In the implementation block
@property (nonatomic,retain) NSDateComponents * todayDateComponents; 
@property (assign,nonatomic) double todaySinceReferenceDate;                                   //@synthesize todaySinceReferenceDate=_todaySinceReferenceDate - In the implementation block
@property (nonatomic,readonly) NSDate * minimumDate;                                           //@synthesize minimumDate=_minimumDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * minimumDateComponents;                       //@synthesize minimumDateComponents=_minimumDateComponents - In the implementation block
@property (nonatomic,readonly) NSDate * maximumDate;                                           //@synthesize maximumDate=_maximumDate - In the implementation block
@property (nonatomic,readonly) NSDateComponents * maximumDateComponents;                       //@synthesize maximumDateComponents=_maximumDateComponents - In the implementation block
@property (nonatomic,retain) NSDateComponents * selectedDateComponents;                        //@synthesize selectedDateComponents=_selectedDateComponents - In the implementation block
@property (nonatomic,readonly) float totalComponentWidth; 
@property (getter=is24Hour,nonatomic,readonly) char is24Hour; 
@property (getter=isTimeIntervalMode,nonatomic,readonly) char isTimeIntervalMode; 
@property (assign,nonatomic,__weak) _UIDatePickerView * datePickerView;                        //@synthesize datePickerView=_datePickerView - In the implementation block
@property (nonatomic,readonly) UIFont * amPmFont; 
@property (nonatomic,readonly) UIFont * font; 
@property (nonatomic,readonly) UIFont * defaultTimeFont; 
@property (nonatomic,readonly) UIFont * sizedFont; 
@property (nonatomic,readonly) NSString * amString; 
@property (nonatomic,readonly) NSString * pmString; 
@property (assign,nonatomic) unsigned* elements; 
@property (nonatomic,retain) NSString * localizedFormatString;                                 //@synthesize localizedFormatString=_localizedFormatString - In the implementation block
@property (nonatomic,retain) NSDate * baseDate;                                                //@synthesize baseDate=_baseDate - In the implementation block
@property (nonatomic,retain) NSDateComponents * baseDateComponents; 
@property (assign,nonatomic) int yearsSinceBaseDate;                                           //@synthesize yearsSinceBaseDate=_yearsSinceBaseDate - In the implementation block
@property (nonatomic,retain) NSDate * originatingDate;                                         //@synthesize originatingDate=_originatingDate - In the implementation block
+(void)initialize;
+(int)datePickerMode;
+(id)_datePickerModeWithMode:(int)arg1 datePickerView:(id)arg2 ;
+(unsigned)extractableCalendarUnits;
+(id)newDateFromGregorianYear:(int)arg1 month:(int)arg2 day:(int)arg3 timeZone:(id)arg4 ;
+(id)_datePickerModeWithFormatString:(id)arg1 datePickerView:(id)arg2 ;
-(void)dealloc;
-(unsigned)numberOfComponents;
-(id)init;
-(int)numberOfRowsInComponent:(int)arg1 ;
-(float)rowHeight;
-(unsigned*)elements;
-(UIFont *)font;
-(NSString *)amString;
-(NSString *)pmString;
-(void)setMinuteInterval:(int)arg1 ;
-(int)datePickerMode;
-(id)timeZone;
-(id)calendar;
-(NSDate *)minimumDate;
-(NSDate *)maximumDate;
-(int)minuteInterval;
-(id)locale;
-(char)isTimeIntervalMode;
-(void)setTodayDateComponents:(NSDateComponents *)arg1 ;
-(void)noteCalendarChanged;
-(void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2 ;
-(int)displayedCalendarUnits;
-(int)componentForCalendarUnit:(unsigned)arg1 ;
-(char)is24Hour;
-(int)hourForRow:(int)arg1 ;
-(void)updateSelectedDateComponentsWithNewValueInComponent:(int)arg1 ;
-(void)loadDate:(id)arg1 animated:(char)arg2 ;
-(int)minuteForRow:(int)arg1 ;
-(char)areValidDateComponents:(id)arg1 comparingUnits:(int)arg2 ;
-(id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(int)arg2 ;
-(NSDateComponents *)selectedDateComponents;
-(id)fontForCalendarUnit:(unsigned)arg1 ;
-(id)viewForRow:(int)arg1 inComponent:(int)arg2 reusingView:(id)arg3 ;
-(unsigned)calendarUnitForComponent:(int)arg1 ;
-(void)updateEnabledStateOfViewForRow:(int)arg1 inComponent:(int)arg2 ;
-(float)totalComponentWidth;
-(float)widthForComponent:(int)arg1 maxWidth:(float)arg2 ;
-(void)resetComponentWidths;
-(void)resetSelectedDateComponentsWithValuesUnderSelectionBars;
-(void)setDatePickerView:(_UIDatePickerView *)arg1 ;
-(void)_shouldReset:(id)arg1 ;
-(_UIDatePickerView *)datePickerView;
-(id)dateFormatterForCalendarUnit:(unsigned)arg1 ;
-(id)calendarForFormatters;
-(id)dateFormatForCalendarUnit:(unsigned)arg1 ;
-(void)setTodaySinceReferenceDate:(double)arg1 ;
-(NSDateComponents *)todayDateComponents;
-(void)setOriginatingDate:(NSDate *)arg1 ;
-(void)setBaseDateComponents:(NSDateComponents *)arg1 ;
-(void)setBaseDate:(NSDate *)arg1 ;
-(void)setYearsSinceBaseDate:(int)arg1 ;
-(NSDateComponents *)baseDateComponents;
-(NSDate *)baseDate;
-(UIFont *)amPmFont;
-(UIFont *)sizedFont;
-(float)totalComponentWidthWithFont:(id)arg1 ;
-(float)widthForCalendarUnit:(unsigned)arg1 font:(id)arg2 maxWidth:(float)arg3 ;
-(void)setNumberOfComponents:(unsigned)arg1 ;
-(NSString *)localizedFormatString;
-(void)setElements:(unsigned*)arg1 ;
-(void)fixUpElementsForRTL;
-(int)numberOfRowsForCalendarUnit:(unsigned)arg1 ;
-(void)clearBaseDate;
-(void)setLocalizedFormatString:(NSString *)arg1 ;
-(int)_yearlessYearForMonth:(int)arg1 ;
-(unsigned)nextUnitSmallerThanUnit:(unsigned)arg1 ;
-(unsigned)nextUnitLargerThanUnit:(unsigned)arg1 ;
-(NSRange)rangeForCalendarUnit:(unsigned)arg1 ;
-(int)_incrementForStaggeredTimeIntervals;
-(id)_dateForYearRow:(int)arg1 ;
-(int)secondForRow:(int)arg1 ;
-(int)dayForRow:(int)arg1 ;
-(int)monthForRow:(int)arg1 ;
-(int)yearForRow:(int)arg1 ;
-(int)eraForYearRow:(int)arg1 ;
-(int)valueForRow:(int)arg1 inCalendarUnit:(unsigned)arg2 ;
-(id)_dateByEnsuringValue:(int)arg1 forCalendarUnit:(unsigned)arg2 ;
-(id)dateForRow:(int)arg1 inCalendarUnit:(unsigned)arg2 ;
-(int)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned)arg3 ;
-(int)rowForValue:(int)arg1 forCalendarUnit:(unsigned)arg2 currentRow:(int)arg3 ;
-(int)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(int)arg3 currentRow:(int)arg4 ;
-(void)setSelectedDateComponents:(NSDateComponents *)arg1 ;
-(void)_updateSelectedDateComponentsWithNewValueInComponent:(int)arg1 usingSelectionBarValue:(char)arg2 ;
-(NSDate *)originatingDate;
-(char)_monthExists:(int)arg1 inYear:(int)arg2 ;
-(int)_numberOfDaysInDateComponents:(id)arg1 ;
-(int)titleAlignmentForCalendarUnit:(unsigned)arg1 ;
-(id)titleForRow:(int)arg1 inComponent:(int)arg2 ;
-(char)_shouldEnableValueForRow:(int)arg1 column:(int)arg2 ;
-(UIColor *)todayTextColor;
-(char)_isComponentScrolling:(int)arg1 ;
-(char)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned)arg3 ;
-(char)_scrollingAnyColumnExcept:(int)arg1 ;
-(float)componentWidthForTwoDigitCalendarUnit:(unsigned)arg1 font:(id)arg2 maxWidth:(float)arg3 ;
-(double)todaySinceReferenceDate;
-(int)yearsSinceBaseDate;
-(UIFont *)defaultTimeFont;
-(int)validateValue:(int)arg1 forCalendarUnit:(unsigned)arg2 ;
-(NSDateComponents *)minimumDateComponents;
-(NSDateComponents *)maximumDateComponents;
@end

