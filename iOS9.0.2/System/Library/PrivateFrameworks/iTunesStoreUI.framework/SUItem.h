/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SUItemContentRating, SSItemOffer, NSDictionary, SSItemImageCollection, NSArray, NSDate, SUItemReviewStatistics, NSNumber, SUItemLink, NSURL;

@interface SUItem : NSObject <NSCopying> {

	NSString* _artistName;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSString* _collectionName;
	SUItem* _containerItem;
	NSString* _containerName;
	SUItemContentRating* _contentRating;
	NSString* _copyrightString;
	SSItemOffer* _defaultStoreOffer;
	NSDictionary* _dictionary;
	NSString* _disclaimerString;
	char _gameCenterEnabled;
	NSString* _genreName;
	NSString* _humanReadableDescription;
	char _isInstalled;
	int _itemDisplayType;
	unsigned long long _itemIdentifier;
	SSItemImageCollection* _itemImageCollection;
	NSArray* _itemLinks;
	NSString* _itemMediaKind;
	int _itemType;
	NSDate* _releaseDate;
	NSString* _releaseDateString;
	int _representedItemCount;
	SUItemReviewStatistics* _reviewStatistics;
	NSString* _secondaryTitle;
	NSString* _softwareType;
	NSArray* _storeOffers;
	NSDictionary* _tellAFriendDictionary;
	NSString* _title;
	NSDictionary* _tweetDictionary;
	NSString* _unmodifiedTitle;
	NSNumber* _versionIdentifier;
	NSArray* _versionOrdering;

}

