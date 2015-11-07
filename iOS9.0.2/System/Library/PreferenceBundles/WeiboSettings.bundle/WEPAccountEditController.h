/*
* This header is generated by classdump-dyld 0.7
* on Sunday, October 25, 2015 at 9:09:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class ACAccount, PSTextFieldSpecifier;

@interface WEPAccountEditController : ACUIViewController {

	ACAccount* _account;
	PSTextFieldSpecifier* _screennameSpecifier;
	char _isAccountDirty;
	char _didAttemptNameUpdate;

}
-(void)_deleteButtonTapped:(id)arg1 ;
-(id)_passwordWithSpecifier:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_saveAccountChangesIfNecessary;
-(id)_userNameSpecifier;
-(id)_descriptionSpecifier;
-(void)_setDisplayName:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_displayNameWithSpecifier:(id)arg1 ;
-(void)_handleSaveCompletionWithSuccess:(char)arg1 error:(id)arg2 wasVerifying:(char)arg3 ;
-(void)_confirmDeleteAccount;
-(void)_updateFullNameIfNecessary;
-(id)_screennameSpecifier;
-(id)_screennameWithSpecifier:(id)arg1 ;
-(id)specifiers;
-(void)cancelButtonTapped:(id)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(id)_passwordSpecifier;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
@end

