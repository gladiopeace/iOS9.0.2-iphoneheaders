/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@class NSMutableDictionary, NSDictionary, MFAccount, MFAccountValidator, MFConnectionSettings, NSString, UIResponder;

@interface AccountPSDetailControllerBase : ACUIViewController {

	NSMutableDictionary* _accountValues;
	NSMutableDictionary* _originalAccountValues;
	NSDictionary* _accountValuesAfterFailedValidation;
	MFAccount* _account;
	MFAccountValidator* _accountValidator;
	MFConnectionSettings* _originalConnectionSettings;
	unsigned _validating : 1;
	unsigned _attemptedValidation : 1;
	NSString* _initialTitle;
	UIResponder* _lastFirstResponder;

}

@property (nonatomic,retain) MFAccount * account;                                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountValues;                          //@synthesize accountValues=_accountValues - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * originalAccountValues;                  //@synthesize originalAccountValues=_originalAccountValues - In the implementation block
@property (nonatomic,copy) NSDictionary * accountValuesAfterFailedValidation;              //@synthesize accountValuesAfterFailedValidation=_accountValuesAfterFailedValidation - In the implementation block
@property (nonatomic,retain) MFAccountValidator * accountValidator;                        //@synthesize accountValidator=_accountValidator - In the implementation block
+(id)normalizeAccountProperties:(id)arg1 withAccountClass:(Class)arg2 ;
-(void)saveAndDismiss;
-(void)doneButtonTapped:(id)arg1 ;
-(void)dealloc;
-(void)suspend;
-(void)viewDidLoad;
-(id)setOfKeysForAlteredValuesInDictionary:(id)arg1 originalDictionary:(id)arg2 ;
-(id)fixAccountInputValues:(id)arg1 ;
-(void)sendPreferencesChangedNotificationForChangedValues;
-(void)setViewsEnabled:(char)arg1 ;
-(int)validateAccount;
-(id)existingAccountForAccountValues:(id)arg1 ;
-(int)validateAccount:(id)arg1 withFallbacks:(char)arg2 ;
-(MFAccountValidator *)accountValidator;
-(char)haveEnoughValues;
-(void)handleSSLAlertForAccount:(id)arg1 accountValidator:(id)arg2 attemptWithoutSSL:(char)arg3 ;
-(void)sendPreferencesChangedNotificationForKey:(id)arg1 ;
-(void)validateForExistingAccount;
-(void)validateForNewAccount;
-(void)handleValidAccount:(id)arg1 ;
-(void)handleInvalidAccount:(id)arg1 ;
-(void)didFinishSaveAccountAnywaysSheetWithResult:(char)arg1 ;
-(void)cancelAccountValidation;
-(NSMutableDictionary *)accountValues;
-(NSMutableDictionary *)originalAccountValues;
-(void)doneButtonClickedForNewAccount;
-(void)doneButtonClickedForExistingAccount;
-(void)setAccountValidator:(MFAccountValidator *)arg1 ;
-(NSDictionary *)accountValuesAfterFailedValidation;
-(void)displaySaveAccountAnywaysAlertSheet;
-(void)setAccountValuesAfterFailedValidation:(NSDictionary *)arg1 ;
-(void)displaySSLAlertForAccount:(id)arg1 accountValidator:(id)arg2 ;
-(void)_promptUserForWebLoginForAccount:(id)arg1 accountValidator:(id)arg2 error:(id)arg3 ;
-(void)_presentAlertForAccount:(id)arg1 accountValidator:(id)arg2 error:(id)arg3 ;
-(void)_redirectToRecoveryURL:(id)arg1 ;
-(int)validateAccountUsingFallbacks;
-(void)setAccountValues:(NSMutableDictionary *)arg1 ;
-(void)setOriginalAccountValues:(NSMutableDictionary *)arg1 ;
-(Class)accountClass;
-(void)accountValidator:(id)arg1 finishedValidationOfAccount:(id)arg2 usedSSL:(char)arg3 ;
-(void)setAccount:(MFAccount *)arg1 ;
-(MFAccount *)account;
@end

