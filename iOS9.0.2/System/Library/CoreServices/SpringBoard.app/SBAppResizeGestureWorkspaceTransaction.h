/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSystemGestureWorkspaceTransaction.h>
#import <SpringBoard/SBMainDisplaySceneLayoutResizeUIManagerDelegate.h>

@class NSMutableArray, NSMutableDictionary, SBMainDisplaySceneLayoutViewController, SBLayoutElementViewController, FBUIApplicationSceneDeactivationAssertion, SBMainDisplaySceneLayoutResizeUIManager, SBMainWorkspaceTransaction, NSDate, NSTimer, NSString;

@interface SBAppResizeGestureWorkspaceTransaction : SBSystemGestureWorkspaceTransaction <SBMainDisplaySceneLayoutResizeUIManagerDelegate> {

	NSMutableArray* _transactionCompletionBlocks;
	NSMutableArray* _finalActionCompletionBlocks;
	NSMutableDictionary* _cachedSnapshotViews;
	NSMutableDictionary* _cachedPlaceholderViews;
	char _resizingSpeculatively;
	char _hasResizedSpeculatively;
	char _slidingOffOverlaySideApp;
	char _finishingWithOverlaySideAppDismissal;
	char _lastGestureWasFullResizeGesture;
	char _performingFinalAction;
	SBMainDisplaySceneLayoutViewController* _layoutViewController;
	SBLayoutElementViewController* _primaryLayoutElementController;
	SBLayoutElementViewController* _sideLayoutElementController;
	FBUIApplicationSceneDeactivationAssertion* _appDeactivationAssertion;
	SBMainDisplaySceneLayoutResizeUIManager* _resizeUIManager;
	unsigned _lastResizeGestureRegion;
	SBMainWorkspaceTransaction* _currentWorkspaceTransaction;
	NSDate* _currentWorkspaceTransactionStartDate;
	NSTimer* _longPressPinTimer;
	NSTimer* _pinUnpinTapTimer;
	unsigned _pendingFinalActionCount;
	unsigned _currentGestureIdentifier;

}

