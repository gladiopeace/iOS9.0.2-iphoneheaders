/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PHAsset, NSData;

@interface PHAssetEmbeddedThumbnailProperties : NSObject {

	short _embeddedThumbnailWidth;
	short _embeddedThumbnailHeight;
	PHAsset* _asset;
	int _embeddedThumbnailOffset;
	int _embeddedThumbnailLength;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                      //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) char hasEmbeddedThumbnail; 
@property (nonatomic,readonly) NSData * embeddedThumbnailData; 
@property (nonatomic,readonly) int embeddedThumbnailOffset;                 //@synthesize embeddedThumbnailOffset=_embeddedThumbnailOffset - In the implementation block
@property (nonatomic,readonly) int embeddedThumbnailLength;                 //@synthesize embeddedThumbnailLength=_embeddedThumbnailLength - In the implementation block
@property (nonatomic,readonly) short embeddedThumbnailWidth;                //@synthesize embeddedThumbnailWidth=_embeddedThumbnailWidth - In the implementation block
@property (nonatomic,readonly) short embeddedThumbnailHeight;               //@synthesize embeddedThumbnailHeight=_embeddedThumbnailHeight - In the implementation block
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 ;
-(PHAsset *)asset;
-(int)embeddedThumbnailOffset;
-(int)embeddedThumbnailLength;
-(short)embeddedThumbnailWidth;
-(short)embeddedThumbnailHeight;
-(char)hasEmbeddedThumbnail;
-(NSData *)embeddedThumbnailData;
@end

