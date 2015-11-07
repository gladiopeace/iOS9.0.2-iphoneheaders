/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <iBooks/IMNavigationControllerDelegateAdditions.h>

@protocol BKTransitioningViewControllerDelegate, UIViewControllerAnimatedTransitioning, IMAssertion;
@class UIViewController, UINavigationController, NSString;

@interface BKTransitioningViewController : UIViewController <UINavigationControllerDelegate, IMNavigationControllerDelegateAdditions> {

	char _transitioning;
	char _gettingTransitionCoordinator;
	id<BKTransitioningViewControllerDelegate> _delegate;
	UIViewController* _sourceViewController;
	UINavigationController* _navController;
	id<UIViewControllerAnimatedTransitioning> _transition;
	/*^block*/id _completion;
	id<IMAssertion> _wallpaperAssertion;

}

@property (assign,nonatomic,__weak) id<BKTransitioningViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController; 
@property (assign,getter=isTransitioning,nonatomic) char transitioning;                              //@synthesize transitioning=_transitioning - In the implementation block
@property (nonatomic,retain) UIViewController * sourceViewController;                                //@synthesize sourceViewController=_sourceViewController - In the implementation block
@property (nonatomic,retain) UINavigationController * navController;                                 //@synthesize navController=_navController - In the implementation block
@property (nonatomic,retain) id<UIViewControllerAnimatedTransitioning> transition;                   //@synthesize transition=_transition - In the implementation block
@property (nonatomic,copy) id completion;                                                            //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) id<IMAssertion> wallpaperAssertion;                                     //@synthesize wallpaperAssertion=_wallpaperAssertion - In the implementation block
@property (assign,nonatomic) char gettingTransitionCoordinator;                                      //@synthesize gettingTransitionCoordinator=_gettingTransitionCoordinator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitionToContentViewController:(id)arg1 withTransition:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setWallpaperAssertion:(id<IMAssertion>)arg1 ;
-(char)gettingTransitionCoordinator;
-(void)setGettingTransitionCoordinator:(char)arg1 ;
-(void)_delegate_willTransitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)_delegate_didTransitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(id<IMAssertion>)wallpaperAssertion;
-(void)im_navigationController:(id)arg1 dismissChildViewController:(id)arg2 animated:(char)arg3 ;
-(void)_performTransitionFromViewController:(id)arg1 toViewController:(id)arg2 withTransition:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setNavController:(UINavigationController *)arg1 ;
-(void)setTransitioning:(char)arg1 ;
-(void)setSourceViewController:(UIViewController *)arg1 ;
-(void)setDelegate:(id<BKTransitioningViewControllerDelegate>)arg1 ;
-(id<BKTransitioningViewControllerDelegate>)delegate;
-(void)loadView;
-(char)isTransitioning;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(UIViewController *)contentViewController;
-(void)setTransition:(id<UIViewControllerAnimatedTransitioning>)arg1 ;
-(id<UIViewControllerAnimatedTransitioning>)transition;
-(UIViewController *)sourceViewController;
-(id)transitionCoordinator;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(UINavigationController *)navController;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
@end
