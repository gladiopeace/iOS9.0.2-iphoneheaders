/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>
#import <iBooks/BKCollectionsListViewController.h>
@class NSManagedObjectContext;


@protocol BKCollectionsListViewController
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) char anyChanges; 
@property (assign,nonatomic) id<BKCollectionsListViewDelegate> delegate; 
@property (nonatomic,retain) id<BKLibraryCollection> selectedCollection; 
@required
-(void)setSelectedCollection:(id)arg1;
-(char)anyChanges;
-(id)initWithSelectedBooks:(id)arg1;
-(id<BKLibraryCollection>)selectedCollection;
-(void)setDelegate:(id)arg1;
-(id<BKCollectionsListViewDelegate>)delegate;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(id)arg1;

@end


@protocol BKLibraryCollection, BKCollectionsListViewDelegate;
@class NSManagedObjectContext, NSArray, NSMutableArray, UITableView, UIBarButtonItem, UIButton, NSString, UITextField, BKCollection, NSIndexPath, NSSet, UILabel, UISwitch;

@interface BKCollectionsListViewController : BKViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, BKCollectionsListViewController> {

	NSManagedObjectContext* _managedObjectContext;
	NSArray* _prefixCollections;
	NSMutableArray* _collections;
	char _textEditing;
	char _sortNeedsSave;
	char _mocNeedsSave;
	UITableView* _tableView;
	id<BKLibraryCollection> _selectedCollection;
	UIBarButtonItem* _navBarCloseButtonItem;
	UIBarButtonItem* _navBarStartEditButtonItem;
	UIBarButtonItem* _navBarStopEditButtonItem;
	UIButton* _tableButtonLabeledNew;
	NSString* _textEntryProgress;
	UITextField* _textEntryField;
	BKCollection* _textEntryCollection;
	NSIndexPath* _textEntryIndexPath;
	NSIndexPath* _postKeyboardIndexPath;
	NSArray* _books;
	NSSet* _bookContentTypes;
	char _endTextEditingMeansEndEditMode;
	char _suppressEditControlsForNewCollection;
	char _endEditingMeansTableReload;
	char _showingPurchases;
	char _isInPopover;
	char _wantsAddCollectionRow;
	id<BKCollectionsListViewDelegate> _delegate;
	UILabel* _showallPurchasesLabel;
	UISwitch* _showAllPurchasesSwitch;
	UILabel* _moveCollectionHeaderLabel;

}

