/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/RemindersSettings.bundle/RemindersSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, EKEventStore;

@interface RemindersSettingsPlugin : PSListController {

	PSSpecifier* _syncDaysSpecifier;
	PSSpecifier* _defaultCalendarSpecifier;
	EKEventStore* _eventStore;
	char _isSyncingReminders;

}
-(void)_eventStoreChanged;
-(char)_calculateIsSyncingReminders;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)setDaysToSync:(id)arg1 specifier:(id)arg2 ;
-(id)daysToSync:(id)arg1 ;
-(id)_titlesForDaysToSync;
-(void)setDefaultCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)defaultCalendarName:(id)arg1 ;
@end

