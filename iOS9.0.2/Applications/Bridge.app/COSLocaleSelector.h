/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSLocaleSelector.h>

@class COSInternationalController, NPSDomainAccessor, NPSManager;

@interface COSLocaleSelector : PSLocaleSelector {

	COSInternationalController* _internationalController;
	NPSDomainAccessor* _gizmoGlobalDomain;
	NPSManager* _syncManager;

}

@property (nonatomic,retain) COSInternationalController * internationalController;              //@synthesize internationalController=_internationalController - In the implementation block
@property (nonatomic,retain) NPSDomainAccessor * gizmoGlobalDomain;                             //@synthesize gizmoGlobalDomain=_gizmoGlobalDomain - In the implementation block
@property (nonatomic,retain) NPSManager * syncManager;                                          //@synthesize syncManager=_syncManager - In the implementation block
-(NPSDomainAccessor *)gizmoGlobalDomain;
-(id)initWithInternationalController:(id)arg1 ;
-(COSInternationalController *)internationalController;
-(void)setInternationalController:(COSInternationalController *)arg1 ;
-(void)setGizmoGlobalDomain:(NPSDomainAccessor *)arg1 ;
-(void)postLocaleChangedNotification;
-(void)setLocaleFromCalendarID:(id)arg1 ;
-(void)updateLocale:(id)arg1 ;
-(id)currentLocale;
-(void)setLocale:(id)arg1 ;
-(NPSManager *)syncManager;
-(void)setSyncManager:(NPSManager *)arg1 ;
-(void)setLocaleOnly:(id)arg1 ;
-(void)resetTimeFormat;
-(void)setLocaleFromLanguageIdentifier:(id)arg1 ;
-(void)setLocaleFromRegionCode:(id)arg1 ;
-(id)availableLocaleIdentifiers;
@end

