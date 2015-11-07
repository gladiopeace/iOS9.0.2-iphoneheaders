/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CPLResourceProgressDelegate.h>
#import <libobjc.A.dylib/CPLLibraryManagerDelegate.h>
#import <libobjc.A.dylib/PLForegroundObserver.h>
#import <libobjc.A.dylib/PLBatterySaverWatcherDelegate.h>

@protocol OS_dispatch_queue, OS_xpc_object, OS_dispatch_source;
@class NSMutableArray, NSString, NSObject, PLBatterySaverWatcher, NSMutableSet, PLPhotoLibrary, CPLLibraryManager, PLCloudTaskManager, NSMutableDictionary, NSDate, NSNumber;

@interface PLCloudPhotoLibraryManager : NSObject <CPLResourceProgressDelegate, CPLLibraryManagerDelegate, PLForegroundObserver, PLBatterySaverWatcherDelegate> {

	NSMutableArray* _uploadBatchArray;
	unsigned long long _lastKnownChangeHubEventIndex;
	unsigned long long _lastKnownDeletionEventIndex;
	NSString* _lastKnownStoreUUID;
	char _wasRebuild;
	int _notifyToken;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	PLBatterySaverWatcher* _batterySaverWatcher;
	char _batterySaverModeEnabled;
	NSObject*<OS_xpc_object> _hubConnection;
	unsigned char _nodeUUID[16];
	NSMutableSet* _cameraAsset;
	char _processingChange;
	unsigned _mode;
	char _pushOnIdle;
	char _pullOnIdle;
	char _modeChangePending;
	char _closeLibrary;
	char _initialUpload;
	unsigned _uploadCounterCheck;
	unsigned _downloadCounterCheck;
	NSMutableSet* _downloadedDeleteUuid;
	PLPhotoLibrary* _photoLibrary;
	CPLLibraryManager* _cplLibrary;
	char _stopping;
	char _stopped;
	char _needToResume;
	char _needSoftReset;
	int _pauseRequest;
	unsigned _defaultResourceDownloadType;
	PLCloudTaskManager* _taskManager;
	NSObject*<OS_dispatch_source> _unpauseDispatchTimer;
	NSObject*<OS_dispatch_queue> _transferIsolationQueue;
	unsigned _boundForUploadingPhotos;
	unsigned _boundForUploadingVideos;
	unsigned _boundForUploadingOtherItems;
	unsigned long long _totalSizeOfUnpushedOriginals;
	unsigned long long _totalSizeOfPushedOriginals;
	unsigned long long _totalUploadedOriginalSize;
	NSMutableDictionary* _trackedResourceProgressSize;
	NSDate* _lastResetSyncDate;
	NSDate* _lastIdleDate;
	char _initializedMaster;
	NSNumber* __numberOfPhotosToPush;
	NSNumber* __numberOfVideosToPush;
	NSNumber* __numberOfOtherItemsToPush;
	NSNumber* __numberOfPhotosDownloaded;
	NSNumber* __numberOfVideosDownloaded;
	NSNumber* __numberOfOtherItemsDownloaded;

}

