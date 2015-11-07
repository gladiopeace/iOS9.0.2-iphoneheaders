/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADCalendarInterface.h>

@interface CADCalendarOperationGroup : CADOperationGroup <CADCalendarInterface>
+(char)requiresEventAccess;
+(char)requiresReminderAccess;
+(char)requiresEventOrReminderAccess;
-(void)CADDatabaseGetCalendarsWithFaultedProperties:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADCalendar:(SCD_Struct_CA1)arg1 hasEvents:(/*^block*/id)arg2 ;
-(void)CADCalendar:(SCD_Struct_CA1)arg1 hasReminders:(/*^block*/id)arg2 ;
-(void)CADDatabaseDeleteCalendar:(SCD_Struct_CA1)arg1 forEntityType:(int)arg2 error:(/*^block*/id)arg3 ;
@end

