/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class UIPrintPanelViewController;

@interface UIPrintMoreOptionsTableViewController : UITableViewController {

	UIPrintPanelViewController* _printPanelViewController;
	int _stapleRow;

}
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(char)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(char)arg1 ;
-(void)showCancelButton;
-(id)initWithPrintPanelViewController:(id)arg1 ;
-(void)updateStaple:(id)arg1 ;
@end

