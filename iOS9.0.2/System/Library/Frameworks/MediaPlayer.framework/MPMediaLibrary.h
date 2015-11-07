/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;
@class NSObject, NSArray, QueryCriteriaResultsCache, NSMutableDictionary, NSMutableArray, NSHashTable, CADisplayLink, NSURL, NSString, NSDate;

@interface MPMediaLibrary : NSObject <NSSecureCoding> {

	id<MPMediaLibraryDataProviderPrivate> _libraryDataProvider;
	int _libraryChangeObservers;
	NSObject*<OS_dispatch_queue> _entityCacheQueue;
	NSObject*<OS_dispatch_queue> _fixedQueue;
	NSArray* _notificationObservers;
	QueryCriteriaResultsCache* _itemsForCriteriaCache;
	QueryCriteriaResultsCache* _hasItemsForCriteriaCache;
	QueryCriteriaResultsCache* _countOfItemsForCriteriaCache;
	QueryCriteriaResultsCache* _itemResultSetsForCriteriaCache;
	QueryCriteriaResultsCache* _collectionsForCriteriaCache;
	QueryCriteriaResultsCache* _hasCollectionsForCriteriaCache;
	QueryCriteriaResultsCache* _countOfCollectionsForCriteriaCache;
	QueryCriteriaResultsCache* _collectionsResultSetsForCriteriaCache;
	NSMutableDictionary* _hasItemsDidLoadForCriteria;
	NSMutableDictionary* _hasCollectionsDidLoadForCriteria;
	NSMutableDictionary* _countOfCollectionsDidLoadForCriteria;
	NSMutableDictionary* _countOfItemsDidLoadForCriteria;
	NSMutableArray* _additionalLibraryFilterPredicates;
	NSObject*<OS_dispatch_queue> _additionalLibraryFilterPredicatesAccessQueue;
	NSHashTable* _connectionAssertions;
	char _disconnectAfterReleasingAssertions;
	float _connectionProgress;
	CADisplayLink* _connectionProgressDisplayLink;
	double _connectionProgressStartTime;
	int _removalReason;
	unsigned _determinedHasMedia : 1;
	unsigned _hasMedia : 1;
	unsigned _determinedHasSongs : 1;
	unsigned _hasSongs : 1;
	unsigned _determinedHasGeniusMixes : 1;
	unsigned _hasGeniusMixes : 1;
	unsigned _determinedHasPlaylists : 1;
	unsigned _hasPlaylists : 1;
	unsigned _determinedHasComposers : 1;
	unsigned _hasComposers : 1;
	unsigned _determinedHasPodcasts : 1;
	unsigned _hasPodcasts : 1;
	unsigned _determinedHasUbiquitousBookmarkableItems : 1;
	unsigned _hasUbiquitousBookmarkableContent : 1;
	unsigned _determinedHasAudiobooks : 1;
	unsigned _hasAudiobooks : 1;
	int _cloudFilteringType;
	char _filteringDisabled;
	char _hasVideos;
	char _determinedHasVideos;
	char _hasMusicVideos;
	char _determinedHasMusicVideos;
	char _hasAudibleAudioBooks;
	char _determinedHasAudibleAudioBooks;
	char _hasMovies;
	char _determinedHasMovies;
	char _hasCompilations;
	char _determinedHasCompilations;
	char _hasITunesU;
	char _determinedHasITunesU;
	char _hasVideoITunesU;
	char _determinedHasVideoITunesU;
	char _hasMovieRentals;
	char _determinedHasMovieRentals;
	char _hasTVShows;
	char _determinedHasTVShows;
	char _hasHomeVideos;
	char _determinedHasHomeVideos;
	char _hasVideoPodcasts;
	char _determinedHasVideoPodcasts;
	unsigned char _originalCellNetworkFlags;
	unsigned char _originalWiFiNetworkFlags;

}

