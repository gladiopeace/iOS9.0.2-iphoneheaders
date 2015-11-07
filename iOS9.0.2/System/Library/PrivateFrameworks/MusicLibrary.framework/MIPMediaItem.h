/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, MIPMovie, MIPPodcast, MIPSong, MIPTVShow;

@interface MIPMediaItem : PBCodable <NSCopying> {

	long long _accountId;
	long long _bookmarkTimeMilliseconds;
	long long _creationDateTime;
	long long _drmKey1IdCode;
	long long _drmKey2IdCode;
	long long _drmPlatformIdCode;
	long long _duration;
	long long _familyAccountId;
	long long _fileSize;
	long long _lastPlayedDateTime;
	long long _lastSkippedDateTime;
	long long _modificationDateTime;
	long long _purchaseDateTime;
	long long _purchaseHistoryId;
	long long _releaseDateTime;
	long long _sagaId;
	long long _storeId;
	long long _storePlaylistId;
	long long _storefrontId;
	long long _subscriptionStoreItemId;
	NSString* _artworkId;
	NSString* _chapterMetadataUrl;
	int _cloudStatus;
	NSString* _comment;
	int _contentRating;
	int _contentRatingLevel;
	NSString* _copyright;
	int _drmVersionsCode;
	NSString* _extrasUrl;
	int _fileKind;
	NSString* _grouping;
	NSMutableArray* _libraryIdentifiers;
	int _likedState;
	NSString* _longDescription;
	int _mediaType;
	MIPMovie* _movie;
	int _playCount;
	int _playCountDelta;
	MIPPodcast* _podcast;
	NSString* _purchaseHistoryRedownloadParams;
	int _purchaseHistoryToken;
	NSString* _sagaRedownloadParams;
	NSString* _shortDescription;
	int _skipCount;
	int _skipCountDelta;
	MIPSong* _song;
	NSString* _sortTitle;
	NSString* _storeAssetFlavor;
	NSString* _storeXID;
	NSString* _title;
	MIPTVShow* _tvShow;
	int _year;
	char _explicitContent;
	char _hasLocalAsset;
	char _hidden;
	char _isInUsersLibrary;
	char _likedStateChanged;
	char _needsReporting;
	char _rememberBookmark;
	SCD_Struct_MI49 _has;

}

