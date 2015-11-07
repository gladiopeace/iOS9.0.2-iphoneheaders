/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/FUScrollWheelDataSource.h>
#import <libobjc.A.dylib/FUScrollWheelDelegate.h>

@protocol FUDatePickerDelegate;
@class NSArray, NSMutableArray, UILabel, NSDateFormatter, NSDate, FUScrollWheel, NSString;

@interface FUDatePicker : UIView <FUScrollWheelDataSource, FUScrollWheelDelegate> {

	unsigned _monthOffset;
	unsigned _dateOffset;
	int _yearOrder;
	int _monthOrder;
	int _dayOrder;
	unsigned _numRowsMonth;
	unsigned _numRowsDate;
	unsigned _numRowsYear;
	NSArray* _monthNames;
	NSArray* _dayValues;
	NSMutableArray* _yearsWithNames;
	UILabel* _dayLabel;
	UILabel* _yearLabel;
	UILabel* _monthLabel;
	NSDateFormatter* _dateFormatter;
	char _firstResponderShouldChange;
	char _displayEra;
	id<FUDatePickerDelegate> _delegate;
	NSDate* _date;
	FUScrollWheel* _monthWheel;
	FUScrollWheel* _dateWheel;
	FUScrollWheel* _yearWheel;

}

@property (assign,nonatomic,__weak) id<FUDatePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDate * date;                                         //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) FUScrollWheel * monthWheel;                            //@synthesize monthWheel=_monthWheel - In the implementation block
@property (nonatomic,retain) FUScrollWheel * dateWheel;                             //@synthesize dateWheel=_dateWheel - In the implementation block
@property (nonatomic,retain) FUScrollWheel * yearWheel;                             //@synthesize yearWheel=_yearWheel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FUDatePickerDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FUDatePickerDelegate>)delegate;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(id)_enumerateDayValues;
-(id)_enumerateDayValuesFromFormatter:(id)arg1 ;
-(void)_updateDateRange:(char)arg1 ;
-(void)_updateSpinners;
-(unsigned)numberOfRowsInScrollWheel:(id)arg1 ;
-(id)scrollWheel:(id)arg1 titleForItemAtIndex:(unsigned)arg2 ;
-(void)scrollWheel:(id)arg1 didChangeCurrentIndexTo:(unsigned)arg2 ;
-(void)tappedScrollWheel:(id)arg1 ;
-(char)scrollWheelShouldBecomeFirstResponder:(id)arg1 ;
-(FUScrollWheel *)monthWheel;
-(void)setMonthWheel:(FUScrollWheel *)arg1 ;
-(FUScrollWheel *)dateWheel;
-(void)setDateWheel:(FUScrollWheel *)arg1 ;
-(FUScrollWheel *)yearWheel;
-(void)setYearWheel:(FUScrollWheel *)arg1 ;
@end

