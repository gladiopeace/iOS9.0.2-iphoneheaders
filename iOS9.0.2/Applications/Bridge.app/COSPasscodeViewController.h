/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/DevicePINController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegatePrivate.h>

@protocol COSPasscodeViewControllerDelegate;
@class UIPopoverController, NSString, UIViewController, UINavigationController, UIStatusBar, UIView;

@interface COSPasscodeViewController : DevicePINController <UINavigationControllerDelegate, UIPopoverControllerDelegatePrivate> {

	char _passcodeViewVisible;
	id<COSPasscodeViewControllerDelegate> _delegate;
	UIPopoverController* _hostingPopoverController;
	NSString* _passcode;
	UIViewController* _presentorViewController;
	UINavigationController* _hostingNavigationController;
	UIStatusBar* _statusBar;
	UIView* _statusBarContainerView;

}

@property (assign,nonatomic,__weak) id<COSPasscodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isPasscodeViewVisible,nonatomic) char passcodeViewVisible;              //@synthesize passcodeViewVisible=_passcodeViewVisible - In the implementation block
@property (nonatomic,readonly) UIPopoverController * hostingPopoverController;                   //@synthesize hostingPopoverController=_hostingPopoverController - In the implementation block
@property (nonatomic,copy) NSString * passcode;                                                  //@synthesize passcode=_passcode - In the implementation block
@property (nonatomic,retain) UIViewController * presentorViewController;                         //@synthesize presentorViewController=_presentorViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * hostingNavigationController;               //@synthesize hostingNavigationController=_hostingNavigationController - In the implementation block
@property (nonatomic,retain) UIStatusBar * statusBar;                                            //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) UIView * statusBarContainerView;                                    //@synthesize statusBarContainerView=_statusBarContainerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHostingNavigationController:(UINavigationController *)arg1 ;
-(void)setPresentorViewController:(UIViewController *)arg1 ;
-(void)setStatusBarContainerView:(UIView *)arg1 ;
-(UIPopoverController *)hostingPopoverController;
-(UINavigationController *)hostingNavigationController;
-(void)_presentPasscodeViewWithParentViewController:(id)arg1 animated:(char)arg2 ;
-(void)_dismissPasscodeViewAnimated:(char)arg1 withReason:(int)arg2 notifyDelegate:(char)arg3 ;
-(void)setPasscodeViewVisible:(char)arg1 ;
-(void)_notifyDelegateOfPasscodeViewVisibilityChange;
-(char)_shouldShowCancelButton;
-(UIViewController *)presentorViewController;
-(UIView *)statusBarContainerView;
-(void)_didFinishDismissingPasscodeViewWithReason:(int)arg1 notifyDelegate:(char)arg2 ;
-(void)_notifyDelegateOfPasscodeViewDismissalWithReason:(int)arg1 ;
-(char)isPasscodeViewVisible;
-(void)presentPasscodeViewWithParentViewController:(id)arg1 animated:(char)arg2 ;
-(void)dismissPasscodeViewAnimated:(char)arg1 reason:(int)arg2 ;
-(char)switchFromKeypadToKeyboard;
-(void)_slidePasscodeField;
-(void)setDelegate:(id<COSPasscodeViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<COSPasscodeViewControllerDelegate>)delegate;
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(NSString *)passcode;
-(void)setPane:(id)arg1 ;
-(char)requiresKeyboard;
-(char)useProgressiveDelays;
-(char)validatePIN:(id)arg1 ;
-(id)stringsBundle;
-(void)_updateErrorTextAndFailureCount:(char)arg1 ;
-(void)cancelButtonTapped;
-(char)simplePIN;
-(int)pinLength;
-(char)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)didAcceptSetPIN;
-(void)setPIN:(id)arg1 ;
-(void)didAcceptEnteredPIN;
-(void)setPasscode:(NSString *)arg1 ;
@end

