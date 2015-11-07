/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPArtworkDataSource.h>

@class NSCache, MPArtworkResizeUtility, NSString;

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource> {

	char _usesFallbackCache;
	NSCache* _fallbackCache;
	MPArtworkResizeUtility* _artworkResizeUtility;

}

@property (assign,nonatomic) char usesFallbackCache;                                     //@synthesize usesFallbackCache=_usesFallbackCache - In the implementation block
@property (nonatomic,retain) NSCache * fallbackCache;                                    //@synthesize fallbackCache=_fallbackCache - In the implementation block
@property (nonatomic,retain) MPArtworkResizeUtility * artworkResizeUtility;              //@synthesize artworkResizeUtility=_artworkResizeUtility - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(char)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg1 ;
-(id)existingArtworkEffectResultForEffectType:(unsigned)arg1 catalog:(id)arg2 options:(id)arg3 ;
-(void)loadArtworkEffectResultForEffectType:(unsigned)arg1 catalog:(id)arg2 options:(id)arg3 systemEffectHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_cachedRepresentationForCatalog:(id)arg1 ;
-(char)_isRepresentation:(id)arg1 validForCatalog:(id)arg2 ;
-(id)_representationAtSize:(CGSize)arg1 forCatalog:(id)arg2 ;
-(void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2 ;
-(id)_resizeArtwork:(id)arg1 toSize:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_resizeOriginalArtworkForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)usesFallbackCache;
-(NSCache *)fallbackCache;
-(char)_isRepresentationSize:(CGSize)arg1 validForFittingSize:(CGSize)arg2 ;
-(MPArtworkResizeUtility *)artworkResizeUtility;
-(void)setUsesFallbackCache:(char)arg1 ;
-(void)setFallbackCache:(NSCache *)arg1 ;
-(void)setArtworkResizeUtility:(MPArtworkResizeUtility *)arg1 ;
-(id)init;
@end

