/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Videos/Videos-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationTestingDelegate.h>
#import <Videos/MPUExtrasContextDelegate.h>
#import <libobjc.A.dylib/MPVideoOverlayDelegate.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, MPUExtrasContext, NSMutableDictionary, VideosExtrasPlaybackContext, NSString;

@interface VideosAppDelegate : UIResponder <UIApplicationTestingDelegate, MPUExtrasContextDelegate, MPVideoOverlayDelegate, UIApplicationDelegate> {

	UIWindow* _window;
	MPUExtrasContext* _extrasContext;
	NSMutableDictionary* _extrasPidToStoreIDMap;
	VideosExtrasPlaybackContext* _extrasPlaybackContext;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) UIWindow * window;                     //@synthesize window=_window - In the implementation block
-(char)_playItemWithPID:(id)arg1 ;
-(void)launchExtrasWithURL:(id)arg1 storeID:(long long)arg2 buyParameters:(id)arg3 ;
-(void)_updateShortcutItems;
-(void)_endDiscoveringMediaLibrariesIfNecessary;
-(void)launchExtrasWithContext:(id)arg1 ;
-(id)_mediaItemsFromMediaElement:(id)arg1 ;
-(void)launchExtrasForMediaItem:(id)arg1 ;
-(char)_switchViewTest:(id)arg1 fromIdentifier:(id)arg2 toIdentifier:(id)arg3 ;
-(char)_playLocalVideo:(id)arg1 ;
-(char)_selectLocalVideo:(id)arg1 ;
-(char)_scrollViewTest:(id)arg1 testOptions:(id)arg2 identifier:(id)arg3 ;
-(id)_initialPPT;
-(id)_findScrollViewInView:(id)arg1 ;
-(id)_findScrollViewInViewController:(id)arg1 ;
-(id)_selectFirstVideo:(id)arg1 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(UIWindow *)window;
-(id)init;
-(char)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(char)application:(id)arg1 shouldSaveApplicationState:(id)arg2 ;
-(char)application:(id)arg1 shouldRestoreApplicationState:(id)arg2 ;
-(char)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(char)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 didFinishLaunchingSuspendedWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(char)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 willEncodeRestorableStateWithCoder:(id)arg2 ;
-(char)application:(id)arg1 runTest:(id)arg2 options:(id)arg3 ;
-(void)extrasRequestsMediaPlayback:(id)arg1 isBackground:(char)arg2 ;
-(void)extrasRequestsPlaybackStop;
-(void)_availableMediaLibrariesDidChangeNotification:(id)arg1 ;
-(void)extrasRequestReloadWithContext:(id)arg1 ;
-(void)extrasContext:(id)arg1 hadFatalError:(id)arg2 ;
@end

