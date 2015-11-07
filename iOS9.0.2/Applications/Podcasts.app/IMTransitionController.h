/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class IMTransitionAnimator, NSString;

@interface IMTransitionController : NSObject <UIViewControllerTransitioningDelegate> {

	/*^block*/id _willOpenHandler;
	/*^block*/id _didOpenHandler;
	/*^block*/id _willCloseHandler;
	/*^block*/id _didCloseHandler;
	IMTransitionAnimator* _animator;
	double _duration;

}

@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) id willOpenHandler;                             //@synthesize willOpenHandler=_willOpenHandler - In the implementation block
@property (nonatomic,copy) id didOpenHandler;                              //@synthesize didOpenHandler=_didOpenHandler - In the implementation block
@property (nonatomic,copy) id willCloseHandler;                            //@synthesize willCloseHandler=_willCloseHandler - In the implementation block
@property (nonatomic,copy) id didCloseHandler;                             //@synthesize didCloseHandler=_didCloseHandler - In the implementation block
@property (nonatomic,retain) IMTransitionAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newTransitionAnimator;
-(Class)classforTransitionAnimator;
-(id)willOpenHandler;
-(id)willCloseHandler;
-(id)didOpenHandler;
-(id)didCloseHandler;
-(void)transitionAnimationWillStart:(id)arg1 ;
-(void)transitionAnimationEnded:(id)arg1 ;
-(void)setWillOpenHandler:(id)arg1 ;
-(void)setDidOpenHandler:(id)arg1 ;
-(void)setWillCloseHandler:(id)arg1 ;
-(void)setDidCloseHandler:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(void)setAnimator:(IMTransitionAnimator *)arg1 ;
-(IMTransitionAnimator *)animator;
@end

