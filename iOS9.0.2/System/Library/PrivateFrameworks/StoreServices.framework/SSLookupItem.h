/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray, NSNumber, NSURL;

@interface SSLookupItem : NSObject {

	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * lookupDictionary;                       //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSArray * artwork; 
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSArray * categoryNames; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * itemKind; 
@property (nonatomic,readonly) NSNumber * ITunesStoreIdentifier; 
@property (nonatomic,readonly) NSArray * offers; 
@property (getter=isPOIBased,nonatomic,readonly) char POIBased; 
@property (nonatomic,readonly) NSURL * productPageURL; 
@property (nonatomic,readonly) int numberOfUserRatings; 
@property (nonatomic,readonly) float userRating; 
@property (nonatomic,readonly) int numberOfUserRatingsForCurrentVersion; 
@property (nonatomic,readonly) float userRatingForCurrentVersion; 
-(char)ml_isMusicItemKind;
-(char)ml_isAUCItemKind;
-(char)ml_isMusicVideoKind;
-(char)ml_isAUCVideoKind;
-(char)ml_isAUCAudioKind;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(NSString *)displayName;
-(NSArray *)artwork;
-(id)initWithLookupDictionary:(id)arg1 ;
-(NSDictionary *)lookupDictionary;
-(NSString *)itemKind;
-(NSString *)artistName;
-(int)numberOfUserRatings;
-(float)userRating;
-(NSURL *)productPageURL;
-(NSArray *)offers;
-(NSNumber *)ITunesStoreIdentifier;
-(NSArray *)categoryNames;
-(char)isPOIBased;
-(int)numberOfUserRatingsForCurrentVersion;
-(float)userRatingForCurrentVersion;
@end

