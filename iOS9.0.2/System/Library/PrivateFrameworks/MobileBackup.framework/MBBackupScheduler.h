/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, MBServiceManager;

@interface MBBackupScheduler : NSObject {

	double _backupPeriod;
	char _enabled;
	NSObject*<OS_dispatch_queue> _stateQueue;
	NSObject*<OS_dispatch_source> _backupTimer;
	char _initiatedBackup;
	int _backupStateToken;
	void* _reachabilityRef;
	unsigned _powerNotification;
	int _lockToken;
	char _isPowered;
	char _isLocked;
	char _isOnWiFi;
	char _ignorePowerState;
	double _initialBackupWarningPeriod;
	double _backupWarningPeriod;
	double _recuringBackupWarningPeriod;
	MBServiceManager* _serviceManager;

}

@property (assign,nonatomic) double backupPeriod;              //@synthesize backupPeriod=_backupPeriod - In the implementation block
@property (assign,nonatomic) char enabled;                     //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) char isPowered; 
@property (assign,nonatomic) char isLocked; 
@property (assign,nonatomic) char isOnWiFi; 
+(id)sharedSchedulerWithServiceManager:(id)arg1 ;
-(char)isPowered;
-(char)canBackupNowScheduled:(char)arg1 ;
-(char)isOnWiFi;
-(void)accountChanged:(id)arg1 ;
-(id)_retryAfterDate;
-(id)cacheCreatedDate;
-(double)backupPeriod;
-(void)_warnUserOfUnverifiedAccount;
-(void)_installMonitors;
-(void)_managerDidFailBackupWithError:(id)arg1 ;
-(void)_managerDidFinishBackup;
-(unsigned)_failureCount;
-(id)_minimumRetryAfterDate:(char)arg1 ;
-(void)_updateRetryAfterDateWithDate:(id)arg1 ;
-(id)dateOfLastiTunesBackup;
-(void)_warnUserOfLateiTunesBackupIfNecessary;
-(void)_clearFailureCount;
-(void)_clearRetryAfterDate;
-(void)_cancelScheduledBackup;
-(void)_stateDidChange;
-(void)_incrementFailureCount;
-(void)_warnUserOfLateBackupIfNecessary;
-(id)_filteredSnapshotsFromCache;
-(id)_dateOfSnapshot:(id)arg1 ;
-(id)_dateOfNextDesiredBackup;
-(void)_scheduleBackupAtDate:(id)arg1 ;
-(void)_rescheduleForSoftCancel;
-(void)setIsPowered:(char)arg1 ;
-(void)setIsOnWiFi:(char)arg1 ;
-(void)setBackupPeriod:(double)arg1 ;
-(char)enabled;
-(void)dealloc;
-(char)isLocked;
-(void)setEnabled:(char)arg1 ;
-(id)initWithServiceManager:(id)arg1 ;
-(id)dateOfLastBackup;
-(id)dateOfNextScheduledBackup;
-(void)setIsLocked:(char)arg1 ;
@end

