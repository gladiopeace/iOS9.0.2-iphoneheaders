/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDatePickerMode_Date.h>

@interface _UIDatePickerMode_DateWithOptionalYear : _UIDatePickerMode_Date
+(int)datePickerMode;
-(id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(int)arg2 ;
-(id)selectedDateComponents;
-(int)numberOfRowsForCalendarUnit:(unsigned)arg1 ;
-(int)yearForRow:(int)arg1 ;
-(int)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(int)arg3 currentRow:(int)arg4 ;
-(id)titleForRow:(int)arg1 inComponent:(int)arg2 ;
-(char)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned)arg3 ;
@end

