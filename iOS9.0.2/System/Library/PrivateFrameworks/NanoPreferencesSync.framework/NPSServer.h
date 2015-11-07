/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPreferencesSync.framework/nanoprefsyncd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NPSServerProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NPSSettings, NSXPCListener, NSMutableArray, IDSService, NPSDeviceRegistry, NPSDatabase, NPSFileBackupManager, PSYSyncCoordinator, NSMutableDictionary, NSString;

@interface NPSServer : NSObject <PSYSyncCoordinatorDelegate, IDSServiceDelegate, NSXPCListenerDelegate, NPSServerProtocol> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NPSSettings* _settings;
	NSXPCListener* _xpcListener;
	NSMutableArray* _xpcConnections;
	NSObject*<OS_dispatch_queue> _modifyingXPCConnectionsQueue;
	IDSService* _idsService;
	NPSDeviceRegistry* _deviceRegistry;
	NPSDatabase* _database;
	NSObject*<OS_dispatch_source> _purgeTimer;
	NPSFileBackupManager* _fileBackupManager;
	PSYSyncCoordinator* _pairedSyncCoordinator;
	NSMutableDictionary* _initialSyncProgressDictionary;
	unsigned long long _totalDataToSyncInBytes;
	unsigned long long _remainingDataToSyncInBytes;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                 //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NPSSettings * settings;                                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) NSXPCListener * xpcListener;                                            //@synthesize xpcListener=_xpcListener - In the implementation block
