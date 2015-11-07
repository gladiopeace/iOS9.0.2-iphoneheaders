/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLThumbPersistenceManager.h>

@class NSString;

@interface PLThumbFileManager : NSObject <PLThumbPersistenceManager> {

	int _format;
	CGSize _thumbnailSize;
	NSString* _path;
	NSString* _filename;
	char _readOnly;
	int _imageRowBytes;
	int _imageLength;
	int _entryLength;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * path;                     //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) int imageFormat;                     //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) int imageWidth; 
@property (nonatomic,readonly) int imageHeight; 
@property (nonatomic,readonly) int imageRowBytes;                   //@synthesize imageRowBytes=_imageRowBytes - In the implementation block
@property (nonatomic,readonly) int imageLength;                     //@synthesize imageLength=_imageLength - In the implementation block
@property (nonatomic,readonly) char isReadOnly; 
@property (nonatomic,readonly) CGSize imageSize; 
+(void)deleteAllEntriesWithIdentifier:(id)arg1 basePath:(id)arg2 ;
+(CFDictionaryRef)decodeSessionOptions;
+(id)baseSessionOptions;
+(char)_deviceShouldUseLowPerformancePixelFormat;
-(void)dealloc;
-(NSString *)description;
-(NSString *)path;
-(CGSize)imageSize;
-(id)initWithPath:(id)arg1 imageFormat:(int)arg2 readOnly:(char)arg3 ;
-(int)imageLength;
-(int)imageFormat;
-(int)imageWidth;
-(int)imageHeight;
-(int)imageRowBytes;
-(id)imageDataWithIdentifier:(id)arg1 orIndex:(unsigned)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 dataOffset:(int*)arg8 ;
-(void)setImageForEntry:(id)arg1 withIdentifier:(id)arg2 orIndex:(unsigned)arg3 videoDuration:(id)arg4 photoUUID:(id)arg5 ;
-(void)setImageDataForEntry:(const void*)arg1 withIdentifier:(id)arg2 orIndex:(unsigned)arg3 asset:(id)arg4 ;
-(char)copyEntryFromOriginalAsset:(id)arg1 toAsset:(id)arg2 ;
-(id)beginThumbnailSafePropertyUpdatesOnAsset:(id)arg1 ;
-(void)endThumbnailSafePropertyUpdatesOnAsset:(id)arg1 withToken:(id)arg2 ;
-(char)usesThumbIdentifiers;
-(id)_debugDescription;
-(id)imageWithIdentifier:(id)arg1 ;
-(id)thumbnailPathForThumbIdentifier:(id)arg1 ;
-(char)isReadOnly;
-(id)preheatItemForAsset:(id)arg1 format:(int)arg2 optimalSourcePixelSize:(CGSize)arg3 options:(unsigned)arg4 ;
-(id)originalPreheatItemForAsset:(id)arg1 optimalSourcePixelSize:(CGSize)arg2 options:(unsigned)arg3 ;
-(id)initWithPath:(id)arg1 imageFormat:(int)arg2 ;
-(id)thumbnailForImage:(id)arg1 videoDuration:(id)arg2 ;
-(void)_writeImage:(id)arg1 forThumbIdentifier:(id)arg2 ;
-(void)_writeData:(id)arg1 forThumbIdentifier:(id)arg2 ;
@end

