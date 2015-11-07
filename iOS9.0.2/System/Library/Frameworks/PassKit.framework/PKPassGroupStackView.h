/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIScrollView.h>
#import <libobjc.A.dylib/PKPassDeleteDelegate.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPassGroupViewDelegate.h>
#import <libobjc.A.dylib/PKPassDeleteHandler.h>

@protocol PKPassGroupStackViewDatasource;
@class PKPassGroupView, PKGroup, NSMutableArray, NSMutableDictionary, PKPGSVHeaderContext, PKReusablePassViewQueue, NSTimer, PKPaymentService, PKPassFooterView, UIView, PKSecureElement, UIColor, PKPass, NSString;

@interface PKPassGroupStackView : UIScrollView <PKPassDeleteDelegate, PKPaymentServiceDelegate, PKPassGroupViewDelegate, PKPassDeleteHandler> {

	PKPassGroupView* _modallyPresentedGroupView;
	PKGroup* _modallyPresentedGroup;
	NSMutableArray* _passPileViews;
	unsigned _modalGroupIndex;
	int _scrollingTestState;
	int _currentTestReps;
	int _presentationState;
	NSMutableDictionary* _groupViewsByGroupID;
	PKPGSVHeaderContext* _paymentHeaderContext;
	PKPGSVHeaderContext* _passHeaderContext;
	SCD_Struct_PK5 _layoutState;
	/*^block*/id _transitionCanceller;
	int _nextState;
	int _priorState;
	NSMutableArray* _transitionCompletionHandlers;
	char _hasSuspendedTransition;
	int _suspendedNextState;
	NSMutableArray* _suspendedTransitionCompletionHandlers;
	char _inPassthroughHitTest;
	PKReusablePassViewQueue* _reusableCardViewQueue;
	PKPassGroupView* _reorderedGroupView;
	unsigned _initialIndexOfReorderedGroup;
	unsigned _previousIndexOfReorderedGroup;
	CGPoint _reorderedGroupViewPositionInFrame;
	CGPoint _panningVelocity;
	NSTimer* _autoscrollTimer;
	struct {
		unsigned isReordering : 1;
		unsigned isReorderPeekCompensated : 1;
		unsigned hasScrolledUp : 1;
		unsigned hasScrolledDown : 1;
	}  _reorderingFlags;
	NSMutableArray* _reorderActions;
	unsigned _reorderActionTag;
	NSMutableDictionary* _groupViewsInFlightByGroupID;
	unsigned _userInteractionCounter;
	NSMutableDictionary* _animatorsByGroupID;
	PKPaymentService* _paymentService;
	PKPassFooterView* _passFooterView;
	char _showingFooter;
	UIView* _headerContainerView;
	UIView* _subheaderContainerView;
	UIView* _passContainerView;
	NSMutableArray* _passthroughViews;
	PKSecureElement* _secureElement;
	char _footerSuppressed;
	id<PKPassGroupStackViewDatasource> _datasource;
	UIColor* _pageIndicatorTintColor;
	UIColor* _currentPageIndicatorTintColor;

}

