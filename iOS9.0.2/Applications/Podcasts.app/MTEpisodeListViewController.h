/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTListViewController.h>
#import <Podcasts/MTSectionHeaderViewDelegate.h>
#import <Podcasts/MTEpisodeCellDelegate.h>
#import <Podcasts/MTActionControllerDelegate.h>

@protocol MTEpisodeListViewControllerDelegate;
@class UISearchController, NSString, UIRefreshControl;

@interface MTEpisodeListViewController : MTListViewController <MTSectionHeaderViewDelegate, MTEpisodeCellDelegate, MTActionControllerDelegate> {

	char _needsScrollAdjust;
	double _lastDownloadUpdate;
	char _cellularReachable;
	UISearchController* _searchController;
	char _viewSizeChangedWhileNotVisible;
	char _needsToFixUpHeaderInsets;
	float _cachedFixedRowHeight;
	CGSize _cachedExpandedRowSize;
	char _showsArtworkInCells;
	char _showFooterView;
	char _disablesEditWhileRefreshing;
	char _disablesPullToRefreshWhileEditing;
	id<MTEpisodeListViewControllerDelegate> _delegate;
	unsigned _cellStyle;
	NSString* _playingUuid;
	UIRefreshControl* _mt_refreshControl;
	int _refreshControlState;
	NSString* _expandedEpisodeUuid;
	UIEdgeInsets __layoutMargins;

}

@property (assign,nonatomic) char showsArtworkInCells;                                                       //@synthesize showsArtworkInCells=_showsArtworkInCells - In the implementation block
@property (assign,nonatomic,__weak) id<MTEpisodeListViewControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned cellStyle;                                                             //@synthesize cellStyle=_cellStyle - In the implementation block
@property (assign,nonatomic) char showFooterView;                                                            //@synthesize showFooterView=_showFooterView - In the implementation block
@property (nonatomic,copy,readonly) NSString * playingUuid;                                                  //@synthesize playingUuid=_playingUuid - In the implementation block
@property (assign,nonatomic) char disablesEditWhileRefreshing;                                               //@synthesize disablesEditWhileRefreshing=_disablesEditWhileRefreshing - In the implementation block
@property (assign,nonatomic) char disablesPullToRefreshWhileEditing;                                         //@synthesize disablesPullToRefreshWhileEditing=_disablesPullToRefreshWhileEditing - In the implementation block
@property (setter=mt_setRefreshControl:,nonatomic,retain) UIRefreshControl * mt_refreshControl;              //@synthesize mt_refreshControl=_mt_refreshControl - In the implementation block
@property (assign,nonatomic) int refreshControlState;                                                        //@synthesize refreshControlState=_refreshControlState - In the implementation block
@property (nonatomic,retain) NSString * expandedEpisodeUuid;                                                 //@synthesize expandedEpisodeUuid=_expandedEpisodeUuid - In the implementation block
@property (assign,nonatomic) UIEdgeInsets _layoutMargins;                                                    //@synthesize _layoutMargins=__layoutMargins - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didEndRefreshing;
-(id)newCellInstanceWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(id)initWithCompositeFetchedResultsController:(id)arg1 ;
-(void)nowPlayingItemChanged:(id)arg1 ;
-(void)mt_setRefreshControl:(id)arg1 ;
-(void)set_layoutMargins:(UIEdgeInsets)arg1 ;
-(void)dismissActionSheetsAndPopovers;
-(void)updateActionSheetsAndPopovers;
-(UIRefreshControl *)mt_refreshControl;
-(void)refreshControlStateMovedToIdle;
-(void)refreshControlStateMovedToRefreshing;
-(void)refreshControlStateMovedToEnding;
-(void)updateCellStyle;
-(char)showsArtworkInCells;
-(NSString *)expandedEpisodeUuid;
-(id)indexPathForEpisodeUuid:(id)arg1 ;
-(void)setExpandedEpisodeUuid:(NSString *)arg1 ;
-(void)dismissSwipeToDeleteMode;
-(void)toggleExpansionForEpisodeUuid:(id)arg1 ;
-(void)playEpisodeAtIndexPath:(id)arg1 ;
-(UIEdgeInsets)_layoutMarginsForViewWidth:(float)arg1 ;
-(UIEdgeInsets)_layoutMargins;
-(UIEdgeInsets)contentInsetsForSectionHeaderView:(id)arg1 ;
-(void)didPerformActionInSheet:(id)arg1 ;
-(void)cell:(id)arg1 moreButtonTapped:(id)arg2 ;
-(void)cellDidChangeSize:(id)arg1 ;
-(unsigned)sectionTypeForIndexPath:(id)arg1 ;
-(void)setShowsArtworkInCells:(char)arg1 ;
-(void)selectedItemAtIndexPath:(id)arg1 ;
-(void)scrollToLatestIfNeeded:(char)arg1 ;
-(void)markSelectedItems:(char)arg1 ;
-(void)markSelectedItemsAsSaved:(char)arg1 ;
-(id)editingToolbarItems;
-(void)refetchWithSortDescriptors:(id)arg1 animated:(char)arg2 ;
-(void)setShowFooterView:(char)arg1 ;
-(void)updateEstimatedRowHeight;
-(void)fixEmptyTextContainers;
-(void)_updateRowHeightsForEditingStateChange;
-(char)disablesPullToRefreshWhileEditing;
-(char)disablesEditWhileRefreshing;
-(void)transitionToState:(int)arg1 animated:(char)arg2 ;
-(char)primaryActionIsMarkForSwipeGestureAtIndexPath:(id)arg1 ;
-(id)markRowActionForIndexPath:(id)arg1 ;
-(id)deleteRowActionForIndexPath:(id)arg1 ;
-(char)hasMoreActionsForRowAtIndexPath:(id)arg1 ;
-(id)_moreRowAction;
-(void)showMoreActionSheetFromButton:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateMarkRowAction:(id)arg1 forEpisode:(id)arg2 ;
-(void)_updateRowHeightsForExpansionChange;
-(void)scrollToExpandedEpisodeAnimated:(char)arg1 ;
-(void)playEpisodeWithUUID:(id)arg1 ;
-(void)fixSectionHeaderInsetsIfNeeded;
-(char)isSwipingExpandedCell;
-(void)pauseEpisodeAtIndexPath:(id)arg1 ;
-(float)tableView:(id)arg1 headerSizeForIndexPath:(id)arg2 ;
-(char)showFooterView;
-(NSString *)playingUuid;
-(void)setDisablesEditWhileRefreshing:(char)arg1 ;
-(void)setDisablesPullToRefreshWhileEditing:(char)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)setDelegate:(id<MTEpisodeListViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id<MTEpisodeListViewControllerDelegate>)delegate;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2 ;
-(int)refreshControlState;
-(void)beginRefreshing;
-(void)endRefreshing;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)footerView;
-(void)setRefreshControlState:(int)arg1 ;
-(unsigned)cellStyle;
-(void)setCellStyle:(unsigned)arg1 ;
-(id)reuseIdentifierForRow:(id)arg1 ;
@end

