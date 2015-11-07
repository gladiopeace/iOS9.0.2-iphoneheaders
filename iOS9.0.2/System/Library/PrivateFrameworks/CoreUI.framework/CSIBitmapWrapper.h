/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSData;

@interface CSIBitmapWrapper : NSObject {

	CGContextRef _bitmapContext;
	NSData* _pixelData;
	NSData* _rawData;
	unsigned _pixelFormat;
	unsigned _width;
	unsigned _height;
	unsigned long _rowbytes;
	char _allowsMultiPassEncoding;
	unsigned _imageAlpha;

}

@property (assign,nonatomic) unsigned pixelFormat;              //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign) char allowsMultiPassEncoding;                //@synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding - In the implementation block
-(void)dealloc;
-(unsigned)width;
-(unsigned)height;
-(CGContextRef)bitmapContext;
-(unsigned)pixelFormat;
-(void)setPixelFormat:(unsigned)arg1 ;
-(id)compressedData:(char)arg1 usedEncoding:(int*)arg2 andRowChunkSize:(unsigned*)arg3 ;
-(char)allowsMultiPassEncoding;
-(unsigned)sourceAlphaInfo;
-(unsigned long)rowbytes;
-(void)setAllowsMultiPassEncoding:(char)arg1 ;
-(id)pixelData;
-(id)initWithPixelWidth:(unsigned)arg1 pixelHeight:(unsigned)arg2 ;
-(void)setSourceAlphaInfo:(unsigned)arg1 ;
-(void)setPixelData:(id)arg1 ;
-(void)finalize;
@end

