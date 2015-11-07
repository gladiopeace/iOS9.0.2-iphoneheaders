/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MobileMail/AccountFavoritesPickerControllerDelegate.h>
#import <MobileMail/MailboxUtilsClient.h>

@protocol EditFavoritesControllerDelegate;
@class NSMutableArray, NSArray, NSString;

@interface EditFavoritesController : UITableViewController <AccountFavoritesPickerControllerDelegate, MailboxUtilsClient> {

	NSMutableArray* _selectedSmartMailboxes;
	NSMutableArray* _selectedFavoriteMailboxes;
	NSArray* _sortedAccounts;
	NSArray* _sortedMailboxes;
	id<EditFavoritesControllerDelegate> _delegate;
	char _isSingleAccount;

}

@property (assign,nonatomic) char isSingleAccount;                                      //@synthesize isSingleAccount=_isSingleAccount - In the implementation block
@property (assign,nonatomic) id<EditFavoritesControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * selectedSmartMailboxes;                        //@synthesize selectedSmartMailboxes=_selectedSmartMailboxes - In the implementation block
@property (nonatomic,readonly) NSArray * selectedFavoriteMailboxes;                     //@synthesize selectedFavoriteMailboxes=_selectedFavoriteMailboxes - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)selectedSmartMailboxes;
-(NSArray *)selectedFavoriteMailboxes;
-(char)selectedStateForMailbox:(id)arg1 ;
-(char)toggleAndReturnSelectedStateForMailbox:(id)arg1 ;
-(void)setIsSingleAccount:(char)arg1 ;
-(char)isSingleAccount;
-(void)setDelegate:(id<EditFavoritesControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<EditFavoritesControllerDelegate>)delegate;
-(char)shouldAutorotate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)shouldReloadMailboxesWithOutbox:(id)arg1 ;
-(char)shouldHideInbox;
-(char)shouldHideNotesForAccount:(id)arg1 ;
-(void)doneButtonClicked:(id)arg1 ;
-(void)didFinish;
@end

