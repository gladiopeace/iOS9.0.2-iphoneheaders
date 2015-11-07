/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <InCallService/PHInCallRootViewControllerProtocol.h>
#import <InCallService/PHPhoneRemoteViewControllerDelegate.h>
#import <InCallService/PHInCallBackgroundStyleProtocol.h>
#import <InCallService/PHInCallSpringBoardEventHandlerProtocol.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@class TUCall, PHAudioCallViewController, PHVideoCallViewController, PHEmergencyDialerViewController, CNContactPickerViewController, UINavigationController, PHPhoneRemoteViewController, NSString;

@interface PHInCallRootViewController : UIViewController <PHInCallRootViewControllerProtocol, PHPhoneRemoteViewControllerDelegate, PHInCallBackgroundStyleProtocol, PHInCallSpringBoardEventHandlerProtocol, UIPopoverPresentationControllerDelegate> {

	char _dismissalWasDemandedBeforeRemoteViewControllerWasAvailable;
	int _alertActivationReason;
	TUCall* _alertActivationCall;
	PHAudioCallViewController* _audioCallViewController;
	PHVideoCallViewController* _videoCallViewController;
	PHEmergencyDialerViewController* _emergencyDialerViewController;
	CNContactPickerViewController* _contactsViewController;
	UINavigationController* _audioCallNavigationController;
	PHPhoneRemoteViewController* _remoteViewController;

}

@property (assign) char dismissalWasDemandedBeforeRemoteViewControllerWasAvailable;                        //@synthesize dismissalWasDemandedBeforeRemoteViewControllerWasAvailable=_dismissalWasDemandedBeforeRemoteViewControllerWasAvailable - In the implementation block
@property (assign) int alertActivationReason;                                                              //@synthesize alertActivationReason=_alertActivationReason - In the implementation block
@property (nonatomic,retain) TUCall * alertActivationCall;                                                 //@synthesize alertActivationCall=_alertActivationCall - In the implementation block
@property (nonatomic,retain) PHAudioCallViewController * audioCallViewController;                          //@synthesize audioCallViewController=_audioCallViewController - In the implementation block
@property (nonatomic,retain) PHVideoCallViewController * videoCallViewController;                          //@synthesize videoCallViewController=_videoCallViewController - In the implementation block
@property (nonatomic,retain) PHEmergencyDialerViewController * emergencyDialerViewController;              //@synthesize emergencyDialerViewController=_emergencyDialerViewController - In the implementation block
@property (nonatomic,retain) CNContactPickerViewController * contactsViewController;                       //@synthesize contactsViewController=_contactsViewController - In the implementation block
@property (retain) UINavigationController * audioCallNavigationController;                                 //@synthesize audioCallNavigationController=_audioCallNavigationController - In the implementation block
@property (nonatomic,retain) PHPhoneRemoteViewController * remoteViewController;                           //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)obtainDismissalAssertionForReason:(id)arg1 ;
+(void)releaseDismissalAssertionForReason:(id)arg1 ;
+(void)setShouldLockDeviceOnNextDismiss;
+(void)forceClearAllDismissalAssertions;
+(char)hasDismissalAssertions;
+(id)dismissalAssertions;
+(void)initialize;
-(void)_testing_viewWillAppear;
-(void)_testing_viewDidAppear;
-(void)_testing_finishedAnimatingIn;
-(void)setBackgroundStyle:(int)arg1 animatedWithDuration:(float)arg2 ;
-(void)videoCallStateChangedNotification:(id)arg1 ;
-(void)dismissalAssertionReleasedNotification:(id)arg1 ;
-(void)callAudioRouteChangedEventHandler:(id)arg1 ;
-(void)callViewControllerStateChangedNotification:(id)arg1 ;
-(void)pipStateChangedNotification:(id)arg1 ;
-(void)pipControllerDidRequestReturnToFullScreenNotification:(id)arg1 ;
-(void)emergencyCallbackModeChangedNotification:(id)arg1 ;
-(void)mostRecentlyDisconnectedCallDidClearNotification:(id)arg1 ;
-(void)updateDesiredSpringboardBehavior;
-(char)dismissalWasDemandedBeforeRemoteViewControllerWasAvailable;
-(void)requestInCallDismissalWithAnimation:(char)arg1 ;
-(void)releaseIdleTimerAssertionWithComment:(id)arg1 ;
-(void)_loadVideoCallViewController;
-(PHAudioCallViewController *)audioCallViewController;
-(void)_loadAudioCallViewController;
-(void)updateAlertActivationReasonForCall:(id)arg1 ;
-(void)updateCallControllerForCurrentState;
-(void)dismissPhoneRemoteViewController;
-(void)dismissContactsViewController;
-(void)animateToAlert;
-(void)obtainIdleTimerAssertionWithComment:(id)arg1 ;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)printUI;
-(void)setInCallStatusBarStyleOverride;
-(void)resetStatusBarStyleOverrides;
-(void)pullRelayingCallsIfNecessary;
-(void)updateAlertActivationReason;
-(void)dismissPhoneRemoteViewControllerAnimated:(char)arg1 ;
-(void)dismissContactsViewControllerAnimated:(char)arg1 ;
-(void)setDismissalWasDemandedBeforeRemoteViewControllerWasAvailable:(char)arg1 ;
-(void)animateOutWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)presentAsPopover:(id)arg1 fromView:(id)arg2 ;
-(void)setAlertActivationReason:(int)arg1 ;
-(void)setAlertActivationCall:(TUCall *)arg1 ;
-(int)alertActivationReason;
-(TUCall *)alertActivationCall;
-(PHVideoCallViewController *)videoCallViewController;
-(void)presentPhoneRemoteViewControllerForView:(id)arg1 ;
-(void)presentContactsViewControllerForView:(id)arg1 ;
-(void)animateToPIP;
-(void)handleActivationForEndAndLock;
-(void)forceDismissAlert;
-(void)animateInWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAudioCallViewController:(PHAudioCallViewController *)arg1 ;
-(void)setVideoCallViewController:(PHVideoCallViewController *)arg1 ;
-(PHEmergencyDialerViewController *)emergencyDialerViewController;
-(void)setEmergencyDialerViewController:(PHEmergencyDialerViewController *)arg1 ;
-(UINavigationController *)audioCallNavigationController;
-(void)setAudioCallNavigationController:(UINavigationController *)arg1 ;
-(void)setStatusBarHidden:(char)arg1 withDuration:(double)arg2 ;
-(void)handleLockButtonPressed;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(char)arg2 ;
-(PHPhoneRemoteViewController *)remoteViewController;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)_remoteViewControllerProxy;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)prepareForPopoverPresentation:(id)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)setRemoteViewController:(PHPhoneRemoteViewController *)arg1 ;
-(void)_willAppearInRemoteViewController:(id)arg1 ;
-(void)registerForNotifications;
-(void)prepareForDismissal;
-(void)setContactsViewController:(CNContactPickerViewController *)arg1 ;
-(CNContactPickerViewController *)contactsViewController;
-(void)handleVolumeUpButtonPressed;
-(void)handleVolumeDownButtonPressed;
-(void)handleHeadsetButtonPressed:(char)arg1 ;
-(void)handleDoubleHeightStatusBarTap;
-(void)callStateChangedNotification:(id)arg1 ;
@end

