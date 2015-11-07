/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPWaitingApprovalDelegate.h>
#import <libobjc.A.dylib/CDPDevicePickerDelegate.h>
#import <libobjc.A.dylib/CDPRemoteSecretEntryDelegate.h>
#import <libobjc.A.dylib/KeychainSyncViewControllerDelegate.h>
#import <libobjc.A.dylib/CDPStateUIProvider.h>

@class UIViewController, UINavigationController, CDPDevicePickerViewController, CDPRemoteDeviceSecretValidator, NSArray, NSNumber, NSString;

@interface CDPUIController : NSObject <CDPWaitingApprovalDelegate, CDPDevicePickerDelegate, CDPRemoteSecretEntryDelegate, KeychainSyncViewControllerDelegate, CDPStateUIProvider> {

	UIViewController* _presentingViewController;
	UIViewController* _rootViewController;
	UINavigationController* _navController;
	CDPDevicePickerViewController* _devicePicker;
	CDPRemoteDeviceSecretValidator* _remoteSecretValidator;
	NSArray* _devices;
	char _isRandomICSC;
	char _isNumericICSC;
	NSNumber* _icscNumericLength;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelTapped:(id)arg1 ;
-(id)initWithPresentingViewControlller:(id)arg1 ;
-(id)navigationControllerWithRootViewController:(id)arg1 ;
-(void)escapeHatchTappedFromWaitingApprovalViewController:(id)arg1 ;
-(void)approveFromAnotherDeviceTappedFromDevicePicker:(id)arg1 ;
-(void)devicePicker:(id)arg1 didSelectDevice:(id)arg2 ;
-(void)remoteSecretEntry:(id)arg1 didAcceptValidRemoteSecretForDevice:(id)arg2 ;
-(void)cancelledRemoteSecretEntry:(id)arg1 ;
-(void)exceededMaximumAttemptsForRemoteSecretEntry:(id)arg1 ;
-(void)remoteSecretEntry:(id)arg1 depletedRemainingAttemptsForDevice:(id)arg2 ;
-(void)cdpContext:(id)arg1 promptForLocalSecretWithHandler:(id)arg2 ;
-(void)cdpContext:(id)arg1 promptForRemoteSecretWithDevices:(id)arg2 validator:(id)arg3 ;
-(void)cdpContext:(id)arg1 promptForICSCWithIsNumeric:(char)arg2 numericLength:(id)arg3 isRandom:(char)arg4 validator:(id)arg5 ;
-(void)cdpContext:(id)arg1 promptForAccountPasswordWithCompletion:(/*^block*/id)arg2 ;
-(void)cdpContext:(id)arg1 promptForAdoptionOfMultipleICSC:(/*^block*/id)arg2 ;
-(void)keychainSyncController:(id)arg1 didFinishWithResult:(id)arg2 error:(id)arg3 ;
@end
