/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSArray, NSMutableDictionary, MLContentRating, MLMovieProperties, NSDictionary;

@interface MLTrackImport : NSObject <NSCopying> {

	NSData* _artworkData;
	NSString* _assetFilePath;
	NSArray* _chapters;
	NSMutableDictionary* _properties;
	char _shouldAddToPurchasedPlaylist;
	char _assignArtworkCacheIDFromAlbum;

}

@property (nonatomic,copy) NSData * artworkData;                                  //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,copy) NSString * assetFilePath;                              //@synthesize assetFilePath=_assetFilePath - In the implementation block
@property (nonatomic,copy) NSArray * chapters;                                    //@synthesize chapters=_chapters - In the implementation block
@property (nonatomic,copy) MLContentRating * contentRating; 
@property (assign,nonatomic) unsigned long mediaType; 
@property (nonatomic,copy) MLMovieProperties * movieProperties; 
@property (assign,nonatomic) char shouldAddToPurchasedPlaylist;                   //@synthesize shouldAddToPurchasedPlaylist=_shouldAddToPurchasedPlaylist - In the implementation block
@property (assign,nonatomic) char assignArtworkCacheIDFromAlbum;                  //@synthesize assignArtworkCacheIDFromAlbum=_assignArtworkCacheIDFromAlbum - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * entityProperties; 
+(void)initialize;
-(NSArray *)chapters;
-(void)setChapters:(NSArray *)arg1 ;
-(unsigned long)mediaType;
-(void)setMediaType:(unsigned long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(id)arg1 forEntityProperty:(id)arg2 ;
-(NSDictionary *)entityProperties;
-(MLMovieProperties *)movieProperties;
-(void)setMovieProperties:(MLMovieProperties *)arg1 ;
-(id)copyEntityProperties;
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
-(NSString *)assetFilePath;
-(void)setAssetFilePath:(NSString *)arg1 ;
-(char)assignArtworkCacheIDFromAlbum;
-(void)setAssignArtworkCacheIDFromAlbum:(char)arg1 ;
-(char)shouldAddToPurchasedPlaylist;
-(void)setShouldAddToPurchasedPlaylist:(char)arg1 ;
-(id)valueForEntityProperty:(id)arg1 ;
-(void)setContentRating:(MLContentRating *)arg1 ;
-(MLContentRating *)contentRating;
@end

