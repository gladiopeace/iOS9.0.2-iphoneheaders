/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>
#import <MobileSafari/CloudTabTableDelegate.h>
#import <libobjc.A.dylib/_UIBasicAnimationFactory.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol TabOverviewDelegate;
@class CADisplayLink, TabOverviewInterpolatedLocation, NSArray, UIView, UIPanGestureRecognizer, HighlightRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, TabOverviewItem, CloudTabItemView, ReorderingAutoscroller, UIButton, GradientView, UISearchBar, NSIndexSet, NSTimer, TabExplanationView, NSString;

@interface TabOverview : UIView <CloudTabTableDelegate, _UIBasicAnimationFactory, UIGestureRecognizerDelegate, UISearchBarDelegate> {

	CADisplayLink* _displayLink;
	TabOverviewInterpolatedLocation* _interpolatedLocation;
	NSArray* _displayedItems;
	char _displayedItemsNeedUpdate;
	UIView* _borrowedContentView;
	UIPanGestureRecognizer* _panRecognizer;
	HighlightRecognizer* _pressRecognizer;
	UILongPressGestureRecognizer* _reorderRecognizer;
	UIPanGestureRecognizer* _tabCloseRecognizer;
	UITapGestureRecognizer* _tapRecognizer;
	TabOverviewItem* _activeItem;
	TabOverviewItem* _pressedItem;
	TabOverviewItem* _visiblyCenteredItem;
	TabOverviewInterpolatedLocation* _cloudTabsLocation;
	NSArray* _cloudTabDevices;
	NSArray* _cloudTabTables;
	float _cloudTabsHeight;
	CloudTabItemView* _editedCloudTabItemView;
	CGPoint _lastPanTranslation;
	ReorderingAutoscroller* _reorderingAutoscroller;
	TabOverviewItem* _reorderingItem;
	CGPoint _reorderOffset;
	char _reorderOffsetNeedsReset;
	SCD_Struct_Ta1 _reorderStartLocation;
	CGPoint _reorderStartOffset;
	float _swipeCloseTranslation;
	TabOverviewItem* _swipeClosingItem;
	TabOverviewItem* _deferredClosingItem;
	char _presented;
	char _dismissing;
	char _dragging;
	char _pinching;
	char _horizontalBounceEnabled;
	char _verticalBounceEnabled;
	char _shouldBounceToConstrainedLocation;
	UIView* _header;
	UIView* _divider;
	UIButton* _doneButton;
	GradientView* _gradientView;
	UISearchBar* _searchBar;
	UIButton* _searchCancelButton;
	UIView* _scrollingContainerView;
	NSIndexSet* _indexesMatchingSearch;
	char _shouldAnimateDimmingForSearch;
	char _suppressItemAnimation;
	NSIndexSet* _stackBaseIndexes;
	NSArray* _extraStackOffsetForRow;
	NSIndexSet* _alternateStackBaseIndexes;
	NSArray* _alternateExtraStackOffsetForRow;
	float _bottomKeyboardInset;
	TabOverviewItem* _interactivePresentationStartingItem;
	CGPoint _interactivePresentationLastOffset;
	double _interactivePresentationLastTimestamp;
	double _interactivePresentationLastLogScale;
	CGPoint _interactivePresentationVelocity;
	double _interactivePresentationZoomLockStartTime;
	CGPoint _interactivePresentationZoomLockOffset;
	float _lastLayoutWidth;
	NSTimer* _itemActivationTimer;
	TabExplanationView* _explanationView;
	char _explanationViewVisible;
	char _searchBarBackdropStyleUpdated;
	unsigned _fadingSnapshotCount;
	char _synchronizeClosingItems;
	char _defersActivation;
	char _showsPrivateBrowsingButton;
	NSArray* _items;
	NSArray* _alternateItems;
	int _alternateItemPosition;
	unsigned _maximumStackHeight;
	TabOverviewItem* _itemToActivate;
	id<TabOverviewDelegate> _delegate;
	UIButton* _addTabButton;
	UIButton* _privateBrowsingButton;

}

