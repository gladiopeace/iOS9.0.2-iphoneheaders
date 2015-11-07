/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/VoiceOverBluetoothDevicesController.h>

@class SCROBrailleClient, NSDictionary, NSTimer, NSString;

@interface VoiceOverBrailleController : VoiceOverBluetoothDevicesController {

	SCROBrailleClient* _brailleClient;
	NSDictionary* _brailleDriverDeviceDetectionInfo;
	NSTimer* _bluetoothDeviceLoadFailedTimer;
	char _isContractedBrailleEnabled;
	char _isEightDotBrailleEnabled;
	NSString* _statusKey;

}
-(void)handleSettingsChange:(id)arg1 ;
-(id)contractedBrailleEnabled:(id)arg1 ;
-(id)alwaysUseNemethEnabled:(id)arg1 ;
-(void)setContractedBrailleEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setEightDotBrailleEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setAlwaysUseNemethEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)statusCellStatus:(id)arg1 ;
-(id)brailleGesturesInput:(id)arg1 ;
-(id)eightDotBrailleEnabled:(id)arg1 ;
-(id)panningAutoturnReadingContent:(id)arg1 ;
-(id)brailleDisplayInput:(id)arg1 ;
-(id)brailleDisplayOutput:(id)arg1 ;
-(void)setPanningAutoturnReadingContent:(id)arg1 specifier:(id)arg2 ;
-(id)softwareKeyboardWithBrailleEnabled:(id)arg1 ;
-(void)setSoftwareKeyboardWithBrailleEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)_bluetoothDisplayAddressFromPreferences;
-(void)_connectToBrailleClient:(char)arg1 ;
-(void)_stopDeviceLoadFailedTimer;
-(id)_currentBrailleTable:(id)arg1 ;
-(id)_brailleDisplayAlertDuration:(id)arg1 ;
-(id)_stringForBrailleMode:(int)arg1 ;
-(void)_handleBrailleConfigurationChanged;
-(void)_updateBrailleWritingCell;
-(void)_handleSettingsChange:(id)arg1 ;
-(id)_statusKeyFromPreferences;
-(void)primaryDeviceWasUnpaired;
-(void)_startDeviceLoadFailedTimer;
-(void)_bluetoothDeviceLoadFailedTimerFireMethod:(id)arg1 ;
-(void)_handleFailedToLoadBluetoothDevice:(id)arg1 ;
-(void)deviceConnected:(id)arg1 ;
-(char)shouldAddDevice:(id)arg1 ;
-(id)devicesGroupName;
-(id)bluetoothPoweredOffFooter;
-(id)bluetoothPowerAlertMessage;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setBluetoothIsBusy:(char)arg1 ;
-(void)handleBrailleDidReconnect:(id)arg1 ;
-(void)handleBrailleConfigurationChanged:(id)arg1 ;
-(void)handleFailedToLoadBluetoothDevice:(id)arg1 ;
@end

