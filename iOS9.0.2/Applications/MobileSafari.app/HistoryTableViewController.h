/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MobileSafari/BookmarksToolbarItemProvider.h>
#import <MobileSafari/HistoryTableViewDataSourceDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <MobileSafari/BookmarksPanelStateRestoring.h>

@protocol HistoryTableViewControllerDelegate;
@class UIBarButtonItem, NSTimer, SafariClearBrowsingDataController, HistoryTableViewDataSource, NSString;

@interface HistoryTableViewController : UITableViewController <BookmarksToolbarItemProvider, HistoryTableViewDataSourceDelegate, UISearchBarDelegate, BookmarksPanelStateRestoring> {

	UIBarButtonItem* _clearHistoryButton;
	UIBarButtonItem* _doneBarButtonItem;
	NSTimer* _saveChangesToCloudHistoryTimer;
	SafariClearBrowsingDataController* _clearDataController;
	HistoryTableViewDataSource* _historyDataSource;
	id<HistoryTableViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HistoryTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * collectionType; 
-(id)currentStateDictionary;
-(char)restoreStateWithDictionary:(id)arg1 ;
-(float)currentScrollPosition;
-(void)restoreScrollPosition:(float)arg1 ;
-(NSString *)collectionType;
-(void)updateClearHistoryButtonEnable;
-(id)bookmarksRightBarButtonItem;
-(id)bookmarksNavigationController;
-(id)_clearHistoryBarButtonItem;
-(void)_clearHistory;
-(id)_clearHistoryAlertMessage;
-(void)_saveChangesToCloudHistorySoon;
-(void)_saveChangesToCloudHistory;
-(void)historyTableViewDataSourceDidLoadContent:(id)arg1 ;
-(void)historyTableViewDataSourceWillChangeContent:(id)arg1 ;
-(void)historyTableViewDataSourceDidChangeContent:(id)arg1 ;
-(void)historyTableViewDataSource:(id)arg1 didChangeSectionAtIndex:(int)arg2 forChangeType:(int)arg3 ;
-(void)historyTableViewDataSource:(id)arg1 didChangeRowAtIndexPath:(id)arg2 forChangeType:(int)arg3 ;
-(id)safari_tableViewScrollPositionSaveIdentifier;
-(id)_doneBarButtonItem;
-(void)setDelegate:(id<HistoryTableViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<HistoryTableViewControllerDelegate>)delegate;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)_endEditing;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end
