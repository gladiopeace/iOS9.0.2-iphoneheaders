/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CameraKit/CameraKit-Structs.h>
@interface CMKTimelapseJPEGReader : NSObject
+(id)_decodeOptionsWithMaxPixelSize:(int)arg1 applyTransform:(char)arg2 useBGRA:(char)arg3 ;
+(id)newDataFromFilePath:(id)arg1 ;
+(CVBufferRef)createPixelBufferFromData:(id)arg1 applyTransform:(char)arg2 maxPixelSize:(int)arg3 useBGRA:(char)arg4 ;
+(CGImageRef)createCGImageFromData:(id)arg1 applyTransform:(char)arg2 maxPixelSize:(int)arg3 useBGRA:(char)arg4 ;
@end