@property (nonatomic,retain) NSMutableArray * xpcConnections;                                        //@synthesize xpcConnections=_xpcConnections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modifyingXPCConnectionsQueue;              //@synthesize modifyingXPCConnectionsQueue=_modifyingXPCConnectionsQueue - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                                                //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) NPSDeviceRegistry * deviceRegistry;                                     //@synthesize deviceRegistry=_deviceRegistry - In the implementation block
@property (nonatomic,retain) NPSDatabase * database;                                                 //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> purgeTimer;                               //@synthesize purgeTimer=_purgeTimer - In the implementation block
@property (nonatomic,retain) NPSFileBackupManager * fileBackupManager;                               //@synthesize fileBackupManager=_fileBackupManager - In the implementation block
@property (assign,nonatomic) unsigned long long totalDataToSyncInBytes;                              //@synthesize totalDataToSyncInBytes=_totalDataToSyncInBytes - In the implementation block
@property (assign,nonatomic) unsigned long long remainingDataToSyncInBytes;                          //@synthesize remainingDataToSyncInBytes=_remainingDataToSyncInBytes - In the implementation block
@property (nonatomic,retain) PSYSyncCoordinator * pairedSyncCoordinator;                             //@synthesize pairedSyncCoordinator=_pairedSyncCoordinator - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * initialSyncProgressDictionary;                    //@synthesize initialSyncProgressDictionary=_initialSyncProgressDictionary - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)maxSendTimeout;
+(long long)purgeRetryDelay;
+(id)queueOneIdentifierForFileBackupMsg:(id)arg1 ;
+(id)queueOneIdentifierForUserDefaultsMsg:(id)arg1 ;
+(id)queueOneIdentifierForUserDefaultsBackupMsg:(id)arg1 ;
+(id)managedConfigurationSettings;
+(id)managedConfigurationData;
+(id)queueOneIdentifierForManagedConfigurationMsg:(id)arg1 ;
+(char)isManagedConfigurationSettingWhitelistedForKind:(id)arg1 feature:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)modifyingXPCConnectionsQueue;
-(NSMutableArray *)xpcConnections;
-(void)setXpcConnections:(NSMutableArray *)arg1 ;
-(void)setModifyingXPCConnectionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPairedSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(PSYSyncCoordinator *)pairedSyncCoordinator;
-(void)handleUserDefaultsMsg:(id)arg1 ;
-(void)handleFileBackupMessage:(id)arg1 ;
-(void)handleUserDefaultsBackupMsg:(id)arg1 ;
-(void)resendMessagesForMessageID:(id)arg1 ;
-(char)checkPairedDeviceChangedVersion;
-(void)resyncManagedConfigurationIfNeeded;
-(void)handlePairedDeviceChangedVersionNotification;
-(void)handleManagedConfigurationChangedNotification;
-(void)performFirstUnlockTasks;
-(void)applyStashedSettingsSyncMessages;
-(id)sendSetting:(id)arg1 keys:(id)arg2 messageIdentifier:(id*)arg3 messageData:(id*)arg4 ;
-(void)reportFailedInitialSyncWithError:(id)arg1 ;
-(void)registerInitialSyncMessageWithIdentifier:(id)arg1 size:(unsigned long long)arg2 ;
-(void)startSyncIsInitialSync:(char)arg1 ;
-(void)setHasPerformedInitialSync:(char)arg1 ;
-(id)restoreRemoteFilesFromBackup;
-(id)restoreRemoteSettingsFromBackup;
-(void)forceResyncManagedConfigurationIsInitialSync:(char)arg1 ;
-(void)sendSettingsInDomain:(id)arg1 keys:(id)arg2 isInitialSync:(char)arg3 ;
-(char)hasPerformedInitialSync;
-(id)sendMessageData:(id)arg1 messageType:(int)arg2 queueOneIdentifier:(id)arg3 identifier:(id*)arg4 urgentPriorityOverride:(char)arg5 ;
-(id)sendSettingsBackupInDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 isInitialSync:(char)arg4 ;
-(char)retryFileBackupRestoreForFilePath:(id)arg1 ;
-(void)handleFileBackupMessage:(id)arg1 resourceURL:(id)arg2 ;
-(void)handleUnserializedUserDefaultsMsg:(id)arg1 ;
-(id)readCacheFromDiskForDomain:(id)arg1 ;
-(char)writeCache:(id)arg1 toDiskForDomain:(id)arg2 ;
-(id)backupPathForDomain:(id)arg1 container:(id)arg2 ;
-(id)createDirectoryIfNeeded:(id)arg1 ;
-(id)cachePathForDomain:(id)arg1 ;
-(char)deleteCacheForDomain:(id)arg1 ;
-(id)restoreFileBackupForLocalFileURL:(id)arg1 originalFileURL:(id)arg2 isInitialSync:(char)arg3 ;
-(void)updateCacheForDomain:(id)arg1 keys:(id)arg2 twoWaySyncTimestamp:(id)arg3 ;
-(id)sendMessageData:(id)arg1 messageType:(int)arg2 queueOneIdentifier:(id)arg3 identifier:(id*)arg4 ;
-(void)debounceInSource:(id*)arg1 onQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)resyncManagedConfigurationIfNeededIsInitialSync:(char)arg1 ;
-(id)sendManagedConfigurationSettings:(id)arg1 isInitialSync:(char)arg2 ;
-(void)registerInitialSyncMessage:(id)arg1 ofSize:(unsigned)arg2 orReportInitialSyncFailureWithError:(id)arg3 ;
-(id)sendManagedConfigurationKind:(id)arg1 feature:(id)arg2 messageIdentifier:(id*)arg3 messageData:(id*)arg4 ;
-(NPSDeviceRegistry *)deviceRegistry;
-(void)setDeviceRegistry:(NPSDeviceRegistry *)arg1 ;
-(NSObject*<OS_dispatch_source>)purgeTimer;
-(void)setPurgeTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NPSFileBackupManager *)fileBackupManager;
-(void)setFileBackupManager:(NPSFileBackupManager *)arg1 ;
-(unsigned long long)totalDataToSyncInBytes;
-(void)setTotalDataToSyncInBytes:(unsigned long long)arg1 ;
-(unsigned long long)remainingDataToSyncInBytes;
-(void)setRemainingDataToSyncInBytes:(unsigned long long)arg1 ;
-(NSMutableDictionary *)initialSyncProgressDictionary;
-(void)setInitialSyncProgressDictionary:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(NPSSettings *)settings;
-(void)setSettings:(NPSSettings *)arg1 ;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1 ;
-(NSXPCListener *)xpcListener;
-(void)setXpcListener:(NSXPCListener *)arg1 ;
-(void)synchronizeNanoDomain:(id)arg1 keys:(id)arg2 ;
-(void)setDatabase:(NPSDatabase *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(IDSService *)idsService;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setIdsService:(IDSService *)arg1 ;
-(void)synchronizeUserDefaultsDomain:(id)arg1 keys:(id)arg2 container:(id)arg3 appGroupContainer:(id)arg4 ;
-(NPSDatabase *)database;
@end

