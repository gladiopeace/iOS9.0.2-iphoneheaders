/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@class SBBounceSettings, SBLockScreenPasscodeSettings, SBSlideToUnlockFailureRecognizerSettings, SBAnimationSettings;

@interface SBLockScreenSettings : _UISettings {

	char _alwaysPutPluginsBelowScrollView;
	char _killsInsecureDrawingApps;
	SBBounceSettings* _verticalBounceSettings;
	SBBounceSettings* _horizontalBounceSettings;
	SBLockScreenPasscodeSettings* _passcodeSettings;
	SBSlideToUnlockFailureRecognizerSettings* _slideToUnlockFailureRecognizerSettings;
	SBAnimationSettings* _unlockToPhoneWallpaperOutSettings;
	SBAnimationSettings* _unlockToPhoneWallpaperInSettings;
	SBAnimationSettings* _unlockWallpaperOutSettings;
	SBAnimationSettings* _unlockWallpaperInSettings;
	float _lockToUnlockSlideCompletionPercentage;
	float _lockToUnlockSlideCompletionPercentageIPad;
	float _unlockSlideForIdleTimerDisabledPercentage;
	float _unlockSlideForIdleTimerDisabledPercentageIPad;
	float _notificationScrollForIdleTimerDisabledOffset;
	float _notificationScrollForIdleTimerDisabledOffsetIPad;
	float _appGrabberSlideUpVelocityThreshold;
	float _unlockSwipeWallpaperAlpha;

}

