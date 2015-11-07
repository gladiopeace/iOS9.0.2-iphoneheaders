/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSArray, MPMediaLibraryArtworkRequest, ML3Artwork, NSURL, NSDictionary;

@interface MPMediaLibraryArtwork : NSObject {

	NSArray* _validSizes;
	MPMediaLibraryArtworkRequest* _artworkRequest;
	ML3Artwork* _artwork;

}

@property (nonatomic,readonly) NSArray * validSizes;                                            //@synthesize validSizes=_validSizes - In the implementation block
@property (nonatomic,copy,readonly) NSURL * originalFileURL; 
@property (nonatomic,copy) NSDictionary * effectsMetadata; 
@property (assign,nonatomic,__weak) MPMediaLibraryArtworkRequest * artworkRequest;              //@synthesize artworkRequest=_artworkRequest - In the implementation block
@property (nonatomic,retain) ML3Artwork * artwork;                                              //@synthesize artwork=_artwork - In the implementation block
+(id)availableArtworkWithRequest:(id)arg1 ;
+(char)artworkExistsForRequest:(id)arg1 ;
+(char)needsToFetchArtworkForRequest:(id)arg1 ;
+(void)fetchArtworkForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)cancelFetchingArtworkForRequest:(id)arg1 ;
-(void)setArtworkRequest:(MPMediaLibraryArtworkRequest *)arg1 ;
-(MPMediaLibraryArtworkRequest *)artworkRequest;
-(id)imageFileURLForSize:(CGSize)arg1 ;
-(NSURL *)originalFileURL;
-(NSArray *)validSizes;
-(NSDictionary *)effectsMetadata;
-(void)setEffectsMetadata:(NSDictionary *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(ML3Artwork *)artwork;
-(void)setArtwork:(ML3Artwork *)arg1 ;
@end

