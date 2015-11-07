/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarProvider/CalendarProvider-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDate, PCPersistentTimer, NSTimer, NSDateFormatter, CLLocationManager, RTRoutineManager, NSMutableDictionary, CMMotionActivityManager, NSOperationQueue, NSString;

@interface _EKAlarmEngine : NSObject <CLLocationManagerDelegate> {

	int _lastDBSequence;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSDate* _nextFireDate;
	NSDate* _lastCheckpoint;
	PCPersistentTimer* _timer;
	char _populating;
	NSDate* _populateStart;
	NSTimer* _syncTimer;
	char _pendingChanges;
	char _needsAlarmTablePopulation;
	char _fencesNeedAdjusted;
	NSDateFormatter* _dateFormatter;
	CLLocationManager* _locationManager;
	RTRoutineManager* _routineManager;
	NSDate* _tomorrow;
	char _includeRefiringAlarmsForInitialReschedule;
	char _refirePastAlarmsForInitialUpdate;
	NSMutableDictionary* _monitoredRegions;
	char _shouldUpdateWithForceForAlarmTable;
	char _shouldUpdateWithForceForFences;
	char _shouldUpdateWithForceForVehicleTriggers;
	CMMotionActivityManager* _motionActivityManager;
	char _monitoringForConnections;
	char _monitoringForDisconnections;
	int _vehicleConnectionState;
	NSOperationQueue* _vehicleOperationQueue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_publisherBulletinIDForTask:(void*)arg1 ;
+(id)_publisherBulletinIDForReminder:(id)arg1 ;
+(id)_publisherBulletinIDForTaskUniqueIdentifier:(id)arg1 ;
+(id)sharedInstance;
-(void)_simulatedOffsetChanged:(id)arg1 ;
-(void)_removeAllFences;
-(void)_updateWithForceForAlarmTable:(char)arg1 forFences:(char)arg2 forVehicleTriggers:(char)arg3 ;
-(char)_allowConservativeEntry;
-(char)_allowVehicleTrigger;
-(char)_isDataProtected;
-(char)_haveAlarmsChanged:(id)arg1 ;
-(char)_populateAlarmTable:(id)arg1 ;
-(void)_adjustVehicleTriggersWithEventStore:(id)arg1 ;
-(void)_removeStaleRefiringAlarmsWithEventStore:(id)arg1 ;
-(char)_shouldRefireAlarms;
-(void)_storeAlarms:(id)arg1 nextScheduleLimit:(id)arg2 eventStore:(id)arg3 ;
-(void)_populateFinished;
-(id)_alertInfoAlarmIDFromSideAlarm:(id)arg1 ;
-(void)_notifyAlarmsFired:(id)arg1 ;
-(char)_isAlarmAcknowledgedWithAcknowledgedDate:(id)arg1 fireDate:(id)arg2 ;
-(id)_stringForAuthorizationStatus:(int)arg1 ;
-(char)_shouldAdjustFencesWithStatus:(int)arg1 ;
-(void)_updateRegionMonitoringForRegion:(id)arg1 withLocationOfInterest:(id)arg2 forLocation:(SCD_Struct_EK1)arg3 ;
-(id)_alertInfoAlarmIDFromEKAlarm:(id)arg1 ;
-(void)_proximityAlertTriggered:(id)arg1 entered:(char)arg2 ;
-(void)_motionUpdatedWithActivity:(id)arg1 ;
-(id)_debugStringForVehicleConnectionState:(int)arg1 ;
-(void)_vehicleTriggerFired:(char)arg1 ;
-(id)_insertSideAlarmObjectForVehicleTriggerAlarm:(id)arg1 forReminder:(id)arg2 withDelay:(double)arg3 eventStore:(id)arg4 context:(id)arg5 ;
-(void)_timeDidChangeSignificantly;
-(void)_locationDaemonDidLaunch;
-(void)_adjustFences:(id)arg1 ;
-(void)_calendarNotificationSettingChanged;
-(void)_killSyncTimer;
-(void)_syncTimerFired:(id)arg1 ;
-(void)_resetSyncTimer;
-(void)_databaseChanged;
-(void)_protectedDataDidBecomeAvailable;
-(void)_timeZoneChanged:(id)arg1 ;
-(void)_syncDidStart;
-(void)_syncDidEnd;
-(void)_timerFired:(id)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)dealloc;
-(void)start;
-(id)_dateFormatter;
-(void)_rescheduleTimer;
-(void)_killTimer;
-(void)locationManager:(id)arg1 didEnterRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3 ;
@end

