/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarProvider/EKBBDataProvider.h>

@protocol OS_dispatch_queue;
@class _EKNotificationMonitor, NSMutableDictionary, NSObject, NSDateFormatter;

@interface EKBBEventProvider : EKBBDataProvider {

	_EKNotificationMonitor* _notificationMonitor;
	NSMutableDictionary* _notifications;
	NSObject*<OS_dispatch_queue> _invitesQueue;
	NSObject*<OS_dispatch_queue> _loaderQueue;
	char _needsLoad;
	NSDateFormatter* _dateFormatter;

}
+(char)_shouldRequestReportAProblemAction;
+(id)_reportAProblemActionForAlertInfo:(id)arg1 ;
-(id)actionButtonTitleForAlertInfo:(id)arg1 ;
-(id)defaultURLForAlertInfo:(id)arg1 ;
-(char)allowsLocationAlerts;
-(id)viewButtonTitleForAlertInfo:(id)arg1 ;
-(void)setUpLayoutDataForPluginWithBulletin:(id)arg1 alertInfo:(id)arg2 ;
-(id)emptyModalTitle;
-(id)entityScheme;
-(id)_notifications;
-(void)_unalertedNotificationsReceived:(id)arg1 ;
-(void)_notificationCountChanged:(id)arg1 ;
-(void)_notificationsChanged:(id)arg1 ;
-(id)_resourceChangeURIFromBulletin:(id)arg1 ;
-(id)_bulletinRequestWithCalendarNotification:(id)arg1 ;
-(void)_addNotification:(id)arg1 replace:(char)arg2 ;
-(char)_loadNotifications;
-(id)_expirationDateForEventInvitation:(id)arg1 ;
-(void)_setPropertiesOnBulletinRequest:(id)arg1 fromResourceChange:(id)arg2 ;
-(void)_setEventRepresentationForNotification:(id)arg1 bulletin:(id)arg2 ;
-(unsigned)_countOfSuggestedNotificationsToIgnore;
-(id)_expirationDateForResourceChange:(id)arg1 ;
-(id)_snoozeActionWithAlertInfo:(id)arg1 ;
-(id)supplementaryActionsForAlertInfo:(id)arg1 bulletin:(id)arg2 ;
-(id)_snoozeOrReportAProblemActionForAlertInfo:(id)arg1 ;
-(id)supplementaryActionsForCompactLayoutForAlertInfo:(id)arg1 bulletin:(id)arg2 ;
-(void)_calendarNotificationSettingChanged;
-(id)modalMessageForAlertInfo:(id)arg1 ;
-(unsigned)allowedEntityTypes;
-(void)_reloadIfNeeded;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_dateFormatter;
-(id)sortDescriptors;
-(void)databaseChanged:(id)arg1 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(id)sectionParameters;
-(void)dataProviderDidLoad;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(char)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(id)bulletinsFilteredBy:(unsigned)arg1 count:(unsigned)arg2 lastCleared:(id)arg3 ;
-(id)universalSectionIdentifier;
-(id)defaultSectionInfo;
-(void)_reload;
-(id)sectionIdentifier;
@end
