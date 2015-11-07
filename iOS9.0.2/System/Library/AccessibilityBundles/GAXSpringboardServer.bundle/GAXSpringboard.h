/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:35:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GAXSpringboardServer/GAXSpringboardServer-Structs.h>
@class NSObject, AXAccessQueueTimer, UIWindow, UIView, NSString, AXIPCServer, AXIPCClient, AXAccessQueue, GAXSpringBoardOverrideHandler, SBUILockScreenDisableAssertion;

@interface GAXSpringboard : NSObject {

	SCD_Struct_GA0 _reflectedBackboardState;
	NSObject*<OS_dispatch_queue> _gaxStateAccessQueue;
	char _requiringWallpaper;
	AXAccessQueueTimer* _didEndRequiringWallpaperCheckTimer;
	id _contextHostWrapper;
	UIWindow* _hostedApplicationWindow;
	UIView* _hostedApplicationView;
	NSString* _frontmostAppIdentifier;
	AXIPCServer* _springboardServer;
	AXIPCClient* _backboardClient;
	AXAccessQueue* _backboardMessageQueue;
	GAXSpringBoardOverrideHandler* _springboardOverrideHandler;
	AXAccessQueue* _applicationLaunchingQueue;
	SBUILockScreenDisableAssertion* _lockScreenDisableAssertion;

}

