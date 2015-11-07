/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol WorldClockCollectionEditDelegate;
@class UITableView, WeatherAttributionView, NSString;

@interface WorldClockCollectionEditController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	UITableView* _citiesView;
	WeatherAttributionView* _weatherAttributionView;
	id<WorldClockCollectionEditDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WorldClockCollectionEditDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadSegmentedControl;
-(void)_selectedSegmentChanged:(id)arg1 ;
-(void)setDelegate:(id<WorldClockCollectionEditDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id<WorldClockCollectionEditDelegate>)delegate;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)_updatePreferredContentSize;
@end

