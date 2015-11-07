/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLImageBuffer.h>

@class EAGLContext, CIImage;

@interface BLTextureImageBuffer : BLImageBuffer {

	unsigned _accumlatorTexture;
	unsigned _accumlatorFramebuffer;
	EAGLContext* _eaglContext;
	CIImage* _ciImage;

}
-(void)dealloc;
-(id)initWithSize:(CGSize)arg1 colorManagement:(int)arg2 ;
-(id)ciImage;
-(void)renderCIImage:(id)arg1 ;
-(void)readPixelsByAddressInBlock:(/*^block*/id)arg1 ;
@end

