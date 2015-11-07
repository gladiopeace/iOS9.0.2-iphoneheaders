/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <iBooks/IMNavigationControllerDelegateAdditions.h>
#import <iBooks/BKSeriesPresenting.h>
#import <iBooks/BKMainPresenting.h>
#import <iBooks/BKBookCollectiblePresenting.h>

@protocol BKMainFlowControllerDelegate, UIViewControllerAnimatedTransitioning, BKContentOpenStatusBarStyling, UIViewControllerInteractiveTransitioning;
@class UINavigationController, NSManagedObjectContext, BKLibraryViewController, IMFuture, BKSKUIApplicationController, NSString;

@interface BKMainFlowController : NSObject <UINavigationControllerDelegate, IMNavigationControllerDelegateAdditions, BKSeriesPresenting, BKMainPresenting, BKBookCollectiblePresenting> {

	UINavigationController* _navigationController;
	id<BKMainFlowControllerDelegate> _delegate;
	NSManagedObjectContext* _moc;
	id<UIViewControllerAnimatedTransitioning> _animator;
	id<BKContentOpenStatusBarStyling> _statusBarStyling;
	id<UIViewControllerInteractiveTransitioning> _interactiveTransitioning;
	BKLibraryViewController* _regularLibraryViewController;
	BKLibraryViewController* _showingSeriesLibraryViewController;
	unsigned _viewType;
	IMFuture* _futureViewControllerToPush;
	BKSKUIApplicationController* _applicationController;

}

