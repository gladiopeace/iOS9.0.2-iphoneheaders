/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MPAssetKeyDelegate <NSObject>
@optional
-(id)mapTileForPath:(id)arg1;
-(id)updatedAssetPathForAssetPath:(id)arg1;
-(CGSize*)resolutionForAssetKey:(id)arg1;
-(id)attributeForKey:(id)arg1 forAssetKey:(id)arg2 withOptions:(id)arg3;
-(id)detectRegionsOfInterestForAssetKey:(id)arg1;
-(id)relativeTiledPathsForAssetWithAttributes:(id)arg1;
-(id)mapTileCenteredAt:(id)arg1 size:(CGSize)arg2 inset:(CGSize)arg3;
-(id)flightPlanFrom:(CGPoint)arg1 to:(CGPoint)arg2;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3 thumbnailIfPossible:(char)arg4 now:(char)arg5;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2 orientation:(char*)arg3;
-(CGImageRef)retainedCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(CGImageRef)cgImageForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(CGImageRef)retainedThumbnailCGImageForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(id)avAssetForAssetKey:(id)arg1;
-(id)imageDataForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(id)relativePathForAssetWithAttributes:(id)arg1;
-(id)attributesforAssetPath:(id)arg1;

@required
-(id)absolutePathForAssetKey:(id)arg1;
-(id)absolutePathForAssetKey:(id)arg1 andSize:(CGSize)arg2;
-(id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(CGSize)arg2;

@end

