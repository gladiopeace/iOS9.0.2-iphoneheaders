/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTFetchedCollectionWithSectionsViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Podcasts/MTCollectionViewCellDelegate.h>

@protocol MTViewControllerEditingNotificationDelegate;
@class NSMutableDictionary, MTContentUnavailableView, UIButton, UINavigationItem, UIBarButtonItem, NSIndexPath, NSString, MTToolbar, MTCollectionViewFlowLayout, UICollectionViewCell, MTCollectionView, UIRefreshControl;

@interface MTCollectionListViewController : MTFetchedCollectionWithSectionsViewController <UICollectionViewDelegateFlowLayout, MTCollectionViewCellDelegate> {

	NSMutableDictionary* _resultsChangedBlocks;
	MTContentUnavailableView* _emptyOverlay;
	UIButton* _editButton;
	UIButton* _downloadButton;
	UINavigationItem* _navItem;
	char _hidesFooterWhenEmpty;
	char _showMarkButtonInsteadOfRemoveButton;
	char _inSwipeToDeleteMode;
	UIBarButtonItem* _doneButtonItem;
	UIBarButtonItem* _markButtonItem;
	UIBarButtonItem* _saveButtonItem;
	UIBarButtonItem* _deleteButtonItem;
	NSIndexPath* _expandedIndexPath;
	int _state;
	NSString* _emptyListMessage;
	id<MTViewControllerEditingNotificationDelegate> _editingNotificationDelegate;
	MTToolbar* _toolbarHeader;
	float _expandedSectionBottomInset;
	int _expandedSection;
	MTCollectionViewFlowLayout* _transitioningToFlowLayout;
	UIButton* _doneButton;
	UIButton* _markButton;
	UIButton* _saveButton;
	UIButton* _deleteButton;
	UICollectionViewCell* _sizingCell;

}