@property (assign,nonatomic) id<PKPassGroupStackViewDelegate><UIScrollViewDelegate> delegate; 
@property (assign,nonatomic) id<PKPassGroupStackViewDatasource> datasource;                                //@synthesize datasource=_datasource - In the implementation block
@property (assign,nonatomic) int presentationState;                                                        //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic) unsigned modalGroupIndex;                                                     //@synthesize modalGroupIndex=_modalGroupIndex - In the implementation block
@property (assign,nonatomic) char footerSuppressed;                                                        //@synthesize footerSuppressed=_footerSuppressed - In the implementation block
@property (assign,nonatomic) char pileSuppressed; 
@property (nonatomic,readonly) PKPass * modalGroupFrontmostPass; 
@property (nonatomic,readonly) char isReordering; 
@property (nonatomic,readonly) char isPresentingPassViewFront; 
@property (nonatomic,readonly) float pileHeight; 
@property (nonatomic,readonly) char isModallyPresentedPassAuthorized; 
@property (assign,nonatomic) UIColor * pageIndicatorTintColor;                                             //@synthesize pageIndicatorTintColor=_pageIndicatorTintColor - In the implementation block
@property (assign,nonatomic) UIColor * currentPageIndicatorTintColor;                                      //@synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2 ;
-(void)presentDiff:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFooterSuppressed:(char)arg1 ;
-(void)tilePassesEagerly:(char)arg1 ;
-(void)setModalGroupIndex:(unsigned)arg1 ;
-(PKPass *)modalGroupFrontmostPass;
-(char)isPresentingPassViewFront;
-(void)layoutContentForCurrentPresentationState:(char)arg1 ;
-(char)isReordering;
-(void)noteDidEndScrollingForTesting;
-(void)stageGroupInPresentationState:(int)arg1 atIndex:(unsigned)arg2 ;
-(void)setPresentationState:(int)arg1 animated:(char)arg2 ;
-(void)deleteGroup:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)moveGroup:(id)arg1 fromIndex:(unsigned)arg2 toIndex:(unsigned)arg3 ;
-(unsigned)modalGroupIndex;
-(void)setPresentationState:(int)arg1 context:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(char)isModallyPresentedPassAuthorized;
-(void)setPresentationState:(int)arg1 animated:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)subheaderForPassType:(unsigned)arg1 ;
-(id)headerForPassType:(unsigned)arg1 ;
-(void)setPileSuppressed:(char)arg1 ;
-(void)setTableModalPresentationEnabled:(char)arg1 animated:(char)arg2 ;
-(void)presentPassWithUniqueID:(id)arg1 ;
-(void)updateHeaderAndSubheaderViewsIfNecessary;
-(void)_cancelTransition;
-(void)_cancelSuspendedTransition;
-(void)layoutHeadersAnimated:(char)arg1 ;
-(SCD_Struct_PK6)_layoutStateForHeaderContextInTable:(id)arg1 withBounds:(CGRect)arg2 ;
-(float)_nativeYForGroupInTableAtIndex:(unsigned)arg1 ;
-(float)_groupCellHeight;
-(float)_transformedYForNativeYInTable:(float)arg1 withBounds:(CGRect)arg2 index:(unsigned)arg3 ;
-(char)_isTableModalPresentation;
-(void)_resumeSuspendedTransition;
-(void)_transitionSuccessful:(char)arg1 ;
-(char)_recomputeLayoutState;
-(void)_updateHeaderState:(char)arg1 ;
-(void)_setScrollEnabled:(char)arg1 ;
-(void)_presentOffscreenAnimated:(char)arg1 split:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_tileGroupsForState:(int)arg1 eager:(char)arg2 ;
-(void)_presentGroupStackViewWithAnimation:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_loadModalGroupView;
-(void)_presentModalGroupView:(id)arg1 animated:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_presentFlippedModalGroupView:(id)arg1 animated:(char)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_presentPassIngestionWithAnimation:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_presentPassIngestionAcceptanceWithAnimation:(char)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_updatePassFooterViewIfNecessaryWithContext:(id)arg1 becomeVisibleDelay:(double)arg2 ;
-(void)_updatePassFooterViewAnimated:(char)arg1 ;
-(void)_layoutContentFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 animated:(char)arg3 ;
-(NSRange)_rangeOfVisibleIndexes;
-(int)_defaultContentModeForPresentationState:(int)arg1 index:(unsigned)arg2 ;
-(id)_loadGroupViewAtIndex:(unsigned)arg1 forState:(int)arg2 contentMode:(int)arg3 cached:(char*)arg4 ;
-(void)_arrangeGroups;
-(id)_frontmostPastViewForGroupIndex:(unsigned)arg1 ;
-(void)_cleanUpAnimatorForGroupView:(id)arg1 ;
-(id)_groupViewAtIndex:(unsigned)arg1 ;
-(void)_addPanGestureRecognizerToGroupView:(id)arg1 ;
-(unsigned)_lastIndex;
-(void)_removeGroupViewAsSubviewWithGroupID:(id)arg1 ;
-(void)setPresentationState:(int)arg1 ;
-(NSRange)_rangeOfEagerLoadedIndexes;
-(void)_showPassFooterView:(char)arg1 forPassView:(id)arg2 animated:(char)arg3 delay:(float)arg4 completion:(/*^block*/id)arg5 ;
-(CGPoint)_positionForGroupView:(id)arg1 atIndex:(unsigned)arg2 forState:(int)arg3 ;
-(void)_updateGroupView:(id)arg1 toPresentationState:(int)arg2 withSpringFactory:(id)arg3 ;
-(void)_enumerateLoadedGroupViews:(/*^block*/id)arg1 ;
-(id)_arrayOfStackedIndexes;
-(float)_maxYOfPassFrontFaceAtIndex:(unsigned)arg1 ;
-(float)_yPositionForGroupAtIndex:(unsigned)arg1 forState:(int)arg2 ;
-(void)_updateTransformForGroupView:(id)arg1 toPresentationState:(int)arg2 withSpringFactory:(id)arg3 ;
-(float)_xPositionForGroupView:(id)arg1 forState:(int)arg2 ;
-(void)_updatePositionForGroupView:(id)arg1 toPosition:(CGPoint)arg2 withSpringFactory:(id)arg3 ;
-(unsigned)_indexOfGroupView:(id)arg1 ;
-(void)_updateGroupStateForGroupViewInStackPresentation:(id)arg1 animated:(char)arg2 ;
-(void)_updateContentSizeAndLayout:(char)arg1 forceUpdate:(char)arg2 ;
-(id)_headerContextForPassType:(unsigned)arg1 ;
-(void)_updatePassFooterViewIfNecessaryAnimated:(char)arg1 withBecomeVisibleDelay:(double)arg2 ;
-(float)_pileAscenderHeight;
-(float)_pileBaseHeight;
-(unsigned)_tablePresentationNumberOfCellsBeforeStacking;
-(void)_addGroupViewAsSubview:(id)arg1 forIndex:(unsigned)arg2 ;
-(CATransform3D)_transformForGroupView:(id)arg1 forState:(int)arg2 ;
-(char)_tileSentinelGroup:(id)arg1 forState:(int)arg2 withAlreadyTiledGroupIDs:(id)arg3 ;
-(id)_separatorGroup;
-(void)_layoutFooterAnimated:(char)arg1 withAnimationDelay:(double)arg2 ;
-(id)_groupViewWithGroup:(id)arg1 ;
-(void)_setModalGroupView:(id)arg1 ;
-(CGPoint)_nativePositionForPositionInTable:(CGPoint)arg1 ;
-(unsigned)_indexForNativePositionInTable:(CGPoint)arg1 roundToClosestIndex:(char)arg2 ;
-(unsigned)_startVisibleIndex;
-(float)_yForGroupInTableAtIndex:(unsigned)arg1 ;
-(int)_edgeStylesObscuredByTopMiddleOfPassStyle:(int)arg1 ;
-(int)_edgeStylesObscuredByTopCornersOfPassStyle:(int)arg1 ;
-(char)_isGroupAtIndexInModalPile:(unsigned)arg1 ;
-(void)_removeMotionEffectsFromModalPile;
-(void)_removeDimmingFromPileWithAnimation:(char)arg1 ;
-(double)_setupSpringFactory:(id)arg1 forPileAnimationToPresentationState:(int)arg2 reverse:(char)arg3 ;
-(void)_generateModalGroupPileWithVisibleIndexes:(NSRange)arg1 reservePlaceForModalGroup:(char)arg2 ;
-(void)_fanAndPageGroupView:(id)arg1 animated:(char)arg2 ;
-(void)_updateGroupStateForGroupViewInModalPresentation:(id)arg1 animated:(char)arg2 ;
-(void)_addDimmingToPileWithAnimation:(char)arg1 ;
-(void)_addMotionEffectsToModalPile;
-(char)_shouldTablePresentationScroll;
-(void)_updatePositionForGroupView:(id)arg1 toPresentationState:(int)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned)arg4 ;
-(char)_passEligibleForFooter:(id)arg1 ;
-(int)_footerStateForPassView:(id)arg1 ;
-(char)_canShowPassFooter;
-(void)_updatePassFooterViewWithContext:(id)arg1 ;
-(void)_showPassFooterView:(char)arg1 forPassView:(id)arg2 context:(id)arg3 delay:(float)arg4 completion:(/*^block*/id)arg5 ;
-(CGRect)_frameForFooterViewForPassView:(id)arg1 ;
-(void)_handleModalGroupGesture:(id)arg1 ;
-(void)_beginGroupPanWithGestureRecognizer:(id)arg1 ;
-(id)_animatorForGestureRecognizer:(id)arg1 ;
-(void)_adjustPassFooterViewOpacityForYOffset:(float)arg1 ;
-(float)_yForGroupInModalPileWithModalGroupY:(float)arg1 ;
-(void)_endGroupPanWithGestureRecognizer:(id)arg1 ;
-(void)_suspendTransition;
-(float)_scaleForGroupView:(id)arg1 forState:(int)arg2 ;
-(char)_updateHeaderContext:(id*)arg1 toContext:(id)arg2 animated:(char)arg3 ;
-(id)_groupViewAtIndexWhileEnsuringVisible:(unsigned)arg1 withContentMode:(int)arg2 ;
-(float)_yForModallyPresentedGroup;
-(float)_yForGroupInModalPileAtIndex:(unsigned)arg1 ;
-(float)_yForGroupInPileAtIndex:(unsigned)arg1 ;
-(float)_yForGroupInOffscreenPileAtIndex:(unsigned)arg1 ;
-(float)_yForSingleGroupView:(id)arg1 ;
-(float)_yForModallyPresentedPaymentPassGroupView;
-(float)_yOffsetForModallyPresentedNFCPassGroupView;
-(float)pileHeight;
-(id)_firstHeaderContext;
-(unsigned)_maximumNumberOfVisiblePilePasses;
-(float)_pileSeparationHeight;
-(float)_pileAscenderHeightForGroupViewInPile:(id)arg1 ;
-(void)_updateGroupView:(id)arg1 toPresentationState:(int)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned)arg4 ;
-(double)_setupSpringFactoryForPileAnimations:(id)arg1 withMaximumAcceleration:(double)arg2 reverse:(char)arg3 ;
-(void)_reorderPositionChangedForReorderedGroupViewWithVelocity:(CGPoint)arg1 ;
-(id)_groupBeforeSeparatorGroup;
-(unsigned)_indexForNativePositionInTable:(CGPoint)arg1 ;
-(unsigned)_indexOfReorderedGroupView;
-(void)_animateGroupViewAtIndex:(unsigned)arg1 toIndex:(unsigned)arg2 withAnchorView:(id)arg3 insertAbove:(char)arg4 ;
-(void)_reverseEnumerateLoadedGroupViews:(/*^block*/id)arg1 ;
-(void)_adjustSeparationGroupAndPassViewsForReordering;
-(void)_autoscrollIfNecessary;
-(double)_setupSpringFactory:(id)arg1 forPileAnimationFromPresentationState:(int)arg2 toPresentationState:(int)arg3 reverse:(char)arg4 ;
-(char)_isModalPresentationAllowedForSingleGroup;
-(id)_sortedAscendingGroupViewIndexes;
-(id)_sortedDescendingGroupViewIndexes;
-(void)_disableScrollingAndNormalizeContentOffset;
-(void)_undoUserReorderWithReorderedGroupView:(id)arg1 ;
-(void)_animateGroupViewForUndo:(id)arg1 toIndex:(unsigned)arg2 ;
-(void)_presentModalGroupViewPostAnimationActions;
-(void)_executeCompletionHandlers:(id)arg1 cancelled:(char)arg2 ;
-(void)_notifyDelegateOfStateChange:(char)arg1 ;
-(char)_isModalPresentationAllowed;
-(void)_setDefaultPaymentPassFromGroupView:(id)arg1 reorderedGroupView:(id)arg2 ;
-(char)_isIngestingPass;
-(void)deleteSheet:(id)arg1 didComplete:(char)arg2 ;
-(void)groupViewTapped:(id)arg1 ;
-(void)groupView:(id)arg1 didBeginShowingFontmostPassView:(id)arg2 ;
-(void)groupView:(id)arg1 didEndShowingFontmostPassView:(id)arg2 ;
-(char)groupViewShouldAllowPanning:(id)arg1 ;
-(void)groupViewPanDidBegin:(id)arg1 ;
-(void)groupViewPanDidEnd:(id)arg1 ;
-(void)groupView:(id)arg1 panned:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(void)groupViewDidUpdatePageControlVisibility:(id)arg1 ;
-(char)groupViewShouldAllowPassFlip:(id)arg1 ;
-(void)groupViewFrontPassDidFlip:(id)arg1 animated:(char)arg2 ;
-(char)groupViewShouldAllowPassResize:(id)arg1 ;
-(void)groupViewFrontPassDidResize:(id)arg1 animated:(char)arg2 ;
-(void)groupView:(id)arg1 didUpdatePassView:(id)arg2 ;
-(void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2 ;
-(char)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2 ;
-(void)groupView:(id)arg1 resizeButtonPressedForPass:(id)arg2 ;
-(void)groupView:(id)arg1 didScrollToPassView:(id)arg2 ;
-(char)groupViewPassesGrowWhenFlipped:(id)arg1 ;
-(char)groupViewPassesGrowCenteredWhenFlipped:(id)arg1 ;
-(unsigned)groupViewPassesSuppressedContent:(id)arg1 ;
-(id)groupViewReusablePassViewQueue:(id)arg1 ;
-(int)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1 ;
-(CGRect)groupView:(id)arg1 targetPageControlFrameForProposedFrame:(CGRect)arg2 ;
-(void)reloadGroupViewAtIndex:(unsigned)arg1 ;
-(char)pileSuppressed;
-(void)_updateContentSizeAndLayout:(char)arg1 ;
-(unsigned)_tablePresentationNumberOfCellsBeforeHeaderHidden;
-(void)_updatePositionForGroupView:(id)arg1 toPresentationState:(int)arg2 withSpringFactory:(id)arg3 ;
-(void)paymentDeviceDidEnterRestrictedMode;
-(void)paymentDeviceDidLeaveRestrictedMode;
-(void)paymentDeviceDidBecomeAvailable;
-(void)paymentDeviceDidBecomeUnavailable;
-(char)footerSuppressed;
-(void)scrollUpTest;
-(void)scrollDownTest;
-(void)scrollNext;
-(void)testGroupSelection;
-(void)testGoModal;
-(void)testFlipToFront;
-(void)testFlipToBack;
-(void)beginScrollCardListTest;
-(void)beginSelectCardTest;
-(void)beginFlipCardTest;
-(void)gotoBaseTestState;
-(void)setDatasource:(id<PKPassGroupStackViewDatasource>)arg1 ;
-(id<PKPassGroupStackViewDatasource>)datasource;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)reloadData;
-(void)layoutSubviews;
-(CGSize)_contentSize;
-(void)_stopAutoscrollTimer;
-(void)_autoscrollForReordering:(id)arg1 ;
-(void)setCurrentPageIndicatorTintColor:(UIColor *)arg1 ;
-(void)setPageIndicatorTintColor:(UIColor *)arg1 ;
-(UIColor *)currentPageIndicatorTintColor;
-(UIColor *)pageIndicatorTintColor;
-(int)presentationState;
@end