@property (retain) SBBounceSettings * verticalBounceSettings;                                                      //@synthesize verticalBounceSettings=_verticalBounceSettings - In the implementation block
@property (retain) SBBounceSettings * horizontalBounceSettings;                                                    //@synthesize horizontalBounceSettings=_horizontalBounceSettings - In the implementation block
@property (retain) SBLockScreenPasscodeSettings * passcodeSettings;                                                //@synthesize passcodeSettings=_passcodeSettings - In the implementation block
@property (retain) SBSlideToUnlockFailureRecognizerSettings * slideToUnlockFailureRecognizerSettings;              //@synthesize slideToUnlockFailureRecognizerSettings=_slideToUnlockFailureRecognizerSettings - In the implementation block
@property (retain) SBAnimationSettings * unlockToPhoneWallpaperOutSettings;                                        //@synthesize unlockToPhoneWallpaperOutSettings=_unlockToPhoneWallpaperOutSettings - In the implementation block
@property (retain) SBAnimationSettings * unlockToPhoneWallpaperInSettings;                                         //@synthesize unlockToPhoneWallpaperInSettings=_unlockToPhoneWallpaperInSettings - In the implementation block
@property (retain) SBAnimationSettings * unlockWallpaperOutSettings;                                               //@synthesize unlockWallpaperOutSettings=_unlockWallpaperOutSettings - In the implementation block
@property (retain) SBAnimationSettings * unlockWallpaperInSettings;                                                //@synthesize unlockWallpaperInSettings=_unlockWallpaperInSettings - In the implementation block
@property (assign) float lockToUnlockSlideCompletionPercentage;                                                    //@synthesize lockToUnlockSlideCompletionPercentage=_lockToUnlockSlideCompletionPercentage - In the implementation block
@property (assign) float lockToUnlockSlideCompletionPercentageIPad;                                                //@synthesize lockToUnlockSlideCompletionPercentageIPad=_lockToUnlockSlideCompletionPercentageIPad - In the implementation block
@property (assign) float unlockSlideForIdleTimerDisabledPercentage;                                                //@synthesize unlockSlideForIdleTimerDisabledPercentage=_unlockSlideForIdleTimerDisabledPercentage - In the implementation block
@property (assign) float unlockSlideForIdleTimerDisabledPercentageIPad;                                            //@synthesize unlockSlideForIdleTimerDisabledPercentageIPad=_unlockSlideForIdleTimerDisabledPercentageIPad - In the implementation block
@property (assign) float notificationScrollForIdleTimerDisabledOffset;                                             //@synthesize notificationScrollForIdleTimerDisabledOffset=_notificationScrollForIdleTimerDisabledOffset - In the implementation block
@property (assign) float notificationScrollForIdleTimerDisabledOffsetIPad;                                         //@synthesize notificationScrollForIdleTimerDisabledOffsetIPad=_notificationScrollForIdleTimerDisabledOffsetIPad - In the implementation block
@property (assign) float appGrabberSlideUpVelocityThreshold;                                                       //@synthesize appGrabberSlideUpVelocityThreshold=_appGrabberSlideUpVelocityThreshold - In the implementation block
@property (assign) float unlockSwipeWallpaperAlpha;                                                                //@synthesize unlockSwipeWallpaperAlpha=_unlockSwipeWallpaperAlpha - In the implementation block
@property (assign) char alwaysPutPluginsBelowScrollView;                                                           //@synthesize alwaysPutPluginsBelowScrollView=_alwaysPutPluginsBelowScrollView - In the implementation block
@property (assign) char killsInsecureDrawingApps;                                                                  //@synthesize killsInsecureDrawingApps=_killsInsecureDrawingApps - In the implementation block
+(id)settingsControllerModule;
-(SBAnimationSettings *)unlockToPhoneWallpaperOutSettings;
-(SBAnimationSettings *)unlockToPhoneWallpaperInSettings;
-(SBBounceSettings *)verticalBounceSettings;
-(void)setVerticalBounceSettings:(SBBounceSettings *)arg1 ;
-(SBBounceSettings *)horizontalBounceSettings;
-(void)setHorizontalBounceSettings:(SBBounceSettings *)arg1 ;
-(SBLockScreenPasscodeSettings *)passcodeSettings;
-(void)setPasscodeSettings:(SBLockScreenPasscodeSettings *)arg1 ;
-(SBSlideToUnlockFailureRecognizerSettings *)slideToUnlockFailureRecognizerSettings;
-(void)setSlideToUnlockFailureRecognizerSettings:(SBSlideToUnlockFailureRecognizerSettings *)arg1 ;
-(void)setUnlockToPhoneWallpaperOutSettings:(SBAnimationSettings *)arg1 ;
-(void)setUnlockToPhoneWallpaperInSettings:(SBAnimationSettings *)arg1 ;
-(SBAnimationSettings *)unlockWallpaperOutSettings;
-(void)setUnlockWallpaperOutSettings:(SBAnimationSettings *)arg1 ;
-(SBAnimationSettings *)unlockWallpaperInSettings;
-(void)setUnlockWallpaperInSettings:(SBAnimationSettings *)arg1 ;
-(float)lockToUnlockSlideCompletionPercentage;
-(void)setLockToUnlockSlideCompletionPercentage:(float)arg1 ;
-(float)lockToUnlockSlideCompletionPercentageIPad;
-(void)setLockToUnlockSlideCompletionPercentageIPad:(float)arg1 ;
-(float)unlockSlideForIdleTimerDisabledPercentage;
-(void)setUnlockSlideForIdleTimerDisabledPercentage:(float)arg1 ;
-(float)unlockSlideForIdleTimerDisabledPercentageIPad;
-(void)setUnlockSlideForIdleTimerDisabledPercentageIPad:(float)arg1 ;
-(float)notificationScrollForIdleTimerDisabledOffset;
-(void)setNotificationScrollForIdleTimerDisabledOffset:(float)arg1 ;
-(float)notificationScrollForIdleTimerDisabledOffsetIPad;
-(void)setNotificationScrollForIdleTimerDisabledOffsetIPad:(float)arg1 ;
-(float)appGrabberSlideUpVelocityThreshold;
-(void)setAppGrabberSlideUpVelocityThreshold:(float)arg1 ;
-(float)unlockSwipeWallpaperAlpha;
-(void)setUnlockSwipeWallpaperAlpha:(float)arg1 ;
-(char)alwaysPutPluginsBelowScrollView;
-(void)setAlwaysPutPluginsBelowScrollView:(char)arg1 ;
-(char)killsInsecureDrawingApps;
-(void)setKillsInsecureDrawingApps:(char)arg1 ;
-(void)setDefaultValues;
@end

