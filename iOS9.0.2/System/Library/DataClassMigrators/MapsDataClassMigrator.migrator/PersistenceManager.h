/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class NSString, MapsPaths, RAPStorage, NSDictionary;

@interface PersistenceManager : NSObject <GEOResourceManifestTileGroupObserver> {

	NSString* _settingsDirectoryPath;
	MapsPaths* _locations;
	RAPStorage* _directionsRecordingsStorage;
	RAPStorage* _searchRecordingsStorage;
	NSDictionary* _directionsCache;
	NSDictionary* _directionsCacheObjectThatFailedToBeWrittenBecauseTheDeviceWasLockedLastTimeWeChecked;
	NSString* _directionsCacheKeyThatFailedToBeWrittenBecauseTheDeviceWasLockedLastTimeWeChecked;

}

@property (nonatomic,readonly) NSString * settingsDirectoryPath;              //@synthesize settingsDirectoryPath=_settingsDirectoryPath - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(id)directionsCache;
-(id)readMSPHistory;
-(id)readDirections;
-(id)directionsCachePaginationArrayForKey:(id)arg1 ;
-(id)readBookmarksDictionary;
-(id)readFailedDirectionsRequests;
-(void)editSearchRecordingForHistoryItem:(id)arg1 fromHistory:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)writeDirectionsRecording:(id)arg1 forDirectionsHistoryItem:(id)arg2 inHistory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)readTransitAppRanker;
-(char)writePins:(id)arg1 error:(id*)arg2 ;
-(char)getDirectionsRecording:(out id*)arg1 forHistoryItem:(id)arg2 fromHistory:(id)arg3 error:(out id*)arg4 ;
-(id)directionsCacheDataArrayForKey:(id)arg1 ;
-(char)addPaginationDataToDirectionsCache:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)writeFailedMSPDirectionsRequests:(id)arg1 error:(id*)arg2 ;
-(char)writeFailedDirectionsRequests:(id)arg1 error:(id*)arg2 ;
-(char)addDataToDirectionsCache:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)checkOrCreateBookmarksSynced;
-(char)writeTransitAppRanker:(id)arg1 error:(id*)arg2 ;
-(id)readNanoHistory;
-(char)checkOrCreateHistorySynced;
-(char)writeMSPHistory:(id)arg1 error:(id*)arg2 ;
-(char)writeFailedMSPSearches:(id)arg1 error:(id*)arg2 ;
-(id)readFailedMSPDirectionsRequests;
-(id)readFailedMSPSearches;
-(id)_readFailedMSPItemsAtPath:(id)arg1 ;
-(id)readMSPBookmarksDictionary;
-(id)initWithPersistenceData:(id)arg1 ;
-(void)deleteFailedDirectionsRequests;
-(void)deleteFailedSearches;
-(char)_writeFailedMSPHistoryItems:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(void)_syncDirectionsCacheIfNeeded;
-(id)_searchRecordingsStorage:(id*)arg1 ;
-(void)deleteTransitAppRanker;
-(id)readNanoHistoryDictionary;
-(char)_syncRAPStorageWithItemsFromHistory:(id)arg1 error:(id*)arg2 ;
-(id)cacheKeyForWaypoints:(id)arg1 ;
-(id)readMSPHistoryDictionary;
-(void)writeSearchRecordingWithContentsOfObject:(id)arg1 forHistoryItem:(id)arg2 inHistory:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_canonicalHistoryItemForItem:(id)arg1 inHistory:(id)arg2 ;
-(id)_searchResultsSettingsPath:(int)arg1 ;
-(char)_writeDirectionsCache:(id)arg1 error:(id*)arg2 ;
-(char)readDirectionsRecordings:(out id*)arg1 associatedHistoryItems:(out id*)arg2 fromHistory:(id)arg3 error:(out id*)arg4 ;
-(char)readSearchRecording:(out id*)arg1 forHistoryItem:(id)arg2 fromHistory:(id)arg3 error:(out id*)arg4 ;
-(id)_readFailedItemsAtPath:(id)arg1 ;
-(void)deleteDirections;
-(id)_directionsRecordingsStorage:(id*)arg1 ;
-(char)_writeFailedHistoryItems:(id)arg1 toPath:(id)arg2 error:(id*)arg3 ;
-(char)_writeMSPHistoryFromHistoryItems:(id)arg1 syncItemsToRAPStorage:(char)arg2 error:(id*)arg3 ;
-(char)_deleteSyncedFileWithName:(id)arg1 ;
-(void)_cleanDirectionsCache;
-(NSString *)settingsDirectoryPath;
-(void)_deleteDirectionsCacheFile;
-(id)readLegacyBookmarksDictionary;
-(char)_createSyncedFileIfNotExistsWithName:(id)arg1 ;
-(id)_directionsRecordingsDirectoryURLCreatingIfNonexistent:(char)arg1 error:(id*)arg2 ;
-(id)_searchRecordingsDirectoryURLCreatingIfNonexistent:(char)arg1 error:(id*)arg2 ;
-(void)deleteLegacyBookmarks;
-(char)writeMSPBookmarks:(id)arg1 error:(id*)arg2 ;
-(char)writeSearchResults:(id)arg1 toType:(int)arg2 error:(id*)arg3 ;
-(id)readMSPBookmarks;
-(char)deleteBookmarksSyncedFile;
-(id)readLegacyHistory;
-(char)writeLegacyHistory:(id)arg1 error:(id*)arg2 ;
-(char)writeMSPHistoryWithLegacyHistoryItems:(id)arg1 error:(id*)arg2 ;
-(id)readFailedSearches;
-(id)readLegacyBookmarks;
-(char)writeFailedSearches:(id)arg1 error:(id*)arg2 ;
-(char)writeLegacyBookmarks:(id)arg1 error:(id*)arg2 ;
-(char)deleteHistorySyncedFile;
-(char)writeDirections:(id)arg1 error:(id*)arg2 ;
-(id)readSearchResultsType:(int)arg1 error:(id*)arg2 ;
-(void)deleteHistory;
-(void)dealloc;
-(void)_deleteItemAtPath:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)readPins;
@end

