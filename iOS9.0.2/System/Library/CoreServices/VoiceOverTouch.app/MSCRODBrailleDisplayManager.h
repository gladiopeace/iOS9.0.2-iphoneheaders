/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/scrod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <scrod/scrod-Structs.h>
#import <ScreenReaderOutputServer/SCROBrailleDisplayManager.h>
#import <libobjc.A.dylib/RadiosPreferencesDelegate.h>

@class RadiosPreferences;

@interface MSCRODBrailleDisplayManager : SCROBrailleDisplayManager <RadiosPreferencesDelegate> {

	SCD_Struct_MS1* _sleepWake;
	int _notifyLockStateToken;
	unsigned long long _blankScreenToken;
	char _isScreenBlank;
	char _airplaneMode;
	RadiosPreferences* _radiosPrefs;

}

@property (assign,nonatomic) char airplaneMode;                            //@synthesize airplaneMode=_airplaneMode - In the implementation block
@property (nonatomic,retain) RadiosPreferences * radiosPrefs;              //@synthesize radiosPrefs=_radiosPrefs - In the implementation block
+(id)sharedManager;
+(id)allocWithZone:(NSZone*)arg1 ;
+(void)initialize;
-(void)setRadiosPrefs:(RadiosPreferences *)arg1 ;
-(RadiosPreferences *)radiosPrefs;
-(void)_registerHasBlankedScreenNotification;
-(char)_registerSleepNotifications;
-(void)_setupBluetooth;
-(void)powerChangedNotification:(id)arg1 ;
-(void)_delayedPowerChangedNotification:(id)arg1 ;
-(void)_loadBluetoothDriverFromPreferences;
-(void)_removeBluetoothDriverWithIOElement:(id)arg1 removeFromPreferences:(char)arg2 ;
-(void)_loadBluetoothDriverWithAddress:(id)arg1 ;
-(void)_removeBluetoothDriverWithAddress:(id)arg1 ;
-(unsigned)_rootPowerPort;
-(void)_wakeFromSleep;
-(void)_reallyDelayedWakeFromSleep;
-(void)_delayedWakeFromSleep;
-(void)_delayedHandleSystemSleep;
-(void)handleSettingsChange:(id)arg1 ;
-(char)airplaneMode;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(void)invalidate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_handleSystemSleep;
-(void)airplaneModeChanged;
-(void)setAirplaneMode:(char)arg1 ;
-(id)newBrailleDisplayCommandDispatcher;
-(void)_runThread;
-(id)brailleInputManager;
-(void)_setVirtualStatusAlignmentHandler:(id)arg1 ;
-(void)_setMasterStatusCellIndexHandler:(id)arg1 ;
-(void)_contractionModeHandler:(id)arg1 ;
-(void)_showEightDotHandler:(id)arg1 ;
-(void)_setTableHandler:(id)arg1 ;
-(id)driverConfiguration;
-(id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3 ;
-(void)_saveBluetoothDisplayConfiguration:(id)arg1 ;
-(void)loadBluetoothDriverWithAddress:(id)arg1 ;
-(void)removeBluetoothDriverWithAddress:(id)arg1 ;
-(char)isConfigured;
@end

