/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIPluginControllerHost.h>

@class SBUIPluginController, NSString;

@interface SBUIPluginHost : NSObject <SBUIPluginControllerHost> {

	SBUIPluginController* _plugin;
	char _expectsFaceContact;
	char _isPluginRunning;

}

@property (readonly) char isPluginVisible; 
@property (readonly) char isPluginRunning; 
@property (retain) SBUIPluginController * pluginController;              //@synthesize plugin=_plugin - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isPluginRunning;
-(char)pluginHandledButtonDownEventFromSource:(int)arg1 ;
-(char)pluginHandledButtonUpEventFromSource:(int)arg1 ;
-(char)pluginWantsActivationEvent:(int)arg1 eventSource:(int)arg2 interval:(double*)arg3 ;
-(char)activatePluginForEvent:(int)arg1 eventSource:(int)arg2 context:(void*)arg3 ;
-(char)pluginHandledPasscodeUnlockWithCompletion:(/*^block*/id)arg1 ;
-(char)expectsFaceContact;
-(void)preparePluginForActivationEvent:(int)arg1 eventSource:(int)arg2 afterInterval:(double)arg3 ;
-(SBUIPluginController *)pluginController;
-(void)_pluginDidLoad:(id)arg1 ;
-(void)_pluginWillUnload:(id)arg1 ;
-(char)pluginHandledButtonTapEventFromSource:(int)arg1 ;
-(void)cancelPendingPluginActivationEvent:(int)arg1 ;
-(char)pluginWantsInterfaceOrientation:(int*)arg1 ;
-(char)pluginSuppressesNotifications;
-(char)pluginWantsScreenDimInterval:(double*)arg1 ;
-(char)isPluginVisible;
-(char)pluginSupportedAndEnabled;
-(void)_notePluginVisibilityDidChange;
-(void)dismissPluginForEvent:(int)arg1 ;
-(void)_dismissUIPlugin:(id)arg1 animated:(char)arg2 ;
-(void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(int)arg2 animated:(char)arg3 ;
-(void)_removeObserversForPlugin:(id)arg1 ;
-(void)setPluginController:(SBUIPluginController *)arg1 ;
-(void)_noteDeviceLockedOrBlocked;
-(void)_updateFaceContactForVisibilityChange:(char)arg1 ;
-(void)_uiLocked:(id)arg1 ;
-(void)_deviceBlocked:(id)arg1 ;
-(void)_remoteLocked:(id)arg1 ;
-(void)_restoreOrientation;
-(char)uiPluginExpectsFaceContact:(id)arg1 ;
-(void)_updateExpectsFaceContactWithChangedValue:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(char)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)uiPlugin:(id)arg1 isNowRunning:(char)arg2 ;
-(void)uiPluginWantsDismissal:(id)arg1 withAnimation:(char)arg2 ;
-(void)uiPluginUserEventOccurred:(id)arg1 ;
-(char)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 ;
-(char)uiPlugin:(id)arg1 openURL:(id)arg2 ;
-(char)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(char)arg4 ;
-(char)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3 ;
-(void)uiPlugin:(id)arg1 setExpectsFaceContact:(char)arg2 ;
@end

