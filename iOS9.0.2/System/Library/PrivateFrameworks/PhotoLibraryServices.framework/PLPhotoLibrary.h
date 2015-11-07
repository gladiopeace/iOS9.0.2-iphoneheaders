/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSMutableArray, PLThumbnailManager, PLGenericAlbum, NSCalendar, NSMutableDictionary, NSSet, PLManagedAlbum, PLFetchingAlbum, PLInFlightAssetsAlbum, PLManagedAlbumList, PLManagedFolder, NSString, PLManagedObjectContext, NSArray;

@interface PLPhotoLibrary : NSObject {

	char _listeningForITunesSyncing;
	char _isTransient;
	unsigned _pendingTransactions;
	CFDictionaryRef _allPhotos;
	int _databaseMigrationKind;
	NSMutableArray* _transactionCompletionHandlers;
	PLThumbnailManager* _thumbnailManager;
	PLGenericAlbum* _allImportedPhotosAlbum;
	PLGenericAlbum* _lastImportedPhotosAlbum;
	NSCalendar* _exifConversionCalendar;
	NSMutableDictionary* _photoStreamAlbumsByStreamID;
	NSMutableArray* _photoStreamAlbums;
	NSSet* _imageFileExtensions;
	NSSet* _rawImageFileExtensions;
	NSSet* _audioFileExtensions;
	NSSet* _extraVideoExtensions;
	unsigned _lastFetchedGPSCount;
	unsigned _insertedCountSinceLastFetchedGPSCount;
	unsigned _deletedCountSinceLastFetchedGPSCount;
	unsigned _newlyCompleteWithGPS;
	PLManagedAlbum* _cameraRollAlbum;
	PLFetchingAlbum* _userLibraryAlbum;
	PLFetchingAlbum* _cameraSessionAlbum;
	PLInFlightAssetsAlbum* _inFlightAssetsAlbum;
	PLManagedAlbumList* _rootAlbumList;
	PLManagedFolder* _rootFolder;
	NSString* _cachedName;
	PLManagedObjectContext* managedObjectContext;

}

