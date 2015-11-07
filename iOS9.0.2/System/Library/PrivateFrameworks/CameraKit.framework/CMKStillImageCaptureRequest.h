/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <CameraKit/CMKCaptureRequest.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@protocol CMKStillImageCaptureRequestDelegate;
@interface CMKStillImageCaptureRequest : CMKCaptureRequest <NSCopying, NSMutableCopying> {

	char _transient;
	int _deviceOrientation;
	int _captureDevice;
	int _flashMode;
	int _hdrMode;
	char _usesStillImageStabilization;
	char _wantsAudioForCapture;
	id<CMKStillImageCaptureRequestDelegate> _delegate;

}

@property (getter=isTransient,nonatomic,readonly) char transient;                                    //@synthesize transient=_transient - In the implementation block
@property (nonatomic,readonly) int deviceOrientation;                                                //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) int captureDevice;                                                    //@synthesize captureDevice=_captureDevice - In the implementation block
@property (nonatomic,readonly) int flashMode;                                                        //@synthesize flashMode=_flashMode - In the implementation block
@property (nonatomic,readonly) int hdrMode;                                                          //@synthesize hdrMode=_hdrMode - In the implementation block
@property (nonatomic,readonly) char usesStillImageStabilization;                                     //@synthesize usesStillImageStabilization=_usesStillImageStabilization - In the implementation block
@property (nonatomic,readonly) char wantsAudioForCapture;                                            //@synthesize wantsAudioForCapture=_wantsAudioForCapture - In the implementation block
@property (nonatomic,__weak,readonly) id<CMKStillImageCaptureRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<CMKStillImageCaptureRequestDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)deviceOrientation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)isTransient;
-(int)flashMode;
-(int)hdrMode;
-(char)usesStillImageStabilization;
-(char)wantsAudioForCapture;
-(int)captureDevice;
@end