@property (getter=isEnabled,nonatomic,readonly) char enabled; 
@property (nonatomic,copy) NSString * frontmostAppIdentifier;                                          //@synthesize frontmostAppIdentifier=_frontmostAppIdentifier - In the implementation block
@property (nonatomic,readonly) char isActive; 
@property (nonatomic,readonly) char isInWorkspace; 
@property (nonatomic,readonly) char isInactive; 
@property (nonatomic,readonly) unsigned profileConfiguration; 
@property (nonatomic,readonly) char allowsTouch; 
@property (nonatomic,readonly) char allowsLockButton; 
@property (nonatomic,readonly) char allowsMotion; 
@property (nonatomic,readonly) char allowsAutolock; 
@property (nonatomic,retain) AXIPCServer * springboardServer;                                          //@synthesize springboardServer=_springboardServer - In the implementation block
@property (nonatomic,retain) AXIPCClient * backboardClient;                                            //@synthesize backboardClient=_backboardClient - In the implementation block
@property (nonatomic,retain) AXAccessQueue * backboardMessageQueue;                                    //@synthesize backboardMessageQueue=_backboardMessageQueue - In the implementation block
@property (assign,getter=isRequiringWallpaper,nonatomic) char requiringWallpaper;                      //@synthesize requiringWallpaper=_requiringWallpaper - In the implementation block
@property (nonatomic,retain) AXAccessQueueTimer * didEndRequiringWallpaperCheckTimer;                  //@synthesize didEndRequiringWallpaperCheckTimer=_didEndRequiringWallpaperCheckTimer - In the implementation block
@property (nonatomic,retain) id contextHostWrapper;                                                    //@synthesize contextHostWrapper=_contextHostWrapper - In the implementation block
@property (nonatomic,retain) UIWindow * hostedApplicationWindow;                                       //@synthesize hostedApplicationWindow=_hostedApplicationWindow - In the implementation block
@property (nonatomic,retain) UIView * hostedApplicationView;                                           //@synthesize hostedApplicationView=_hostedApplicationView - In the implementation block
@property (nonatomic,retain) GAXSpringBoardOverrideHandler * springboardOverrideHandler;               //@synthesize springboardOverrideHandler=_springboardOverrideHandler - In the implementation block
@property (nonatomic,retain) AXAccessQueue * applicationLaunchingQueue;                                //@synthesize applicationLaunchingQueue=_applicationLaunchingQueue - In the implementation block
@property (nonatomic,retain) SBUILockScreenDisableAssertion * lockScreenDisableAssertion;              //@synthesize lockScreenDisableAssertion=_lockScreenDisableAssertion - In the implementation block
+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(AXIPCClient *)backboardClient;
-(char)isInWorkspace;
-(char)wantsSingleAppMode;
-(char)wantsSingleAppModeOrAppSelfLockMode;
-(char)wantsAppSelfLockMode;
-(id)_debugGAXDescription;
-(char)allowsMotion;
-(void)systemDidRestartDueToLowBattery;
-(char)allowsTouch;
-(void)setSpringboardOverrideHandler:(GAXSpringBoardOverrideHandler *)arg1 ;
-(void)setBackboardMessageQueue:(AXAccessQueue *)arg1 ;
-(void)setApplicationLaunchingQueue:(AXAccessQueue *)arg1 ;
-(void)setSpringboardServer:(AXIPCServer *)arg1 ;
-(void)_handleDeviceWasLockedNotification:(id)arg1 ;
-(void)_handleDidShowTripleClickAlertNotification:(id)arg1 ;
-(void)_handleDidShowVoiceOverItemChooserNotification:(id)arg1 ;
-(void)_handleAXSpringBoardServerDidInit:(id)arg1 ;
-(void)_extendAXSpringServerInstanceIfExists:(id)arg1 ;
-(AXIPCServer *)springboardServer;
-(void)_updateStateOfHostedApplicationWithIdentifier:(id)arg1 scaleFactor:(float)arg2 center:(CGPoint)arg3 animationDuration:(double)arg4 ;
-(void)setDidEndRequiringWallpaperCheckTimer:(AXAccessQueueTimer *)arg1 ;
-(GAXSpringBoardOverrideHandler *)springboardOverrideHandler;
-(void)setFrontmostAppIdentifier:(NSString *)arg1 ;
-(void)setLockScreenDisableAssertion:(SBUILockScreenDisableAssertion *)arg1 ;
-(id)_gaxHandleFrontmostAppDidCheckIn:(id)arg1 ;
-(id)_handleServerModeTransitionDidComplete:(id)arg1 ;
-(id)_handleIsWebApplicationAndForegroundRunning:(id)arg1 ;
-(id)_handleIsSystemAppHostingFacetimeCall:(id)arg1 ;
-(id)_handlePrepareTransitionToWorkspace:(id)arg1 ;
-(id)_handleUpdateGAXBackboardState:(id)arg1 ;
-(id)_handleLaunchApplication:(id)arg1 ;
-(id)_handleEndRequiringWallpaper:(id)arg1 ;
-(id)_handleUpdateHostedApplicationState:(id)arg1 ;
-(id)_handleUnlockDevice:(id)arg1 ;
-(id)_handleGetNewPasscodeLength:(id)arg1 ;
-(id)_handleStopHostingWorkspaceAppImmediately:(id)arg1 ;
-(id)_handleTimeRestrictionStatusDidChange:(id)arg1 ;
-(id)contextHostWrapper;
-(UIView *)hostedApplicationView;
-(UIWindow *)hostedApplicationWindow;
-(void)setContextHostWrapper:(id)arg1 ;
-(void)setHostedApplicationView:(UIView *)arg1 ;
-(void)setHostedApplicationWindow:(UIWindow *)arg1 ;
-(void)_sendSimpleMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 description:(id)arg3 ;
-(void)_prepareTransitionToWorkspaceWithCompletionHandler:(/*^block*/id)arg1 ;
-(AXAccessQueueTimer *)didEndRequiringWallpaperCheckTimer;
-(char)isRequiringWallpaper;
-(void)setRequiringWallpaper:(char)arg1 ;
-(SBUILockScreenDisableAssertion *)lockScreenDisableAssertion;
-(void)_releaseLockScreenDisableAssertion;
-(void)_acquireLockScreenDisableAssertion;
-(char)_applicationWithIdentifierIsWebApplicationAndForegroundRunning:(id)arg1 ;
-(AXAccessQueue *)applicationLaunchingQueue;
-(void)_sendMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 description:(id)arg3 replyHandler:(/*^block*/id)arg4 ;
-(char)_sendReplayableSimpleMessageToBackboardWithIdentifier:(int)arg1 payload:(id)arg2 description:(id)arg3 error:(id*)arg4 ;
-(void)_endHostingApplicationImmediately;
-(AXAccessQueue *)backboardMessageQueue;
-(NSString *)frontmostAppIdentifier;
-(char)allowsLockButton;
-(void)notifyBackboardSBMiniAlertIsShowing:(char)arg1 ;
-(unsigned)profileConfiguration;
-(void)notifyBackboardShowingWhitelistedLockscreenUI:(char)arg1 withIdentifier:(id)arg2 ;
-(void)notifyBackboardLockscreenUIIsShowing:(char)arg1 ;
-(void)deviceWasUnlocked;
-(void)notifyBackboardIsMakingEmergencyCall:(char)arg1 ;
-(char)shouldAllowMedusaGestures;
-(char)allowsAutolock;
-(void)setBackboardClient:(AXIPCClient *)arg1 ;
-(char)isInactive;
-(void)dealloc;
-(id)init;
-(id)description;
-(char)isActive;
-(char)isEnabled;
@end