@property (nonatomic,retain,readonly) SBMainDisplaySceneLayoutViewController * layoutViewController;                               //@synthesize layoutViewController=_layoutViewController - In the implementation block
@property (nonatomic,retain,readonly) SBLayoutElementViewController * primaryLayoutElementController;                              //@synthesize primaryLayoutElementController=_primaryLayoutElementController - In the implementation block
@property (nonatomic,retain,readonly) SBLayoutElementViewController * sideLayoutElementController;                                 //@synthesize sideLayoutElementController=_sideLayoutElementController - In the implementation block
@property (nonatomic,retain,readonly) FBUIApplicationSceneDeactivationAssertion * appDeactivationAssertion;                        //@synthesize appDeactivationAssertion=_appDeactivationAssertion - In the implementation block
@property (nonatomic,retain) SBMainDisplaySceneLayoutResizeUIManager * resizeUIManager;                                            //@synthesize resizeUIManager=_resizeUIManager - In the implementation block
@property (assign,nonatomic) unsigned lastResizeGestureRegion;                                                                     //@synthesize lastResizeGestureRegion=_lastResizeGestureRegion - In the implementation block
@property (nonatomic,retain) SBMainWorkspaceTransaction * currentWorkspaceTransaction;                                             //@synthesize currentWorkspaceTransaction=_currentWorkspaceTransaction - In the implementation block
@property (nonatomic,copy) NSDate * currentWorkspaceTransactionStartDate;                                                          //@synthesize currentWorkspaceTransactionStartDate=_currentWorkspaceTransactionStartDate - In the implementation block
@property (assign,getter=isResizingSpeculatively,nonatomic) char resizingSpeculatively;                                            //@synthesize resizingSpeculatively=_resizingSpeculatively - In the implementation block
@property (assign,nonatomic) char hasResizedSpeculatively;                                                                         //@synthesize hasResizedSpeculatively=_hasResizedSpeculatively - In the implementation block
@property (assign,getter=isSlidingOffOverlaySideApp,nonatomic) char slidingOffOverlaySideApp;                                      //@synthesize slidingOffOverlaySideApp=_slidingOffOverlaySideApp - In the implementation block
@property (assign,getter=isFinishingWithOverlaySideAppDismissal,nonatomic) char finishingWithOverlaySideAppDismissal;              //@synthesize finishingWithOverlaySideAppDismissal=_finishingWithOverlaySideAppDismissal - In the implementation block
@property (assign,nonatomic) char lastGestureWasFullResizeGesture;                                                                 //@synthesize lastGestureWasFullResizeGesture=_lastGestureWasFullResizeGesture - In the implementation block
@property (nonatomic,retain) NSTimer * longPressPinTimer;                                                                          //@synthesize longPressPinTimer=_longPressPinTimer - In the implementation block
@property (nonatomic,retain) NSTimer * pinUnpinTapTimer;                                                                           //@synthesize pinUnpinTapTimer=_pinUnpinTapTimer - In the implementation block
@property (assign,getter=isPerformingFinalAction,nonatomic) char performingFinalAction;                                            //@synthesize performingFinalAction=_performingFinalAction - In the implementation block
@property (assign,nonatomic) unsigned pendingFinalActionCount;                                                                     //@synthesize pendingFinalActionCount=_pendingFinalActionCount - In the implementation block
@property (assign,nonatomic) unsigned currentGestureIdentifier;                                                                    //@synthesize currentGestureIdentifier=_currentGestureIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resizeGestureZoomAnimationFactory;
+(float)_rubberbandingStartScreenEdgeMargin;
+(id)resizeGestureZoomAnimationSettings;
-(void)systemGestureStateChanged:(id)arg1 ;
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)_finishWithCompletionType:(int)arg1 ;
-(SBLayoutElementViewController *)sideLayoutElementController;
-(SBLayoutElementViewController *)primaryLayoutElementController;
-(id)initWithTransitionRequest:(id)arg1 layoutViewController:(id)arg2 ;
-(SBMainDisplaySceneLayoutResizeUIManager *)resizeUIManager;
-(void)setResizeUIManager:(SBMainDisplaySceneLayoutResizeUIManager *)arg1 ;
-(void)_dismissResizeUIAnimated:(char)arg1 ;
-(SBMainDisplaySceneLayoutViewController *)layoutViewController;
-(char)_canTransitionIntoFullResizeWithLayoutState:(id)arg1 ;
-(float)_maxRubberBandOffsetForAppWidth:(float)arg1 ;
-(void)_getPrimaryAppTransform:(CGAffineTransform*)arg1 sideAppTransform:(CGAffineTransform*)arg2 forPrimaryTranslationAmount:(float)arg3 primaryScaleAmount:(float)arg4 sideTranslationAmount:(float)arg5 sideScaleAmount:(float)arg6 ;
-(void)_getPrimaryAppFrame:(CGRect*)arg1 sideAppFrame:(CGRect*)arg2 grabberHorizontalOffset:(float*)arg3 forResizeGestureLocation:(float)arg4 region:(unsigned)arg5 allowRubberbanding:(char)arg6 ;
-(void)_getPrimaryAppTransform:(CGAffineTransform*)arg1 sideAppTransform:(CGAffineTransform*)arg2 grabberHorizontalOffset:(float*)arg3 forResizeGestureRegion:(unsigned)arg4 location:(float)arg5 allowRubberbanding:(char)arg6 ;
-(unsigned)lastResizeGestureRegion;
-(void)setLastResizeGestureRegion:(unsigned)arg1 ;
-(void)_updateSlideOffUIWithDistance:(float)arg1 gestureRecognizer:(id)arg2 ;
-(char)isSlidingOffOverlaySideApp;
-(void)setSlidingOffOverlaySideApp:(char)arg1 ;
-(void)_updateFullResizeUIFromGestureRecognizer:(id)arg1 ;
-(void)_updateSlideOffUIFromGestureRecognizer:(id)arg1 ;
-(NSTimer *)pinUnpinTapTimer;
-(id)resizeGestureRecognizer;
-(char)hasResizedSpeculatively;
-(SBMainWorkspaceTransaction *)currentWorkspaceTransaction;
-(id)_transactionForExecutingApplicationTransitionContext:(id)arg1 eventLabel:(id)arg2 ;
-(void)setResizingSpeculatively:(char)arg1 ;
-(void)setHasResizedSpeculatively:(char)arg1 ;
-(void)_addChildWorkspaceTransaction:(id)arg1 ;
-(char)isFinishingWithOverlaySideAppDismissal;
-(void)_restartResizeUIWithGestureRecognizer:(id)arg1 ;
-(void)_updateResizeUIFromGestureRecognizer:(id)arg1 ;
-(char)_isResizeGestureInSpeculativeResizeRegionForLocation:(float)arg1 ;
-(void)_beginSpeculativeResizeIfAppropriate;
-(void)_resizeGestureFinishedWithState:(int)arg1 dividerPosition:(float)arg2 velocity:(float)arg3 absoluteDistanceTraveled:(float)arg4 directionalDistanceTraveled:(float)arg5 numberOfTouches:(unsigned)arg6 ;
-(void)_resizeGestureFinishedWithState:(int)arg1 gestureRegion:(unsigned)arg2 velocity:(float)arg3 distanceTraveled:(float)arg4 numberOfTouches:(unsigned)arg5 ;
-(unsigned)_finalActionForGestureState:(int)arg1 gestureRegion:(unsigned)arg2 distanceTraveled:(float)arg3 numberOfTouches:(unsigned)arg4 ;
-(void)setFinishingWithOverlaySideAppDismissal:(char)arg1 ;
-(char)isPerformingFinalAction;
-(char)_shouldObscureAppsBeforePerformingFinalAction:(unsigned)arg1 ;
-(unsigned)_requiredResizeUIStateBeforeAnimatingViewsForFinalAction:(unsigned)arg1 ;
-(void)_animateElementViewsForFinalAction:(unsigned)arg1 animationFactory:(id)arg2 initialVelocity:(float)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_performWhenCurrentWorkspaceTransactionCompletesUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)pendingFinalActionCount;
-(void)setPendingFinalActionCount:(unsigned)arg1 ;
-(void)_performWhenCurrentFinalActionCompletesUsingBlock:(/*^block*/id)arg1 ;
-(void)_performFinalAction:(unsigned)arg1 velocity:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setPerformingFinalAction:(char)arg1 ;
-(unsigned)currentGestureIdentifier;
-(unsigned)_affectedLayoutRolesForFinalAction:(unsigned)arg1 ;
-(id)_transitionContextForFinalAction:(unsigned)arg1 ;
-(unsigned)_requiredResizeUIStateBeforeDismissingResizeUIForFinalAction:(unsigned)arg1 ;
-(void)_dismissResizeUI;
-(void)_tellElementViewsWeEndedResize;
-(char)lastGestureWasFullResizeGesture;
-(CGRect)_appFrameForElementWithRole:(int)arg1 inLayoutState:(id)arg2 withSideAppPresentationStyle:(int)arg3 sideAppWidth:(int)arg4 inCoordinateSpace:(id)arg5 withHeight:(float)arg6 ;
-(void)setCurrentGestureIdentifier:(unsigned)arg1 ;
-(void)setLastGestureWasFullResizeGesture:(char)arg1 ;
-(void)_tellElementViewsWeWillBeginResize;
-(void)_longPressPinTimerDidFire:(id)arg1 ;
-(void)setLongPressPinTimer:(NSTimer *)arg1 ;
-(void)_pinUnpinTapTimerDidFire:(id)arg1 ;
-(void)setPinUnpinTapTimer:(NSTimer *)arg1 ;
-(void)setCurrentWorkspaceTransaction:(SBMainWorkspaceTransaction *)arg1 ;
-(void)setCurrentWorkspaceTransactionStartDate:(NSDate *)arg1 ;
-(NSTimer *)longPressPinTimer;
-(FBUIApplicationSceneDeactivationAssertion *)appDeactivationAssertion;
-(void)_bailOutOfResizeUIInAnUnsightlyManner;
-(id)resizeUIManager:(id)arg1 cachedSceneSnapshotViewForLayoutElementViewController:(id)arg2 ;
-(void)resizeUIManager:(id)arg1 didCreateSceneSnapshotView:(id)arg2 forLayoutElementViewController:(id)arg3 ;
-(id)resizeUIManager:(id)arg1 cachedResizingPlaceholderViewForLayoutElementViewController:(id)arg2 ;
-(void)resizeUIManager:(id)arg1 didCreateResizingPlacholderView:(id)arg2 forLayoutElementViewController:(id)arg3 ;
-(void)resizeUIManager:(id)arg1 willChangeToState:(unsigned)arg2 ;
-(void)resizeUIManager:(id)arg1 willChangeDisplayModeOfAppController:(id)arg2 toDisplayMode:(int)arg3 ;
-(void)_getPrimaryAppTransform:(CGAffineTransform*)arg1 forPrimaryTranslationAmount:(float)arg2 primaryScaleAmount:(float)arg3 ;
-(void)_getSideAppTransform:(CGAffineTransform*)arg1 forSideTranslationAmount:(float)arg2 sideScaleAmount:(float)arg3 ;
-(NSDate *)currentWorkspaceTransactionStartDate;
-(char)isResizingSpeculatively;
-(unsigned)_resizeGestureRegionForLocation:(float)arg1 ;
-(int)_sideAppWidthForResizeGestureRegion:(unsigned)arg1 ;
-(void)_invalidateTimers;
-(void)dealloc;
-(float)_rubberBandOffsetForOffset:(float)arg1 maxOffset:(float)arg2 minOffset:(float)arg3 range:(float)arg4 outside:(char*)arg5 ;
-(void)_resizeGestureDidUpdate:(id)arg1 ;
-(void)_didComplete;
-(char)_canBeInterrupted;
-(void)_begin;
-(void)_childTransactionDidComplete:(id)arg1 ;
-(void)_didInterruptWithReason:(id)arg1 ;
@end

