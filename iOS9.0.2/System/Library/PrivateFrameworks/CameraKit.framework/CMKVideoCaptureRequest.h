/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKCaptureRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface CMKVideoCaptureRequest : CMKCaptureRequest <NSCopying, NSMutableCopying> {

	int _deviceOrientation;
	int _captureDevice;
	int _torchMode;

}

@property (nonatomic,readonly) int deviceOrientation;              //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) int captureDevice;                  //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) int torchMode;                      //@synthesize torchMode=_torchMode - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)deviceOrientation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(int)captureDevice;
-(int)torchMode;
@end

