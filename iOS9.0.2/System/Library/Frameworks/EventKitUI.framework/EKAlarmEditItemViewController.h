/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>
#import <libobjc.A.dylib/CalendarEventAlarmTableDelegate.h>

@class CalendarEventAlarmTable, EKUIAlarm, EKCalendar, NSString;

@interface EKAlarmEditItemViewController : EKEditItemViewController <CalendarEventAlarmTableDelegate> {

	CalendarEventAlarmTable* _table;
	char _immediateAlarmCreation;
	char _allDay;
	char _shouldAllowAlarmsTriggeringAfterStartDate;
	char _shouldShowLeaveNowOption;
	char _eventHasTravelTime;
	EKUIAlarm* _alarm;
	EKCalendar* _calendar;
	unsigned _alarmIndex;

}

@property (nonatomic,retain) EKUIAlarm * alarm;                                           //@synthesize alarm=_alarm - In the implementation block
@property (nonatomic,retain) EKCalendar * calendar;                                       //@synthesize calendar=_calendar - In the implementation block
@property (assign,nonatomic) unsigned alarmIndex;                                         //@synthesize alarmIndex=_alarmIndex - In the implementation block
@property (assign,nonatomic) char allDay;                                                 //@synthesize allDay=_allDay - In the implementation block
@property (assign,nonatomic) char shouldAllowAlarmsTriggeringAfterStartDate;              //@synthesize shouldAllowAlarmsTriggeringAfterStartDate=_shouldAllowAlarmsTriggeringAfterStartDate - In the implementation block
@property (assign,nonatomic) char shouldShowLeaveNowOption;                               //@synthesize shouldShowLeaveNowOption=_shouldShowLeaveNowOption - In the implementation block
@property (assign,nonatomic) char eventHasTravelTime;                                     //@synthesize eventHasTravelTime=_eventHasTravelTime - In the implementation block
@property (assign,nonatomic) int presetIdentifier; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 styleProvider:(id)arg2 ;
-(void)setAlarmIndex:(unsigned)arg1 ;
-(void)setEventHasTravelTime:(char)arg1 ;
-(unsigned)alarmIndex;
-(void)setShouldShowLeaveNowOption:(char)arg1 ;
-(void)setAlarm:(EKUIAlarm *)arg1 ;
-(char)customSelected;
-(EKUIAlarm *)alarm;
-(void)_storeChanged:(id)arg1 ;
-(char)eventHasTravelTime;
-(void)setShouldAllowAlarmsTriggeringAfterStartDate:(char)arg1 ;
-(void)alarmTableDidChangeAlarm:(id)arg1 ;
-(char)shouldAllowAlarmsTriggeringAfterStartDate;
-(void)setPresetIdentifier:(int)arg1 ;
-(int)presetIdentifier;
-(void)setCustomString:(id)arg1 ;
-(char)shouldShowLeaveNowOption;
-(void)loadView;
-(id)tableHeaderView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setCalendar:(EKCalendar *)arg1 ;
-(EKCalendar *)calendar;
-(void)setAllDay:(char)arg1 ;
-(char)allDay;
@end

