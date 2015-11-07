/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLPixelImageBuffer.h>

@interface BLCVPixelImageBuffer : BLPixelImageBuffer {

	CVBufferRef _pixelBuffer;
	CGContextRef _cgcontext;

}
-(CVBufferRef)pixelBuffer;
-(void)dealloc;
-(id)initWithSize:(CGSize)arg1 colorManagement:(int)arg2 ;
-(void)accessPixelsByContextInBlock:(/*^block*/id)arg1 ;
-(id)ciImage;
-(void)renderCIImage:(id)arg1 ;
-(void)accessPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(void)readPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(CGContextRef)cgcontext;
@end

