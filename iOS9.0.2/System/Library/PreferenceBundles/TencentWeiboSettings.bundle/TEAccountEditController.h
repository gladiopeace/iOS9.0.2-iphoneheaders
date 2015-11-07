/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/TencentWeiboSettings.bundle/TencentWeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, ACAccountType;

@interface TEAccountEditController : ACUIViewController {

	ACAccount* _account;
	ACAccountType* _tencentWeiboAccountType;
	char _isAccountDirty;

}
-(void)_deleteButtonTapped:(id)arg1 ;
-(void)_showErrorMessage:(id)arg1 withTitle:(id)arg2 ;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(id)_tencentWeiboAccountType;
-(void)_saveAccountChangesIfNecessary;
-(id)_userNameSpecifier;
-(id)_descriptionSpecifier;
-(void)_setDisplayName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_displayNameWithSpecifier:(id)arg1 ;
-(void)_handleSaveCompletionWithSuccess:(char)arg1 error:(id)arg2 wasVerifying:(char)arg3 ;
-(void)_confirmDeleteAccount;
-(id)specifiers;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)_passwordSpecifier;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2 ;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(char)arg3 error:(id)arg4 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
@end