@property (nonatomic,readonly) unsigned numberOfPhotosToUpload; 
@property (nonatomic,readonly) unsigned numberOfVideosToUpload; 
@property (nonatomic,readonly) unsigned numberOfOtherItemsToUpload; 
@property (nonatomic,readonly) unsigned numberOfPhotosToDownload; 
@property (nonatomic,readonly) unsigned numberOfVideosToDownload; 
@property (nonatomic,readonly) unsigned numberOfOtherItemsToDownload; 
@property (nonatomic,readonly) unsigned numberOfPushedItems; 
@property (nonatomic,readonly) unsigned long long totalSizeOfUnpushedOriginals; 
@property (nonatomic,readonly) unsigned long long totalSizeOfPushedOriginals; 
@property (nonatomic,readonly) unsigned long long totalUploadedOriginalSize; 
@property (nonatomic,readonly) char inResetSync; 
@property (setter=_setNumberOfPhotosToPush:,nonatomic,retain) NSNumber * _numberOfPhotosToPush;                              //@synthesize _numberOfPhotosToPush=__numberOfPhotosToPush - In the implementation block
@property (setter=_setNumberOfVideosToPush:,nonatomic,retain) NSNumber * _numberOfVideosToPush;                              //@synthesize _numberOfVideosToPush=__numberOfVideosToPush - In the implementation block
@property (setter=_setNumberOfOtherItemsToPush:,nonatomic,retain) NSNumber * _numberOfOtherItemsToPush;                      //@synthesize _numberOfOtherItemsToPush=__numberOfOtherItemsToPush - In the implementation block
@property (setter=_setNumberOfPhotosDownloaded:,nonatomic,retain) NSNumber * _numberOfPhotosDownloaded;                      //@synthesize _numberOfPhotosDownloaded=__numberOfPhotosDownloaded - In the implementation block
@property (setter=_setNumberOfVideosDownloaded:,nonatomic,retain) NSNumber * _numberOfVideosDownloaded;                      //@synthesize _numberOfVideosDownloaded=__numberOfVideosDownloaded - In the implementation block
@property (setter=_setNumberOfOtherItemsDownloaded:,nonatomic,retain) NSNumber * _numberOfOtherItemsDownloaded;              //@synthesize _numberOfOtherItemsDownloaded=__numberOfOtherItemsDownloaded - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionForResourceType:(unsigned)arg1 ;
-(void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_transitionToState:(unsigned)arg1 ;
-(unsigned)numberOfVideosToUpload;
-(unsigned)numberOfVideosToDownload;
-(char)inResetSync;
-(unsigned long long)totalUploadedOriginalSize;
-(unsigned long long)totalSizeOfUnpushedOriginals;
-(void)addLogMark:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)resume;
-(void)pause;
-(void)saveCPLPlistVersion:(id)arg1 forVersionKey:(id)arg2 ;
-(unsigned long long)_fetchLastEventIndexFromChangeHub;
-(void)saveLastKnownIndexFromChangeHubToDisk;
-(void)_readLastResetSyncDate;
-(void)_readIdleDate;
-(void)notifyCPLLibraryOnReset;
-(void)_updateTransferCounts;
-(void)_cleanupCPLLibrary;
-(void)_runOnIsolationQueueWithTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_reallyDeactivateCPLLibrary;
-(char)_canExternallyTransitionToNewLibraryModeIgnoringPause:(char)arg1 ignoringBatterySaver:(char)arg2 ignoringDiskPressure:(char)arg3 ;
-(void)_resetCPLLibrary;
-(void)_resetTotalUploadByteSize;
-(void)unregisterToChangeHubNotification;
-(void)_stopUnpauseTimer;
-(void)_doUnpause;
-(char)_setupTimerForUnpause;
-(void)_doPause;
-(void)resetFlags;
-(void)deleteCPLPlist;
-(void)_deactivateCPLLibrary;
-(void)_setupHubConnection;
-(id)_debugNameForMode:(unsigned)arg1 ;
-(void)_processNextTransaction;
-(void)unpause;
-(void)_openCPLLibrary;
-(void)fetchNewEventsFromChangeHub;
-(void)_writeIdleDate;
-(void)_processUploadBatch;
-(void)_downloadFromCloud;
-(void)_closeCPLLibrary;
-(void)_stopAll;
-(void)_doResetSync:(char)arg1 ;
-(unsigned)diskSpaceLevel;
-(id)readCPLPlist;
-(unsigned)_registerToChangeHubNotification;
-(void)updateLastKnownIndexFromChangeHub;
-(void)saveStoreUUID:(id)arg1 ;
-(void)_recoverFromPauseUnderDiskPressureIfNeeded;
-(void)downloadResource:(id)arg1 forAssetUuid:(id)arg2 highPriority:(char)arg3 clientBundleID:(id)arg4 taskDidBeginHandler:(/*^block*/id)arg5 progressBlock:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)deleteResourcesIfSafe:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setNumberOfPhotosToPush:(id)arg1 ;
-(void)_setNumberOfVideosToPush:(id)arg1 ;
-(void)_setNumberOfOtherItemsToPush:(id)arg1 ;
-(void)_setNumberOfPhotosDownloaded:(id)arg1 ;
-(void)_setNumberOfVideosDownloaded:(id)arg1 ;
-(void)_setNumberOfOtherItemsDownloaded:(id)arg1 ;
-(id)_newFetchPendingEventsFromIndex:(unsigned long long)arg1 ;
-(id)_createUploadBatchesForDeletionFromEvent:(id)arg1 ;
-(void)_fetchDeletionEventsFromChangeHub;
-(void)_uploadFullPhotoLibraryToCloud;
-(void)uploadToCloudForEvents:(id)arg1 ;
-(void)sendAlbums:(id)arg1 toBatchManager:(id)arg2 ;
-(void)_incrementUploadAttemptsAndPushStateForAssets:(id)arg1 ;
-(void)sendAssets:(id)arg1 toBatchManager:(id)arg2 ;
-(void)_processPendingAlbums:(id)arg1 withBatchManager:(id)arg2 ;
-(void)_processPendingAssets:(id)arg1 withBatchManager:(id)arg2 ;
-(id)_createUploadBatchesFromEvent:(id)arg1 ;
-(char)shouldProcessDuringInitialUpload:(id)arg1 ;
-(char)_needsMasterChangeForAsset:(id)arg1 master:(id)arg2 ;
-(char)asset:(id)arg1 isIn:(id)arg2 ;
-(void)sortData:(id)arg1 withMode:(int)arg2 forAssets:(id)arg3 adjustedAssets:(id)arg4 andAlbums:(id)arg5 inManagedObjectContext:(id)arg6 ;
-(void)sortRelationshipData:(id)arg1 forRelationshipUpdate:(id)arg2 inManagedObjectContext:(id)arg3 ;
-(id)_createBatchesForChanges:(id)arg1 ;
-(void)_fetchChangesFromEvent:(id)arg1 insertedAssets:(id)arg2 updatedAssets:(id)arg3 adjustedAssets:(id)arg4 deletedAssets:(id)arg5 albumInserts:(id)arg6 albumChanges:(id)arg7 albumsToDelete:(id)arg8 updatedRelationship:(id)arg9 sendAssetContainerChange:(char*)arg10 ;
-(void)_processUploadBatchWithStartupFailureCount:(unsigned)arg1 ;
-(NSNumber *)_numberOfPhotosToPush;
-(NSNumber *)_numberOfVideosToPush;
-(id)lastKnownCloudVersionFromDisk;
-(void)_addLocalResourcesToRecord:(id)arg1 ;
-(char)needResetSyncErrorType:(id)arg1 ;
-(void)_cleanUploadedResources:(id)arg1 ;
-(void)_runOnIsolationQueueWithTransaction:(id)arg1 afterDelay:(double)arg2 block:(/*^block*/id)arg3 ;
-(void)processDownloadBatchWithSession:(id)arg1 ;
-(void)_handleMasterRecords:(id)arg1 inLibrary:(id)arg2 ;
-(id)_findMaster:(id)arg1 fromAdditionalRecordInBatch:(id)arg2 inLibrary:(id)arg3 ;
-(id)_debugPrintAlbumOrderForAssets:(id)arg1 ;
-(void)_handlePersonRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleAlbumRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleAssetRecords:(id)arg1 inLibrary:(id)arg2 withChangeBatch:(id)arg3 ;
-(void)_handleDeleteRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleExpungedRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleRelationsForAssetRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)_handleRelationsForAlbumRecords:(id)arg1 inLibrary:(id)arg2 ;
-(void)sync;
-(void)_updateWithCPLResource:(id)arg1 isHighPriority:(char)arg2 ;
-(short)_placeHolderKindFromCPLResourceType:(unsigned)arg1 ;
-(void)_updateAsset:(id)arg1 withImageFileURL:(id)arg2 ;
-(void)_linkFileFrom:(id)arg1 to:(id)arg2 ;
-(void)_updateThumbnailDataForAsset:(id)arg1 withImageFileURL:(id)arg2 ;
-(unsigned)_inq_numberOfPhotosToUpload;
-(unsigned)_inq_numberOfVideosToUpload;
-(unsigned)_inq_numberOfPhotosToDownload;
-(unsigned)_inq_numberOfVideosToDownload;
-(unsigned)_inq_numberOfPushedItems;
-(unsigned)numberOfOtherItemsToUpload;
-(unsigned)_inq_numberOfOtherItemsToUpload;
-(unsigned)_inq_numberOfOtherItemsToDownload;
-(void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2 ;
-(void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2 ;
-(void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2 ;
-(void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2 ;
-(void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1 ;
-(void)libraryManagerStatusDidChange:(id)arg1 ;
-(void)libraryManagerDidStartSynchronization:(id)arg1 ;
-(void)libraryManagerHasChangesToPull:(id)arg1 ;
-(void)foregroundMonitor:(id)arg1 changedStateToForeground:(char)arg2 context:(id)arg3 ;
-(void)batterySaverModeDidChange:(char)arg1 ;
-(void)cancelResourceTransferTaskWithIdentifier:(id)arg1 ;
-(char)isResourceTransferTaskAliveWithTaskWithIdentifier:(id)arg1 ;
-(void)fetchAdjustmentDataForAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchPublicURLForAsset:(id)arg1 resourceType:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)downloadAsset:(id)arg1 resourceType:(unsigned)arg2 masterResourceOnly:(char)arg3 highPriority:(char)arg4 clientBundleID:(id)arg5 taskDidBeginHandler:(/*^block*/id)arg6 progressBlock:(/*^block*/id)arg7 completionHandler:(/*^block*/id)arg8 ;
-(void)doSoftResetSync;
-(void)dumpStatusIncludingDaemon:(char)arg1 ;
-(id)getCPLState;
-(unsigned)numberOfPhotosToUpload;
-(unsigned)numberOfPhotosToDownload;
-(unsigned)numberOfOtherItemsToDownload;
-(unsigned)numberOfPushedItems;
-(unsigned long long)totalSizeOfPushedOriginals;
-(NSNumber *)_numberOfOtherItemsToPush;
-(NSNumber *)_numberOfPhotosDownloaded;
-(NSNumber *)_numberOfVideosDownloaded;
-(NSNumber *)_numberOfOtherItemsDownloaded;
@end

