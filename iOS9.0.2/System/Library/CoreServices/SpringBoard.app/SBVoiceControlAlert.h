/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlert.h>

@interface SBVoiceControlAlert : SBAlert {

	struct {
		unsigned shouldBeActivated : 1;
		unsigned isReadyToBeActivated : 1;
		unsigned hasBeenActivated : 1;
	}  _voiceControlFlags;
	char _expectsFaceContact;
	char _expectsFaceContactInLandscape;

}
+(id)pendingOrActiveAlert;
+(char)shouldEnterVoiceControl;
+(char)resetVoiceControlIfNecessary:(char)arg1 ;
+(void)unregisterForAlerts;
+(void)bluetoothDeviceRequestedVoiceControl:(id)arg1 ;
+(void)bluetoothDeviceTerminatedVoiceControl:(id)arg1 ;
+(void)setNextRecognitionAudioInputPaths:(id)arg1 ;
+(char)_bluetoothDevicesPickable;
+(void)_configureSession:(id)arg1 forAlert:(id)arg2 ;
+(void)_setNextRecognitionAudioInputPathForSession:(id)arg1 resetting:(char)arg2 ;
+(void)registerForAlerts;
-(void)cancelIfNotActivated;
-(char)expectsFaceContact;
-(char)expectsFaceContactInLandscape;
-(double)autoDimTime;
-(char)allowsEventOnlySuspension;
-(id)alertDisplayViewWithSize:(CGSize)arg1 ;
-(id)initFromMenuButton;
-(id)initFromWiredHeadsetButton;
-(void)handleHeadsetButtonUpFromActivation:(char)arg1 ;
-(void)_resign;
-(id)initFromBluetoothDevice:(id)arg1 ;
-(void)_workspaceActivate;
-(void)_makeActive;
-(void)_setRoutingAttributesForWiredHeadset:(char)arg1 ;
-(void)activateWhenReady;
-(void)_proximityChanged:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)setExpectsFaceContact:(char)arg1 inLandscape:(char)arg2 ;
-(void)setExpectsFaceContact:(char)arg1 ;
-(void)deactivate;
-(void)activate;
-(id)_session;
-(char)handleMenuButtonTap;
-(char)recognitionSessionWillBeginAction:(id)arg1 ;
@end

