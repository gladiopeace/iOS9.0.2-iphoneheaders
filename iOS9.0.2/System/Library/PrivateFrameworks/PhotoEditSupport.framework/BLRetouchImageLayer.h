/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLRetouchLayer.h>

@class BLPixelImageBuffer, UIImage;

@interface BLRetouchImageLayer : BLRetouchLayer {

	BLPixelImageBuffer* _imageBuffer;
	UIImage* _image;
	float _imageScaleFactor;

}

@property (nonatomic,retain) BLPixelImageBuffer * imageBuffer;              //@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (nonatomic,retain) UIImage * image;                               //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) float imageScaleFactor;                        //@synthesize imageScaleFactor=_imageScaleFactor - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(UIImage *)image;
-(CGSize)imageSize;
-(CGContextRef)newContextForRect:(CGRect)arg1 inDestRect:(CGRect)arg2 andScale:(float)arg3 ;
-(BLPixelImageBuffer *)imageBuffer;
-(void)setImageBuffer:(BLPixelImageBuffer *)arg1 ;
-(float)imageScaleFactor;
-(void)setImageScaleFactor:(float)arg1 ;
@end

