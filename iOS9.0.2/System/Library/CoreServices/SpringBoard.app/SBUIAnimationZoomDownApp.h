/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>
#import <SpringBoard/SBUIAnimationZoomUpDown.h>

@class UIView, SBAppStatusBarTransitionInfo, BSAnimationSettings, FBWindowContextHostManager, SBSceneLayoutAnimationWrapperView, SBAppStatusBarSettingsAssertion, NSString;

@interface SBUIAnimationZoomDownApp : SBUIMainScreenAnimationController <SBUIAnimationZoomUpDown> {

	UIView* _viewToAnimate;
	SBAppStatusBarTransitionInfo* _appStatusBarTransitionInfo;
	BSAnimationSettings* _animationSettings;
	FBWindowContextHostManager* _deactivatingContextHostManager;
	SBSceneLayoutAnimationWrapperView* _wrapperView;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	char _zoomFullLayoutBounds;

}

@property (readonly) SBAppStatusBarTransitionInfo * appStatusBarTransitionInfo;              //@synthesize appStatusBarTransitionInfo=_appStatusBarTransitionInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) BSAnimationSettings * animationSettings;                          //@synthesize animationSettings=_animationSettings - In the implementation block
-(id)initWithTransitionContextProvider:(id)arg1 ;
-(void)prepareZoom;
-(void)animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)_prepareAnimation;
-(void)_cleanupAnimation;
-(id)deactivatingApp;
-(void)_animateWallpaperWithFactory:(id)arg1 ;
-(void)cleanupZoom;
-(double)_animationDelay;
-(id)_viewsForAnimationStepping;
-(void)setAnimatableWrapperView:(id)arg1 ;
-(SBAppStatusBarTransitionInfo *)appStatusBarTransitionInfo;
-(id)initWithTransitionContextProvider:(id)arg1 zoomFullLayoutBounds:(char)arg2 ;
-(id)appStatusBarTransitionInfoWithStartEffectivelyHidden:(char)arg1 endStyleRequest:(id)arg2 endOrientation:(int)arg3 ;
-(char)prefersLayerHostSnapshot;
-(void)_startAnimation;
-(void)dealloc;
-(BSAnimationSettings *)animationSettings;
-(void)setAnimationSettings:(BSAnimationSettings *)arg1 ;
-(double)_animationDuration;
@end

