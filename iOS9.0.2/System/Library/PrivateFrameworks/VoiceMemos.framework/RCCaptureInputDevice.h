/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/RCCaptureSessionObserver.h>

@class NSString, RCAudioSessionRoutingController, _RCCaptureInputDeviceSession, RCCaptureSession;

@interface RCCaptureInputDevice : NSObject <RCCaptureSessionObserver> {

	char _inputAvailable;
	NSString* _activeInputRouteName;
	RCAudioSessionRoutingController* _audioRouteController;
	_RCCaptureInputDeviceSession* _pendingInputSession;
	_RCCaptureInputDeviceSession* _preparingInputSession;
	_RCCaptureInputDeviceSession* _activeInputSession;

}

@property (nonatomic,readonly) RCCaptureSession * activeCaptureSession; 
@property (getter=isInputAvailable,nonatomic,readonly) char inputAvailable;                          //@synthesize inputAvailable=_inputAvailable - In the implementation block
@property (getter=isPhoneCallRouteActive,nonatomic,readonly) char phoneCallRouteActive; 
@property (nonatomic,readonly) NSString * activeInputRouteName;                                      //@synthesize activeInputRouteName=_activeInputRouteName - In the implementation block
@property (nonatomic,readonly) char canExitApplication; 
@property (nonatomic,readonly) RCAudioSessionRoutingController * audioRouteController;               //@synthesize audioRouteController=_audioRouteController - In the implementation block
@property (nonatomic,retain) _RCCaptureInputDeviceSession * pendingInputSession;                     //@synthesize pendingInputSession=_pendingInputSession - In the implementation block
@property (nonatomic,retain) _RCCaptureInputDeviceSession * preparingInputSession;                   //@synthesize preparingInputSession=_preparingInputSession - In the implementation block
@property (nonatomic,retain) _RCCaptureInputDeviceSession * activeInputSession;                      //@synthesize activeInputSession=_activeInputSession - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCaptureDevice;
-(id)init;
-(id)_init;
-(char)isInputAvailable;
-(NSString *)activeInputRouteName;
-(void)fetchActiveInputRouteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)captureSession:(id)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2 ;
-(void)captureSession:(id)arg1 rateDidChangeToRate:(float)arg2 ;
-(char)isPhoneCallRouteActive;
-(void)captureSession:(id)arg1 didFinishWithSuccess:(char)arg2 ;
-(void)_captureDeviceWasConnectedNotification:(id)arg1 ;
-(void)_captureDeviceWasDisconnectedNotification:(id)arg1 ;
-(void)_updateInputAvailabilityAndPostNotification:(char)arg1 ;
-(void)_availableRoutesMaskDidChangeNotification:(id)arg1 ;
-(void)_pickedRouteDidChangeNotification:(id)arg1 ;
-(void)_updateSelectedRouteAndPostNotification:(char)arg1 ;
-(void)_setPendingCaptureSession:(id)arg1 useStartSoundEffect:(char)arg2 sessionPreparedBlock:(/*^block*/id)arg3 ;
-(id)_activeOrPreparingCaptureSession;
-(void)finishRecordingWithSession:(id)arg1 sessionFinishedBlock:(/*^block*/id)arg2 ;
-(void)_beginPendingSession;
-(id)_inputSessionForCaptureSession:(id)arg1 ;
-(char)_removeInputSessionForCaptureSession:(id)arg1 attemptToBeginPending:(char)arg2 ;
-(void)_handleDidEndCaptureSession:(id)arg1 success:(char)arg2 ;
-(void)beginRecordingWithCaptureWaveformDataSource:(id)arg1 useStartSoundEffect:(char)arg2 sessionPreparedBlock:(/*^block*/id)arg3 sessionFinishedBlock:(/*^block*/id)arg4 ;
-(RCCaptureSession *)activeCaptureSession;
-(char)canExitApplication;
-(RCAudioSessionRoutingController *)audioRouteController;
-(_RCCaptureInputDeviceSession *)pendingInputSession;
-(void)setPendingInputSession:(_RCCaptureInputDeviceSession *)arg1 ;
-(_RCCaptureInputDeviceSession *)preparingInputSession;
-(void)setPreparingInputSession:(_RCCaptureInputDeviceSession *)arg1 ;
-(_RCCaptureInputDeviceSession *)activeInputSession;
-(void)setActiveInputSession:(_RCCaptureInputDeviceSession *)arg1 ;
@end