@property (nonatomic,copy) NSArray * items;                                        //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) NSArray * alternateItems;                           //@synthesize alternateItems=_alternateItems - In the implementation block
@property (nonatomic,readonly) int alternateItemPosition;                          //@synthesize alternateItemPosition=_alternateItemPosition - In the implementation block
@property (assign,nonatomic) char synchronizeClosingItems;                         //@synthesize synchronizeClosingItems=_synchronizeClosingItems - In the implementation block
@property (assign,nonatomic) unsigned maximumStackHeight;                          //@synthesize maximumStackHeight=_maximumStackHeight - In the implementation block
@property (nonatomic,readonly) char allowsInteractivePresentation; 
@property (nonatomic,retain) TabOverviewItem * itemToActivate;                     //@synthesize itemToActivate=_itemToActivate - In the implementation block
@property (assign,nonatomic) char defersActivation;                                //@synthesize defersActivation=_defersActivation - In the implementation block
@property (assign,nonatomic,__weak) id<TabOverviewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * addTabButton;                            //@synthesize addTabButton=_addTabButton - In the implementation block
@property (nonatomic,readonly) UIButton * privateBrowsingButton;                   //@synthesize privateBrowsingButton=_privateBrowsingButton - In the implementation block
@property (assign,nonatomic) char showsPrivateBrowsingButton;                      //@synthesize showsPrivateBrowsingButton=_showsPrivateBrowsingButton - In the implementation block
@property (nonatomic,readonly) char showsExplanationView; 
@property (nonatomic,readonly) float desiredSnapshotScale; 
@property (getter=_isSearching,nonatomic,readonly) char _searching; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentWithAnimation:(char)arg1 ;
-(void)dismissWithAnimation:(char)arg1 ;
-(void)_addTab;
-(void)_dismissWithItem:(id)arg1 ;
-(void)setMaximumStackHeight:(unsigned)arg1 ;
-(char)showsPrivateBrowsingButton;
-(void)setShowsPrivateBrowsingButton:(char)arg1 ;
-(UIButton *)privateBrowsingButton;
-(char)allowsInteractivePresentation;
-(void)beginInteractivePresentationWithOffset:(CGPoint)arg1 scale:(double)arg2 ;
-(void)updateInteractivePresentationWithOffset:(CGPoint)arg1 scale:(double)arg2 ;
-(void)endInteractivePresentation;
-(void)cancelInteractivePresentation;
-(void)cloudTabTable:(id)arg1 didSelectCloudTab:(id)arg2 ;
-(void)cloudTabTable:(id)arg1 didStartEditingTabItemView:(id)arg2 ;
-(void)cloudTabTable:(id)arg1 didFinishEditingTabItemView:(id)arg2 ;
-(void)cloudTabTable:(id)arg1 closeCloudTab:(id)arg2 onDevice:(id)arg3 ;
-(UIButton *)addTabButton;
-(void)_updateStacks;
-(void)_activateItemToActivate;
-(void)setItemToActivate:(TabOverviewItem *)arg1 ;
-(void)_activateItemToActivate:(id)arg1 ;
-(void)setShowsExplanationView:(char)arg1 animated:(char)arg2 ;
-(char)_shouldUseFastExplanationViewAnimation;
-(char)showsExplanationView;
-(void)setDefersActivation:(char)arg1 ;
-(void)enumerateItemsOrderedByVisibility:(/*^block*/id)arg1 ;
-(float)desiredSnapshotHeightForSize:(CGSize)arg1 ;
-(float)desiredSnapshotScale;
-(void)setCloudTabDevices:(id)arg1 ;
-(TabOverviewItem *)itemToActivate;
-(char)defersActivation;
-(void)_tap:(id)arg1 ;
-(void)setSynchronizeClosingItems:(char)arg1 ;
-(char)_isSearching;
-(void)setItems:(id)arg1 alternateItems:(id)arg2 atPosition:(int)arg3 ;
-(void)_pan:(id)arg1 ;
-(void)_press:(id)arg1 ;
-(void)_reorder:(id)arg1 ;
-(void)_tabClose:(id)arg1 ;
-(void)_cancelSearch;
-(void)_updateScrollBoundsForKeyboardNotification:(id)arg1 ;
-(void)_relinquishBorrowedContentView;
-(void)_updateBorrowedContentView;
-(void)_updateScrollBoundsForKeyboardInfo:(id)arg1 ;
-(void)_dismissWithItemAtCurrentDecelerationFactor:(id)arg1 ;
-(unsigned)_tabsPerRow;
-(float)_totalWidthOfItems:(id)arg1 ;
-(CGRect)_rectForItemLocation:(SCD_Struct_Ta2)arg1 ;
-(SCD_Struct_Ta2)_targetLocationForItemAtIndex:(unsigned)arg1 ofItems:(id)arg2 ;
-(id)_stackBaseIndexesForItems:(id)arg1 ;
-(unsigned)_layoutIndexForItemIndex:(unsigned)arg1 ofItems:(id)arg2 baseIndex:(unsigned*)arg3 ;
-(SCD_Struct_Ta2)_targetLocationForItemAtIndex:(unsigned)arg1 ofItems:(id)arg2 includingNewTabScale:(char)arg3 ;
-(float)_thumbnailScaleForItems:(id)arg1 ;
-(char)_isShowingStacks;
-(void)_setDismissing:(char)arg1 ;
-(SCD_Struct_Ta2)_constrainLocation:(SCD_Struct_Ta2)arg1 ;
-(CGRect)_scrollBounds;
-(float)_bottomEdgeOfTabs;
-(float)_contentHeightForCloudTabs;
-(SCD_Struct_Ta2)_constrainLocation:(SCD_Struct_Ta2)arg1 includingCloudTabs:(char)arg2 ;
-(SCD_Struct_Ta2)_targetLocationForItem:(id)arg1 inItems:(id)arg2 ;
-(void)_setPresented:(char)arg1 ;
-(void)_startClosingItem:(id)arg1 ;
-(void)_initializeIncomingItemIfNecessary:(id)arg1 fromItems:(id)arg2 oldItems:(id)arg3 atPosition:(int)arg4 ;
-(void)_removeItemThumbnailView:(id)arg1 ;
-(void)_updateIndexesMatchingSearch;
-(void)_close:(id)arg1 ;
-(char)_isClosingLastItem;
-(CGPoint)_offsetForRubberbandOffset:(CGPoint)arg1 ;
-(CGPoint)_rubberbandOffsetForOffset:(CGPoint)arg1 ;
-(char)_shouldDimItemsForSearch;
-(id)_itemAtPoint:(CGPoint)arg1 ;
-(SCD_Struct_Ta2)_targetLocationForReorderingItem;
-(id)_closestItemToLocation:(SCD_Struct_Ta2)arg1 ;
-(id)_baseOfNonTrivialStackWithItem:(id)arg1 inItems:(id)arg2 ;
-(SCD_Struct_Ta2)_targetStackLocationForItem:(id)arg1 ;
-(double)_currentScalePercentage;
-(id)_itemsContainingItem:(id)arg1 ;
-(SCD_Struct_Ta2)_applyItemPosition:(int)arg1 toLocation:(SCD_Struct_Ta2)arg2 ;
-(double)_snapshotFadePercentage;
-(void)_updateDisplayedItems;
-(unsigned)_cloudTabDevicesPerRow;
-(float)_widthForCloudTabTableAtIndex:(unsigned)arg1 ;
-(char)_wantsBorrowedContentView;
-(void)_beginPresentation;
-(SCD_Struct_Ta2)_rescaleLocationByCentering:(SCD_Struct_Ta2)arg1 toLogScale:(double)arg2 ;
-(void)_updateSnapshotAlphaForPinchAnimated:(char)arg1 ;
-(id)_itemAtLayoutIndex:(unsigned)arg1 ;
-(id)_itemLeftOfItem:(id)arg1 ;
-(id)_itemRightOfItem:(id)arg1 ;
-(id)_itemAboveItem:(id)arg1 ;
-(id)_itemBelowItem:(id)arg1 ;
-(void)_endInteractivePresentationRestoringPreviousState:(char)arg1 ;
-(void)_updateExtraStackOffsets:(id*)arg1 baseIndexes:(id*)arg2 forItems:(id)arg3 ;
-(CGRect)_rectForItem:(id)arg1 ;
-(NSArray *)alternateItems;
-(int)alternateItemPosition;
-(char)synchronizeClosingItems;
-(unsigned)maximumStackHeight;
-(void)_updateDisplayLink;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<TabOverviewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<TabOverviewDelegate>)delegate;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_updatePanGesture;
-(CGSize)_contentSize;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)_displayLinkFired:(id)arg1 ;
-(void)_done;
@end

