/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLUserEditableAlbumProtocol.h>
#import <libobjc.A.dylib/PLCloudSharedAlbumProtocol.h>
#import <libobjc.A.dylib/PLIndexMapperDataSource.h>
#import <libobjc.A.dylib/PLIndexMappingCache.h>

@class NSString, NSDictionary, NSDate, NSOrderedSet, NSNumber, NSIndexSet, PLIndexMapper, NSMutableIndexSet, NSMutableOrderedSet, NSPredicate, NSArray, PLManagedAsset, UIImage, NSURL;

@interface PLFilteredAlbum : NSObject <PLUserEditableAlbumProtocol, PLCloudSharedAlbumProtocol, PLIndexMapperDataSource, PLIndexMappingCache> {

	PLIndexMapper* _indexMapper;
	NSMutableIndexSet* _filteredIndexes;
	char _backingAlbumSupportsEdits;
	char _backingAlbumSupportsCloudShared;
	NSMutableOrderedSet* _weak_assets;
	char isObservingContextChanges;
	NSObject* _backingAlbum;
	int filter;
	NSPredicate* predicate;
	NSArray* _filterParameters;

}

@property (assign,nonatomic) int filter; 
@property (nonatomic,retain,readonly) NSArray * filterParameters;                              //@synthesize filterParameters=_filterParameters - In the implementation block
@property (nonatomic,retain,readonly) PLIndexMapper * indexMapper; 
@property (nonatomic,retain) NSObject*<PLAlbumProtocol> backingAlbum;                          //@synthesize backingAlbum=_backingAlbum - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate; 
@property (assign,nonatomic) char isObservingContextChanges; 
@property (assign,nonatomic) NSMutableOrderedSet * _assets; 
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
@property (nonatomic,retain,readonly) NSMutableOrderedSet * userEditableAssets; 
@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSDictionary * cloudMetadata; 
@property (nonatomic,retain) NSString * cloudOwnerFirstName; 
@property (nonatomic,retain) NSString * cloudOwnerLastName; 
@property (nonatomic,retain) NSString * cloudOwnerFullName; 
@property (nonatomic,retain) NSString * cloudOwnerEmail; 
@property (nonatomic,retain) NSString * cloudOwnerHashedPersonID; 
@property (nonatomic,retain) NSDate * cloudSubscriptionDate; 
@property (nonatomic,retain) NSString * publicURL; 
@property (nonatomic,retain) NSOrderedSet * invitationRecords; 
@property (nonatomic,retain) NSNumber * unseenAssetsCount; 
@property (assign) unsigned unseenAssetsCountIntegerValue; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabled; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabledLocal; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabled; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabledLocal; 
@property (nonatomic,retain) NSDate * cloudLastInterestingChangeDate; 
@property (nonatomic,retain) NSDate * cloudCreationDate; 
@property (nonatomic,retain) NSDate * cloudLastContributionDate; 
@property (nonatomic,retain) NSString * cloudPersonID; 
@property (readonly) int cloudRelationshipStateValue; 
@property (readonly) int cloudRelationshipStateLocalValue; 
@property (nonatomic,retain,readonly) NSString * localizedSharedWithLabel; 
@property (nonatomic,retain,readonly) NSOrderedSet * cloudAlbumSubscriberRecords; 
@property (nonatomic,retain,readonly) NSDate * cloudFirstRecentBatchDate; 
@property (assign,nonatomic) char cloudNotificationsEnabled; 
@property (nonatomic,copy,readonly) NSIndexSet * filteredIndexes; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
+(id)predicateForAlbumFilter:(int)arg1 parameters:(id)arg2 ;
+(NSObject*)unfilteredAlbum:(NSObject*)arg1 ;
+(NSObject*)filteredAlbum:(NSObject*)arg1 filter:(int)arg2 parameters:(id)arg3 ;
+(id)descriptionForAlbumFilter:(int)arg1 parameters:(id)arg2 ;
+(id)filteredIndexesInAlbum:(NSObject*)arg1 predicate:(id)arg2 ;
+(NSObject*)filteredAlbum:(NSObject*)arg1 filter:(int)arg2 ;
+(NSObject*)filteredAlbum:(NSObject*)arg1 predicate:(id)arg2 ;
+(NSObject*)filteredAlbum:(NSObject*)arg1 intersectFilter:(int)arg2 ;
-(char)canPerformEditOperation:(unsigned)arg1 ;
-(NSMutableOrderedSet *)userEditableAssets;
-(char)canShowAvalancheStacks;
-(PLManagedAsset *)keyAsset;
-(unsigned)approximateCount;
-(UIImage *)posterImage;
-(NSString *)cloudGUID;
-(NSString *)localizedSharedWithLabel;
-(id)localizedSharedByLabelAllowsEmail:(char)arg1 ;
-(id)cloudOwnerDisplayNameIncludingEmail:(char)arg1 allowsEmail:(char)arg2 ;
-(void)updateCloudLastInterestingChangeDateWithDate:(id)arg1 ;
-(void)updateCloudLastContributionDateWithDate:(id)arg1 ;
-(void)getUnseenStartMarkerIndex:(unsigned*)arg1 count:(unsigned*)arg2 showsProgress:(char*)arg3 ;
-(void)userDeleteSubscriberRecord:(id)arg1 ;
-(void)setCloudGUID:(NSString *)arg1 ;
-(NSDictionary *)cloudMetadata;
-(void)setCloudMetadata:(NSDictionary *)arg1 ;
-(NSString *)cloudOwnerFirstName;
-(void)setCloudOwnerFirstName:(NSString *)arg1 ;
-(NSString *)cloudOwnerLastName;
-(void)setCloudOwnerLastName:(NSString *)arg1 ;
-(NSString *)cloudOwnerFullName;
-(void)setCloudOwnerFullName:(NSString *)arg1 ;
-(NSString *)cloudOwnerEmail;
-(void)setCloudOwnerEmail:(NSString *)arg1 ;
-(NSString *)cloudOwnerHashedPersonID;
-(void)setCloudOwnerHashedPersonID:(NSString *)arg1 ;
-(NSDate *)cloudSubscriptionDate;
-(void)setCloudSubscriptionDate:(NSDate *)arg1 ;
-(NSString *)publicURL;
-(void)setPublicURL:(NSString *)arg1 ;
-(NSOrderedSet *)invitationRecords;
-(void)setInvitationRecords:(NSOrderedSet *)arg1 ;
-(NSNumber *)unseenAssetsCount;
-(void)setUnseenAssetsCount:(NSNumber *)arg1 ;
-(unsigned)unseenAssetsCountIntegerValue;
-(void)setUnseenAssetsCountIntegerValue:(unsigned)arg1 ;
-(NSNumber *)cloudPublicURLEnabled;
-(void)setCloudPublicURLEnabled:(NSNumber *)arg1 ;
-(NSNumber *)cloudPublicURLEnabledLocal;
-(void)setCloudPublicURLEnabledLocal:(NSNumber *)arg1 ;
-(NSNumber *)cloudMultipleContributorsEnabled;
-(void)setCloudMultipleContributorsEnabled:(NSNumber *)arg1 ;
-(NSNumber *)cloudMultipleContributorsEnabledLocal;
-(void)setCloudMultipleContributorsEnabledLocal:(NSNumber *)arg1 ;
-(NSDate *)cloudLastInterestingChangeDate;
-(void)setCloudLastInterestingChangeDate:(NSDate *)arg1 ;
-(NSDate *)cloudCreationDate;
-(void)setCloudCreationDate:(NSDate *)arg1 ;
-(NSDate *)cloudLastContributionDate;
-(void)setCloudLastContributionDate:(NSDate *)arg1 ;
-(NSString *)cloudPersonID;
-(void)setCloudPersonID:(NSString *)arg1 ;
-(int)cloudRelationshipStateValue;
-(int)cloudRelationshipStateLocalValue;
-(NSOrderedSet *)cloudAlbumSubscriberRecords;
-(NSDate *)cloudFirstRecentBatchDate;
-(char)cloudNotificationsEnabled;
-(void)setCloudNotificationsEnabled:(char)arg1 ;
-(void)reducePendingItemsCountBy:(unsigned)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
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
-(NSMutableOrderedSet *)_assets;
-(int)filter;
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4 ;
-(void)dealloc;
-(unsigned)count;
-(NSString *)description;
-(NSString *)name;
-(NSString *)title;
-(char)isEmpty;
-(void)setFilter:(int)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSString *)localizedTitle;
-(NSNumber *)kind;
-(NSString *)uuid;
-(NSArray *)filterParameters;
-(NSObject*<PLAlbumProtocol>)backingAlbum;
-(id)initWithBackingAlbum:(NSObject*)arg1 filter:(int)arg2 parameters:(id)arg3 ;
-(id)initWithBackingAlbum:(NSObject*)arg1 predicate:(id)arg2 ;
-(void)setBackingAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(void)set_assets:(NSMutableOrderedSet *)arg1 ;
-(NSIndexSet *)filteredIndexes;
-(id)_cloudSharedBackingAlbum;
-(void)setIsObservingContextChanges:(char)arg1 ;
-(void)backingContextDidChange:(id)arg1 ;
-(void)_commonInitWithBackingAlbum:(NSObject*)arg1 predicate:(id)arg2 ;
-(id)_editableBackingAlbum;
-(char)shouldIncludeObjectAtIndex:(unsigned)arg1 ;
-(char)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id)currentStateForChange;
-(id<NSObject><NSCopying>)cachedIndexMapState;
-(PLIndexMapper *)indexMapper;
-(unsigned)countOfFilteredAssets;
-(unsigned)indexInFilteredAssetsOfObject:(id)arg1 ;
-(id)objectInFilteredAssetsAtIndex:(unsigned)arg1 ;
-(id)filteredAssetsAtIndexes:(id)arg1 ;
-(void)getFilteredAssets:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned)arg2 ;
-(void)removeObjectFromFilteredAssetsAtIndex:(unsigned)arg1 ;
-(void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeFilteredAssetsAtIndexes:(id)arg1 ;
-(void)replaceObjectInFilteredAssetsAtIndex:(unsigned)arg1 withObject:(id)arg2 ;
-(void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2 ;
-(char)isObservingContextChanges;
@end

