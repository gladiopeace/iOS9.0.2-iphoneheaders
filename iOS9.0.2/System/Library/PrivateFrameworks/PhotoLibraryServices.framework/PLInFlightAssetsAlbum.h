/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLAlbumProtocol.h>
#import <libobjc.A.dylib/PLIndexMappingCache.h>
#import <libobjc.A.dylib/PLDerivedAlbumOrigin.h>

@protocol PLIndexMappingCache;
@class NSFetchRequest, NSMutableOrderedSet, NSCache, PLManagedAlbum, NSObject, NSString, NSOrderedSet, PLManagedAsset, NSArray, NSDate, NSNumber, UIImage, NSDictionary, NSURL;

@interface PLInFlightAssetsAlbum : NSObject <PLAlbumProtocol, PLIndexMappingCache, PLDerivedAlbumOrigin> {

	NSFetchRequest* _fetchRequest;
	NSMutableOrderedSet* _albumOIDs;
	NSMutableOrderedSet* _inflightAssets;
	unsigned _photosCount;
	unsigned _videosCount;
	NSCache* __assetCache;
	PLManagedAlbum* _backingAlbum;
	char _sessionLimited;
	id _weak_assets;
	NSObject*<PLIndexMappingCache> _derivedAlbums[5];
	char __notificationsEnabled;

}

@property (nonatomic,retain,readonly) PLManagedAlbum * backingAlbum;                          //@synthesize backingAlbum=_backingAlbum - In the implementation block
@property (assign,nonatomic) char sessionLimited; 
@property (assign,nonatomic) NSMutableOrderedSet * _assets; 
@property (assign,nonatomic) char _notificationsEnabled;                                      //@synthesize _notificationsEnabled=__notificationsEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned approximateCount; 
@property (nonatomic,readonly) unsigned assetsCount; 
@property (nonatomic,readonly) unsigned photosCount; 
@property (nonatomic,readonly) unsigned videosCount; 
@property (nonatomic,readonly) char isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) char canShowComments; 
@property (nonatomic,readonly) char canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) char hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) char isLibrary; 
@property (nonatomic,readonly) char isCameraAlbum; 
@property (nonatomic,readonly) char isPanoramasAlbum; 
@property (nonatomic,readonly) char isWallpaperAlbum; 
@property (nonatomic,readonly) char isPhotoStreamAlbum; 
@property (nonatomic,readonly) char isCloudSharedAlbum; 
@property (nonatomic,readonly) char isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) char isStandInAlbum; 
@property (nonatomic,readonly) char isFolder; 
@property (nonatomic,readonly) char isInTrash; 
@property (nonatomic,readonly) char isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) char isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) char isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) char isRecentlyAddedAlbum; 
@property (nonatomic,readonly) char isUserLibraryAlbum; 
@property (nonatomic,readonly) char canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) char shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned batchSize; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
+(NSObject*)inFlightAssetsAlbumWithBackingAlbum:(NSObject*)arg1 ;
-(char)canPerformEditOperation:(unsigned)arg1 ;
-(char)canShowAvalancheStacks;
-(PLManagedAsset *)keyAsset;
-(unsigned)approximateCount;
-(UIImage *)posterImage;
-(void)reducePendingItemsCountBy:(unsigned)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
-(id)filteredIndexesForPredicate:(id)arg1 ;
-(void)setUINotificationsEnabled:(char)arg1 ;
-(int)kindValue;
-(NSMutableOrderedSet *)mutableAssets;
-(char)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(char)arg1 ;
-(char)isLibrary;
-(char)isCameraAlbum;
-(char)isPanoramasAlbum;
-(char)isWallpaperAlbum;
-(char)isPhotoStreamAlbum;
-(char)isCloudSharedAlbum;
-(char)isPendingPhotoStreamAlbum;
-(char)isStandInAlbum;
-(char)isFolder;
-(char)isInTrash;
-(char)isOwnedCloudSharedAlbum;
-(char)isFamilyCloudSharedAlbum;
-(char)isMultipleContributorCloudSharedAlbum;
-(char)isRecentlyAddedAlbum;
-(char)isUserLibraryAlbum;
-(char)canContributeToCloudSharedAlbum;
-(char)shouldDeleteWhenEmpty;
-(NSDictionary *)slideshowSettings;
-(void)setSlideshowSettings:(NSDictionary *)arg1 ;
-(NSString *)importSessionID;
-(void)setImportSessionID:(NSString *)arg1 ;
-(NSURL *)groupURL;
-(id)sortingComparator;
-(int)pendingItemsCount;
-(void)setPendingItemsCount:(int)arg1 ;
-(int)pendingItemsType;
-(void)setPendingItemsType:(int)arg1 ;
-(unsigned)batchSize;
-(NSOrderedSet *)assets;
-(unsigned)assetsCount;
-(unsigned)photosCount;
-(unsigned)videosCount;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(char)canShowComments;
-(NSArray *)localizedLocationNames;
-(char)sessionLimited;
-(NSMutableOrderedSet *)_assets;
-(void)dealloc;
-(unsigned)count;
-(NSString *)description;
-(NSString *)title;
-(char)isEmpty;
-(NSString *)localizedTitle;
-(NSNumber *)kind;
-(NSString *)uuid;
-(void)addInFlightAsset:(id)arg1 ;
-(void)removeInflightAssets:(id)arg1 ;
-(id)fetchRequest;
-(unsigned)_fetchedCountForAssetsOfKind:(short)arg1 ;
-(unsigned)countForAssetsOfKind:(short)arg1 ;
-(void)unregisterAllDerivedAlbums;
-(void)enumerateDerivedAlbums:(/*^block*/id)arg1 ;
-(void)registerDerivedAlbum:(NSObject*)arg1 ;
-(char)hasDerivedIndexMappers;
-(id)assetsByObjectIDAtIndexes:(id)arg1 ;
-(PLManagedAlbum *)backingAlbum;
-(void)set_assets:(NSMutableOrderedSet *)arg1 ;
-(char)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id)currentStateForChange;
-(id<NSObject><NSCopying>)cachedIndexMapState;
-(id)initWithBackingAlbum:(NSObject*)arg1 ;
-(id)_albumOIDs;
-(void)_resetAlbumOIDs;
-(id)managedObjectForOID:(id)arg1 ;
-(id)managedObjectsForOIDs:(id)arg1 ;
-(id)managedObjectsAtAlbumIndexes:(id)arg1 ;
-(id)managedObjectAtAlbumIndex:(unsigned)arg1 ;
-(void)setSessionLimited:(char)arg1 ;
-(void)_fetchAndUpdateInflightAssetsWithUUIDs:(id)arg1 ;
-(void)clearAssetCaches;
-(unsigned)countOfMergedAssets;
-(unsigned)indexInMergedAssetsOfObject:(id)arg1 ;
-(id)objectInMergedAssetsAtIndex:(unsigned)arg1 ;
-(void)getMergedAssets:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertObject:(id)arg1 inMergedAssetsAtIndex:(unsigned)arg2 ;
-(void)removeObjectFromMergedAssetsAtIndex:(unsigned)arg1 ;
-(void)startNewSession;
-(char)_notificationsEnabled;
-(void)set_notificationsEnabled:(char)arg1 ;
@end