@property (nonatomic,retain) PLManagedObjectContext * managedObjectContext; 
@property (nonatomic,retain,readonly) PLThumbnailManager * thumbnailManager; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> savedPhotosAlbum; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> userLibraryAlbum; 
@property (nonatomic,retain,readonly) NSObject*<PLAlbumProtocol> inFlightAssetsAlbum; 
@property (nonatomic,retain,readonly) PLManagedAlbumList * rootAlbumList; 
@property (nonatomic,retain,readonly) PLManagedFolder * rootFolder; 
@property (nonatomic,copy,readonly) NSArray * albums; 
@property (nonatomic,copy,readonly) NSArray * userAlbums; 
@property (nonatomic,copy,readonly) NSArray * imagePickerAlbums; 
@property (nonatomic,copy,readonly) NSArray * wallpaperAlbums; 
@property (nonatomic,copy,readonly) NSArray * importAlbums; 
@property (nonatomic,copy,readonly) NSArray * eventAlbums; 
@property (nonatomic,copy,readonly) NSArray * faceAlbums; 
@property (nonatomic,copy,readonly) NSArray * placeAlbums; 
@property (nonatomic,copy,readonly) NSObject*<PLAlbumProtocol> favoritesAlbum; 
@property (nonatomic,copy,readonly) NSArray * photoStreamAlbums; 
@property (nonatomic,copy,readonly) NSArray * photoStreamAlbumsForPreferences; 
+(id)sharedPhotoLibrary;
+(id)photoDataMiscDirectory;
+(NSObject*)savedPhotosAlbum;
+(id)photoOutboundSharingTmpDirectoryURL;
+(char)isStreamsLibraryUpdatingExpired;
+(void)setStreamsLibraryUpdatingExpired:(char)arg1 ;
+(id)syncedAlbumSubtitleStringFormat;
+(char)isRunningInStoreDemoMode;
+(unsigned long long)sharedStreamsSize;
+(id)lightweightReimportPhotoCloudSharingDataDirectory;
+(id)photoCloudSharingCacheDataDirectory;
+(id)photoMetadataDirectoryURL;
+(id)fileReservationForFileAtPath:(id)arg1 exclusive:(char)arg2 ;
+(void)setSqliteErrorAndExitIfNecessary;
+(id)crashRecoveryIndicatorFilePaths:(char)arg1 ;
+(void)_enqeueRecoveryJob:(id)arg1 ;
+(id)opportunisticTaskIsolationQueue;
+(char)_assetsdQueueingMode;
+(id)_statusDescriptionForQueue:(id)arg1 ;
+(char)photoLibraryIsObtainable;
+(id)photoDataDirectory;
+(void)setApplicationIsWildcat:(char)arg1 ;
+(void)_doFilesystemImportIfNeededWithMOC:(id)arg1 ;
+(void)_enqueueOperationWithName:(id)arg1 priority:(int)arg2 block:(/*^block*/id)arg3 ;
+(id)photoCloudSharingDataDirectory;
+(id)photoDataCachesDirectory;
+(id)dcimDirectoryURL;
+(void)_inq_createPhotoStreamAlbumStreamID:(id)arg1 inLibrary:(id)arg2 ;
+(id)takingVideoIndicatorFilePath;
+(id)takingPhotoIndicatorFilePath;
+(id)imageWriterIndicatorFilePath;
+(char)libraryAvailableIndicatorState;
+(id)pathToAssetsToAlbumsMapping;
+(id)iTunesSyncedAssetsDirectory;
+(id)mediaFilesDirectoryURL;
+(id)persistedAlbumDataDirectoryURL;
+(void)setLibraryAvailableIndicatorState:(char)arg1 ;
+(void)postGlobalPhotoLibraryAvailableNotification;
+(void)repairSingletonObjects;
+(id)migrationIndicatorFilePath;
+(id)momentAnalysisNeededFilePath;
+(id)forceSoftResetSyncPath;
+(id)disableICloudPhotosFilePath;
+(id)enableICloudPhotosFilePath;
+(void)clearICloudPhotosMarker;
+(void)setCameraRollCountedInQuota:(char)arg1 ;
+(char)isICloudPhotosPaused;
+(void)setPauseMarker:(char)arg1 ;
+(char)isEnableICloudPhotos;
+(char)isDisableICloudPhotos;
+(char)isForceSoftResetSync;
+(id)pauseICloudPhotosFilePath;
+(id)dupeAnalysisNeededFilePath;
+(id)libraryAvailableIndicatorFilePath;
+(id)streamsLibraryUpdatingExpiredIndicatorFilePath;
+(id)_dataProtectionIndicatorFilePath;
+(id)photoDataDirectoryURL;
+(id)photoDataCPLDirectory;
+(char)processWithID:(int)arg1 canReadSandboxForPath:(id)arg2 ;
+(char)processWithID:(int)arg1 canWriteSandboxForPath:(id)arg2 ;
+(id)sqliteErrorIndicatorFilePath;
+(char)createSqliteErrorIndicatorFile;
+(id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+(id)iTunesSyncedFaceDataDirectory;
+(id)iTunesPhotosDirectory;
+(id)iTunesSyncedAssetMetadataThumbnailsDirectory;
+(id)iTunesSyncedAssetSmallThumbnailsDirectory;
+(void)resetSyncedAssetsDCIMDirectory;
+(id)photoStreamsDataDirectory;
+(char)isDupeAnalysisNeeded;
+(id)syncInfoPath;
+(void)refreshCachedCountsOnAssetsContainerClass:(Class)arg1 inContext:(id)arg2 withPredicate:(id)arg3 ;
+(char)isApplicationWildcat;
+(void)handlePossibleCoreDataError:(id)arg1 ;
+(void)recoverFromCrashIfNeeded;
+(void)disableOpportunisticTasks:(char)arg1 ;
+(char)areOpportunisticTasksDisabled;
+(id)queueStatusDescription;
+(char)isSafeToRecoverAfterCrash;
+(void)setPhotoStreamEnabled:(char)arg1 ;
+(void)setCloudAlbumSharingEnabled:(char)arg1 ;
+(id)photoCloudSharingMetadataDirectory;
+(id)lightweightReimportPhotoCloudSharingAssetDirectoryForAlbumWithCloudGUID:(id)arg1 cloudPersonID:(id)arg2 ;
+(id)lightweightReimportPhotoCloudSharingAssetFileNameWithCloudAssetGUID:(id)arg1 type:(id)arg2 ;
+(id)assetsDataDirectory;
+(void)createPhotoStreamAlbumWithStreamID:(id)arg1 inLibrary:(id)arg2 ;
+(void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)setMigratorIsBusy:(char)arg1 ;
+(void)setImageWriterIsBusy:(char)arg1 ;
+(void)setVideoCaptureIsBusy:(char)arg1 ;
+(void)setTakingPhotoIsBusy:(char)arg1 ;
+(void)setMomentAnalysisNeeded:(char)arg1 ;
+(char)isMomentAnalysisNeeded;
+(void)forceSoftResetSync;
+(void)setDisableICloudPhotos:(char)arg1 ;
+(void)setEnableICloudPhotos:(char)arg1 ;
+(void)setICloudPhotosEnabled:(char)arg1 ;
+(id)pauseTime;
+(void)setDupeAnalysisNeeded:(char)arg1 ;
+(void)setDataProtectionComplete:(char)arg1 ;
+(char)isDataProtectionComplete;
+(id)photoMutationsDirectory;
+(id)videosPath;
+(id)photoDataCPLDerivativeDirectory;
+(id)photoDataCPLLibraryIdentifier;
+(id)photoDataCPLResourceDestinationDirectoryWithIdentifier:(id)arg1 ;
+(id)cplAssetsDirectoryURL;
+(id)dcimDirectory;
+(id)simpleDCIMDirectory;
+(char)processCanReadSandboxForPath:(id)arg1 ;
+(char)processCanWriteSandboxForPath:(id)arg1 ;
+(void)initializeGraphicsServices;
+(char)canSaveVideoToCameraRoll:(id)arg1 ;
+(char)isAlbumSynced:(id)arg1 ;
+(void)delayedRefreshCachedCountsInAlbumIDs:(id)arg1 ;
+(void)updateAlbumKeyAssetsInContext:(id)arg1 withPredicate:(id)arg2 ;
+(void)_assetsLibrary_disableSharedPhotoStreamsSupport;
+(char)_assetsLibrary_isSharedPhotoStreamsSupportEnabled;
+(unsigned long long)CloudPhotoLibrarySize;
+(id)_operationQueue;
-(void)performTransaction:(/*^block*/id)arg1 ;
-(char)hasAtLeastOneItem;
-(id)albumListForContentMode:(int)arg1 ;
-(char)hasITunesSyncedContent;
-(id)iTunesSyncedContentInfo;
-(void)performBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<PLAlbumProtocol>)inFlightAssetsAlbum;
-(id)photoFromAssetURL:(id)arg1 ;
-(void)copyAssetToCameraRoll:(id)arg1 ;
-(char)getPhotoCount:(unsigned*)arg1 videoCount:(unsigned*)arg2 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<PLAlbumProtocol>)savedPhotosAlbum;
-(NSArray *)albums;
-(id)duplicatePhotoStreamPhotosForPhotos:(id)arg1 ;
-(void)userUntrashAssets:(id)arg1 ;
-(void)userExpungeAssets:(id)arg1 ;
-(void)performTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTransientContext:(char)arg1 name:(const char*)arg2 ;
-(char)deleteAllDiagnosticFiles:(id*)arg1 ;
-(void)addCompletionHandlerToCurrentTransaction:(/*^block*/id)arg1 ;
-(id)assetWithUUID:(id)arg1 ;
-(NSObject*)albumWithUuid:(id)arg1 ;
-(id)syncProgressAlbumsIgnoreiTunes:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)name;
-(id)_init;
-(id)initWithName:(const char*)arg1 ;
-(char)isTransient;
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(PLManagedObjectContext *)managedObjectContext;
-(void)performTransactionAndWait:(/*^block*/id)arg1 ;
-(void)loadDatabase:(const char*)arg1 ;
-(unsigned)concurrencyType;
-(void)setManagedObjectContext:(PLManagedObjectContext *)arg1 ;
-(void)_releaseThumbnailManager;
-(char)_hasAtLeastOneItem:(char)arg1 ;
-(void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2 withReason:(id)arg3 ;
-(void)_withDispatchGroup:(id)arg1 synchronously:(char)arg2 priority:(int)arg3 name:(id)arg4 performTransaction:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_withDispatchGroup:(id)arg1 synchronously:(char)arg2 priority:(int)arg3 name:(id)arg4 performBlock:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)removeInflightAssets:(id)arg1 ;
-(PLManagedAlbumList *)rootAlbumList;
-(NSObject*)allPhotoStreamPhotosAlbum;
-(NSArray *)photoStreamAlbumsForPreferences;
-(void)_filterAlbums:(id)arg1 toTrashableAlbums:(id*)arg2 deletableAlbums:(id*)arg3 otherAlbums:(id*)arg4 ;
-(void)_userDeleteAlbums:(id)arg1 ;
-(void)_userApplyTrashedState:(short)arg1 toAlbums:(id)arg2 ;
-(NSArray *)photoStreamAlbums;
-(id)existingObjectWithID:(id)arg1 error:(id*)arg2 ;
-(id)assetWithUUID:(id)arg1 inContainer:(id)arg2 ;
-(void)_filterAssets:(id)arg1 toTrashableAssets:(id*)arg2 deletableAssets:(id*)arg3 otherAssets:(id*)arg4 ;
-(void)_userDeleteAssets:(id)arg1 withReason:(id)arg2 ;
-(void)_userApplyTrashedState:(short)arg1 toAssets:(id)arg2 ;
-(id)globalValueForKey:(id)arg1 ;
-(void)setGlobalValue:(id)arg1 forKey:(id)arg2 ;
-(void)_deleteObsoleteMetadataFiles;
-(void)_safeSave:(id)arg1 ;
-(void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1 ;
-(id)_allAssetsForDeletion:(id)arg1 ;
-(void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1 ;
-(id)_fetchCompleteAssetIDsWithSavedAssetType:(short)arg1 context:(id)arg2 ;
-(void)_linkAsideAlbumMetadataForOTARestore;
-(void)prepareDatabaseForOTAAssetsPhase;
-(void)deleteITunesSyncedContentWithReason:(id)arg1 ;
-(id)allImportedPhotosAlbumCreateIfNeeded:(char)arg1 ;
-(id)lastImportedPhotosAlbumCreateIfNeeded:(char)arg1 ;
-(void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned)arg1 deletedCount:(unsigned)arg2 updatedAssets:(id)arg3 ;
-(NSObject*)allPhotosAlbum;
-(NSObject*)iPadAllPhotosAlbum;
-(id)newImageForPhoto:(id)arg1 format:(int)arg2 ;
-(PLThumbnailManager *)thumbnailManager;
-(id)newImageForPhoto:(id)arg1 format:(int)arg2 allowPlaceholder:(char)arg3 outImageProperties:(const _CFDictionary*)arg4 outDeliveredPlaceholder:(char*)arg5 ;
-(void)addSidecarFileInfo:(id)arg1 toAsset:(id)arg2 atIndex:(unsigned)arg3 ;
-(void)_processPhotoIrisSidecarIfNecessary:(id)arg1 forAsset:(id)arg2 ;
-(id)allImportedPhotosAlbum;
-(int)priorityForFileExtension:(id)arg1 ;
-(void)_loadFileExtensionInformation;
-(char)isNonRawImageFileExtension:(id)arg1 ;
-(char)isRawImageFileExtension:(id)arg1 ;
-(char)isVideoFileExtension:(id)arg1 ;
-(char)isAudioFileExtension:(id)arg1 ;
-(void)cleanupFilesAfteriTunesSyncBeforeDate:(id)arg1 ;
-(NSObject*)syncProgressAlbum;
-(NSObject*)eventAlbumContainingPhoto:(id)arg1 ;
-(NSArray *)imagePickerAlbums;
-(char)getPhotoCount:(unsigned*)arg1 videoCount:(unsigned*)arg2 excludeTrashed:(char)arg3 excludeInvisible:(char)arg4 excludeCloudShared:(char)arg5 ;
-(NSObject*)otaRestoreProgressAlbum;
-(NSObject*)filesystemImportProgressAlbum;
-(char)_hasIncompleteAsset;
-(char)hasCompletedRestorePostProcessing;
-(char)_hasPendingAssetsIgnoreiTunes:(char)arg1 ;
-(char)isReadyForCloudPhotoLibrary;
-(id)incompleteRestoreProcesses;
-(char)hasCompletedMomentAnalysis;
-(char)_checkMomentAnalysisCompletion;
-(void)performTransaction:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(int)arg3 ;
-(void)testForRecoveryInBackground;
-(id)existingThumbnailManager;
-(void)flushDCIMAlbums;
-(void)flushPhotoStreamAlbums;
-(void)flushAlbums;
-(void)clientApplicationWillEnterForeground;
-(void)photoLibraryCorruptNotification;
-(char)hasAtLeastOnePhoto;
-(void)deleteFailedInMemoryCameraAsset:(id)arg1 ;
-(void)deleteAllImages;
-(void)performTransaction:(/*^block*/id)arg1 withPriority:(int)arg2 ;
-(void)performTransactionAndWait:(/*^block*/id)arg1 withPriority:(int)arg2 ;
-(void)performTransactionAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(int)arg3 ;
-(void)performTransactionAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 withPriority:(int)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(int)arg3 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 withPriority:(int)arg2 ;
-(void)performBlockAndWait:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 withPriority:(int)arg3 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/id)arg2 ;
-(void)withDispatchGroup:(id)arg1 performTransaction:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)withDispatchGroup:(id)arg1 performBlock:(/*^block*/id)arg2 ;
-(NSObject*<PLAlbumProtocol>)userLibraryAlbum;
-(NSObject*)inFlightAssetsAlbumIfAvailable;
-(void)addInflightAsset:(id)arg1 ;
-(NSObject*)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 ;
-(PLManagedFolder *)rootFolder;
-(NSArray *)userAlbums;
-(NSArray *)wallpaperAlbums;
-(NSArray *)importAlbums;
-(NSArray *)eventAlbums;
-(NSArray *)faceAlbums;
-(NSArray *)placeAlbums;
-(void)userTrashAlbums:(id)arg1 ;
-(void)userUntrashAlbums:(id)arg1 ;
-(void)userExpungeAlbums:(id)arg1 ;
-(id)albumListForAlbumOfKind:(int)arg1 ;
-(NSObject*<PLAlbumProtocol>)favoritesAlbum;
-(unsigned)countOfLocalAlbumsContainingAssets:(id)arg1 assetsInSomeAlbumCount:(int*)arg2 ;
-(id)objectWithObjectID:(id)arg1 ;
-(void)userTrashAssets:(id)arg1 ;
-(void)addToKnownPhotoStreamAlbums:(id)arg1 ;
-(void)removeFromKnownPhotoStreamAlbums:(id)arg1 ;
-(id)lastImportSessionUUID;
-(void)setLastImportSessionUUID:(id)arg1 ;
-(id)assetURLForPhoto:(id)arg1 extension:(id)arg2 ;
-(id)assetURLForPhoto:(id)arg1 ;
-(id)assetURLForManagedPhoto:(id)arg1 ;
-(NSObject*)albumFromGroupURL:(id)arg1 ;
-(void)cleanupAfterImportAllDCIMAssets;
-(void)cleanupModelForDataMigrationPurgeMissingSharedAndSynced;
-(void)cleanupForStoreDemoMode;
-(id)managedObjectWithObjectID:(id)arg1 ;
-(id)managedObjectContextStoreUUID;
-(char)needsMigration;
-(void)recreateAlbumsFromMetadata;
-(id)lastImportedPhotosAlbum;
-(void)resetCachedImportAlbumsIfNeededForAlbum:(id)arg1 ;
-(char)hasAtLeastOnePhotoWithGPS;
-(void)_updateWithInsertedAssetsCount:(unsigned)arg1 deletedCount:(unsigned)arg2 updatedAssets:(id)arg3 ;
-(id)syncedAlbums;
-(unsigned)editableAlbumCount;
-(NSObject*)allPhotosAlbumIfExists;
-(NSObject*)iPadAllPhotosAlbumIfExists;
-(id)imageForFormat:(int)arg1 forAsset:(id)arg2 ;
-(id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 ;
-(void)modifyDCIMEntryForPhoto:(id)arg1 ;
-(id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(NSObject*)arg2 sidecarFileInfo:(id)arg3 progress:(id)arg4 importSessionIdentifier:(id)arg5 isImported:(char)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(short)arg9 replacementUUID:(id)arg10 publicGlobalUUID:(id)arg11 extendedInfo:(id)arg12 thumbnailsData:(CFDictionaryRef)arg13 withUUID:(id)arg14 ignoreEmbeddedMetadata:(char)arg15 isPlaceholder:(char)arg16 ;
-(id)masterURLFromSidecarURLs:(id)arg1 ;
-(id)masterFilenameFromSidecarFileInfo:(id)arg1 ;
-(char)isImageFileExtension:(id)arg1 ;
-(char)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(long long)arg3 ;
-(void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2 ;
-(char)isPhotoInSavedPhotosAlbum:(id)arg1 ;
-(id)albumsForContentMode:(int)arg1 ;
-(id)librarySizes;
-(void)deleteExpiredTrashBinObjects;
@end

