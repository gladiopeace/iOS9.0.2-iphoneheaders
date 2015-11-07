/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Setup/Setup-Structs.h>
#import <Setup/BFFFlowDelegate.h>
#import <Setup/BuddyControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Setup/EmergencyDialerDelegate.h>
#import <Setup/BuddyLanguageChangeObserverDelegate.h>

@protocol BuddyLanguageController;
@class SetupSecureWindow, UIView, UITapGestureRecognizer, NSMutableArray, UIViewController, BuddyLocaleController, UIAlertController, UINavigationController, NSString, SetupiForgotViewController, NSTimer, PCPersistentTimer, NSMutableDictionary, EmergencyDialer, BuddyLanguageChangeObserver, BFFFlow, NSMutableIndexSet;

@interface SetupController : NSObject <BFFFlowDelegate, BuddyControllerDelegate, UINavigationControllerDelegate, EmergencyDialerDelegate, BuddyLanguageChangeObserverDelegate> {

	SetupSecureWindow* _window;
	UIView* _windowView;
	UITapGestureRecognizer* _menuButtonRecognizer;
	UITapGestureRecognizer* _tvMenuButtonRecognizer;
	NSMutableArray* _buddyControllers;
	UIViewController*<BuddyLanguageController> _languageController;
	BuddyLocaleController* _localeController;
	UIViewController* _wifiController;
	char _wifiControllerInAdvancedMode;
	UIAlertController* _homeButtonMenuController;
	UINavigationController* _nav;
	NSString* _languageAtStartup;
	NSString* _localeIdentifierAtStartup;
	char _shouldAnimateLocaleScreen;
	char _shouldIgnoreiTunesLanguagePushOnResume;
	char _buddyUiFinished;
	char _buddyDone;
	char _wifiWillPush;
	SetupiForgotViewController* _iForgotController;
	char _networkReachable;
	char _isConnectedOverWifi;
	char _supportsCellularActivation;
	char _supportsCellularActivationInitialized;
	char _userSelectedCellularActivation;
	NSTimer* _wifiTimeoutTimer;
	char _showingWifiTimeoutSpinner;
	char _hasCloudConfiguration;
	char _appleIDConfigurationDownloadStarted;
	char _appleIDConfigurationDownloaded;
	char _appleIDServiceEnabled;
	char _appleIDWifiSkipAlertShown;
	char _appleIDConfigured;
	PCPersistentTimer* _inactivityTimer;
	UIAlertController* _badWifiAlert;
	int _systemTimeUpdateStatus;
	NSMutableArray* _controllersToRemove;
	NSMutableDictionary* _accountInfo;
	EmergencyDialer* _emergencyDialer;
	SBSAlertItemsSuppressionAssertionRef _sbAlertItemsSuppressionAssertion;
	BuddyLanguageChangeObserver* _languageObserver;
	NSTimer* _TFDEPPollTimer;
	char _isTapFreeSetup;
	char _inMiniBuddyFromBreadcrumb;
	BFFFlow* _passcodeFlow;
	char _startOverPermitted;
	char _shouldRereadCloudConfigurationForControllersToSkip;
	NSString* _iCloudAppleIdFromActivation;
	NSMutableIndexSet* _viewControllerIndexesToRemoveOnPush;
	UIViewController* _topViewControllerForRemovingIndexes;
	id _cloudConfigurationChangeNotificationObserver;

}

