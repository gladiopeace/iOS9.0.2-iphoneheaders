/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UIViewServiceViewControllerOperator_RemoteViewControllerInterface.h>
#import <UIKit/_UIHostedTextServiceSessionDelegate.h>
#import <UIKit/_UIViewServiceDummyPopoverControllerDelegate.h>
#import <UIKit/_UIViewServiceDeputy.h>
#import <UIKit/_UIViewServiceDeputyRotationSource.h>

@protocol _UIViewServiceViewControllerOperatorDelegate;
@class NSString, NSArray, UIViewController, _UIHostedWindow, UIActionSheet, NSMutableArray, _UIHostedTextServiceSession, _UIAsyncInvocation, UIPopoverController, _UIViewServiceDummyPopoverController, _UIViewControllerOneToOneTransitionContext;

@interface _UIViewServiceViewControllerOperator : UIViewController <_UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource> {

	int __automatic_invalidation_retainCount;
	char __automatic_invalidation_invalidated;
	int _hostPID;
	NSString* _hostBundleID;
	SCD_Struct_UI34 _hostAuditToken;
	id _remoteViewControllerProxyToOperator;
	id _remoteViewControllerProxyToViewController;
	NSArray* _plugInScenes;
	UIViewController* _localViewController;
	NSString* _presentationControllerClassName;
	_UIHostedWindow* _hostedWindow;
	char _isResigningFirstResponderFromHostNotification;
	char _disableAutomaticKeyboardBehavior;
	UIActionSheet* _hostedActionSheet;
	char _serviceInPopover;
	int _hostStatusBarOrientation;
	float _hostStatusBarHeight;
	NSMutableArray* _deputyRotationDelegates;
	unsigned _hostAccessibilityServerPort;
	_UIHostedTextServiceSession* _textServiceSession;
	_UIAsyncInvocation* _prepareForDisconnectionInvocation;
	_UIAsyncInvocation* _invalidationInvocation;
	UIPopoverController* _displayedPopoverController;
	_UIViewServiceDummyPopoverController* _dummyPopoverController;
	unsigned _supportedOrientations;
	char _canShowTextServices;
	UIEdgeInsets _localViewControllerRequestedInsets;
	_UIViewControllerOneToOneTransitionContext* _viewControllerTransitioningContext;
	id<_UIViewServiceViewControllerOperatorDelegate> _delegate;
	/*^block*/id __traitsWillChangeHandler;
	/*^block*/id __traitsDidChangeHandler;

}

