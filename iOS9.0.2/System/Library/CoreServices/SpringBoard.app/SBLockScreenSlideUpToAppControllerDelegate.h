/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBLockScreenSlideUpToAppControllerDelegate
@required
-(char)isAnotherSlideUpControllerBlockingController:(id)arg1;
-(char)controllerShouldUseAdditionalTopPadding:(id)arg1;
-(char)controllerShouldInvertVerticalPadding:(id)arg1;
-(void)addGrabberView:(id)arg1 toLockScreenView:(id)arg2 forController:(id)arg3;
-(id)grabberViewInLockScreenView:(id)arg1 forController:(id)arg2;
-(void)setUnlockActionContext:(id)arg1;
-(id)viewControllerToUseAsParent;
-(void)passcodeViewDidBecomeActive:(char)arg1 forController:(id)arg2;
-(void)adjustWallpaperForVerticalScrollPercentage:(float)arg1;
-(void)prepareForSlideUpAppLaunchAnimated:(char)arg1;
-(char)lockScreenIsActive;
-(int)presentingControllerIdentifierForController:(id)arg1;

@end

