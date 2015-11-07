/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDimmingViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegatePrivate.h>
#import <UIKit/UIAppearanceContainer.h>

@class UIViewController, _UIPopoverView, UIDimmingView, UIView, UIBarButtonItem, UIColor, _UIPopoverLayoutInfo, UIPanGestureRecognizer, NSArray, UIPopoverPresentationController, NSString;

@interface UIPopoverController : NSObject <UIDimmingViewDelegate, UIGestureRecognizerDelegatePrivate, UIAppearanceContainer> {

	id _delegate;
	UIViewController* _contentViewController;
	UIViewController* _splitParentController;
	_UIPopoverView* _popoverView;
	UIDimmingView* _dimmingView;
	UIView* _layoutConstraintView;
	CGRect _targetRectInEmbeddingView;
	UIBarButtonItem* _targetBarButtonItem;
	unsigned _requestedArrowDirections;
	unsigned _currentArrowDirection;
	int _popoverBackgroundStyle;
	UIColor* _backgroundColor;
	_UIPopoverLayoutInfo* _preferredLayoutInfo;
	Class _popoverBackgroundViewClass;
	CGSize _popoverContentSize;
	CGRect _targetRectInDimmingView;
	CGRect _embeddedTargetRect;
	int _popoverControllerStyle;
	char _ignoresKeyboardNotifications;
	UIView* _currentPresentationView;
	CGRect _currentPresentationRectInView;
	unsigned _originalArrowDirections;
	unsigned draggingChildScrollViewCount;
	id _target;
	SEL _didEndSelector;
	UIViewController* _modalPresentationFromViewController;
	UIViewController* _modalPresentationToViewController;
	unsigned _toViewAutoResizingMask;
	UIViewController* _slidingViewController;
	UIView* _presentingView;
	unsigned _presentationEdge;
	int _presentationDirection;
	int _presentationState;
	char _didPresentInActiveSequence;
	unsigned _slideTransitionCount;
	UIPanGestureRecognizer* _vendedGestureRecognizer;
	UIPanGestureRecognizer* _dimmingViewGestureRecognizer;
	UIPopoverController* _retainedSelf;
	NSArray* _passthroughViews;
	struct {
		unsigned isPresentingModalViewController : 1;
		unsigned isPresentingActionSheet : 1;
		unsigned wasIgnoringDimmingViewTouchesBeforeScrolling : 1;
		unsigned isInTextEffectsWindow : 1;
		unsigned isEmbeddingInView : 1;
		unsigned embeddedPresentationBounces : 1;
	}  _popoverControllerFlags;
	char _dismissesOnRotation;
	char _showsTargetRect;
	char _showsOrientationMarker;
	char _showsPresentationArea;
	char _retainsSelfWhilePresented;
	unsigned _popoverArrowDirection;
	UIPopoverPresentationController* _presentationController;
	UIEdgeInsets _popoverLayoutMargins;

}

