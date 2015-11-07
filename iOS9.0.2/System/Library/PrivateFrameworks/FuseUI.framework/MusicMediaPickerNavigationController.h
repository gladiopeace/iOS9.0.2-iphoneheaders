/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUNavigationController.h>
#import <libobjc.A.dylib/MusicSearchBarDelegate.h>
#import <libobjc.A.dylib/MusicSearchViewControllerMediaPickerDelegate.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@protocol MusicMediaPickerDelegate;
@class NSMutableArray, UIBarButtonItem, MusicClientContext, NSString, NSArray, SKUIClientContext;

@interface MusicMediaPickerNavigationController : MPUNavigationController <MusicSearchBarDelegate, MusicSearchViewControllerMediaPickerDelegate, MusicClientContextConsuming> {

	unsigned _pickedEntitiesCount;
	NSMutableArray* _pickedEntities;
	UIBarButtonItem* _rightBarButtonItem;
	NSMutableArray* _storeItemIDs;
	char _allowsMultipleSelection;
	char _hidesRightBarButtonItem;
	char _includeStoreItemsInSearch;
	char _allowsCollectionsInSelectedEntities;
	char _invokedForPlaylistEditing;
	char _showsOnlyStoreItems;
	MusicClientContext* _clientContext;
	NSString* _collectionName;
	id<MusicMediaPickerDelegate> _mediaPickerDelegate;
	NSString* _prompt;
	int _state;
	NSMutableArray* _selectedEntitiesForActiveSession;

}

@property (assign,nonatomic) char allowsMultipleSelection;                                                   //@synthesize allowsMultipleSelection=_allowsMultipleSelection - In the implementation block
@property (nonatomic,copy) NSString * collectionName;                                                        //@synthesize collectionName=_collectionName - In the implementation block
@property (assign,nonatomic) char hidesRightBarButtonItem;                                                   //@synthesize hidesRightBarButtonItem=_hidesRightBarButtonItem - In the implementation block
@property (assign,nonatomic) char includeStoreItemsInSearch;                                                 //@synthesize includeStoreItemsInSearch=_includeStoreItemsInSearch - In the implementation block
@property (assign,nonatomic) char allowsCollectionsInSelectedEntities;                                       //@synthesize allowsCollectionsInSelectedEntities=_allowsCollectionsInSelectedEntities - In the implementation block
@property (assign,getter=isInvokedForPlaylistEditing,nonatomic) char invokedForPlaylistEditing;              //@synthesize invokedForPlaylistEditing=_invokedForPlaylistEditing - In the implementation block
@property (assign,nonatomic,__weak) id<MusicMediaPickerDelegate> mediaPickerDelegate;                        //@synthesize mediaPickerDelegate=_mediaPickerDelegate - In the implementation block
@property (nonatomic,readonly) NSArray * pickedEntities;                                                     //@synthesize pickedEntities=_pickedEntities - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                                                //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * rightBarButtonItem; 
@property (assign,nonatomic) char showsOnlyStoreItems;                                                       //@synthesize showsOnlyStoreItems=_showsOnlyStoreItems - In the implementation block
@property (assign,nonatomic) int state;                                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableArray * selectedEntitiesForActiveSession;                              //@synthesize selectedEntitiesForActiveSession=_selectedEntitiesForActiveSession - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
+(id)navigationController;
+(id)selectedItemsForActiveSession;
-(void)setAllowsMultipleSelection:(char)arg1 ;
-(char)allowsMultipleSelection;
-(int)state;
-(void)setState:(int)arg1 ;
-(void)reset;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIBarButtonItem *)rightBarButtonItem;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)viewDidLoad;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(char)searchBarShouldBeginEditing:(id)arg1 ;
-(void)finish;
-(void)_insertSearchBarIntoTableView:(id)arg1 ;
-(void)_updatePrompt;
-(void)_updateRightBarButtonItem;
-(void)_updateTitle;
-(void)setInvokedForPlaylistEditing:(char)arg1 ;
-(void)setShowsOnlyStoreItems:(char)arg1 ;
-(void)_stylizeSearchBar:(id)arg1 ;
-(void)_selectItem:(id)arg1 ;
-(void)setMediaPickerDelegate:(id<MusicMediaPickerDelegate>)arg1 ;
-(void)_configureNavigationBar;
-(NSMutableArray *)selectedEntitiesForActiveSession;
-(char)_isMetadataAddable:(id)arg1 ;
-(id)_allPlayableChildrenMetadataObjectsForMetadata:(id)arg1 ;
-(void)_reloadDataInViewController:(id)arg1 ;
-(void)musicSearchViewControllerDidFinish:(id)arg1 withSearchBar:(id)arg2 ;
-(void)musicSearchViewController:(id)arg1 didSelectStoreItemWithID:(id)arg2 ;
-(void)setHidesRightBarButtonItem:(char)arg1 ;
-(void)selectMediaItem:(id)arg1 fromViewController:(id)arg2 ;
-(void)selectAllMediaItemsInCollection:(id)arg1 fromViewController:(id)arg2 ;
-(char)hidesRightBarButtonItem;
-(char)includeStoreItemsInSearch;
-(void)setIncludeStoreItemsInSearch:(char)arg1 ;
-(char)allowsCollectionsInSelectedEntities;
-(void)setAllowsCollectionsInSelectedEntities:(char)arg1 ;
-(char)isInvokedForPlaylistEditing;
-(id<MusicMediaPickerDelegate>)mediaPickerDelegate;
-(NSArray *)pickedEntities;
-(char)showsOnlyStoreItems;
-(void)setSelectedEntitiesForActiveSession:(NSMutableArray *)arg1 ;
-(void)setCollectionName:(NSString *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(NSString *)collectionName;
@end

