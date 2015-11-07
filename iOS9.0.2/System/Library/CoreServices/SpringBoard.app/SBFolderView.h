/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <SpringBoard/SBIconListPageControlDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBIconScrollViewDelegate.h>

@protocol SBFolderViewDelegate;
@class NSMutableArray, NSMutableSet, SBIconListView, SBIconViewMap, SBAppStatusBarSettingsAssertion, SBIconListPageControl, SBIconScrollView, SBFolderTitleTextField, UIView, SBFakeStatusBarView, UISwipeGestureRecognizer, UITapGestureRecognizer, SBFolder, _UILegibilitySettings, NSArray, NSString;

@interface SBFolderView : UIView <SBIconListPageControlDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, SBIconScrollViewDelegate> {

	NSMutableArray* _iconListViews;
	NSMutableSet* _scrollingDisabledReasons;
	SBIconListView* _rotatingIconList;
	int _minVisibleListViewIndex;
	int _maxVisibleListViewIndex;
	int _minAnimatingListViewIndex;
	int _maxAnimatingListViewIndex;
	int _disableUpdatingCurrentIconListCount;
	int _firstDisplayedColumnOnCurrentList;
	char _animatedScrolling;
	char _scalingViewIsBorrowed;
	SBIconViewMap* _viewMap;
	NSMutableArray* _scrollFrames;
	unsigned _scrollFrameCount;
	SBAppStatusBarSettingsAssertion* _hideStatusBarAssertion;
	SBIconListPageControl* _pageControl;
	SBIconScrollView* _scrollView;
	SBFolderTitleTextField* _titleTextField;
	UIView* _scalingView;
	SBFakeStatusBarView* _reachabilityStatusBar;
	UISwipeGestureRecognizer* _swipeToCancelReachabilityGestureRecognizer;
	UISwipeGestureRecognizer* _swipeToRevealNotificationCenterGestureRecognizer;
	UITapGestureRecognizer* _tapToCancelReachabilityGestureRecognizer;
	char _isEditing;
	char _isScrolling;
	int _currentPageIndex;
	float _statusBarHeight;
	id<SBFolderViewDelegate> _delegate;
	SBFolder* _folder;
	int _orientation;
	_UILegibilitySettings* _legibilitySettings;
	int _animatingToOrientation;
	UIEdgeInsets _reachabilityStatusBarEdgeInsets;

}

