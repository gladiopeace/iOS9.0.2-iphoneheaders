/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <MobileCal/ListViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>

@class NSTimer, UISearchBar, NSString;

@interface SearchResultsViewController : ListViewController <UIScrollViewDelegate, UIViewControllerPreviewingDelegate_Private, UISearchResultsUpdating, UISearchBarDelegate> {

	NSTimer* _timer;
	char _showFilteredData;
	char _pendingUpdate;
	UISearchBar* _searchBar;

}

@property (assign,nonatomic,__weak) UISearchBar * searchBar;              //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)noContentStringForListTableView:(id)arg1 ;
-(char)showFilteredData;
-(id)backButtonTitleForEventDetails;
-(void)scrollToDate:(id)arg1 animated:(char)arg2 ;
-(char)shouldUpdateModelSelectedDate;
-(void)setShowFilteredData:(char)arg1 ;
-(void)_searchResultsUpdated:(id)arg1 ;
-(void)_updateFilterState;
-(void)_updateTableAlpha;
-(void)_setContentInsets;
-(void)_refreshView;
-(void)beginSearch:(id)arg1 ;
-(void)_eventStoreChanged:(id)arg1 ;
-(char)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1 ;
-(void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(char)arg3 ;
-(void)eventViewController:(id)arg1 requestsDismissalOfEditViewController:(id)arg2 ;
-(char)eventViewControllerShouldHideInlineEditButton;
-(void)_setSearchString:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillLayoutSubviews;
-(int)positionForBar:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(UISearchBar *)searchBar;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(CGRect)_searchBar:(id)arg1 proposedSearchFieldFrame:(CGRect)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)cancelTimer;
@end

