/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADDatabaseInterface.h>

@interface CADDatabaseOperationGroup : CADOperationGroup <CADDatabaseInterface>
+(char)requiresEventAccess;
+(char)requiresReminderAccess;
+(char)requiresEventOrReminderAccess;
-(void)CADDatabaseSetPath:(id)arg1 andInitOptions:(int)arg2 reply:(/*^block*/id)arg3 ;
-(void)CADDatabaseGetUUID:(/*^block*/id)arg1 ;
-(void)CADDatabaseRegisterForDetailedChangeTracking:(/*^block*/id)arg1 ;
-(void)CADDatabaseFetchChangedObjectIDsSinceSequenceNumber:(int)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseMarkChangedObjectIDsConsumedUpToSequenceNumber:(int)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetSequenceNumber:(/*^block*/id)arg1 ;
-(void)CADDatabaseGetChangesSinceSequenceNumber:(int)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetChangedEntityIDsSinceTimestamp:(double)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseGetNextAssignableColorWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseSetSourceAccountManagement:(int)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseImportICSData:(id)arg1 intoCalendarWithID:(int)arg2 optionsMask:(unsigned)arg3 reply:(/*^block*/id)arg4 ;
-(void)CADDatabaseSetShowsDeclinedEvents:(char)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADDatabaseSaveWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseCommitWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseRollbackWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseResetWithReply:(/*^block*/id)arg1 ;
-(void)CADDatabaseCanModifyCalendarDatabase:(/*^block*/id)arg1 ;
-(void)CADDatabaseIsAutomaticLocationGeocodingAllowed:(/*^block*/id)arg1 ;
-(void)CADDatabaseSetAutomaticLocationGeocodingAllowed:(char)arg1 reply:(/*^block*/id)arg2 ;
-(char)_CADDatabaseCanModifyCalendarDatabase;
@end