@property (nonatomic,copy) SUItemContentRating * contentRating;                              //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,retain) SUItem * containerItem;                                         //@synthesize containerItem=_containerItem - In the implementation block
@property (nonatomic,copy) NSString * humanReadableDescription;                              //@synthesize humanReadableDescription=_humanReadableDescription - In the implementation block
@property (getter=isDownloadable,nonatomic,readonly) char downloadable; 
@property (assign,nonatomic) int itemDisplayType;                                            //@synthesize itemDisplayType=_itemDisplayType - In the implementation block
@property (assign,nonatomic) unsigned long long itemIdentifier;                              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemMediaKind;                                         //@synthesize itemMediaKind=_itemMediaKind - In the implementation block
@property (assign,nonatomic) int itemType;                                                   //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,retain) NSDate * releaseDate;                                           //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,copy) SUItemReviewStatistics * reviewStatistics;                        //@synthesize reviewStatistics=_reviewStatistics - In the implementation block
@property (nonatomic,copy) NSString * secondaryTitle;                                        //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (nonatomic,copy) NSString * title;                                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * unmodifiedTitle;                                       //@synthesize unmodifiedTitle=_unmodifiedTitle - In the implementation block
@property (nonatomic,copy) NSString * artistName;                                            //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy) NSString * collectionName;                                        //@synthesize collectionName=_collectionName - In the implementation block
@property (nonatomic,copy) NSString * containerName;                                         //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,copy) NSString * copyrightString;                                       //@synthesize copyrightString=_copyrightString - In the implementation block
@property (nonatomic,copy) NSString * disclaimerString;                                      //@synthesize disclaimerString=_disclaimerString - In the implementation block
@property (nonatomic,copy) NSString * genreName;                                             //@synthesize genreName=_genreName - In the implementation block
@property (assign,nonatomic) int representedItemCount;                                       //@synthesize representedItemCount=_representedItemCount - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                         //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (getter=isInstalled,nonatomic,readonly) char installed; 
@property (assign,getter=isGameCenterEnabled,nonatomic) char gameCenterEnabled;              //@synthesize gameCenterEnabled=_gameCenterEnabled - In the implementation block
@property (nonatomic,copy) NSString * softwareType;                                          //@synthesize softwareType=_softwareType - In the implementation block
@property (nonatomic,retain) NSNumber * versionIdentifier;                                   //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * versionOrdering;                                        //@synthesize versionOrdering=_versionOrdering - In the implementation block
@property (nonatomic,readonly) SUItemLink * externalArtistPageLink; 
@property (nonatomic,copy) NSArray * itemLinks;                                              //@synthesize itemLinks=_itemLinks - In the implementation block
@property (nonatomic,readonly) SSItemOffer * defaultStoreOffer;                              //@synthesize defaultStoreOffer=_defaultStoreOffer - In the implementation block
@property (nonatomic,copy) NSArray * storeOffers;                                            //@synthesize storeOffers=_storeOffers - In the implementation block
@property (nonatomic,readonly) NSString * tellAFriendBody; 
@property (nonatomic,readonly) NSString * tellAFriendBodyMIMEType; 
@property (nonatomic,readonly) NSURL * tellAFriendBodyURL; 
@property (nonatomic,readonly) NSString * tellAFriendSubject; 
@property (nonatomic,readonly) NSString * tweetInitialText; 
@property (nonatomic,readonly) NSURL * tweetURL; 
@property (nonatomic,copy) SSItemImageCollection * itemImageCollection;                      //@synthesize itemImageCollection=_itemImageCollection - In the implementation block
@property (nonatomic,readonly) NSDictionary * itemDictionary;                                //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * itemTypeString; 
-(char)isInstalled;
-(NSString *)secondaryTitle;
-(NSDate *)releaseDate;
-(char)isDownloadable;
-(NSNumber *)versionIdentifier;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_reloadProperties;
-(id)valueForProperty:(id)arg1 ;
-(SUItem *)containerItem;
-(void)setGenreName:(NSString *)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setCollectionName:(NSString *)arg1 ;
-(unsigned long long)itemIdentifier;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(NSString *)artistName;
-(NSString *)collectionName;
-(void)setArtistName:(NSString *)arg1 ;
-(NSString *)copyrightString;
-(void)setCopyrightString:(NSString *)arg1 ;
-(void)setContentRating:(SUItemContentRating *)arg1 ;
-(SUItemContentRating *)contentRating;
-(int)itemType;
-(void)setItemType:(int)arg1 ;
-(SSItemImageCollection *)itemImageCollection;
-(SSItemOffer *)defaultStoreOffer;
-(NSString *)itemTypeString;
-(void)setContainerItem:(SUItem *)arg1 ;
-(NSArray *)itemLinks;
-(id)itemLinksForType:(int)arg1 ;
-(char)boolValueForProperty:(id)arg1 ;
-(NSString *)humanReadableDescription;
-(SUItemReviewStatistics *)reviewStatistics;
-(id)stringValueForProperty:(id)arg1 ;
-(id)dateValueForProperty:(id)arg1 ;
-(NSString *)softwareType;
-(id)firstItemLinkForType:(int)arg1 ;
-(char)isDisplayable:(id*)arg1 ;
-(NSString *)itemMediaKind;
-(NSDictionary *)itemDictionary;
-(NSString *)unmodifiedTitle;
-(NSArray *)versionOrdering;
-(void)_reloadDefaultStoreOffer;
-(id)_valueForFirstAvailableKey:(id)arg1 ;
-(int)_linkTargetForTargetString:(id)arg1 typeString:(id)arg2 ;
-(int)_linkTypeForString:(id)arg1 ;
-(id)storeOfferForIdentifier:(id)arg1 ;
-(id)_squishImageForSquishDictionary:(id)arg1 ;
-(void)setItemImageCollection:(SSItemImageCollection *)arg1 ;
-(void)setItemLinks:(NSArray *)arg1 ;
-(id)_newPrimaryItemLink;
-(id)_newItemLinkWithType:(int)arg1 dictionary:(id)arg2 ;
-(id)_newItemLinkWithType:(int)arg1 URLKey:(id)arg2 titleKey:(id)arg3 ;
-(void)_reloadStoreOffers;
-(void)_reloadImagesAndLinksFromSquishes:(id)arg1 ;
-(void)_reloadItemImages;
-(void)_reloadItemLinks;
-(void)setStoreOffers:(NSArray *)arg1 ;
-(id)copyReleaseDateStringWithStyle:(long)arg1 ;
-(SUItemLink *)externalArtistPageLink;
-(int)integerValueForProperty:(id)arg1 ;
-(id)relatedItemsForRelationType:(id)arg1 ;
-(NSString *)tellAFriendBody;
-(NSString *)tellAFriendBodyMIMEType;
-(NSURL *)tellAFriendBodyURL;
-(NSString *)tellAFriendSubject;
-(NSString *)tweetInitialText;
-(NSURL *)tweetURL;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(NSString *)disclaimerString;
-(void)setDisclaimerString:(NSString *)arg1 ;
-(char)isGameCenterEnabled;
-(void)setGameCenterEnabled:(char)arg1 ;
-(NSString *)genreName;
-(void)setHumanReadableDescription:(NSString *)arg1 ;
-(int)itemDisplayType;
-(void)setItemDisplayType:(int)arg1 ;
-(void)setItemMediaKind:(NSString *)arg1 ;
-(void)setReleaseDate:(NSDate *)arg1 ;
-(int)representedItemCount;
-(void)setRepresentedItemCount:(int)arg1 ;
-(void)setReviewStatistics:(SUItemReviewStatistics *)arg1 ;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(void)setSoftwareType:(NSString *)arg1 ;
-(NSArray *)storeOffers;
-(void)setUnmodifiedTitle:(NSString *)arg1 ;
-(void)setVersionIdentifier:(NSNumber *)arg1 ;
-(void)setVersionOrdering:(NSArray *)arg1 ;
@end

