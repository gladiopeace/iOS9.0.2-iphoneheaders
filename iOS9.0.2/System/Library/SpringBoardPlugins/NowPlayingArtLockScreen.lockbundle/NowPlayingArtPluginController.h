/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/SpringBoardPlugins/NowPlayingArtLockScreen.lockbundle/NowPlayingArtLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAwayViewPluginController.h>
#import <libobjc.A.dylib/MPUSystemMediaControlsDelegate.h>
#import <libobjc.A.dylib/SBLockScreenBundleController.h>

@class MPUSystemMediaControlsViewController, NSString;

@interface NowPlayingArtPluginController : SBAwayViewPluginController <MPUSystemMediaControlsDelegate, SBLockScreenBundleController> {

	MPUSystemMediaControlsViewController* _systemMediaController;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rootViewController;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(char)showDateView;
-(/*^block*/id)_disableTransitionBlock;
-(/*^block*/id)enableTransitionBlock;
-(char)viewWantsFullscreenLayout;
-(char)shouldDisableOnUnlock;
-(char)shouldShowLockStatusBarTime;
-(char)wantsAutomaticFullscreenTimer;
-(char)_tapHandler:(id)arg1 ;
@end