@property (assign,nonatomic,__weak) id<UIPopoverControllerDelegate> delegate;                                                                                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController; 
@property (assign,nonatomic) CGSize popoverContentSize; 
@property (getter=isPopoverVisible,nonatomic,readonly) char popoverVisible; 
@property (assign,nonatomic) unsigned popoverArrowDirection;                                                                                                          //@synthesize popoverArrowDirection=_popoverArrowDirection - In the implementation block
@property (nonatomic,copy) NSArray * passthroughViews; 
@property (nonatomic,copy) UIColor * backgroundColor; 
@property (assign,nonatomic) UIEdgeInsets popoverLayoutMargins;                                                                                                       //@synthesize popoverLayoutMargins=_popoverLayoutMargins - In the implementation block
@property (nonatomic,retain) Class popoverBackgroundViewClass;                                                                                                        //@synthesize popoverBackgroundViewClass=_popoverBackgroundViewClass - In the implementation block
@property (nonatomic,retain) UIDimmingView * dimmingView;                                                                                                             //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic) char dismissesOnRotation;                                                                                                                //@synthesize dismissesOnRotation=_dismissesOnRotation - In the implementation block
@property (nonatomic,retain) _UIPopoverLayoutInfo * preferredLayoutInfo;                                                                                              //@synthesize preferredLayoutInfo=_preferredLayoutInfo - In the implementation block
@property (assign,setter=_setPresentingView:,getter=_presentingView,nonatomic,__weak) UIView * presentingView;                                                        //@synthesize presentingView=_presentingView - In the implementation block
@property (assign,setter=_setPresentationEdge:,getter=_presentationEdge,nonatomic) unsigned presentationEdge;                                                         //@synthesize presentationEdge=_presentationEdge - In the implementation block
@property (assign,setter=_setIgnoresKeyboardNotifications:,nonatomic) char _ignoresKeyboardNotifications; 
@property (setter=_setPresentationController:,getter=_presentationController,nonatomic,retain) UIPopoverPresentationController * presentationController;              //@synthesize presentationController=_presentationController - In the implementation block
@property (assign,nonatomic) char showsTargetRect;                                                                                                                    //@synthesize showsTargetRect=_showsTargetRect - In the implementation block
@property (assign,nonatomic) char showsOrientationMarker;                                                                                                             //@synthesize showsOrientationMarker=_showsOrientationMarker - In the implementation block
@property (assign,nonatomic) char showsPresentationArea;                                                                                                              //@synthesize showsPresentationArea=_showsPresentationArea - In the implementation block
@property (assign,setter=_setRetainsSelfWhilePresented:,getter=_retainsSelfWhilePresented,nonatomic) char retainsSelfWhilePresented;                                  //@synthesize retainsSelfWhilePresented=_retainsSelfWhilePresented - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_popoversDisabled;
+(char)_useLegacyPopoverControllers;
+(UIEdgeInsets)_defaultPopoverLayoutMarginsForPopoverControllerStyle:(int)arg1 andContentViewController:(id)arg2 ;
+(char)_showTargetRectPref;
+(Class)_popoverViewClass;
+(char)_forceAttemptsToAvoidKeyboard;
+(void)_setForceModernPopoverUse:(char)arg1 ;
-(id)copyScriptPopOver;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<UIPopoverControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<UIPopoverControllerDelegate>)delegate;
-(char)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(char)_gestureRecognizerShouldBegin:(id)arg1 ;
-(int)_popoverControllerStyle;
-(char)_gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(id)_presentationController;
-(char)_isDismissing;
-(id)_managingSplitViewController;
-(void)_containedViewControllerModalStateChanged;
-(UIViewController *)contentViewController;
-(char)_embedsInView;
-(void)setPopoverContentSize:(CGSize)arg1 animated:(char)arg2 ;
-(int)_popoverBackgroundStyle;
-(id)popoverView;
-(char)_popoverBackgroundViewWantsDefaultContentAppearance;
-(void)dismissPopoverAnimated:(char)arg1 ;
-(char)_manuallyHandlesContentViewControllerAppearanceCalls;
-(char)isPopoverVisible;
-(void)_setPresentationController:(id)arg1 ;
-(void)_modalTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 target:(id)arg4 didEndSelector:(SEL)arg5 ;
-(id)_dimmingView;
-(id)_splitParentController;
-(void)_adjustPopoverForNewContentSizeFromViewController:(id)arg1 allowShrink:(char)arg2 ;
-(void)_newViewControllerWillBePushed:(id)arg1 ;
-(void)_newViewControllerWasPushed:(id)arg1 ;
-(UIDimmingView *)dimmingView;
-(id)initWithContentViewController:(id)arg1 ;
-(void)presentPopoverFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned)arg3 animated:(char)arg4 ;
-(void)presentPopoverFromBarButtonItem:(id)arg1 permittedArrowDirections:(unsigned)arg2 animated:(char)arg3 ;
-(void)popoverPresentationControllerDidDismissPopover:(id)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(NSArray *)arg1 ;
-(char)popoverPresentationControllerShouldDismissPopover:(id)arg1 ;
-(void)popoverPresentationController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)_setManagingSplitViewController:(id)arg1 ;
-(id)_gestureRecognizerForPresentationFromEdge:(unsigned)arg1 ;
-(void)_setGesturesEnabled:(char)arg1 ;
-(id)_initWithContentViewController:(id)arg1 popoverControllerStyle:(int)arg2 ;
-(void)setPopoverBackgroundViewClass:(Class)arg1 ;
-(void)_presentPopoverFromEdge:(unsigned)arg1 ofView:(id)arg2 animated:(char)arg3 ;
-(void)_dismissPopoverAnimated:(char)arg1 stateOnly:(char)arg2 notifyDelegate:(char)arg3 ;
-(unsigned)_slideTransitionCount;
-(void)setDimmingView:(UIDimmingView *)arg1 ;
-(void)_setPopoverBackgroundStyle:(int)arg1 ;
-(void)_setRetainsSelfWhilePresented:(char)arg1 ;
-(void)_performHierarchyCheckOnViewController:(id)arg1 ;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(char)arg3 ;
-(void)_swipe:(id)arg1 ;
-(void)setContentViewController:(id)arg1 animated:(char)arg2 ;
-(char)_shimPopoverPresentationController;
-(id)_layoutInfoForCurrentKeyboardState;
-(float)_presentationAnimationDuration;
-(void)setPreferredLayoutInfo:(_UIPopoverLayoutInfo *)arg1 ;
-(char)_isPresenting;
-(void)setPopoverFrame:(CGRect)arg1 animated:(char)arg2 ;
-(UIEdgeInsets)popoverLayoutMargins;
-(void)setPopoverLayoutMargins:(UIEdgeInsets)arg1 ;
-(void)_layoutDimmingViewForInterfaceOrientationOfHostingWindow:(id)arg1 ;
-(Class)_popoverLayoutInfoForChromeClass:(Class)arg1 ;
-(id)_layoutInfoFromLayoutInfo:(id)arg1 forCurrentKeyboardStateAndHostingWindow:(id)arg2 ;
-(void)_startWatchingForKeyboardNotificationsIfNecessary;
-(id)_layoutInfoForCurrentKeyboardStateAndHostingWindow:(id)arg1 ;
-(void)_incrementSlideTransitionCount:(char)arg1 ;
-(void)_startWatchingForWindowRotations;
-(void)_setPresentationState:(int)arg1 ;
-(/*^block*/id)_completionBlockForDismissalWhenNotifyingDelegate:(char)arg1 ;
-(int)_presentationState;
-(void)_setPresentingView:(id)arg1 ;
-(void)_setPresentationEdge:(unsigned)arg1 ;
-(void)_postludeForDismissal;
-(void)_resetSlideTransitionCount;
-(void)_presentPopoverBySlidingIn:(char)arg1 fromEdge:(unsigned)arg2 ofView:(id)arg3 animated:(char)arg4 stateOnly:(char)arg5 notifyDelegate:(char)arg6 ;
-(Class)_defaultChromeViewClass;
-(CGPoint)_centerPointForScale:(float)arg1 frame:(CGRect)arg2 anchor:(CGPoint)arg3 ;
-(void)_presentPopoverFromRect:(CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned)arg4 animate:(char)arg5 ;
-(char)_shimPresentSlidingPopoverAnimated:(char)arg1 ;
-(char)isPresentingOrDismissing;
-(void)_startWatchingForScrollViewNotifications;
-(Class)popoverBackgroundViewClass;
-(CGSize)popoverContentSize;
-(void)_setupPresentationController;
-(void)_presentShimmedPopoverFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned)arg3 animated:(char)arg4 ;
-(void)_commonPresentPopoverFromRect:(CGRect)arg1 inView:(id)arg2 permittedArrowDirections:(unsigned)arg3 animated:(char)arg4 ;
-(void)_updateDimmingViewTransformForInterfaceOrientationOfHostingWindow:(id)arg1 ;
-(void)_beginMapsTransitionToNewViewController:(id)arg1 newTargetRect:(CGRect)arg2 inView:(id)arg3 arrowDirections:(unsigned)arg4 slideDuration:(double)arg5 expandDuration:(double)arg6 ;
-(void)_setSplitParentController:(id)arg1 ;
-(void)_setPopoverView:(id)arg1 ;
-(void)_stopWatchingForNotifications;
-(float)_dismissalAnimationDuration;
-(char)_attemptsToAvoidKeyboard;
-(void)_moveAwayFromTheKeyboard:(id)arg1 ;
-(void)_keyboardStateChanged:(id)arg1 ;
-(void)_invalidateLayoutInfo;
-(char)_canRepresentAutomatically;
-(void)_hostingWindowWillRotate:(id)arg1 ;
-(void)_hostingWindowDidRotate:(id)arg1 ;
-(void)_scrollViewWillBeginDragging:(id)arg1 ;
-(void)_scrollViewDidEndDragging:(id)arg1 ;
-(void)_stopWatchingForKeyboardNotifications;
-(void)_stopWatchingForScrollViewNotifications;
-(void)_stopWatchingForWindowRotations;
-(CGSize)_currentPopoverContentSize;
-(void)_modalAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)setPopoverContentSize:(CGSize)arg1 ;
-(unsigned)popoverArrowDirection;
-(void)_presentPopoverFromRect:(CGRect)arg1 embeddedInView:(id)arg2 usingViewForLayoutConstraints:(id)arg3 permittedArrowDirections:(unsigned)arg4 ;
-(void)_setContentViewController:(id)arg1 backgroundStyle:(int)arg2 animated:(char)arg3 ;
-(void)_beginMapsTransitionToNewViewController:(id)arg1 arrowDirections:(unsigned)arg2 slideDuration:(double)arg3 expandDuration:(double)arg4 ;
-(void)_startWatchingForNavigationControllerNotifications:(id)arg1 ;
-(void)_stopWatchingForNavigationControllerNotifications:(id)arg1 ;
-(char)_ignoresKeyboardNotifications;
-(void)_setIgnoresKeyboardNotifications:(char)arg1 ;
-(char)dismissesOnRotation;
-(void)setDismissesOnRotation:(char)arg1 ;
-(char)showsTargetRect;
-(void)setShowsTargetRect:(char)arg1 ;
-(char)showsOrientationMarker;
-(void)setShowsOrientationMarker:(char)arg1 ;
-(char)showsPresentationArea;
-(void)setShowsPresentationArea:(char)arg1 ;
-(char)_retainsSelfWhilePresented;
-(_UIPopoverLayoutInfo *)preferredLayoutInfo;
-(id)_presentingView;
-(unsigned)_presentationEdge;
-(void)setPopoverArrowDirection:(unsigned)arg1 ;
@end

