/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <ManagedConfigurationUI/MCInstallProfileViewController.h>
#import <libobjc.A.dylib/MCInteractionDelegate.h>
#import <libobjc.A.dylib/MCProfileViewControllerDelegate.h>
#import <libobjc.A.dylib/PSStateRestoration.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UIAlertView, MCProfile, UITextField, NSString;

@interface MCRemoveProfileViewController : MCInstallProfileViewController <MCInteractionDelegate, MCProfileViewControllerDelegate, PSStateRestoration, UIActionSheetDelegate, UITextFieldDelegate> {

	char _profileWantsToReEnroll;
	char _actionButtonHidden;
	UIAlertView* _activeAlert;
	struct {
		unsigned installedThisLaunch : 1;
		unsigned profileSuggestsReboot : 1;
	}  _configurationFlags;
	MCProfile* _updatingProfile;
	UITextField* _passwordField;

}

@property (nonatomic,retain) MCProfile * updatingProfile;              //@synthesize updatingProfile=_updatingProfile - In the implementation block
@property (nonatomic,retain) UITextField * passwordField;              //@synthesize passwordField=_passwordField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveMemoryWarning;
-(void)alertViewCancel:(id)arg1 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(UITextField *)passwordField;
-(void)_clearCachedTableCells;
-(void)_profileListChanged:(id)arg1 ;
-(void)_performReEnroll;
-(void)_showProgressIndicator;
-(void)_performReEnrollAfterPINVerification;
-(void)_hideProgressIndicatorWithSuccess:(char)arg1 showButtons:(char)arg2 ;
-(void)_cancelActiveAlert:(char)arg1 ;
-(void)_profileRemovalDidFinish;
-(void)_showRemovalWarningAlert;
-(void)_showWrongRemovalPasswordAlert;
-(void)setPasswordField:(UITextField *)arg1 ;
-(char)_signatureForProfile:(id)arg1 matchesProfileB:(id)arg2 ;
-(void)profileViewControllerDidSelectRemoveProfile:(id)arg1 ;
-(void)profileViewControllerDidSelectUpdateProfile:(id)arg1 ;
-(void)_updateProfile;
-(void)_removeProfile;
-(void)_cancelActiveAlertController:(char)arg1 ;
-(void)setInstallState:(int)arg1 animated:(char)arg2 ;
-(void)updateTitleForProfileInstallationState:(int)arg1 ;
-(void)updateBarButtonItemsForProfileInstallationState:(int)arg1 animated:(char)arg2 ;
-(MCProfile *)updatingProfile;
-(void)setUpdatingProfile:(MCProfile *)arg1 ;
-(void)_showRemovalWarningAfterPINVerification;
-(void)_showRemovalWarningActionSheet;
-(void)performRemoveAfterFinalVerification;
-(id)_mdmProfileRemovalAlertBody;
-(id)initWithProfile:(id)arg1 ;
-(void)didAcceptEnteredPIN:(id)arg1 ;
-(void)didCancelEnteringPIN;
@end

