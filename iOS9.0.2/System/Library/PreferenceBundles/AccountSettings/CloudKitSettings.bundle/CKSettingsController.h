/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/CloudKitSettings.bundle/CloudKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSMutableDictionary, PSTableCell;

@interface CKSettingsController : PSListController {

	NSMutableDictionary* _enabledByAppID;
	PSTableCell* _serviceSectionCell;

}

@property (nonatomic,retain) NSMutableDictionary * enabledByAppID;              //@synthesize enabledByAppID=_enabledByAppID - In the implementation block
@property (nonatomic,retain) PSTableCell * serviceSectionCell;                  //@synthesize serviceSectionCell=_serviceSectionCell - In the implementation block
+(id)cloudKitNumAppGroups;
-(void)setAppPermissionEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)appPermissionEnabledForSpecifier:(id)arg1 ;
-(void)networkReachabilityDidChange:(id)arg1 ;
-(char)_isApplicationHiddenFromSettings:(id)arg1 ;
-(PSTableCell *)serviceSectionCell;
-(void)setServiceSectionCell:(PSTableCell *)arg1 ;
-(void)setEnabledByAppID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)enabledByAppID;
-(id)specifiers;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
@end

