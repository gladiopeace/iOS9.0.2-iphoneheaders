/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class NSArray;

@interface EKEventAlarmDetailItem : EKEventDetailItem {

	unsigned _disclosedSubitem;
	NSArray* _alarms;
	char _hasLeaveNowAlarm;
	char _canHaveLeaveNowAlarm;

}
+(id)_textLabelForIndex:(unsigned)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfSubitems;
-(char)configureWithCalendar:(id)arg1 preview:(char)arg2 ;
-(float)defaultCellHeightForSubitemAtIndex:(unsigned)arg1 forWidth:(float)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(char)editItemViewControllerShouldShowDetachAlert;
-(char)editItemViewControllerCommit:(id)arg1 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(void)_updateAlarms;
-(char)_alarmsAreEditable;
-(char)_alarmsAreCreatable;
-(void)reset;
@end

