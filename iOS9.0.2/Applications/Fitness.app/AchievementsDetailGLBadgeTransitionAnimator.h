/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol AchievementsDetailGLBadgeTransitionAnimatorDelegate;
@class AchievementsViewController, AchievementsDetailViewController, HKAchievement, FIUIBadgeViewController, NSString;

@interface AchievementsDetailGLBadgeTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning> {

	AchievementsViewController* _achievementsController;
	AchievementsDetailViewController* _detailController;
	HKAchievement* _achievement;
	FIUIBadgeViewController* _badgeViewController;
	float _downAnimationDuration;
	id<AchievementsDetailGLBadgeTransitionAnimatorDelegate> _delegate;

}

@property (assign,getter=isAnimationPaused,nonatomic) char animationPaused; 
@property (assign,nonatomic,__weak) id<AchievementsDetailGLBadgeTransitionAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)_isZoomingUpWithTransitionContext:(id)arg1 ;
-(void)_performZoomUpTransitionWithContext:(id)arg1 ;
-(void)_performZoomDownTransitionWithContext:(id)arg1 ;
-(void)_finishZoomUpTransitionWithContext:(id)arg1 ;
-(id)initWithAchievementsViewController:(id)arg1 detailViewController:(id)arg2 achievement:(id)arg3 userName:(id)arg4 ;
-(void)setAnimationPaused:(char)arg1 ;
-(char)isAnimationPaused;
-(void)setDelegate:(id<AchievementsDetailGLBadgeTransitionAnimatorDelegate>)arg1 ;
-(id<AchievementsDetailGLBadgeTransitionAnimatorDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
@end