@property (assign,nonatomic,__weak) id<_UIViewServiceViewControllerOperatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setTraitsWillChangeHandler:,nonatomic,copy) id _traitsWillChangeHandler;                 //@synthesize _traitsWillChangeHandler=__traitsWillChangeHandler - In the implementation block
@property (setter=_setTraitsDidChangeHandler:,nonatomic,copy) id _traitsDidChangeHandler;                   //@synthesize _traitsDidChangeHandler=__traitsDidChangeHandler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCInterface;
+(id)operatorWithRemoteViewControllerProxy:(id)arg1 hostPID:(int)arg2 hostBundleID:(id)arg3 hostAuditToken:(SCD_Struct_UI34)arg4 ;
-(void)setDelegate:(id<_UIViewServiceViewControllerOperatorDelegate>)arg1 ;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(id<_UIViewServiceViewControllerOperatorDelegate>)delegate;
-(id)invalidate;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(unsigned)supportedInterfaceOrientations;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)pressesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(char)becomeFirstResponder;
-(char)_canShowTextServices;
-(id)_showServiceForText:(id)arg1 type:(int)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
-(id)_window;
-(void)loadView;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)setNeedsStatusBarAppearanceUpdate;
-(void)pressesChanged:(id)arg1 withEvent:(id)arg2 ;
-(id)_viewControllersForRotationCallbacks;
-(id)preferredFocusedItem;
-(char)_disableAutomaticKeyboardBehavior;
-(void)__setHostViewUnderlapsStatusBar:(char)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(char)_isDeallocating;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(CGSize)preferredContentSize;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(char*)arg2 ;
-(CGSize)contentSizeForViewInPopover;
-(void)systemLayoutFittingSizeDidChangeForChildViewController:(id)arg1 ;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardRotationMethods;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(char)__knownPresentationWithoutPresentationControllerInstance;
-(CGRect)_frameForContainerViewInSheetForBounds:(CGRect)arg1 displayingTopView:(char)arg2 andBottomView:(char)arg3 ;
-(void)_updateSupportedInterfaceOrientationsIfNecessary;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(id)_presentationControllerClassName;
-(void)_willBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_didBecomeContentViewControllerOfPopover:(id)arg1 ;
-(void)_willResignContentViewControllerOfPopover:(id)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(char)_isHostedRootViewController;
-(CGRect)_frameForContainerViewInSheetForBounds:(CGRect)arg1 ;
-(int)__automatic_invalidation_logic;
-(char)_tryRetain;
-(void)_invalidateUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)addDeputyRotationDelegate:(id)arg1 ;
-(void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_queue;
-(void)__setContentSize:(CGSize)arg1 ;
-(void)__createViewController:(id)arg1 withContextToken:(id)arg2 fbsDisplays:(id)arg3 appearanceSerializedRepresentations:(id)arg4 legacyAppearance:(char)arg5 traitCollection:(id)arg6 initialInterfaceOrientation:(int)arg7 hostAccessibilityServerPort:(id)arg8 canShowTextServices:(char)arg9 replyHandler:(/*^block*/id)arg10 ;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)_firstResponderDidChange:(id)arg1 ;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(int)arg1 ;
-(void)__hostDidChangeStatusBarHeight:(float)arg1 ;
-(void)__hostWillEnterForeground;
-(void)__hostDidEnterBackground;
-(void)__hostDidSetContentOverlayInsets:(UIEdgeInsets)arg1 ;
-(void)__scrollToTopFromTouchAtViewLocation:(CGPoint)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)__hostDidPromoteFirstResponder;
-(void)__hostedActionSheetDidPresent;
-(void)__hostedActionSheetDidDismissWithClickedButtonIndex:(int)arg1 ;
-(void)__hostedActionSheetClickedButtonAtIndex:(int)arg1 ;
-(void)__hostDisablesAutomaticKeyboardBehavior:(char)arg1 ;
-(void)__hostViewWillAppear:(char)arg1 inInterfaceOrientation:(int)arg2 traitCollection:(id)arg3 statusBarHeight:(float)arg4 underlapsStatusBar:(char)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)__hostDidAttachDisplay:(id)arg1 ;
-(void)__hostDidDetachDisplayWithIntegerDisplayID:(unsigned)arg1 ;
-(void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned)arg1 newHostingHandleReplyHandler:(/*^block*/id)arg2 ;
-(void)__hostViewDidAppear:(char)arg1 ;
-(void)__hostViewWillDisappear:(char)arg1 ;
-(void)__hostViewDidDisappear:(char)arg1 ;
-(void)__hostDidSetPresentationControllerClassName:(id)arg1 ;
-(void)__hostViewWillTransitionToSize:(CGSize)arg1 withContextDescription:(id)arg2 statusBarHeight:(float)arg3 underlapsStatusBar:(char)arg4 whenDone:(/*^block*/id)arg5 ;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(char)arg3 ;
-(void)__hostWillRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(char)arg3 ;
-(void)__hostDidRotateFromInterfaceOrientation:(int)arg1 skipSelf:(char)arg2 ;
-(void)__setServiceInPopover:(char)arg1 ;
-(void)__setHostTraitCollection:(id)arg1 deferIfAnimated:(char)arg2 ;
-(void)__hostWillTransitionToTraitCollection:(id)arg1 withContextDescription:(id)arg2 deferIfAnimated:(char)arg3 ;
-(void)__dimmingViewWasTapped;
-(id)_appearanceSource;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(char)arg3 ;
-(void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(int)arg2 ;
-(void)__exchangeAccessibilityPortInformation:(id)arg1 replyHandler:(/*^block*/id)arg2 ;
-(void)__textServiceDidDismiss;
-(void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2 ;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(float)arg3 ;
-(void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(char)arg2 ;
-(void)dummyPopoverController:(id)arg1 didChangeContentSize:(CGSize)arg2 animated:(char)arg3 ;
-(void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(char)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(char)arg5 replyHandler:(/*^block*/id)arg6 ;
-(void)_prepareForDisconnectionUnconditionallyThen:(/*^block*/id)arg1 ;
-(void)_popoverWillPresent:(id)arg1 ;
-(void)_popoverDidDismiss:(id)arg1 ;
-(id)_inputViewsKey;
-(void)_setTraitsDidChangeHandler:(/*^block*/id)arg1 ;
-(void)_setTraitsWillChangeHandler:(/*^block*/id)arg1 ;
-(char)_presentActionSheet:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(CGRect)arg3 inView:(id)arg4 withPreferredArrowDirections:(unsigned)arg5 passthroughViews:(id)arg6 backgroundStyle:(int)arg7 animated:(char)arg8 ;
-(void)_dismissActionSheet:(id)arg1 withClickedButtonIndex:(int)arg2 animated:(char)arg3 ;
-(void)_viewServiceIsDisplayingPopoverController:(id)arg1 ;
-(void)_windowDidUpdateCurrentTintView:(id)arg1 ;
-(void)_windowDidRegisterScrollToTopView;
-(void)_windowDidUnregisterScrollToTopView;
-(id)_traitsWillChangeHandler;
-(id)_traitsDidChangeHandler;
-(char)_shouldForwardLegacyRotationOnly;
-(id)_supportedInterfaceOrientationsForViewController:(id)arg1 ;
-(char)_validateSessionIdentifier:(id)arg1 restorationAnchor:(id)arg2 functionName:(const char*)arg3 ;
-(id)_sessionForStateRestoration:(id)arg1 ;
-(id)_dataFromPressesEvent:(id)arg1 ;
-(char)_forwardPresses:(id)arg1 withEvent:(id)arg2 canceled:(char)arg3 ;
-(void)dismissHostedTextServiceSession:(id)arg1 animated:(char)arg2 ;
@end

