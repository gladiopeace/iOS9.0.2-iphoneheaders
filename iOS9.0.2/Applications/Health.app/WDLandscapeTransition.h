/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol WDLandscapeTransitioningViewController;
@class UIViewController;

@interface WDLandscapeTransition : NSObject {

	char _isVisible;
	UIViewController* _presentedViewController;
	UIViewController*<WDLandscapeTransitioningViewController> _transitioningViewController;

}

@property (nonatomic,__weak,readonly) UIViewController*<WDLandscapeTransitioningViewController> transitioningViewController;              //@synthesize transitioningViewController=_transitioningViewController - In the implementation block
-(char)_isPresentingViewController;
-(id)initWithTransitioningViewController:(id)arg1 ;
-(UIViewController*<WDLandscapeTransitioningViewController>)transitioningViewController;
-(void)dealloc;
-(void)viewDidAppear;
-(void)viewWillDisappear;
-(void)orientationChanged:(id)arg1 ;
@end