@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;                  //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) char anyChanges; 
@property (assign,nonatomic) char isInPopover;                                               //@synthesize isInPopover=_isInPopover - In the implementation block
@property (assign,nonatomic,__weak) id<BKCollectionsListViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isTextEditing,nonatomic,readonly) char textEditing;                        //@synthesize textEditing=_textEditing - In the implementation block
@property (assign,nonatomic) char wantsAddCollectionRow;                                     //@synthesize wantsAddCollectionRow=_wantsAddCollectionRow - In the implementation block
@property (nonatomic,retain) NSMutableArray * collections;                                   //@synthesize collections=_collections - In the implementation block
@property (nonatomic,retain) NSArray * prefixCollections;                                    //@synthesize prefixCollections=_prefixCollections - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                        //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSSet * bookContentTypes;                                       //@synthesize bookContentTypes=_bookContentTypes - In the implementation block
@property (nonatomic,retain) UILabel * showallPurchasesLabel;                                //@synthesize showallPurchasesLabel=_showallPurchasesLabel - In the implementation block
@property (nonatomic,retain) UISwitch * showAllPurchasesSwitch;                              //@synthesize showAllPurchasesSwitch=_showAllPurchasesSwitch - In the implementation block
@property (nonatomic,retain) UILabel * moveCollectionHeaderLabel;                            //@synthesize moveCollectionHeaderLabel=_moveCollectionHeaderLabel - In the implementation block
@property (nonatomic,retain) UITextField * textEntryField;                                   //@synthesize textEntryField=_textEntryField - In the implementation block
@property (nonatomic,retain) NSString * textEntryProgress;                                   //@synthesize textEntryProgress=_textEntryProgress - In the implementation block
@property (nonatomic,retain) BKCollection * textEntryCollection;                             //@synthesize textEntryCollection=_textEntryCollection - In the implementation block
@property (nonatomic,retain) NSIndexPath * textEntryIndexPath;                               //@synthesize textEntryIndexPath=_textEntryIndexPath - In the implementation block
@property (nonatomic,retain) NSIndexPath * postKeyboardIndexPath;                            //@synthesize postKeyboardIndexPath=_postKeyboardIndexPath - In the implementation block
@property (nonatomic,retain) NSArray * books;                                                //@synthesize books=_books - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<BKLibraryCollection> selectedCollection;                     //@synthesize selectedCollection=_selectedCollection - In the implementation block
-(void)cloudSyncCollectionsChanged:(id)arg1 ;
-(void)setSelectedCollection:(id<BKLibraryCollection>)arg1 ;
-(char)anyChanges;
-(id)initWithSelectedBooks:(id)arg1 ;
-(void)releaseViews;
-(void)setBooks:(NSArray *)arg1 ;
-(NSArray *)books;
-(void)destroyTextEntryField;
-(void)releaseAllRecomputableMemory;
-(void)resetNavigationBarButtons;
-(void)appEnteredForeground:(id)arg1 ;
-(id<BKLibraryCollection>)selectedCollection;
-(id)_indexPathForCollection:(id)arg1 ;
-(void)scrollToIndexPath:(id)arg1 ;
-(NSArray *)prefixCollections;
-(void)refreshNonUserRows;
-(void)_updateShowPuchaseSwitchIfRequired;
-(unsigned)_numberOfPrefixRows;
-(void)setEditing:(char)arg1 animated:(char)arg2 reuseAddCollectionRow:(char)arg3 ;
-(void)setWantsAddCollectionRow:(char)arg1 ;
-(void)_updateEditButtonsEnabled;
-(void)_updateBarButtonsAnimated:(char)arg1 ;
-(char)isTextEditing;
-(void)endTextEditing;
-(id)_addCollectionIndexPath;
-(void)scrollToIndexPath:(id)arg1 animated:(char)arg2 ;
-(id)tableCellFontForUserSection;
-(NSIndexPath *)textEntryIndexPath;
-(void)setPostKeyboardIndexPath:(NSIndexPath *)arg1 ;
-(void)startEditButtonPressed:(id)arg1 ;
-(void)stopEditButtonPressed:(id)arg1 ;
-(NSSet *)bookContentTypes;
-(id)_booksCollectionFromDefaultCollections:(id)arg1 ;
-(id)_defaultCollectionsExcludingBooksCollection:(id)arg1 ;
-(void)setPrefixCollections:(NSArray *)arg1 ;
-(void)_configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(UISwitch *)showAllPurchasesSwitch;
-(UILabel *)showallPurchasesLabel;
-(UILabel *)moveCollectionHeaderLabel;
-(id)navBarCloseButtonItem;
-(id)navBarStartEditButtonItem;
-(id)navBarStopEditButtonItem;
-(void)setShowallPurchasesLabel:(UILabel *)arg1 ;
-(void)_switchToggled:(id)arg1 ;
-(void)setShowAllPurchasesSwitch:(UISwitch *)arg1 ;
-(id)purchaseToggleToolbarItems;
-(void)setTextEntryProgress:(NSString *)arg1 ;
-(BKCollection *)textEntryCollection;
-(void)animateEndTextEditCollections;
-(char)_indexPathIsUser:(id)arg1 ;
-(unsigned)_collectionIndexForIndexPath:(id)arg1 ;
-(unsigned)_numberOfUserRows;
-(unsigned)_numberOfNewCollectionButtonRows;
-(char)_isAddCollectionIndexPath:(id)arg1 ;
-(id)defaultCollectionName;
-(void)setTextEntryIndexPath:(NSIndexPath *)arg1 ;
-(void)_positionTextEntryFieldInsideCell:(id)arg1 ;
-(void)concludeDeleteAtIndexPath:(id)arg1 includingBooks:(char)arg2 ;
-(char)_indexPathIsPrefix:(id)arg1 ;
-(void)setMoveCollectionHeaderLabel:(UILabel *)arg1 ;
-(void)_saveSortOrder;
-(void)setTextEntryCollection:(BKCollection *)arg1 ;
-(void)endTextEditAnimationComplete:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(char)_isAllBooksIndexPath:(id)arg1 ;
-(void)_moveSelectedToIndexPath:(id)arg1 ;
-(void)_beginEditingUserCollectionAtIndexPath:(id)arg1 ;
-(void)addCollection:(id)arg1 ;
-(char)isSelectionEnabledForCollection:(id)arg1 ;
-(void)_handleKeyboardToggle:(char)arg1 keyboardRect:(CGRect)arg2 ;
-(NSIndexPath *)postKeyboardIndexPath;
-(unsigned)_rowForUserCollectionIndex:(unsigned)arg1 ;
-(char)wantsAddCollectionRow;
-(NSString *)textEntryProgress;
-(id)tableCellFontForPrefixSection;
-(void)_setSelectionState:(char)arg1 cell:(id)arg2 ;
-(id)dimmedTextColor;
-(char)_isAllAudioBooksIndexPath:(id)arg1 ;
-(char)_isAllPDFsIndexPath:(id)arg1 ;
-(id)addCollectionTextColor;
-(id)_allBooksIndexPath;
-(id)_allAudioBooksIndexPath;
-(id)_allPDFsIndexPath;
-(void)purchasesButtonPressed:(id)arg1 ;
-(char)_viewFrameIncludesStatusBar;
-(void)setBookContentTypes:(NSSet *)arg1 ;
-(void)setIsInPopover:(char)arg1 ;
-(void)storeChanged:(id)arg1 ;
-(NSMutableArray *)collections;
-(void)setDelegate:(id<BKCollectionsListViewDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<BKCollectionsListViewDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(id)title;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)textColor;
-(char)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(id)toolbarItems;
-(void)keyboardDidShow:(id)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setTextEntryField:(UITextField *)arg1 ;
-(UITextField *)textEntryField;
-(void)setCollections:(NSMutableArray *)arg1 ;
-(void)setTheme:(id)arg1 ;
-(char)isInPopover;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)closeButtonPressed:(id)arg1 ;
@end