@property (nonatomic,readonly) NSURL * protectedContentSupportStorageURL; 
@property (nonatomic,readonly) NSString * _syncValidity; 
@property (nonatomic,readonly) NSDate * lastModifiedDate; 
@property (assign,nonatomic) int removalReason; 
+(id)deviceMediaLibrary;
+(void)setRunLoopForNotifications:(id)arg1 ;
+(id)mediaLibraries;
+(id)_mediaLibraries;
+(id)_libraryDataProviders;
+(id)_libraryForDataProvider:(id)arg1 ;
+(char)companionDeviceActiveStoreAccountIsSubscriber;
+(void)setDefaultMediaLibrary:(id)arg1 ;
+(void)beginDiscoveringMediaLibraries;
+(void)endDiscoveringMediaLibraries;
+(char)isLibraryServerDisabled;
+(void)setLibraryServerDisabled:(char)arg1 ;
+(id)mediaLibraryWithUniqueIdentifier:(id)arg1 ;
+(id)libraryDataProviders;
+(void)addLibraryDataProvider:(id)arg1 ;
+(void)removeLibraryDataProvider:(id)arg1 removalReason:(int)arg2 ;
+(void)reloadLibraryDataProvider:(id)arg1 ;
+(void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1 ;
+(void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1 ;
+(void)reloadDisplayValuesForLibraryDataProvider:(id)arg1 ;
+(void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1 ;
+(void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1 ;
+(char)supportsSecureCoding;
+(void)initialize;
+(id)defaultMediaLibrary;
-(id)MPU_entityWithContentItemIdentifierCollection:(id)arg1 options:(unsigned)arg2 ;
-(id)_MPU_ML3QueryWithEntityClass:(Class)arg1 predicate:(id)arg2 options:(unsigned)arg3 ;
-(id)errorResolverForItem:(id)arg1 ;
-(id)preferredAudioLanguages;
-(id)preferredSubtitleLanguages;
-(id)completeMyCollectionArtworkDataSource;
-(id)artworkDataSource;
-(NSURL *)protectedContentSupportStorageURL;
-(void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performStoreItemLibraryImport:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)playlistWithPersistentID:(unsigned long long)arg1 ;
-(id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(int)arg2 verifyExistence:(char)arg3 ;
-(id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(char)arg2 ;
-(id)libraryDataProvider;
-(char)collectionExistsContainedWithinPersistentIDs:(const unsigned long long*)arg1 count:(unsigned long)arg2 groupingType:(int)arg3 existentPID:(unsigned long long*)arg4 ;
-(char)collectionExistsWithName:(id)arg1 groupingType:(int)arg2 existentPID:(unsigned long long*)arg3 ;
-(void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(int)arg2 artworkToken:(id)arg3 artworkType:(int)arg4 sourceType:(int)arg5 ;
-(char)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(int)arg3 sourceType:(int)arg4 mediaType:(unsigned)arg5 ;
-(char)itemExistsWithPersistentID:(unsigned long long)arg1 ;
-(char)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(int)arg2 ;
-(id)entityWithMultiverseIdentifier:(id)arg1 ;
-(id)_itemsForQueryCriteria:(id)arg1 ;
-(id)_collectionsForQueryCriteria:(id)arg1 ;
-(char)_hasItemsForQueryCriteria:(id)arg1 ;
-(char)_hasCollectionsForQueryCriteria:(id)arg1 ;
-(unsigned)_countOfItemsForQueryCriteria:(id)arg1 ;
-(unsigned)_countOfCollectionsForQueryCriteria:(id)arg1 ;
-(id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1 ;
-(id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1 ;
-(id)newPlaylistWithPersistentID:(unsigned long long)arg1 ;
-(id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(int)arg2 ;
-(id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1 ;
-(id)itemWithPersistentID:(unsigned long long)arg1 ;
-(id)decodeItemWithCoder:(id)arg1 ;
-(void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(int)arg3 ;
-(void)clearLocationPropertiesOfItem:(id)arg1 ;
-(void)endGeneratingLibraryChangeNotifications;
-(void)_clearPendingDisconnection;
-(void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1 ;
-(void)_setupNotifications;
-(void)setLibraryFilterPredicates;
-(void)_tearDownNotifications;
-(void)_clearCachedEntitiesIncludingResultSets:(char)arg1 ;
-(void)_clearCachedContentDataAndResultSets:(char)arg1 ;
-(void)_scheduleLibraryChangeNotificationPostingBlock:(/*^block*/id)arg1 ;
-(void)_reloadLibraryForRestrictionsChange;
-(void)_stopConnectionProgressDisplayLink;
-(void)_connectionProgressDisplayLinkCallback:(id)arg1 ;
-(NSDate *)lastModifiedDate;
-(unsigned long long)currentEntityRevision;
-(unsigned long long)syncGenerationID;
-(long long)playlistGeneration;
-(char)writable;
-(char)hasMediaOfType:(unsigned)arg1 ;
-(char)hasGeniusMixes;
-(char)hasSongs;
-(char)hasUbiquitousBookmarkableItems;
-(char)_checkHasContent:(char*)arg1 determined:(char*)arg2 mediaType:(unsigned)arg3 queryHasEntitiesBlock:(/*^block*/id)arg4 ;
-(char)_checkHasContent:(char*)arg1 determined:(char*)arg2 queryHasEntitiesBlock:(/*^block*/id)arg3 ;
-(char)playlistExistsWithPersistentID:(unsigned long long)arg1 ;
-(id)localizedSectionHeaderForSectionIndex:(unsigned)arg1 ;
-(id)localizedSectionIndexTitles;
-(id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(char)arg2 ;
-(char)setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)valueForDatabaseProperty:(id)arg1 ;
-(char)isGeniusEnabled;
-(char)requiresAuthentication;
-(void)connectWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)performReadTransactionWithBlock:(/*^block*/id)arg1 ;
-(char)isCurrentThreadInTransaction;
-(id)syncValidity;
-(id)entityCache;
-(id)entityWithLibraryURL:(id)arg1 ;
-(unsigned long long)_persistentIDForAssetURL:(id)arg1 ;
-(char)collectionExistsWithStoreID:(long long)arg1 groupingType:(int)arg2 existentPID:(unsigned long long*)arg3 ;
-(id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(/*^block*/id)arg5 loadValueFromDataProviderBlock:(/*^block*/id)arg6 ;
-(id)additionalLibraryFilterPredicates;
-(int)cloudFilteringType;
-(void)_canShowCloudTracksDidChangeNotification:(id)arg1 ;
-(void)_displayValuesDidChangeNotification:(id)arg1 ;
-(id)_initWithLibraryDataProvider:(id)arg1 ;
-(void)setRemovalReason:(int)arg1 ;
-(void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1 ;
-(void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1 ;
-(void)addStoreItemIDs:(id)arg1 andAddTracksToCloudLibrary:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)addTracksToMyLibrary:(id)arg1 ;
-(void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)addLibraryFilterPredicate:(id)arg1 ;
-(void)removeLibraryFilterPredicate:(id)arg1 ;
-(int)removalReason;
-(id)modificationToken;
-(char)libraryHasBeenModifiedWithToken:(id)arg1 ;
-(char)hasMedia;
-(char)hasPlaylists;
-(char)hasArtists;
-(char)hasAlbums;
-(char)hasPodcasts;
-(char)hasGenres;
-(char)hasComposers;
-(char)hasAudiobooks;
-(char)hasVideos;
-(char)hasMusicVideos;
-(char)hasAudibleAudioBooks;
-(char)hasMovies;
-(char)hasCompilations;
-(char)hasITunesUContent;
-(char)hasAudioITunesUContent;
-(char)hasVideoITunesUContent;
-(char)hasMovieRentals;
-(char)hasTVShows;
-(char)hasHomeVideos;
-(char)hasVideoPodcasts;
-(char)itemExistsInDatabaseWithPersistentID:(unsigned long long)arg1 ;
-(id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(int)arg2 ;
-(id)itemWithStoreID:(unsigned long long)arg1 ;
-(id)playbackHistoryPlaylist;
-(id)addPlaylistWithName:(id)arg1 ;
-(void)setSyncPlaylistId:(unsigned long long)arg1 ;
-(unsigned long long)syncPlaylistId;
-(char)deleteItems:(id)arg1 ;
-(char)removeItems:(id)arg1 ;
-(char)removePlaylist:(id)arg1 ;
-(void)downloadAsset:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)connectWithAuthenticationData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)connectionAssertionWithIdentifier:(id)arg1 ;
-(float)connectionProgress;
-(id)entityWithSpotlightIdentifier:(id)arg1 ;
-(char)isValidAssetURL:(id)arg1 ;
-(id)pathForAssetURL:(id)arg1 ;
-(void)setCloudFilteringType:(int)arg1 ;
-(void)_removeConnectionAssertion:(id)arg1 ;
-(void)addStoreItem:(long long)arg1 andAddTracksToCloudLibrary:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)addAdvertisementItemWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addPlaylistStoreItemsWithMetadata:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 inUsersLibrary:(char)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 usingBlock:(/*^block*/id)arg3 ;
-(NSString *)_syncValidity;
-(void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)name;
-(void)_didReceiveMemoryWarning:(id)arg1 ;
-(id)uniqueIdentifier;
-(void)disconnect;
-(int)status;
-(void)beginGeneratingLibraryChangeNotifications;
-(id)databasePath;
-(char)performTransactionWithBlock:(/*^block*/id)arg1 ;
@end

