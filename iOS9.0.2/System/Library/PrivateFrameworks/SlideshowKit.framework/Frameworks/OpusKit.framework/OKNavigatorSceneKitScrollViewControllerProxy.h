/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKNavigatorSceneKitViewController.h>

@class NSArray, NSString, OKTimerAnimation, NSTimer;

@interface OKNavigatorSceneKitScrollViewControllerProxy : OKNavigatorSceneKitViewController {

	float _scrollingVelocity;
	float _lastScrolledDistance;
	char _triggerTilt;
	NSArray* _steps;
	int _currentStepIndex;
	NSString* _didScrollScript;
	NSString* _reachedBeginScript;
	NSString* _reachedEndScript;
	NSString* _reachedStepScript;
	char _needToTriggerReached;
	char _scrollEnabled;
	OKTimerAnimation* _scrollingAnimation;
	SCNVector4 _lastCameraRotation;
	char _shouldHaveTilt;
	float _tiltAngle;
	NSTimer* _timer;

}
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)commonInit;
-(void)cancelCouchPotatoPlayback;
-(void)navigateToPageWithName:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(char)updateCameraWithScrolledDistance:(float)arg1 touchEnded:(char)arg2 momentPhase:(char)arg3 ;
-(void)navigateToPathPosition:(SCNVector3)arg1 ;
-(void)updatePageViewController;
-(void)adjustCameraPositionForPage:(id)arg1 ;
-(char)settingScrollEnabled;
-(void)setSettingScrollEnabled:(char)arg1 ;
-(void)updateCameraPosition:(SCNVector3)arg1 andRotation:(SCNVector4)arg2 ;
-(SCNVector3)calculateBouncingVector:(NavigatorScrollProgressContext*)arg1 ;
-(void)applyPositionAndRotationModifiers:(SCNVector3*)arg1 rotation:(SCNVector4*)arg2 withContext:(NavigatorScrollProgressContext*)arg3 ;
-(SCNVector4)calculateTiltAngleDependingVelocity:(SCNVector3)arg1 rotation:(SCNVector4)arg2 direction:(float)arg3 ;
-(void)calculateDeltaWithProgressContext:(NavigatorScrollProgressContext*)arg1 ;
-(char)bouncingEffectWithProgressContext:(NavigatorScrollProgressContext*)arg1 ;
-(char)exceedStepWithProgressContext:(NavigatorScrollProgressContext*)arg1 ;
-(void)calculateNewPositionAndRotationWithProgressContext:(NavigatorScrollProgressContext*)arg1 ;
-(char)isPosition:(SCNVector3)arg1 isBetweenPreviousStep:(id)arg2 andNextStep:(id)arg3 ;
-(void)moveCameraOfPixels:(float)arg1 during:(float)arg2 withTimingFunction:(id)arg3 ;
-(id)nearestWidgetNodeOfCameraPosition:(id)arg1 ;
-(SCNVector3)getNearestPathPositionForWidgetNode:(id)arg1 ;
-(char)settingTiltAngle;
-(void)setSettingTiltAngle:(char)arg1 ;
-(void)setSettingReachedStepScript:(id)arg1 ;
-(void)setSettingReachedBeginScript:(id)arg1 ;
-(void)setSettingReachedEndScript:(id)arg1 ;
-(id)settingSteps;
-(void)setSettingSteps:(id)arg1 ;
-(void)setSettingDidScrollScript:(id)arg1 ;
@end

