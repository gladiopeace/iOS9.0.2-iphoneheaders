/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class VoiceOverBluetoothDevice, NSArray;

@interface VoiceOverBluetoothDeviceConfigController : PSListController {

	VoiceOverBluetoothDevice* _device;
	NSArray* _forgetGroupSpecifiers;
	char _dismissed;

}
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)deviceConnectedHandler:(id)arg1 ;
-(void)deviceUpdated:(id)arg1 ;
-(void)deviceRemoved:(id)arg1 ;
-(void)forgetDevice:(id)arg1 ;
@end

