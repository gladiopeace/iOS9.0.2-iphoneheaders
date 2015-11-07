/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FaceTime/PHFrecentResultViewController.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <FaceTime/PHFrecentResultViewControllerDelegate.h>
#import <FaceTime/PHAddressBookControllerDelegate.h>
#import <FaceTime/ABUnknownPersonViewControllerDelegate.h>

@protocol PHSearchResultProtocol;
@class NSMutableArray, UIBarButtonItem, UISearchController, PHFrecentNoContentView, UISegmentedControl, NSString;

@interface PHFrecentViewController : PHFrecentResultViewController <UISearchControllerDelegate, PHFrecentResultViewControllerDelegate, PHAddressBookControllerDelegate, ABUnknownPersonViewControllerDelegate> {

	char _isSwipeToDelete;
	NSMutableArray* _recentCalls;
	id<PHSearchResultProtocol> _call;
	NSMutableArray* _audioRecentCalls;
	NSMutableArray* _videoRecentCalls;
	UIBarButtonItem* _removeItem;
	UISearchController* _searchController;
	PHFrecentNoContentView* _noContentView;
	UIBarButtonItem* _contactsButton;
	UISegmentedControl* _facetimeFilter;
	unsigned _tableFilterMode;

}

@property (nonatomic,retain) id<PHSearchResultProtocol> call;                     //@synthesize call=_call - In the implementation block
@property (nonatomic,retain) NSMutableArray * audioRecentCalls;                   //@synthesize audioRecentCalls=_audioRecentCalls - In the implementation block
@property (nonatomic,retain) NSMutableArray * videoRecentCalls;                   //@synthesize videoRecentCalls=_videoRecentCalls - In the implementation block
@property (assign,nonatomic) char isSwipeToDelete;                                //@synthesize isSwipeToDelete=_isSwipeToDelete - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * removeItem;                        //@synthesize removeItem=_removeItem - In the implementation block
@property (nonatomic,retain) UISearchController * searchController;               //@synthesize searchController=_searchController - In the implementation block
@property (nonatomic,retain) PHFrecentNoContentView * noContentView;              //@synthesize noContentView=_noContentView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * contactsButton;                    //@synthesize contactsButton=_contactsButton - In the implementation block
@property (nonatomic,retain) UISegmentedControl * facetimeFilter;                 //@synthesize facetimeFilter=_facetimeFilter - In the implementation block
@property (assign,nonatomic) unsigned tableFilterMode;                            //@synthesize tableFilterMode=_tableFilterMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCall:(id<PHSearchResultProtocol>)arg1 ;
-(void)savePreferences;
-(unsigned)tableFilterMode;
-(void)setTableFilterMode:(unsigned)arg1 ;
-(void)markAllRecentCallsRead;
-(void)prepareSubviewsForFilter:(id)arg1 ;
-(void)callCapabilitiesRelayCallingChanged:(id)arg1 ;
-(char)isSwipeToDelete;
-(void)setFacetimeFilter:(UISegmentedControl *)arg1 ;
-(UISegmentedControl *)facetimeFilter;
-(void)toggleTableFilterMode:(id)arg1 ;
-(void)presentContactPickerViewController:(id)arg1 ;
-(void)removeRecentCalls:(id)arg1 ;
-(void)hideNoContentView;
-(void)handleNoContentTapGesture:(id)arg1 ;
-(void)showNoContentView;
-(void)showCallDetail:(id)arg1 ;
-(void)setIsSwipeToDelete:(char)arg1 ;
-(void)setAudioRecentCalls:(NSMutableArray *)arg1 ;
-(void)setVideoRecentCalls:(NSMutableArray *)arg1 ;
-(NSMutableArray *)audioRecentCalls;
-(NSMutableArray *)videoRecentCalls;
-(void)fetchAudioRecentCalls;
-(void)fetchVideoRecentCalls;
-(void)updateNoContentViewVisibility;
-(void)addressBookControllerDidCancel:(id)arg1 ;
-(char)addressBookControllerShouldContinueAfterSelectingPerson:(void*)arg1 ;
-(unsigned)callTypeForTableFilterMode:(unsigned)arg1 ;
-(void)fetchRecentCalls;
-(UIBarButtonItem *)contactsButton;
-(void)setContactsButton:(UIBarButtonItem *)arg1 ;
-(void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void*)arg2 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)applicationWillSuspend;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(id)table;
-(void)setNoContentView:(PHFrecentNoContentView *)arg1 ;
-(PHFrecentNoContentView *)noContentView;
-(UISearchController *)searchController;
-(void)willPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
-(void)setRemoveItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)removeItem;
-(id)recentCalls;
-(void)setRecentCalls:(id)arg1 ;
-(void)configureSearchBar:(id)arg1 ;
-(id<PHSearchResultProtocol>)call;
-(void)refresh;
@end