@property (assign,nonatomic) id<SBFolderViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SBFolder * folder;                                         //@synthesize folder=_folder - In the implementation block
@property (getter=isEditing,nonatomic,readonly) char editing;                           //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,getter=isScrolling,nonatomic) char scrolling;                         //@synthesize isScrolling=_isScrolling - In the implementation block
@property (assign,nonatomic) int orientation;                                           //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,readonly) int currentPageIndex;                                    //@synthesize currentPageIndex=_currentPageIndex - In the implementation block
@property (nonatomic,copy,readonly) NSArray * iconListViews;                            //@synthesize iconListViews=_iconListViews - In the implementation block
@property (nonatomic,readonly) unsigned iconListViewCount; 
@property (nonatomic,retain,readonly) SBIconViewMap * viewMap; 
@property (assign,nonatomic) float statusBarHeight;                                     //@synthesize statusBarHeight=_statusBarHeight - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) int animatingToOrientation;                                //@synthesize animatingToOrientation=_animatingToOrientation - In the implementation block
@property (assign,nonatomic) UIEdgeInsets reachabilityStatusBarEdgeInsets;              //@synthesize reachabilityStatusBarEdgeInsets=_reachabilityStatusBarEdgeInsets - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned)_countOfAdditionalPagesToKeepVisibleInOneDirection;
+(Class)_scrollViewClass;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)handleRevealNotificationCenterGesture:(id)arg1 ;
-(id)currentIconListView;
-(SBIconViewMap *)viewMap;
-(id)initWithFolder:(id)arg1 orientation:(int)arg2 viewMap:(id)arg3 context:(id)arg4 ;
-(unsigned)iconListViewCount;
-(void)resetIconListViews;
-(void)updateIconListViews;
-(NSArray *)iconListViews;
-(void)_updateIconListFrames;
-(void)_updatePageControlToIndex:(int)arg1 ;
-(void)_setScrollingDisabled:(char)arg1 forReason:(id)arg2 ;
-(id)_newPageControl;
-(float)_offsetToCenterPageControlInSpaceForPageControl;
-(void)prepareToOpen;
-(void)setPageControlHidden:(char)arg1 ;
-(id)iconListViewAtIndex:(unsigned)arg1 ;
-(void)layoutIconLists:(double)arg1 domino:(char)arg2 forceRelayout:(char)arg3 ;
-(void)noteUserIsInteractingWithIcons;
-(void)handleReachabilityActivated:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)borrowScalingView;
-(void)returnScalingView;
-(void)fadeContentForMagnificationFraction:(float)arg1 ;
-(void)resetContentOffsetToCurrentPage;
-(void)pageControl:(id)arg1 didRecieveTouchInDirection:(int)arg2 ;
-(char)_scrollViewThinksItsScrolling;
-(void)didAnimate;
-(id)_legibilitySettingsWithPrimaryColor:(id)arg1 ;
-(void)prepareForZoomAnimation;
-(void)cleanUpAfterZoomAnimation;
-(char)doesPageContainIconListView:(int)arg1 ;
-(void)willAnimateWithSettings:(id)arg1 ;
-(void)setIconPageIndicatorImageSetCache:(id)arg1 ;
-(float)_titleFontSize;
-(void)_addIconListView:(id)arg1 ;
-(void)_removeIconListView:(id)arg1 ;
-(unsigned)_countOfAdditionalPagesToKeepAnimatingInOneDirection;
-(CGRect)_frameForScalingView;
-(void)_updateIconListContainment:(id)arg1 atIndex:(unsigned)arg2 ;
-(id)iconListViewAtPoint:(CGPoint)arg1 ;
-(void)_updateScalingViewFrame;
-(void)repositionForReachabilityActivated:(char)arg1 animated:(char)arg2 actions:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(CGRect)_iconListFrameForPageRect:(CGRect)arg1 atIndex:(unsigned)arg2 ;
-(char)locationCountsAsInsideFolder:(CGPoint)arg1 ;
-(char)_showsTitle;
-(void)fadeContentForMinificationFraction:(float)arg1 ;
-(float)reachabilityYOffset;
-(void)_disableUserInteractionBeforeSignificantAnimation;
-(void)_enableUserInteractionAfterSignificantAnimation;
-(void)_updateEditingStateAnimated:(char)arg1 ;
-(void)tearDownListViews;
-(char)_updatesWallpaperRelativeCenter;
-(void)updateIconListIndexAndVisibility:(char)arg1 ;
-(int)_pageIndexForOffset:(float)arg1 ;
-(float)_pageWidth;
-(float)_scrollOffsetForFirstListView;
-(float)_scrollOffsetForPageAtIndex:(int)arg1 ;
-(unsigned)_minusPageCount;
-(void)_purgeListViews;
-(void)_setAnimatedScrolling:(char)arg1 ;
-(void)_endScrollingTest;
-(void)_endSpotlightScrollingTest;
-(void)_setCurrentPageIndex:(int)arg1 deferringPageControlUpdate:(char)arg2 ;
-(char)_isValidPageIndex:(int)arg1 ;
-(void)_setCurrentPageIndex:(int)arg1 ;
-(id)_iconListViewAtIndex:(unsigned)arg1 ;
-(id)_createIconListViewForList:(id)arg1 ;
-(void)_addIconListViewsForModels:(id)arg1 ;
-(id)_iconListViewForList:(id)arg1 ;
-(CGSize)_scrollViewContentSize;
-(void)_resetIconListViews;
-(void)_updateIconListViews;
-(void)updateIconListIndexAndVisibility;
-(char)_shouldDisableUpdatingCurrentIconList;
-(int)lowestVisibleIconListIndexAndColumn:(int*)arg1 columnsOnScreen:(int*)arg2 totalLists:(unsigned)arg3 columnsPerList:(unsigned)arg4 ;
-(void)_pushDisableUpdateCurrentIconListCount;
-(id)_currentIconListView;
-(void)_popDisableUpdateCurrentIconListCount;
-(void)_setFolderName:(id)arg1 ;
-(void)_updateTitleLegibilitySettings;
-(void)iconScrollViewWillCancelTouchTracking:(id)arg1 ;
-(void)iconScrollViewDidCancelTouchTracking:(id)arg1 ;
-(void)iconScrollView:(id)arg1 willSetContentOffset:(inout CGPoint*)arg2 ;
-(CGRect)scalingViewFrame;
-(char)_hasMinusPages;
-(void)noteUserHasGrabbedIcon:(char)arg1 ;
-(void)cleanupAfterClosing;
-(int)animatingToOrientation;
-(void)setAnimatingToOrientation:(int)arg1 ;
-(UIEdgeInsets)reachabilityStatusBarEdgeInsets;
-(void)setReachabilityStatusBarEdgeInsets:(UIEdgeInsets)arg1 ;
-(char)setCurrentPageIndex:(int)arg1 animated:(char)arg2 ;
-(id)iconListViewForTouch:(id)arg1 ;
-(void)_currentPageIndexDidChange;
-(void)_layoutSubviews;
-(void)setDelegate:(id<SBFolderViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id<SBFolderViewDelegate>)delegate;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(float)statusBarHeight;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(id)scrollView;
-(id)_interactionTintColor;
-(void)willMoveToWindow:(id)arg1 ;
-(CGSize)scrollView:(id)arg1 contentSizeForZoomScale:(float)arg2 withProposedSize:(CGSize)arg3 ;
-(void)willRotateToInterfaceOrientation:(int)arg1 ;
-(char)isEditing;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(char)isScrolling;
-(void)_orientationDidChange:(int)arg1 ;
-(int)currentPageIndex;
-(void)setStatusBarHeight:(float)arg1 ;
-(SBFolder *)folder;
-(void)setFolder:(SBFolder *)arg1 ;
-(void)handleCancelReachabilityGesture:(id)arg1 ;
-(void)setScrolling:(char)arg1 ;
@end