@property (nonatomic,retain) UINavigationController * navigationController;                                      //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) id<BKContentOpenAnimating> bookOpenAnimator; 
@property (assign,nonatomic,__weak) id<BKMainFlowControllerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * moc;                                                     //@synthesize moc=_moc - In the implementation block
@property (nonatomic,retain) id<UIViewControllerAnimatedTransitioning> animator;                                 //@synthesize animator=_animator - In the implementation block
@property (assign,nonatomic,__weak) id<BKContentOpenStatusBarStyling> statusBarStyling;                          //@synthesize statusBarStyling=_statusBarStyling - In the implementation block
@property (nonatomic,retain) id<UIViewControllerInteractiveTransitioning> interactiveTransitioning;              //@synthesize interactiveTransitioning=_interactiveTransitioning - In the implementation block
@property (nonatomic,retain) BKLibraryViewController * regularLibraryViewController;                             //@synthesize regularLibraryViewController=_regularLibraryViewController - In the implementation block
@property (nonatomic,retain) BKLibraryViewController * showingSeriesLibraryViewController;                       //@synthesize showingSeriesLibraryViewController=_showingSeriesLibraryViewController - In the implementation block
@property (assign,nonatomic) unsigned viewType;                                                                  //@synthesize viewType=_viewType - In the implementation block
@property (nonatomic,retain) IMFuture * futureViewControllerToPush;                                              //@synthesize futureViewControllerToPush=_futureViewControllerToPush - In the implementation block
@property (nonatomic,retain) BKSKUIApplicationController * applicationController;                                //@synthesize applicationController=_applicationController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)presenterIsUsingPartialScreen;
-(void)presenterFinishModalTransitionsWithCompletion:(/*^block*/id)arg1 ;
-(void)presenterPopToStoreAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)presenterPopToLibraryAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)presenterShowModalController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)presenterDismissModalControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(char)presenterIsShowingLibraryOrStore;
-(char)_isTabWithIdentifierCurrent:(id)arg1 ;
-(char)presenterCanShowStoreProductOnCurrentContent;
-(void)presenterShowAlertController:(id)arg1 animated:(char)arg2 ;
-(id)presentSeriesWithBook:(id)arg1 regularLibraryViewController:(id)arg2 viewType:(unsigned)arg3 animated:(char)arg4 completion:(/*^block*/id)arg5 ;
-(id)dismissSeriesWithManagedObjectContext:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)dismissSeriesRevealingCollection:(id)arg1 animated:(char)arg2 ;
-(void)presenterPopViewController:(id)arg1 withInteractiveTranstioning:(id)arg2 ;
-(void)presenterPushViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)presenterPopViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)presenterPushFutureViewController:(id)arg1 prePushBlock:(/*^block*/id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4 ;
-(id)presenterFirstVisibleChildConformingToProtocol:(id)arg1 ;
-(char)presenterIsCompactWidthOrHeight;
-(void)presenterFirstVisibleViewControllerWillChange;
-(void)presenterFirstVisibleViewControllerDidChange;
-(void)presenterEnsureLibraryTabSelected;
-(id)initWithNavigationController:(id)arg1 applicationController:(id)arg2 moc:(id)arg3 ;
-(void)_ensureLibraryTabIsSelected;
-(id)viewControllerForStatusBarStyle;
-(id)viewControllerForStatusBarHidden;
-(char)isBookCurrentlyOpen;
-(id)mainPresenter;
-(char)isShowingLibrary;
-(id)bookCollectible;
-(char)shouldShowTabBarForViewController:(id)arg1 ;
-(void)showLibraryAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(id)_bookWithAssetURL:(id)arg1 ;
-(id)_bookInfoForAssetViewController:(id)arg1 ;
-(id)bookCollectiblePresenterBookCollectible;
-(void)im_navigationController:(id)arg1 dismissChildViewController:(id)arg2 animated:(char)arg3 ;
-(IMFuture *)futureViewControllerToPush;
-(id<BKContentOpenStatusBarStyling>)statusBarStyling;
-(void)setFutureViewControllerToPush:(IMFuture *)arg1 ;
-(void)_navigationTransitionCompletion:(/*^block*/id)arg1 ;
-(void)setRegularLibraryViewController:(BKLibraryViewController *)arg1 ;
-(void)setViewType:(unsigned)arg1 ;
-(void)setShowingSeriesLibraryViewController:(BKLibraryViewController *)arg1 ;
-(void)_transition:(/*^block*/id)arg1 animator:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BKLibraryViewController *)showingSeriesLibraryViewController;
-(BKLibraryViewController *)regularLibraryViewController;
-(void)_fixSeriesForDismissingViewController:(id)arg1 ;
-(id)_navigationControllerChildFromViewController:(id)arg1 ;
-(id)_navigationControllerPreviousFromViewController:(id)arg1 ;
-(void)setInteractiveTransitioning:(id<UIViewControllerInteractiveTransitioning>)arg1 ;
-(void)_updateWallpaperStylingPreTransition;
-(void)_updateAudioPreviewPreTransition;
-(void)_updateWallpaperStylingPostTransition;
-(id)_bookWithPluginAssetID:(id)arg1 ;
-(id)_coverImageWithSize:(CGSize)arg1 forAssetViewController:(id)arg2 bookCoverAnimating:(id)arg3 ;
-(void)_updateLightLevelObserverPreTransitionAnimated:(char)arg1 ;
-(void)_updateLightLevelObserverPostTransitionAnimated:(char)arg1 ;
-(id<UIViewControllerInteractiveTransitioning>)interactiveTransitioning;
-(id)_bookAndCoverAnimatorFrom:(id)arg1 to:(id)arg2 coordinator:(id)arg3 ;
-(void)setStatusBarStyling:(id<BKContentOpenStatusBarStyling>)arg1 ;
-(void)im_dismissChildViewController:(id)arg1 animated:(char)arg2 ;
-(id<BKContentOpenAnimating>)bookOpenAnimator;
-(void)setApplicationController:(BKSKUIApplicationController *)arg1 ;
-(char)shouldShowTabBar;
-(void)setDelegate:(id<BKMainFlowControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<BKMainFlowControllerDelegate>)delegate;
-(unsigned)viewType;
-(UINavigationController *)navigationController;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(char)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(char)arg3 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)setAnimator:(id<UIViewControllerAnimatedTransitioning>)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(id<UIViewControllerAnimatedTransitioning>)animator;
-(BKSKUIApplicationController *)applicationController;
-(NSManagedObjectContext *)moc;
@end

