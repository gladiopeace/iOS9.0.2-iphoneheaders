/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBUIPluginControllerHost <NSObject>
@required
-(void)uiPlugin:(id)arg1 forceUpdateToInterfaceOrientation:(int)arg2 animated:(char)arg3;
-(char)uiPluginExpectsFaceContact:(id)arg1;
-(char)uiPluginWantsActivation:(id)arg1 forEvent:(int)arg2 completion:(/*^block*/id)arg3;
-(void)uiPlugin:(id)arg1 isNowRunning:(char)arg2;
-(void)uiPluginWantsDismissal:(id)arg1 withAnimation:(char)arg2;
-(void)uiPluginUserEventOccurred:(id)arg1;
-(char)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3;
-(char)uiPlugin:(id)arg1 openURL:(id)arg2;
-(char)uiPlugin:(id)arg1 launchApplicationWithBundleID:(id)arg2 openURL:(id)arg3 allowDismissal:(char)arg4;
-(char)uiPluginAttemptDeviceUnlock:(id)arg1 withPassword:(id)arg2 lockViewOwner:(id)arg3;
-(void)uiPlugin:(id)arg1 setExpectsFaceContact:(char)arg2;

@end