@property (assign,nonatomic) char hasMediaType; 
@property (assign,nonatomic) int mediaType;                                           //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) char hasSortTitle; 
@property (nonatomic,retain) NSString * sortTitle;                                    //@synthesize sortTitle=_sortTitle - In the implementation block
@property (assign,nonatomic) char hasReleaseDateTime; 
@property (assign,nonatomic) long long releaseDateTime;                               //@synthesize releaseDateTime=_releaseDateTime - In the implementation block
@property (assign,nonatomic) char hasCreationDateTime; 
@property (assign,nonatomic) long long creationDateTime;                              //@synthesize creationDateTime=_creationDateTime - In the implementation block
@property (assign,nonatomic) char hasModificationDateTime; 
@property (assign,nonatomic) long long modificationDateTime;                          //@synthesize modificationDateTime=_modificationDateTime - In the implementation block
@property (assign,nonatomic) char hasFileSize; 
@property (assign,nonatomic) long long fileSize;                                      //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) long long duration;                                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasContentRating; 
@property (assign,nonatomic) int contentRating;                                       //@synthesize contentRating=_contentRating - In the implementation block
@property (assign,nonatomic) char hasExplicitContent; 
@property (assign,nonatomic) char explicitContent;                                    //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,readonly) char hasShortDescription; 
@property (nonatomic,retain) NSString * shortDescription;                             //@synthesize shortDescription=_shortDescription - In the implementation block
@property (nonatomic,readonly) char hasLongDescription; 
@property (nonatomic,retain) NSString * longDescription;                              //@synthesize longDescription=_longDescription - In the implementation block
@property (nonatomic,readonly) char hasCopyright; 
@property (nonatomic,retain) NSString * copyright;                                    //@synthesize copyright=_copyright - In the implementation block
@property (nonatomic,readonly) char hasArtworkId; 
@property (nonatomic,retain) NSString * artworkId;                                    //@synthesize artworkId=_artworkId - In the implementation block
@property (assign,nonatomic) char hasYear; 
@property (assign,nonatomic) int year;                                                //@synthesize year=_year - In the implementation block
@property (assign,nonatomic) char hasContentRatingLevel; 
@property (assign,nonatomic) int contentRatingLevel;                                  //@synthesize contentRatingLevel=_contentRatingLevel - In the implementation block
@property (nonatomic,readonly) char hasComment; 
@property (nonatomic,retain) NSString * comment;                                      //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) char hasFileKind; 
@property (assign,nonatomic) int fileKind;                                            //@synthesize fileKind=_fileKind - In the implementation block
@property (assign,nonatomic) char hasFamilyAccountId; 
@property (assign,nonatomic) long long familyAccountId;                               //@synthesize familyAccountId=_familyAccountId - In the implementation block
@property (assign,nonatomic) char hasDrmVersionsCode; 
@property (assign,nonatomic) int drmVersionsCode;                                     //@synthesize drmVersionsCode=_drmVersionsCode - In the implementation block
@property (assign,nonatomic) char hasDrmPlatformIdCode; 
@property (assign,nonatomic) long long drmPlatformIdCode;                             //@synthesize drmPlatformIdCode=_drmPlatformIdCode - In the implementation block
@property (assign,nonatomic) char hasDrmKey1IdCode; 
@property (assign,nonatomic) long long drmKey1IdCode;                                 //@synthesize drmKey1IdCode=_drmKey1IdCode - In the implementation block
@property (assign,nonatomic) char hasDrmKey2IdCode; 
@property (assign,nonatomic) long long drmKey2IdCode;                                 //@synthesize drmKey2IdCode=_drmKey2IdCode - In the implementation block
@property (nonatomic,readonly) char hasChapterMetadataUrl; 
@property (nonatomic,retain) NSString * chapterMetadataUrl;                           //@synthesize chapterMetadataUrl=_chapterMetadataUrl - In the implementation block
@property (nonatomic,readonly) char hasStoreAssetFlavor; 
@property (nonatomic,retain) NSString * storeAssetFlavor;                             //@synthesize storeAssetFlavor=_storeAssetFlavor - In the implementation block
@property (nonatomic,readonly) char hasExtrasUrl; 
@property (nonatomic,retain) NSString * extrasUrl;                                    //@synthesize extrasUrl=_extrasUrl - In the implementation block
@property (assign,nonatomic) char hasPurchaseDateTime; 
@property (assign,nonatomic) long long purchaseDateTime;                              //@synthesize purchaseDateTime=_purchaseDateTime - In the implementation block
@property (assign,nonatomic) char hasCloudStatus; 
@property (assign,nonatomic) int cloudStatus;                                         //@synthesize cloudStatus=_cloudStatus - In the implementation block
@property (assign,nonatomic) char hasPlayCount; 
@property (assign,nonatomic) int playCount;                                           //@synthesize playCount=_playCount - In the implementation block
@property (assign,nonatomic) char hasPlayCountDelta; 
@property (assign,nonatomic) int playCountDelta;                                      //@synthesize playCountDelta=_playCountDelta - In the implementation block
@property (assign,nonatomic) char hasLastPlayedDateTime; 
@property (assign,nonatomic) long long lastPlayedDateTime;                            //@synthesize lastPlayedDateTime=_lastPlayedDateTime - In the implementation block
@property (assign,nonatomic) char hasSkipCount; 
@property (assign,nonatomic) int skipCount;                                           //@synthesize skipCount=_skipCount - In the implementation block
@property (assign,nonatomic) char hasSkipCountDelta; 
@property (assign,nonatomic) int skipCountDelta;                                      //@synthesize skipCountDelta=_skipCountDelta - In the implementation block
@property (assign,nonatomic) char hasLastSkippedDateTime; 
@property (assign,nonatomic) long long lastSkippedDateTime;                           //@synthesize lastSkippedDateTime=_lastSkippedDateTime - In the implementation block
@property (assign,nonatomic) char hasRememberBookmark; 
@property (assign,nonatomic) char rememberBookmark;                                   //@synthesize rememberBookmark=_rememberBookmark - In the implementation block
@property (assign,nonatomic) char hasBookmarkTimeMilliseconds; 
@property (assign,nonatomic) long long bookmarkTimeMilliseconds;                      //@synthesize bookmarkTimeMilliseconds=_bookmarkTimeMilliseconds - In the implementation block
@property (assign,nonatomic) char hasHidden; 
@property (assign,nonatomic) char hidden;                                             //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) char hasStorePlaylistId; 
@property (assign,nonatomic) long long storePlaylistId;                               //@synthesize storePlaylistId=_storePlaylistId - In the implementation block
@property (assign,nonatomic) char hasHasLocalAsset; 
@property (assign,nonatomic) char hasLocalAsset;                                      //@synthesize hasLocalAsset=_hasLocalAsset - In the implementation block
@property (nonatomic,readonly) char hasGrouping; 
@property (nonatomic,retain) NSString * grouping;                                     //@synthesize grouping=_grouping - In the implementation block
@property (assign,nonatomic) char hasLikedState; 
@property (assign,nonatomic) int likedState;                                          //@synthesize likedState=_likedState - In the implementation block
@property (assign,nonatomic) char hasNeedsReporting; 
@property (assign,nonatomic) char needsReporting;                                     //@synthesize needsReporting=_needsReporting - In the implementation block
@property (assign,nonatomic) char hasLikedStateChanged; 
@property (assign,nonatomic) char likedStateChanged;                                  //@synthesize likedStateChanged=_likedStateChanged - In the implementation block
@property (assign,nonatomic) char hasIsInUsersLibrary; 
@property (assign,nonatomic) char isInUsersLibrary;                                   //@synthesize isInUsersLibrary=_isInUsersLibrary - In the implementation block
@property (nonatomic,retain) NSMutableArray * libraryIdentifiers;                     //@synthesize libraryIdentifiers=_libraryIdentifiers - In the implementation block
@property (assign,nonatomic) char hasStoreId; 
@property (assign,nonatomic) long long storeId;                                       //@synthesize storeId=_storeId - In the implementation block
@property (assign,nonatomic) char hasStorefrontId; 
@property (assign,nonatomic) long long storefrontId;                                  //@synthesize storefrontId=_storefrontId - In the implementation block
@property (assign,nonatomic) char hasAccountId; 
@property (assign,nonatomic) long long accountId;                                     //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) char hasPurchaseHistoryId; 
@property (assign,nonatomic) long long purchaseHistoryId;                             //@synthesize purchaseHistoryId=_purchaseHistoryId - In the implementation block
@property (assign,nonatomic) char hasPurchaseHistoryToken; 
@property (assign,nonatomic) int purchaseHistoryToken;                                //@synthesize purchaseHistoryToken=_purchaseHistoryToken - In the implementation block
@property (nonatomic,readonly) char hasPurchaseHistoryRedownloadParams; 
@property (nonatomic,retain) NSString * purchaseHistoryRedownloadParams;              //@synthesize purchaseHistoryRedownloadParams=_purchaseHistoryRedownloadParams - In the implementation block
@property (assign,nonatomic) char hasSagaId; 
@property (assign,nonatomic) long long sagaId;                                        //@synthesize sagaId=_sagaId - In the implementation block
@property (nonatomic,readonly) char hasSagaRedownloadParams; 
@property (nonatomic,retain) NSString * sagaRedownloadParams;                         //@synthesize sagaRedownloadParams=_sagaRedownloadParams - In the implementation block
@property (nonatomic,readonly) char hasStoreXID; 
@property (nonatomic,retain) NSString * storeXID;                                     //@synthesize storeXID=_storeXID - In the implementation block
@property (assign,nonatomic) char hasSubscriptionStoreItemId; 
@property (assign,nonatomic) long long subscriptionStoreItemId;                       //@synthesize subscriptionStoreItemId=_subscriptionStoreItemId - In the implementation block
@property (nonatomic,readonly) char hasSong; 
@property (nonatomic,retain) MIPSong * song;                                          //@synthesize song=_song - In the implementation block
@property (nonatomic,readonly) char hasMovie; 
@property (nonatomic,retain) MIPMovie * movie;                                        //@synthesize movie=_movie - In the implementation block
@property (nonatomic,readonly) char hasTvShow; 
@property (nonatomic,retain) MIPTVShow * tvShow;                                      //@synthesize tvShow=_tvShow - In the implementation block
@property (nonatomic,readonly) char hasPodcast; 
@property (nonatomic,retain) MIPPodcast * podcast;                                    //@synthesize podcast=_podcast - In the implementation block
-(int)likedState;
-(void)setLikedState:(int)arg1 ;
-(NSMutableArray *)libraryIdentifiers;
-(unsigned)libraryIdentifiersCount;
-(int)playCount;
-(void)setPlayCount:(int)arg1 ;
-(int)skipCount;
-(void)setSkipCount:(int)arg1 ;
-(void)setShortDescription:(NSString *)arg1 ;
-(int)mediaType;
-(void)setMediaType:(int)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(void)setHidden:(char)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasTitle;
-(NSString *)shortDescription;
-(int)year;
-(void)setYear:(int)arg1 ;
-(void)setCopyright:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasComment;
-(char)hasHidden;
-(void)setHasHidden:(char)arg1 ;
-(void)setLibraryIdentifiers:(NSMutableArray *)arg1 ;
-(void)setStoreId:(long long)arg1 ;
-(void)setHasStoreId:(char)arg1 ;
-(char)hasStoreId;
-(long long)storeId;
-(void)setArtworkId:(NSString *)arg1 ;
-(char)hasArtworkId;
-(NSString *)artworkId;
-(void)addLibraryIdentifiers:(id)arg1 ;
-(void)clearLibraryIdentifiers;
-(id)libraryIdentifiersAtIndex:(unsigned)arg1 ;
-(void)setAccountId:(long long)arg1 ;
-(void)setHasAccountId:(char)arg1 ;
-(char)hasAccountId;
-(void)setSagaId:(long long)arg1 ;
-(void)setHasSagaId:(char)arg1 ;
-(char)hasSagaId;
-(void)setPurchaseHistoryId:(long long)arg1 ;
-(void)setHasPurchaseHistoryId:(char)arg1 ;
-(char)hasPurchaseHistoryId;
-(long long)accountId;
-(long long)sagaId;
-(long long)purchaseHistoryId;
-(void)setReleaseDateTime:(long long)arg1 ;
-(void)setCreationDateTime:(long long)arg1 ;
-(void)setModificationDateTime:(long long)arg1 ;
-(void)setStorefrontId:(long long)arg1 ;
-(void)setPurchaseHistoryToken:(int)arg1 ;
-(void)setPurchaseHistoryRedownloadParams:(NSString *)arg1 ;
-(void)setContentRatingLevel:(int)arg1 ;
-(void)setSagaRedownloadParams:(NSString *)arg1 ;
-(void)setFileKind:(int)arg1 ;
-(void)setDrmVersionsCode:(int)arg1 ;
-(void)setDrmPlatformIdCode:(long long)arg1 ;
-(void)setDrmKey1IdCode:(long long)arg1 ;
-(void)setDrmKey2IdCode:(long long)arg1 ;
-(void)setChapterMetadataUrl:(NSString *)arg1 ;
-(void)setStoreXID:(NSString *)arg1 ;
-(void)setExtrasUrl:(NSString *)arg1 ;
-(void)setCloudStatus:(int)arg1 ;
-(void)setPlayCountDelta:(int)arg1 ;
-(void)setLastPlayedDateTime:(long long)arg1 ;
-(void)setSkipCountDelta:(int)arg1 ;
-(void)setLastSkippedDateTime:(long long)arg1 ;
-(void)setRememberBookmark:(char)arg1 ;
-(void)setBookmarkTimeMilliseconds:(long long)arg1 ;
-(void)setHasLocalAsset:(char)arg1 ;
-(void)setStorePlaylistId:(long long)arg1 ;
-(void)setLikedStateChanged:(char)arg1 ;
-(void)setNeedsReporting:(char)arg1 ;
-(void)setSubscriptionStoreItemId:(long long)arg1 ;
-(void)setIsInUsersLibrary:(char)arg1 ;
-(void)setSong:(MIPSong *)arg1 ;
-(void)setTvShow:(MIPTVShow *)arg1 ;
-(void)setPodcast:(MIPPodcast *)arg1 ;
-(void)setStoreAssetFlavor:(NSString *)arg1 ;
-(char)hasSortTitle;
-(void)setHasReleaseDateTime:(char)arg1 ;
-(char)hasReleaseDateTime;
-(void)setHasCreationDateTime:(char)arg1 ;
-(char)hasCreationDateTime;
-(void)setHasModificationDateTime:(char)arg1 ;
-(char)hasModificationDateTime;
-(void)setHasFileSize:(char)arg1 ;
-(char)hasFileSize;
-(void)setHasContentRating:(char)arg1 ;
-(char)hasContentRating;
-(void)setHasExplicitContent:(char)arg1 ;
-(char)hasExplicitContent;
-(char)hasShortDescription;
-(char)hasLongDescription;
-(char)hasCopyright;
-(void)setHasYear:(char)arg1 ;
-(char)hasYear;
-(void)setHasContentRatingLevel:(char)arg1 ;
-(char)hasContentRatingLevel;
-(void)setHasFileKind:(char)arg1 ;
-(char)hasFileKind;
-(void)setFamilyAccountId:(long long)arg1 ;
-(void)setHasFamilyAccountId:(char)arg1 ;
-(char)hasFamilyAccountId;
-(void)setHasDrmVersionsCode:(char)arg1 ;
-(char)hasDrmVersionsCode;
-(void)setHasDrmPlatformIdCode:(char)arg1 ;
-(char)hasDrmPlatformIdCode;
-(void)setHasDrmKey1IdCode:(char)arg1 ;
-(char)hasDrmKey1IdCode;
-(void)setHasDrmKey2IdCode:(char)arg1 ;
-(char)hasDrmKey2IdCode;
-(char)hasChapterMetadataUrl;
-(char)hasStoreAssetFlavor;
-(char)hasExtrasUrl;
-(void)setPurchaseDateTime:(long long)arg1 ;
-(void)setHasPurchaseDateTime:(char)arg1 ;
-(char)hasPurchaseDateTime;
-(void)setHasCloudStatus:(char)arg1 ;
-(char)hasCloudStatus;
-(void)setHasPlayCount:(char)arg1 ;
-(char)hasPlayCount;
-(void)setHasPlayCountDelta:(char)arg1 ;
-(char)hasPlayCountDelta;
-(void)setHasLastPlayedDateTime:(char)arg1 ;
-(char)hasLastPlayedDateTime;
-(void)setHasSkipCount:(char)arg1 ;
-(char)hasSkipCount;
-(void)setHasSkipCountDelta:(char)arg1 ;
-(char)hasSkipCountDelta;
-(void)setHasLastSkippedDateTime:(char)arg1 ;
-(char)hasLastSkippedDateTime;
-(void)setHasRememberBookmark:(char)arg1 ;
-(char)hasRememberBookmark;
-(void)setHasBookmarkTimeMilliseconds:(char)arg1 ;
-(char)hasBookmarkTimeMilliseconds;
-(void)setHasStorePlaylistId:(char)arg1 ;
-(char)hasStorePlaylistId;
-(void)setHasHasLocalAsset:(char)arg1 ;
-(char)hasHasLocalAsset;
-(char)hasGrouping;
-(void)setHasLikedState:(char)arg1 ;
-(char)hasLikedState;
-(void)setHasNeedsReporting:(char)arg1 ;
-(char)hasNeedsReporting;
-(void)setHasLikedStateChanged:(char)arg1 ;
-(char)hasLikedStateChanged;
-(void)setHasIsInUsersLibrary:(char)arg1 ;
-(char)hasIsInUsersLibrary;
-(void)setHasStorefrontId:(char)arg1 ;
-(char)hasStorefrontId;
-(void)setHasPurchaseHistoryToken:(char)arg1 ;
-(char)hasPurchaseHistoryToken;
-(char)hasPurchaseHistoryRedownloadParams;
-(char)hasSagaRedownloadParams;
-(char)hasStoreXID;
-(void)setHasSubscriptionStoreItemId:(char)arg1 ;
-(char)hasSubscriptionStoreItemId;
-(char)hasSong;
-(char)hasMovie;
-(char)hasTvShow;
-(char)hasPodcast;
-(long long)releaseDateTime;
-(long long)creationDateTime;
-(long long)modificationDateTime;
-(char)explicitContent;
-(int)contentRatingLevel;
-(int)fileKind;
-(long long)familyAccountId;
-(int)drmVersionsCode;
-(long long)drmPlatformIdCode;
-(long long)drmKey1IdCode;
-(long long)drmKey2IdCode;
-(NSString *)chapterMetadataUrl;
-(NSString *)storeAssetFlavor;
-(NSString *)extrasUrl;
-(long long)purchaseDateTime;
-(int)cloudStatus;
-(int)playCountDelta;
-(long long)lastPlayedDateTime;
-(int)skipCountDelta;
-(long long)lastSkippedDateTime;
-(char)rememberBookmark;
-(long long)bookmarkTimeMilliseconds;
-(long long)storePlaylistId;
-(char)hasLocalAsset;
-(char)needsReporting;
-(char)likedStateChanged;
-(char)isInUsersLibrary;
-(long long)storefrontId;
-(int)purchaseHistoryToken;
-(NSString *)purchaseHistoryRedownloadParams;
-(NSString *)sagaRedownloadParams;
-(NSString *)storeXID;
-(long long)subscriptionStoreItemId;
-(char)hidden;
-(NSString *)grouping;
-(NSString *)comment;
-(MIPMovie *)movie;
-(long long)fileSize;
-(void)setMovie:(MIPMovie *)arg1 ;
-(char)hasDuration;
-(void)setHasDuration:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setGrouping:(NSString *)arg1 ;
-(NSString *)longDescription;
-(void)setLongDescription:(NSString *)arg1 ;
-(void)setFileSize:(long long)arg1 ;
-(NSString *)sortTitle;
-(void)setSortTitle:(NSString *)arg1 ;
-(MIPPodcast *)podcast;
-(MIPSong *)song;
-(MIPTVShow *)tvShow;
-(void)setContentRating:(int)arg1 ;
-(int)contentRating;
-(void)setExplicitContent:(char)arg1 ;
-(char)hasMediaType;
-(void)setHasMediaType:(char)arg1 ;
-(NSString *)copyright;
@end

