/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/ACUISetupViewControllerDelegate.h>

@class NSArray, PSSpecifier, ACUIAccountViewProvidersManager, NSString;

@interface ACUIAddAccountViewController : PSListController <ACUISetupViewControllerDelegate> {

	char _dontShowSecondLevelOtherAccountTypes;
	NSArray* _preEnabledDataclasses;
	unsigned char _originalWifiFlag;
	unsigned char _originalCellFlag;
	PSSpecifier* _gmailSpecifier;

}

@property (nonatomic,readonly) ACUIAccountViewProvidersManager * viewProvidersManager; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(char)arg1 ;
-(id)_specifierForiCloudAccount;
-(id)_specifierForExchangeAccount;
-(id)_specifiersForRegionalMailAccounts;
-(id)_specifierForGmailAccount;
-(id)_specifierForYahooAccount;
-(id)_specifierForAOLAccount;
-(id)_specifierForOutlookAccount;
-(id)specifierForOtherAccounts;
-(id)giantSpecifierWithName:(id)arg1 forAccountTypeID:(id)arg2 ;
-(id)_specifierForCustomControlledAccountWithName:(id)arg1 accountTypeID:(id)arg2 ;
-(ACUIAccountViewProvidersManager *)viewProvidersManager;
-(void)_createCustomControlledAccountTapped:(id)arg1 ;
-(void)nonModalDataclassConfigurationControllerDidCompleteWithSuccess:(char)arg1 ;
-(id)_specifierForRegionalAccountType:(id)arg1 ;
-(void)setupViewControllerDidDismiss:(id)arg1 ;
@end
