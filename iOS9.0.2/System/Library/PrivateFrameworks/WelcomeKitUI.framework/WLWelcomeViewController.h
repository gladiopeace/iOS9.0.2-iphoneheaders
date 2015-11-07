/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WelcomeKitUI/WelcomeKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/WLSourceDevicesDelegate.h>

@class WLSourceDevicesController, WLIntroViewController, WLPairingViewController, WLMigrationProgressViewController, WLMigrationCompletedViewController, WLWelcomeViewControllerMetrics;

@interface WLWelcomeViewController : UIViewController <WLSourceDevicesDelegate> {

	WLSourceDevicesController* _sourceDevicesController;
	WLIntroViewController* _introViewController;
	WLPairingViewController* _pairingViewController;
	WLMigrationProgressViewController* _progressViewController;
	WLMigrationCompletedViewController* _completedViewController;
	WLWelcomeViewControllerMetrics* _metrics;
	char _dismissAfterTimeout;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(void)allowedToDisplay:(/*^block*/id)arg1 ;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_authenticationDidSucceed;
-(void)_loadIntroGroupView;
-(CGRect)_frameForGroupView;
-(void)_addGroupViewController:(id)arg1 ;
-(void)_startConnectivity;
-(CGRect)_frameForIncomingGroupViewBeforeAnimation;
-(CGRect)_frameForOutgoingGroupViewAfterAnimation;
-(void)_removeGroupViewController:(id)arg1 ;
-(void)_transitionToPairingCodeViewControllerWithPairingCode:(id)arg1 wifiPSK:(id)arg2 ssid:(id)arg3 ;
-(void)_completeWithSuccess:(char)arg1 ;
-(void)_uiTestModeStartFakePairing;
-(void)_animateFromGroupViewController:(id)arg1 toGroupViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authenticationPeriodDidEnd;
-(void)sourceDevices:(id)arg1 didChangeWithDevices:(id)arg2 ;
-(void)_progressViewControllerDidFinishWithSuccess:(char)arg1 ;
-(void)_migrationDidBegin;
-(void)_transitionToCompletedViewController;
-(void)_transitionToProgressViewControllerWithSourceDevice:(id)arg1 ;
@end

