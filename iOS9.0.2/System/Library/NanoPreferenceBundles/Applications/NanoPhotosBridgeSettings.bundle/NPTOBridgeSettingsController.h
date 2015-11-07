/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoPhotosBridgeSettings.bundle/NanoPhotosBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class PSSpecifier, NSMutableArray, NSSManager;

@interface NPTOBridgeSettingsController : BPSNotificationAppController {

	PSSpecifier* _amountGroupSpecifier;
	NSMutableArray* _appGroupSpecifiers;
	NSSManager* _nssManager;
	double _lastDeviceGB;
	double _lastDeviceGBRetrieved;
	int _notifyToken;

}
-(void)_updateSpaceAvailable;
-(void)diskPressureChanged;
-(void)_updateSpaceAvailableWithDeviceGB:(double)arg1 ;
-(char)_companionShowsAlerts;
-(id)albumTitle:(id)arg1 ;
-(id)amount:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)suppressAllMirrorSpecifiers;
-(id)applicationGroupSpecifiers;
-(id)localizedMirroringDetailFooter;
-(id)localizedPaneTitle;
-(id)applicationBundleIdentifier;
-(void)reloadSpecifiers;
@end

