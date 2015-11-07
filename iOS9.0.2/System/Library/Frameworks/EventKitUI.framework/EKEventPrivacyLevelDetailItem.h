/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, UISwitch;

@interface EKEventPrivacyLevelDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	UISwitch* _control;
	char _switchStateIsOn;

}
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(char)configureWithCalendar:(id)arg1 preview:(char)arg2 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(void)_switchChanged:(id)arg1 ;
-(void)reset;
@end