@property (assign,nonatomic) unsigned numberOfColumns; 
@property (nonatomic,retain) NSIndexPath * expandedIndexPath;                                                //@synthesize expandedIndexPath=_expandedIndexPath - In the implementation block
@property (nonatomic,retain) MTCollectionView * collectionView; 
@property (nonatomic,retain) UIRefreshControl * refreshControl; 
@property (nonatomic,readonly) int state;                                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) NSString * emptyListMessage;                                                      //@synthesize emptyListMessage=_emptyListMessage - In the implementation block
@property (assign,nonatomic) char hidesFooterWhenEmpty;                                                      //@synthesize hidesFooterWhenEmpty=_hidesFooterWhenEmpty - In the implementation block
@property (assign,nonatomic) char showMarkButtonInsteadOfRemoveButton;                                       //@synthesize showMarkButtonInsteadOfRemoveButton=_showMarkButtonInsteadOfRemoveButton - In the implementation block
@property (assign,nonatomic) char inSwipeToDeleteMode;                                                       //@synthesize inSwipeToDeleteMode=_inSwipeToDeleteMode - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * doneButtonItem;                                             //@synthesize doneButtonItem=_doneButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * markButtonItem;                                             //@synthesize markButtonItem=_markButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * saveButtonItem;                                             //@synthesize saveButtonItem=_saveButtonItem - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * deleteButtonItem;                                           //@synthesize deleteButtonItem=_deleteButtonItem - In the implementation block
@property (__weak) id<MTViewControllerEditingNotificationDelegate> editingNotificationDelegate;              //@synthesize editingNotificationDelegate=_editingNotificationDelegate - In the implementation block
@property (nonatomic,retain) MTToolbar * toolbarHeader;                                                      //@synthesize toolbarHeader=_toolbarHeader - In the implementation block
@property (assign,nonatomic) float expandedSectionBottomInset;                                               //@synthesize expandedSectionBottomInset=_expandedSectionBottomInset - In the implementation block
@property (assign,nonatomic) int expandedSection;                                                            //@synthesize expandedSection=_expandedSection - In the implementation block
@property (nonatomic,retain) MTCollectionViewFlowLayout * transitioningToFlowLayout;                         //@synthesize transitioningToFlowLayout=_transitioningToFlowLayout - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                          //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIButton * markButton;                                                          //@synthesize markButton=_markButton - In the implementation block
@property (nonatomic,retain) UIButton * saveButton;                                                          //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain) UIButton * deleteButton;                                                        //@synthesize deleteButton=_deleteButton - In the implementation block
@property (nonatomic,retain) UICollectionViewCell * sizingCell;                                              //@synthesize sizingCell=_sizingCell - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)sizingCellClass;
+(Class)flowLayoutClass;
-(void)setEditingNotificationDelegate:(id<MTViewControllerEditingNotificationDelegate>)arg1 ;
-(char)inSwipeToDeleteMode;
-(void)cellDidPressDelete:(id)arg1 ;
-(void)cellDidPressMore:(id)arg1 ;
-(id<MTViewControllerEditingNotificationDelegate>)editingNotificationDelegate;
-(id)initWithCompositeFetchedResultsController:(id)arg1 ;
-(CGSize)currentEstimatedCellSize;
-(NSIndexPath *)expandedIndexPath;
-(void)refreshBarButtons;
-(void)updateMarkButtons;
-(void)updateCellSizesWithSize:(CGSize)arg1 ;
-(void)setExpandedIndexPath:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)collapseCollectionViewCell:(id)arg1 ;
-(void)expandCollectionViewCell:(id)arg1 ;
-(UIBarButtonItem *)markButtonItem;
-(UIBarButtonItem *)saveButtonItem;
-(UIBarButtonItem *)deleteButtonItem;
-(char)shouldCalculateDynamicHeightForIndexPath:(id)arg1 ;
-(float)estimatedCellHeightForWidth:(float)arg1 ;
-(void)selectedItemAtIndexPath:(id)arg1 ;
-(void)deselectedItemAtIndexPath:(id)arg1 ;
-(void)markSelectedItems:(char)arg1 ;
-(void)markSelectedItemsAsSaved:(char)arg1 ;
-(id)editingToolbarItems;
-(void)setInSwipeToDeleteMode:(char)arg1 ;
-(void)setEmptyListMessage:(NSString *)arg1 ;
-(void)transitionToState:(int)arg1 animated:(char)arg2 ;
-(void)updateCellSizes;
-(void)updateListStateAnimated:(char)arg1 ;
-(CGPoint)initialLayoutContentOffset;
-(id)leftButtonItems;
-(NSString *)emptyListMessage;
-(char)hasBulkMarkAsUnplayedAction;
-(id)downloadButton;
-(void)setExpandedIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 compositeFetchedResultsController:(id)arg2 ;
-(void)updateNavigationItemsForEditing:(char)arg1 ;
-(void)calculateSectionInsetDueToExpansion;
-(void)setExpandedSectionBottomInset:(float)arg1 ;
-(void)setExpandedSection:(int)arg1 ;
-(void)setTransitioningToFlowLayout:(MTCollectionViewFlowLayout *)arg1 ;
-(float)calculateCellWidthForSize:(CGSize)arg1 ;
-(MTCollectionViewFlowLayout *)transitioningToFlowLayout;
-(int)expandedSection;
-(float)expandedSectionBottomInset;
-(UICollectionViewCell *)sizingCell;
-(void)transitionControlsForEditing:(char)arg1 animated:(char)arg2 ;
-(UIButton *)markButton;
-(char)isEntireSelectionSaved;
-(void)setEditingToolbarHidden:(char)arg1 animated:(char)arg2 ;
-(id)rightEditingItems;
-(id)leftEditingItems;
-(id)toolbarButtonItems;
-(MTToolbar *)toolbarHeader;
-(id)emptyOverlay;
-(char)hidesFooterWhenEmpty;
-(float)calculateCellWidthForCurrentBounds;
-(char)isEditingToolbarHidden;
-(void)finishEditing:(id)arg1 ;
-(void)removeSelectedItems:(id)arg1 ;
-(void)markButtonTapped:(id)arg1 ;
-(void)downloadAll:(id)arg1 ;
-(id)markAsPlayedTitleForCount:(int)arg1 ;
-(id)markAsUnplayedTitleForCount:(int)arg1 ;
-(char)isSelectedMediaTypeVideo;
-(void)_didUpdateCollectionView:(id)arg1 ;
-(void)setHidesFooterWhenEmpty:(char)arg1 ;
-(char)showMarkButtonInsteadOfRemoveButton;
-(void)setShowMarkButtonInsteadOfRemoveButton:(char)arg1 ;
-(void)setToolbarHeader:(MTToolbar *)arg1 ;
-(void)setMarkButton:(UIButton *)arg1 ;
-(void)setSizingCell:(UICollectionViewCell *)arg1 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned)numberOfColumns;
-(int)state;
-(id)navigationItem;
-(void)setState:(int)arg1 ;
-(id)collectionViewLayout;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(char)hasItems;
-(void)setRefreshControl:(UIRefreshControl *)arg1 ;
-(UIRefreshControl *)refreshControl;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(void)setNumberOfColumns:(unsigned)arg1 ;
-(CGPoint)_collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(CGPoint)arg2 ;
-(id)_newCollectionViewWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)saveButtonTapped:(id)arg1 ;
-(id)rightButtonItems;
-(UIButton *)saveButton;
-(UIButton *)deleteButton;
-(void)setSaveButton:(UIButton *)arg1 ;
-(void)setDeleteButton:(UIButton *)arg1 ;
-(void)editButtonTapped:(id)arg1 ;
-(id)editButton;
-(UIBarButtonItem *)doneButtonItem;
-(void)collectionView:(id)arg1 didEndEditingItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willBeginEditingItemAtIndexPath:(id)arg2 ;
@end

