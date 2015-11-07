/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIPickerView.h>
#import <libobjc.A.dylib/PKDatePickerInternalImplementationProtocol.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSDateFormatter, NSString, NSDate;

@interface PKDatePickerImpl_PickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate> {

	unsigned _calendarUnit;
	NSRange _possibleRange;
	NSDateFormatter* _dateFormatter;
	id _changeTarget;
	SEL _changeAction;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSDate * date; 
-(void)prepareToDie;
-(id)initShowingDay:(char)arg1 month:(char)arg2 year:(char)arg3 useDarkAppearance:(char)arg4 ;
-(void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2 ;
-(id)_dateFormatForCalendarUnit:(unsigned)arg1 ;
-(unsigned)_defaultIndex;
-(id)_dateForIndex:(unsigned)arg1 ;
-(id)_dateComponentsForCalendarUnit:(unsigned)arg1 value:(int)arg2 ;
-(id)_stringForIndex:(unsigned)arg1 ;
-(unsigned)_numberOfItems;
-(void)dealloc;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(float)pickerView:(id)arg1 widthForComponent:(int)arg2 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
@end

