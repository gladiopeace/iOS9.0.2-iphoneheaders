/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLNamed.h>

@class NSString, NSData;

@interface MDLTexture : NSObject <MDLNamed> {

	NSString* _name;
	MDLTextureData _textureData;
	int _channelEncoding;
	NSData* _topLeftOriginData[14];
	NSData* _bottomLeftOriginData[14];
	char _selfCreating;

}

@property (nonatomic,readonly)  dimensions; 
@property (nonatomic,readonly) int rowStride; 
@property (nonatomic,readonly) unsigned channelCount; 
@property (nonatomic,readonly) unsigned mipLevelCount; 
@property (nonatomic,readonly) int channelEncoding;                 //@synthesize channelEncoding=_channelEncoding - In the implementation block
@property (assign,nonatomic) char isCube; 
@property (nonatomic,copy) NSString * name;                         //@synthesize name=_name - In the implementation block
+(id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 dimensions:(float)arg3 ;
+(id)textureNamed:(id)arg1 bundle:(id)arg2 ;
+(id)_textureCubeWithSingleImageNamed:(id)arg1 bundle:(id)arg2 ;
+(id)textureCubeWithImagesNamed:(id)arg1 bundle:(id)arg2 ;
+(id)textureCubeWithImagesNamed:(id)arg1 ;
+(id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 ;
+(id)textureNamed:(id)arg1 ;
-(id)initWithData:(id)arg1 topLeftOrigin:(char)arg2 name:(id)arg3 dimensions:(int)arg4 rowStride:(unsigned)arg5 channelCount:(int)arg6 channelEncoding:(char)arg7 ;
-(id)texelDataWithBottomLeftOrigin;
-(MDLTextureData*)textureData;
-(id)allocateDataAtLevel:(int)arg1 ;
-(void)clearTexelData;
-(id)texelDataWithTopLeftOriginAtMipLevel:(int)arg1 create:(char)arg2 ;
-(id)generateDataAtLevel:(int)arg1 ;
-(id)texelDataWithBottomLeftOriginAtMipLevel:(int)arg1 create:(char)arg2 ;
-(void)loadDataWithTopLeftOriginAtMipLevel:(int)arg1 create:(char)arg2 ;
-(void)loadDataWithBottomLeftOriginAtMipLevel:(int)arg1 create:(char)arg2 ;
-(char)writeToURL:(id)arg1 type:(CFStringRef)arg2 ;
-(id)texelDataWithTopLeftOrigin;
-(char)isCube;
-(void)setTexelDataWithTopLeftOrigin:(id)arg1 atMipLevel:(int)arg2 ;
-(int)rowStride;
-(void)setIsCube:(char)arg1 ;
-(unsigned)mipLevelCount;
-(void)setTexelDataWithBottomLeftOrigin:(id)arg1 atMipLevel:(int)arg2 ;
-(int)channelEncoding;
-(char)writeToURL:(id)arg1 ;
-(CGImageRef)imageFromTexture;
-(unsigned)channelCount;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(char)writeToFile:(id)arg1 atomically:(char)arg2 ;
-()dimensions;
@end

