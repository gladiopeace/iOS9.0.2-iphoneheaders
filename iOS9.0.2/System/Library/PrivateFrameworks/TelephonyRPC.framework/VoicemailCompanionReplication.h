/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyRPC.framework/TelephonyRPC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyRPC/TelephonyRPC-Structs.h>
#import <libobjc.A.dylib/SYStoreDelegate.h>
#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NanoTelephonyIDSProxy, NPSDomainAccessor, NSObject, NSMutableArray, PSYSyncCoordinator, SYStore, NSString;

@interface VoicemailCompanionReplication : NSObject <SYStoreDelegate, PSYSyncCoordinatorDelegate> {

	NanoTelephonyIDSProxy* _proxy;
	NPSDomainAccessor* _domainAccessor;
	opaque_pthread_mutex_t _domainAccessorMutexLock;
	NSObject*<OS_dispatch_queue> _companionSyncQueue;
	NSObject*<OS_dispatch_queue> _concurrentQueue;
	NSMutableArray* _vmAfterSyncComplete;
	PSYSyncCoordinator* _coordinator;
	NSObject*<OS_dispatch_semaphore> waitForFirstSyncCompleteSemaphore;
	char _didSuspendCompanionSyncQueue;
	NSObject*<OS_dispatch_semaphore> vmdIsReadySemaphore;
	SYStore* _syncStore;

}

@property (nonatomic,retain) SYStore * syncStore;                   //@synthesize syncStore=_syncStore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleVoicemailDataAvailableNotification:(id)arg1 ;
-(void)_registerForNotifications;
-(void)dealloc;
-(void)syncCoordinatorDidReceiveStartSyncCommand:(id)arg1 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(void)syncStoreWillUpdate:(id)arg1 ;
-(void)syncStoreDidUpdate:(id)arg1 ;
-(void)syncStoreDidCompleteFullSync:(id)arg1 ;
-(void)syncStoreAllObjectsDeleted:(id)arg1 ;
-(id)syncStoreAllObjects:(id)arg1 ;
-(/*^block*/id)beginSyncingAllObjectsForStore:(id)arg1 ;
-(void)syncStore:(id)arg1 encounteredErrorInFullSync:(id)arg2 ;
-(void)syncStoreEnqueuedAllFullSyncMessages:(id)arg1 context:(id)arg2 ;
-(void)syncStore:(id)arg1 objectAdded:(id)arg2 ;
-(void)syncStore:(id)arg1 objectUpdated:(id)arg2 ;
-(void)syncStore:(id)arg1 objectDeleted:(id)arg2 ;
-(void)_handleVoicemailFlagsChanged:(id)arg1 ;
-(void)_handleVoicemailStoreRemovedVoicemails:(id)arg1 ;
-(void)_handleVoicemailStoreRemovedAllVoicemails:(id)arg1 ;
-(void)_handleVoicemailServiceRecordsAdded:(id)arg1 ;
-(void)_deltaSync;
-(void)_performAfterFirstDeviceUnlockAndSyncRestrictionNone:(/*^block*/id)arg1 ;
-(id)listOfVoicemailsToSync;
-(id)voicemailChangeSetFrom:(id)arg1 ;
-(void)setRemoteVoicemails:(id)arg1 ;
-(id)remoteVoicemails;
-(id)changeSetForRemoteVoicemails:(id)arg1 fromVMVoicemails:(id)arg2 ;
-(void)_handleVoicemailStoreChanged:(id)arg1 ;
-(void)waitForVMDToBeUpAndRunning;
-(void)_initializeDomainAccessor;
-(void)removeFromRemoteVoicemails:(id)arg1 ;
-(int)indexOfVoicemail:(id)arg1 inArray:(id)arg2 ;
-(int)maxVoicemailCount;
-(int)maxVoicemailTotalBytes;
-(id)initWithIDSProxy:(id)arg1 ;
-(id)syncStoreAtIndexes:(id)arg1 ;
-(SYStore *)syncStore;
-(void)setSyncStore:(SYStore *)arg1 ;
@end

