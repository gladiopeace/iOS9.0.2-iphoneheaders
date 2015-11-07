/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSArray, UIMoreListCellLayoutManager, UIBarButtonItem, NSString;

@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _table;
	char _allowsCustomizing;
	char _disableCustomizing;
	char _hideNavigationBar;
	NSArray* _moreViewControllers;
	UIMoreListCellLayoutManager* _layoutManager;
	UIBarButtonItem* _moreEditButtonItem;
	char _moreViewControllersChanged;

}

@property (nonatomic,retain) NSArray * moreViewControllers; 
@property (assign,nonatomic) char allowsCustomizing; 
@property (assign,nonatomic) char moreViewControllersChanged; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)loadView;
-(void)_willChangeToIdiom:(int)arg1 onScreen:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(char)_isSupportedInterfaceOrientation:(int)arg1 ;
-(id)tabBarItem;
-(char)_viewControllerWasSelected;
-(void)setMoreViewControllers:(NSArray *)arg1 ;
-(NSArray *)moreViewControllers;
-(void)setAllowsCustomizing:(char)arg1 ;
-(void)setMoreViewControllersChanged:(char)arg1 ;
-(id)table;
-(char)allowsCustomizing;
-(char)moreViewControllersChanged;
-(void)_updateEditButton;
-(void)_layoutCells;
-(id)_targetNavigationController;
@end

