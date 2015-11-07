/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:16 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIViewControllerTransitionCoordinator.h>

@class IMViewControllerTransitionContext, NSMutableArray, NSString;

@interface IMViewControllerTransitionCoordinator : NSObject <UIViewControllerTransitionCoordinator> {

	IMViewControllerTransitionContext* __mainContext;
	NSMutableArray* __alongsideAnimations;
	NSMutableArray* __alongsideAnimationViews;
	NSMutableArray* __alongsideCompletions;
	NSMutableArray* __interactiveChangeHandlers;

}

@property (assign,setter=_setMainContext:,nonatomic) IMViewControllerTransitionContext * _mainContext;                       //@synthesize _mainContext=__mainContext - In the implementation block
@property (setter=_setAlongsideAnimations:,nonatomic,retain) NSMutableArray * _alongsideAnimations;                          //@synthesize _alongsideAnimations=__alongsideAnimations - In the implementation block
@property (setter=_setAlongsideAnimationViews:,nonatomic,retain) NSMutableArray * _alongsideAnimationViews;                  //@synthesize _alongsideAnimationViews=__alongsideAnimationViews - In the implementation block
@property (setter=_setAlongsideCompletions:,nonatomic,retain) NSMutableArray * _alongsideCompletions;                        //@synthesize _alongsideCompletions=__alongsideCompletions - In the implementation block
@property (setter=_setInteractiveChangeHandlers:,nonatomic,retain) NSMutableArray * _interactiveChangeHandlers;              //@synthesize _interactiveChangeHandlers=__interactiveChangeHandlers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)containerView;
-(id)viewControllerForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 ;
-(char)isInteractive;
-(float)percentComplete;
-(int)presentationStyle;
-(CGAffineTransform)affineTransform;
-(char)isRotating;
-(char)animateAlongsideTransition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setAlongsideAnimations:(id)arg1 ;
-(NSMutableArray *)_alongsideAnimations;
-(char)isCancelled;
-(char)animateAlongsideTransitionInView:(id)arg1 animation:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(IMViewControllerTransitionContext *)_mainContext;
-(double)transitionDuration;
-(int)completionCurve;
-(NSMutableArray *)_alongsideAnimationViews;
-(void)notifyWhenInteractionEndsUsingBlock:(/*^block*/id)arg1 ;
-(char)isAnimated;
-(void)_applyBlocks:(id)arg1 releaseBlocks:(/*^block*/id)arg2 ;
-(char)initiallyInteractive;
-(CGAffineTransform)targetTransform;
-(id)_alongsideAnimations:(char)arg1 ;
-(id)_alongsideCompletions:(char)arg1 ;
-(float)completionVelocity;
-(NSMutableArray *)_alongsideCompletions;
-(id)initWithMainContext:(id)arg1 ;
-(void)_setAlongsideCompletions:(id)arg1 ;
-(NSMutableArray *)_interactiveChangeHandlers;
-(void)_setInteractiveChangeHandlers:(id)arg1 ;
-(void)_setAlongsideAnimationViews:(id)arg1 ;
-(id)_interactiveChangeHandlers:(char)arg1 ;
-(char)isCompleting;
-(void)handlerToInvokeOnInteractivityChanges:(/*^block*/id)arg1 ;
-(void)_setMainContext:(id)arg1 ;
@end

