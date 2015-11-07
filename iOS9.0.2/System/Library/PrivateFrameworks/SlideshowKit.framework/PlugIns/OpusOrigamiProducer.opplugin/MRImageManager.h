/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class MRContext, EAGLContext, NSMutableDictionary, NSMutableSet;

@interface MRImageManager : NSObject {

	MRContext* mBaseContext;
	EAGLContext* mImageGLContext;
	NSMutableDictionary* mTextures;
	NSMutableSet* mAvailableTextures;
	NSMutableSet* mRecyclableTextures;
	NSMutableDictionary* _assetMasters;

}

@property (readonly) MRContext * baseContext; 
@property (readonly) EAGLContext * imageGLContext; 
+(void)cleanupPictureCache;
+(void)initialize;
-(EAGLContext *)imageGLContext;
-(MRContext *)baseContext;
-(void)purgeResources:(char)arg1 ;
-(void)recycleTexture:(id)arg1 ;
-(id)retainedByUserImageWithSize:(CGSize)arg1 andColor:(const float*)arg2 ;
-(id)retainedByUserImageWithCGContext:(CGContextRef)arg1 ;
-(id)retainedByUserThumbnailForAssetAtPath:(id)arg1 ;
-(id)_textureWithSize:(NSRange)arg1 isFBO:(char)arg2 options:(const SCD_Struct_MR7*)arg3 ;
-(id)_lockedMasterForAssetAtPath:(id)arg1 withOptions:(id)arg2 ;
-(id)optimizedPath:(id)arg1 forSize:(CGSize)arg2 ;
-(id)textureWithSize:(NSRange)arg1 options:(const SCD_Struct_MR7*)arg2 ;
-(id)fboTextureWithSize:(NSRange)arg1 ;
-(id)retainedByUserPlayerForAssetAtPath:(id)arg1 size:(CGSize)arg2 andOptions:(id)arg3 ;
-(CGImageRef)CGImageWithPath:(id)arg1 withOriginalSize:(CGSize)arg2 forSize:(CGSize)arg3 orientation:(char*)arg4 ;
-(CGImageRef)CGImageWithMoviePath:(id)arg1 withOriginalSize:(CGSize)arg2 forSize:(CGSize)arg3 atTime:(double)arg4 orientation:(char*)arg5 ;
-(CGImageRef)CGImageWithData:(id)arg1 withOriginalSize:(CGSize)arg2 forSize:(CGSize)arg3 orientation:(char*)arg4 ;
-(id)initWithBaseContext:(id)arg1 ;
-(void)dealloc;
@end

