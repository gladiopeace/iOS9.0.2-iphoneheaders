/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol OFPageViewControllerDataSource, OFPageViewControllerDelegate;
@class _OFViewControllerTransitionContext, UIPanGestureRecognizer, UITapGestureRecognizer, NSDictionary, OFUIViewController, NSString;

@interface OFPageViewController : OFUIViewController <UIGestureRecognizerDelegate> {

	_OFViewControllerTransitionContext* _currentTransitionContext;
	float _progressOffset;
	char _isInteractive;
	char _isForward;
	char _chainsNextTransition;
	float _progressVelocityForChainedTransition;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIEdgeInsets _tapRegionInsets;
	CGSize _tapRegionBreadths;
	UIEdgeInsets _effectiveTapRegionInsets;
	CGSize _effectiveTapRegionBreadths;
	CGRect* _tapRegions;
	float _pageSpacing;
	NSDictionary* _incomingAndOutgoingViewControllersForManualTransition;
	int _lastKnownNavigationDirection;
	struct {
		unsigned delegateImplementsInteractionControllerForAnimationController : 1;
		unsigned delegateImplementsWillStartTransitioning : 1;
		unsigned delegateImplementsDidStartTransitioning : 1;
		unsigned delegateImplementsWillFinishTransitioning : 1;
		unsigned delegateImplementsDidFinishTransitioning : 1;
		unsigned delegateImplementsWillStartBouncing : 1;
		unsigned delegateImplementsDidFinishBouncing : 1;
		unsigned dataSourceSuppliesBeforeViewController : 1;
		unsigned dataSourceSuppliesAfterViewController : 1;
		unsigned dataSourceSuppliesPageCount : 1;
		unsigned dataSourceSuppliesPageNumber : 1;
	}  _flags;
	char _panIsEnabled;
	char _wantsPageControl;
	char _bouncesOnEdges;
	id<OFPageViewControllerDataSource> _dataSource;
	id<OFPageViewControllerDelegate> _delegate;
	int _navigationOrientation;
	OFUIViewController* _viewController;
	float _interactiveTransitionTrackingBoxRadius;
	float _interactiveTransitionProgressThreshold;
	float _interactiveTransitionVelocityThreshold;

}

@property (assign,nonatomic) id<OFPageViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) id<OFPageViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int navigationOrientation;                                  //@synthesize navigationOrientation=_navigationOrientation - In the implementation block
@property (readonly) OFUIViewController * viewController;                                //@synthesize viewController=_viewController - In the implementation block
@property (assign,nonatomic) char panIsEnabled;                                          //@synthesize panIsEnabled=_panIsEnabled - In the implementation block
@property (assign,nonatomic) char bouncesOnEdges;                                        //@synthesize bouncesOnEdges=_bouncesOnEdges - In the implementation block
@property (assign,nonatomic) char wantsPageControl;                                      //@synthesize wantsPageControl=_wantsPageControl - In the implementation block
@property (assign,nonatomic) float interactiveTransitionTrackingBoxRadius;               //@synthesize interactiveTransitionTrackingBoxRadius=_interactiveTransitionTrackingBoxRadius - In the implementation block
@property (assign,nonatomic) float interactiveTransitionProgressThreshold;               //@synthesize interactiveTransitionProgressThreshold=_interactiveTransitionProgressThreshold - In the implementation block
@property (assign,nonatomic) float interactiveTransitionVelocityThreshold;               //@synthesize interactiveTransitionVelocityThreshold=_interactiveTransitionVelocityThreshold - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)viewClass;
-(void)setInteractiveTransitionTrackingBoxRadius:(float)arg1 ;
-(void)setInteractiveTransitionProgressThreshold:(float)arg1 ;
-(void)setInteractiveTransitionVelocityThreshold:(float)arg1 ;
-(void)setDataSource:(id<OFPageViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<OFPageViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)_contentView;
-(id<OFPageViewControllerDataSource>)dataSource;
-(id<OFPageViewControllerDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(OFUIViewController *)viewController;
-(void)_pageControlValueChanged:(id)arg1 ;
-(id)_pageControl;
-(void)commonInit;
-(int)navigationOrientation;
-(void)_contentViewFrameOrBoundsDidChange;
-(void)_updatePageControlViaDataSourceIfNecessary;
-(id)_transitionContextForDirection:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(void)_beginTransitionWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)bounceInDirection:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_startTransition;
-(float)_progressFromRubberBandingProgress:(float)arg1 ;
-(id)_customInteractionControllerForAnimationController:(id)arg1 ;
-(float)_normalizerForFingerTracking;
-(float)_normalizerForBoxTracking;
-(void)_updateInteractiveTransitionForProgress:(float)arg1 ;
-(void)_cancelInteractiveTransitionWithProgressVelocity:(float)arg1 ;
-(void)_resumeInteractiveTransitionWithTranslation:(float)arg1 ;
-(void)_startInteractiveTransitionWithVelocity:(float)arg1 ;
-(void)_finishInteractiveTransitionWithProgress:(float)arg1 andProgressVelocity:(float)arg2 ;
-(char)_shouldFinishTransitionWithVelocity:(float)arg1 ;
-(void)_fakeHandlePanGesture;
-(char)usesPageControl;
-(float)_rubberBandingProgressFromProgress:(float)arg1 ;
-(id)_customAnimationControllerForDirection:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(void)reportTransitionProgress:(float)arg1 ;
-(char)bouncesOnEdges;
-(void)setBouncesOnEdges:(char)arg1 ;
-(float)interactiveTransitionTrackingBoxRadius;
-(float)interactiveTransitionProgressThreshold;
-(float)interactiveTransitionVelocityThreshold;
-(void)setNavigationOrientation:(int)arg1 ;
-(void)setPanIsEnabled:(char)arg1 ;
-(void)setWantsPageControl:(char)arg1 ;
-(void)setViewController:(id)arg1 direction:(int)arg2 animated:(char)arg3 completionHandler:(/*^block*/id)arg4 ;
-(char)panIsEnabled;
-(char)wantsPageControl;
@end

