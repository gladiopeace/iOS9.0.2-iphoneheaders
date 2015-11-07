/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIView, MusicTabBarController, NSString;

@interface MusicNowPlayingTransitionController : NSObject <UIViewControllerAnimatedTransitioning> {

	/*^block*/id _transitionStartBlock;
	/*^block*/id _transitionFinishBlock;
	/*^block*/id _transitionStopBlock;
	/*^block*/id _transitionEndBlock;
	/*^block*/id _transitionRubberBandEffectBlock;
	char _hasFinishedTransition;
	UIView* _dimmingView;
	char _dismissal;
	MusicTabBarController* _tabBarController;

}

@property (assign,getter=isDismissal,nonatomic) char dismissal;                     //@synthesize dismissal=_dismissal - In the implementation block
@property (nonatomic,retain) MusicTabBarController * tabBarController;              //@synthesize tabBarController=_tabBarController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)stopAnimation;
-(MusicTabBarController *)tabBarController;
-(void)setTabBarController:(MusicTabBarController *)arg1 ;
-(void)prepareTransition:(id)arg1 ;
-(void)cleanupTransition:(id)arg1 ;
-(void)animateTransition:(id)arg1 withDuration:(double)arg2 initialVelocity:(float)arg3 interactively:(char)arg4 toFinalPositions:(char)arg5 completion:(/*^block*/id)arg6 ;
-(char)isDismissal;
-(void)updateRubberbandingWithDistance:(float)arg1 ;
-(void)setDismissal:(char)arg1 ;
@end

