/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_queue, COSMagicCodeScannerDelegate;
@class AVCaptureSession, AVCaptureDevice, AVCaptureVideoPreviewLayer, NSObject, UITapGestureRecognizer, CALayer;

@interface COSMagicCodeScanner : UIView {

	AVCaptureSession* _session;
	AVCaptureDevice* _device;
	AVCaptureVideoPreviewLayer* _previewLayer;
	NSObject*<OS_dispatch_queue> _queue;
	HCImagePerspectiveReader* _reader;
	unsigned long _readerUVWidth;
	unsigned long _readerUVHeight;
	unsigned long _readerUVBytesPerRow;
	double _watermark;
	CFArrayRef _pixelBufferPyramidArray;
	OpaqueVTPixelTransferSessionRef _pixelTransferSession;
	CGRect _interestRect;
	double _lastWmTime;
	double _lastFrameTime;
	double _lastPayloadTime;
	double _nextFrameTime;
	float _lastWmProgress;
	unsigned _missWmCount;
	char _canUseCamera;
	char _isScanningForCode;
	id<COSMagicCodeScannerDelegate> _delegate;
	UITapGestureRecognizer* _debugUIRecognizer;
	CALayer* _progressBGLayer;
	CALayer* _progressLayer;

}

@property (assign,nonatomic,__weak) id<COSMagicCodeScannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char canUseCamera;                                          //@synthesize canUseCamera=_canUseCamera - In the implementation block
@property (assign,nonatomic) char isScanningForCode;                                       //@synthesize isScanningForCode=_isScanningForCode - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * debugUIRecognizer;                   //@synthesize debugUIRecognizer=_debugUIRecognizer - In the implementation block
@property (nonatomic,retain) CALayer * progressBGLayer;                                    //@synthesize progressBGLayer=_progressBGLayer - In the implementation block
@property (nonatomic,retain) CALayer * progressLayer;                                      //@synthesize progressLayer=_progressLayer - In the implementation block
-(void)toggleDebugUI:(id)arg1 ;
-(void)setCameraAttributes;
-(char)isScanningForCode;
-(void)setIsScanningForCode:(char)arg1 ;
-(UITapGestureRecognizer *)debugUIRecognizer;
-(void)setDebugUIRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_changeCameraConfiguration;
-(id)setupCameraSession;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<COSMagicCodeScannerDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<COSMagicCodeScannerDelegate>)delegate;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)startRunning;
-(void)stopRunning;
-(void)handleRuntimeError:(id)arg1 ;
-(char)canUseCamera;
-(CALayer *)progressBGLayer;
-(void)setProgressBGLayer:(CALayer *)arg1 ;
-(CALayer *)progressLayer;
-(void)setProgressLayer:(CALayer *)arg1 ;
@end

