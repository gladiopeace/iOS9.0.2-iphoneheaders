/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/PKPaymentSetupViewControllerDelegate.h>
#import <libobjc.A.dylib/BuddyController.h>

@protocol BuddyControllerDelegate;
@class PKPaymentSetupAssistantRegistrationViewController, NSString;

@interface BuddyPaymentController : NSObject <PKPaymentSetupViewControllerDelegate, BuddyController> {

	PKPaymentSetupAssistantRegistrationViewController* _registrationController;
	char _shouldSuppressSpinner;
	id<BuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)skip;
+(char)controllerNeedsToRun;
-(void)handleDownloadedPasses:(id)arg1 fromViewController:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)viewControllerDidTerminateSetupFlow:(id)arg1 ;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(id)init;
-(id<BuddyControllerDelegate>)delegate;
-(id)viewController;
-(void)controllerWasPopped;
-(char)controllerAllowsNavigatingBack;
-(void)performExtendedInitializationWithCompletion:(/*^block*/id)arg1 ;
-(char)shouldSuppressExtendedInitializationActivityIndicator;
@end

