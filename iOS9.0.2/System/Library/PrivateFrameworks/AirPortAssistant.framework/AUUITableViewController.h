/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/TableViewManagerDelegate.h>

@class TableViewManager, UITableView;

@interface AUUITableViewController : UITableViewController <TableViewManagerDelegate> {

	TableViewManager* _tableManager;

}

@property (nonatomic,retain) UITableView * tableView; 
@property (nonatomic,readonly) TableViewManager * tableManager;                  //@synthesize tableManager=_tableManager - In the implementation block
@property (assign,nonatomic) id<TableViewManagerDelegate> delegate; 
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<TableViewManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<TableViewManagerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(TableViewManager *)tableManager;
-(void)initAUUITableViewControllerCommon;
@end

