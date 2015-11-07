/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/BTLEConnectionTable.h>

@class NSMutableArray, AMSBTLEConnectionManager, UIActivityIndicatorView, NSTimer, UIBarButtonItem, NSString;

@interface CABTMIDICentralViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource, BTLEConnectionTable> {

	NSMutableArray* peripheralList;
	AMSBTLEConnectionManager* connectionManager;
	UIActivityIndicatorView* indicator;
	char didCleanup;
	char inEditingMode;
	NSTimer* connectionTimer;
	NSMutableArray* incompleteConnectionList;
	UIBarButtonItem* editButton;
	UIBarButtonItem* cancelButton;
	UIBarButtonItem* forgetButton;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didChangePreferredContentSize:(id)arg1 ;
-(void)activateController:(id)arg1 ;
-(void)deactivateController:(id)arg1 ;
-(void)updateButtonsToMatchTableState;
-(unsigned)peripheralCount;
-(id)peripheralAtIndex:(unsigned)arg1 ;
-(void)updatePeripheralTable;
-(void)centralTimerFired:(id)arg1 ;
-(void)cancelAction:(id)arg1 ;
-(void)forgetAction:(id)arg1 ;
-(void)editAction:(id)arg1 ;
-(void)setUIEnabled:(char)arg1 ;
-(void)dealloc;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)didReceiveMemoryWarning;
-(id)title;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)cleanup;
@end