@property (nonatomic,copy) NSString * iCloudAppleIdFromActivation;                                 //@synthesize iCloudAppleIdFromActivation=_iCloudAppleIdFromActivation - In the implementation block
@property (assign,getter=isStartOverPermitted,nonatomic) char startOverPermitted;                  //@synthesize startOverPermitted=_startOverPermitted - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * viewControllerIndexesToRemoveOnPush;              //@synthesize viewControllerIndexesToRemoveOnPush=_viewControllerIndexesToRemoveOnPush - In the implementation block
@property (nonatomic,retain) UIViewController * topViewControllerForRemovingIndexes;               //@synthesize topViewControllerForRemovingIndexes=_topViewControllerForRemovingIndexes - In the implementation block
@property (assign,nonatomic) char shouldRereadCloudConfigurationForControllersToSkip;              //@synthesize shouldRereadCloudConfigurationForControllersToSkip=_shouldRereadCloudConfigurationForControllersToSkip - In the implementation block
@property (nonatomic,retain) id cloudConfigurationChangeNotificationObserver;                      //@synthesize cloudConfigurationChangeNotificationObserver=_cloudConfigurationChangeNotificationObserver - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSetupController;
+(void)localeCheck:(double)arg1 ;
+(void)initialize;
-(void)resign;
-(void)dialerDidDismiss:(id)arg1 ;
-(void)setShouldRereadCloudConfigurationForControllersToSkip:(char)arg1 ;
-(void)setStartOverPermitted:(char)arg1 ;
-(void)_skipControllersSpecifiedByCloudConfigurationConfiguration;
-(char)_restoredFromBackup;
-(void)_inactivityTimerFired:(id)arg1 ;
-(void)stopInactivityTimer;
-(void)checkAndStartInactivityTimer;
-(void)setBuddyComplete;
-(void)suspendApp;
-(void)setHasCloudConfiguration:(char)arg1 ;
-(char)_restoreFromBackupJustFinished;
-(char)_hasLocaleAndLanguage;
-(void)_refreshLanguage;
-(id)wifiController;
-(char)_isBackInBuddyAfterRestoreFromBackup:(char)arg1 ;
-(char)_isBackInBuddyForAppleID;
-(Class)paneClassForID:(id)arg1 ;
-(void)_showMiniAlertWithRestart:(char)arg1 withLanguage:(id)arg2 ;
-(id)_controllerFollowingControllerID:(id)arg1 ;
-(id)_viewControllerForBuddyController:(id)arg1 ;
-(char)_isBackInBuddyForActivationOnly;
-(void)menuButtonPressed;
-(void)tvMenuButtonPressed;
-(char)_restoredOrSetupIniTunes;
-(void)_createNavInAirplaneMode:(char)arg1 ;
-(void)updateLoadingStatus;
-(void)wifiBuddyButtonPressed;
-(void)wifiBuddyJoinFinished:(id)arg1 ;
-(void)batteryStateDidChange;
-(void)wifiNetworkJoinStarted:(id)arg1 ;
-(void)wifiNetworkJoinFailed:(id)arg1 ;
-(void)startTFDEPPolling;
-(void)_clearWifiTimeoutTimer;
-(void)_resetWifiControllerTimeoutSpinner;
-(void)_wifiControllerReallyDone;
-(void)wifiTimeoutFired:(id)arg1 ;
-(void)_showNavBarSpinner;
-(void)_updateAirportNextButton;
-(void)showModalWiFiSettings;
-(char)isAlertPresented:(id)arg1 ;
-(void)dismissAlert:(id)arg1 animated:(char)arg2 ;
-(void)_setSystemTime;
-(void)checkForUpdatedCarrierBundle;
-(void)TFDEPPollTimerFired:(id)arg1 ;
-(void)stopTFDEPPolling;
-(void)respring;
-(void)tearOutLanguageAndLocalePanes;
-(void)_removeSBAlertItemsSupressionAssertion;
-(id)topBuddyController;
-(char)deviceHasWiFi;
-(char)isStartOverPermitted;
-(void)_addSBAlertItemsSupressionAssertion;
-(void)resetBuddyPostActivation:(char)arg1 ;
-(void)_finishBuddy;
-(id)_newWifiControllerInstance;
-(void)_modalWifiControllerDone:(id)arg1 ;
-(void)_animateControllerGroup;
-(id)controllerAtLocationServicesFlowPoint;
-(void)_buddyControllerDone:(id)arg1 nextControllerClass:(Class)arg2 nextController:(id)arg3 ;
-(void)buddyControllerDone:(id)arg1 ;
-(void)_languageChangeAlertDone;
-(void)_pushBuddyController:(id)arg1 ;
-(id)_setupStateKey;
-(id)_controllerFollowingControllerClass:(Class)arg1 ;
-(id)controllerAtCloudConfigFlowPoint;
-(id)controllerAtCloudConfigInstallationFlowPoint;
-(char)supportsCellularActivation;
-(void)_wifiControllerDone:(id)arg1 ;
-(char)suspendAppPostActivation;
-(NSMutableIndexSet *)viewControllerIndexesToRemoveOnPush;
-(void)setViewControllerIndexesToRemoveOnPush:(NSMutableIndexSet *)arg1 ;
-(void)setTopViewControllerForRemovingIndexes:(UIViewController *)arg1 ;
-(UIViewController *)topViewControllerForRemovingIndexes;
-(void)buddyWillFinish;
-(void)removeViewControllerFromNavHierarchy:(id)arg1 ;
-(void)_pushBuddyController:(id)arg1 withExtendedInitialization:(char)arg2 ;
-(id)controllerAtActivationFlowPoint;
-(char)hasCloudConfiguration;
-(id)controllerAtDeviceRestoreFlowPoint;
-(id)_flowFollowingControllerClass:(Class)arg1 ;
-(id)_controllerFollowingFlow:(id)arg1 ;
-(id)controllerAtAppleIDFlowPoint;
-(id)popToBuddyControllerOffsetBy:(int)arg1 fromControllerWithClass:(Class)arg2 animated:(char)arg3 ;
-(char)shouldRereadCloudConfigurationForControllersToSkip;
-(void)_languageLocaleControllersDone;
-(id)_controllerForClass:(Class)arg1 ;
-(id)popToBuddyControllerWithClass:(Class)arg1 animated:(char)arg2 ;
-(void)_popToWifi;
-(void)flow:(id)arg1 finishedWithLastController:(id)arg2 ;
-(void)buddyControllerDone:(id)arg1 nextControllerClass:(Class)arg2 ;
-(void)observer:(id)arg1 didObserveLanguageChange:(char)arg2 localeChange:(char)arg3 ;
-(void)showiForgot;
-(void)hideiForgot;
-(int)systemTimeUpdateStatus;
-(char)startedInFakeMode;
-(void)_setupSnapshotRemoved;
-(char)userSelectedCellularActivation;
-(void)_activationStateChanged;
-(void)_registrationDataStatusChanged:(CFDictionaryRef)arg1 ;
-(void)removeViewControllerIndexesFromNavHierarchyOnNextPush:(id)arg1 ;
-(void)deviceRestoreChoiceControllerWantsWifiPicker;
-(void)activationControllerWantsWifiPicker;
-(void)activationControllerAdvisoryCloudConfigurationPresent:(char)arg1 ;
-(void)setAppleIDConfigured;
-(void)disagreeToTerms;
-(NSString *)iCloudAppleIdFromActivation;
-(void)setICloudAppleIdFromActivation:(NSString *)arg1 ;
-(id)cloudConfigurationChangeNotificationObserver;
-(void)setCloudConfigurationChangeNotificationObserver:(id)arg1 ;
-(void)_localeChanged;
-(void)dealloc;
-(id)init;
-(id)navigationController;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)resume;
-(void)run;
-(char)networkReachable;
-(void)_reachabilityChanged:(id)arg1 ;
-(void)_setupStateChanged;
-(char)isTeslaEnrolled;
-(id)accountInfo;
-(void)didEnterBackground;
-(void)showAlert:(id)arg1 ;
-(char)isConnectedOverWiFi;
@end

