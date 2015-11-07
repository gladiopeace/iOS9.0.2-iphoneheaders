/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Maps/RAPPresentingViewController.h>

@class RAPTablePartsDataSource, NSString;

@interface RAPTableViewController : UITableViewController <RAPPresentingViewController> {

	RAPTablePartsDataSource* _dataSource;

}

@property (nonatomic,readonly) RAPTablePartsDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_maps_backgroundCompositionStyleOverrideDidChange;
-(void)segueToViewController:(id)arg1 ;
-(void)returnFromViewController:(id)arg1 ;
-(void)tableViewDidChangeTintColor:(id)arg1 ;
-(char)usesNavigationControllerPushForSegue;
-(void)scrollToBottomAnimated;
-(void)scrollToPartAfterPartAnimated:(id)arg1 ;
-(void)segueToViewController:(id)arg1 afterReturningFromViewController:(id)arg2 ;
-(id)init;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(RAPTablePartsDataSource *)dataSource;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(id)newDataSource;
@end

