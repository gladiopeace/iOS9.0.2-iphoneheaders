/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSString, AVCaptureSession, AVCaptureConnection, CALayer, AVWeakReference;

@interface AVCaptureVideoPreviewLayerInternal : NSObject {

	NSString* sinkID;
	AVCaptureSession* session;
	AVCaptureConnection* connection;
	OpaqueFigCaptureSessionRef figCaptureSession;
	CALayer* sublayer;
	CGSize sensorSize;
	NSString* sensorToPreviewVTScalingMode;
	CGSize previewSize;
	float previewRotationDegrees;
	NSString* gravity;
	char disableActions;
	AVWeakReference* weakReference;
	int orientation;
	char automaticallyAdjustsMirroring;
	char mirrored;
	char isPresentationLayer;
	char visible;
	char isPaused;
	char chromaNoiseReductionEnabled;
	int changeSeed;
	CGAffineTransform captureDeviceTransform;
	float rollAdjustment;

}
@end

