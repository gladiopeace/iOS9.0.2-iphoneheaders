/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MTCollectionListViewController.h>
#import <Podcasts/MTSectionHeaderViewDelegate.h>
#import <Podcasts/MTReachabilityObserver.h>
#import <Podcasts/MTActionControllerDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Podcasts/MTEpisodeCollectionViewCellDelegate.h>

@class UISearchController, UIRefreshControl, NSString;

@interface MTEpisodeCollectionViewController : MTCollectionListViewController <MTSectionHeaderViewDelegate, MTReachabilityObserver, MTActionControllerDelegate, UICollectionViewDelegateFlowLayout, MTEpisodeCollectionViewCellDelegate> {

	char _needsScrollAdjust;
	double _lastDownloadUpdate;
	char _cellularReachable;
	UISearchController* _searchController;
	char _showsArtworkInCells;
	unsigned _cellStyle;
	UIRefreshControl* _mt_refreshControl;
	int _refreshControlState;
	NSString* _expandedEpisodeUuid;
	UIEdgeInsets __layoutMargins;

}

@property (assign,nonatomic) char showsArtworkInCells;                                                       //@synthesize showsArtworkInCells=_showsArtworkInCells - In the implementation block
@property (assign,nonatomic) unsigned cellStyle;                                                             //@synthesize cellStyle=_cellStyle - In the implementation block
@property (setter=mt_setRefreshControl:,nonatomic,retain) UIRefreshControl * mt_refreshControl;              //@synthesize mt_refreshControl=_mt_refreshControl - In the implementation block
@property (assign,nonatomic) int refreshControlState;                                                        //@synthesize refreshControlState=_refreshControlState - In the implementation block
@property (nonatomic,retain) NSString * expandedEpisodeUuid;                                                 //@synthesize expandedEpisodeUuid=_expandedEpisodeUuid - In the implementation block
@property (assign,nonatomic) UIEdgeInsets _layoutMargins;                                                    //@synthesize _layoutMargins=__layoutMargins - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)sizingCellClass;
-(void)didEndRefreshing;
-(id)initWithCompositeFetchedResultsController:(id)arg1 ;
-(void)nowPlayingItemChanged:(id)arg1 ;
-(void)mt_setRefreshControl:(id)arg1 ;
-(void)registerCollectionViewClasses;
-(void)set_layoutMargins:(UIEdgeInsets)arg1 ;
-(void)dismissActionSheetsAndPopovers;
-(void)updateActionSheetsAndPopovers;
-(UIRefreshControl *)mt_refreshControl;
-(void)refreshControlStateMovedToIdle;
-(void)refreshControlStateMovedToRefreshing;
-(void)refreshControlStateMovedToEnding;
-(void)updateCellStyle;
-(char)showsArtworkInCells;
-(void)setExpandedEpisodeUuid:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)updateCellSizesWithSize:(CGSize)arg1 ;
-(NSString *)expandedEpisodeUuid;
-(id)indexPathForEpisodeUuid:(id)arg1 ;
-(void)setExpandedEpisodeUuid:(NSString *)arg1 ;
-(void)dismissSwipeToDeleteMode;
-(void)collapseCollectionViewCell:(id)arg1 ;
-(void)expandCollectionViewCell:(id)arg1 ;
-(void)toggleExpansionForEpisodeUuid:(id)arg1 ;
-(void)playEpisodeAtIndexPath:(id)arg1 ;
-(UIEdgeInsets)_layoutMarginsForViewWidth:(float)arg1 ;
-(UIEdgeInsets)_layoutMargins;
-(UIEdgeInsets)contentInsetsForSectionHeaderView:(id)arg1 ;
-(void)reachabilityChangedFrom:(char)arg1 to:(char)arg2 ;
-(void)didPerformActionInSheet:(id)arg1 ;
-(void)cell:(id)arg1 moreButtonTapped:(id)arg2 ;
-(void)cellDidChangeSize:(id)arg1 ;
-(unsigned)sectionTypeForIndexPath:(id)arg1 ;
-(void)setShowsArtworkInCells:(char)arg1 ;
-(void)_willUpdateCollectionView:(id)arg1 ;
-(char)shouldCalculateDynamicHeightForIndexPath:(id)arg1 ;
-(id)reuseIdentifierForItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg1 configureCell:(id)arg2 withObject:(id)arg3 atIndexPath:(id)arg4 ;
-(float)estimatedCellHeightForWidth:(float)arg1 ;
-(void)selectedItemAtIndexPath:(id)arg1 ;
-(void)deselectedItemAtIndexPath:(id)arg1 ;
-(void)scrollToLatestIfNeeded:(char)arg1 ;
-(void)markSelectedItems:(char)arg1 ;
-(void)markSelectedItemsAsSaved:(char)arg1 ;
-(id)editingToolbarItems;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(char)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(int)refreshControlState;
-(void)beginRefreshing;
-(void)endRefreshing;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setNumberOfColumns:(unsigned)arg1 ;
-(void)setRefreshControlState:(int)arg1 ;
-(unsigned)cellStyle;
-(void)setCellStyle:(unsigned)arg1 ;
@end

