/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafariSettings/SafariSettingsListController.h>
#import <libobjc.A.dylib/DevicePINControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>

@class UIPopoverController, NSIndexPath, ABPeoplePickerNavigationController, NSString;

@interface SafariAutoFillSettingsController : SafariSettingsListController <DevicePINControllerDelegate, UIPopoverControllerDelegate, ABPeoplePickerNavigationControllerDelegate> {

	UIPopoverController* _autoFillContactController;
	NSIndexPath* _autoFillContactIndex;
	char _isMeCardSet;
	void* _addressBook;
	ABPeoplePickerNavigationController* _meCardPicker;
	/*^block*/id _passcodeEntryCompletionHandler;
	/*^block*/id _promptCompletionHandler;
	/*^block*/id _passcodeSetupCompletionHandler;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)addressBookHasMeCard:(void*)arg1 ;
-(id)specifiers;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(id)_formDataController;
-(id)meCardName;
-(void)_enablingAutoFillWithoutPasscodePromptEndedWithResult:(int)arg1 ;
-(void)_showPasscodeSetupSheetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_promptForEnablingAutoFillWithoutPasscodeWithTitle:(id)arg1 message:(id)arg2 allowAnyway:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_setShouldAutoFill:(char)arg1 specifier:(id)arg2 message:(id)arg3 setter:(/*^block*/id)arg4 ;
-(void)_setupMeCardPicker;
-(void)showMeCardPicker;
-(void)presentPopoverContactListInTable:(id)arg1 index:(id)arg2 specifier:(id)arg3 ;
-(void)updateUseContactInfoSpecifiers;
-(void)_dismissMeCardPicker;
-(id)useContactInfo:(id)arg1 ;
-(id)myInfo:(id)arg1 ;
-(id)shouldAutoFillPasswords:(id)arg1 ;
-(void)setShouldAutoFillPasswords:(id)arg1 specifier:(id)arg2 ;
-(id)shouldAutoFillCreditCards:(id)arg1 ;
-(void)setShouldAutoFillCreditCards:(id)arg1 specifier:(id)arg2 ;
-(void)setUseContactInfo:(id)arg1 forSpecifier:(id)arg2 ;
-(void)willResignActive;
-(void)didAcceptSetPIN;
-(void)didAcceptEnteredPIN;
-(void)didCancelEnteringPIN;
@end

