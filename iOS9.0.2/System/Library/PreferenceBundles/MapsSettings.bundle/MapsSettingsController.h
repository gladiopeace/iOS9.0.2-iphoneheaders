/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MapsSettings.bundle/MapsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSString;

@interface MapsSettingsController : PSListController {

	char _supportsNavigation;
	char _canLocalizeLabels;
	NSString* _emailAddress;
	int _disabledTransitModes;

}

@property (assign,nonatomic) int disabledTransitModes;               //@synthesize disabledTransitModes=_disabledTransitModes - In the implementation block
@property (nonatomic,readonly) int enabledTransitModes; 
-(void)_setValue:(id)arg1 forDefaultsKey:(id)arg2 bundleID:(id)arg3 syncToNano:(char)arg4 ;
-(void)_setAllowEmailCorrespondence:(id)arg1 specifier:(id)arg2 ;
-(void)contryConfigurationDidChange:(id)arg1 ;
-(void)_setLabelLanguageAlwaysUILanguage:(id)arg1 specifier:(id)arg2 ;
-(id)_allowEmailCorrespondence:(id)arg1 ;
-(void)_configureCell:(id)arg1 forTransitSpecifier:(id)arg2 ;
-(id)_valueForDefaultsKey:(id)arg1 bundleID:(id)arg2 ;
-(int)_adjustedSectionWithSection:(int)arg1 ;
-(void)_updateSettingsFromCurrentGeoCountryConfiguration;
-(int)enabledTransitModes;
-(int)disabledTransitModes;
-(void)_synchronizeNanoDefaultsForDomain:(id)arg1 key:(id)arg2 container:(id)arg3 ;
-(void)setDisabledTransitModes:(int)arg1 ;
-(id)_labelLanguageAlwaysUILanguage:(id)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
@end

