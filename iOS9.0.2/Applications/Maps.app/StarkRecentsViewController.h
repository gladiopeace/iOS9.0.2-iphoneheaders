/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/SearchCompletionsTableViewController.h>
#import <Maps/SearchCompletionsTableViewControllerDelegate.h>

@class UIBarButtonItem, NSString;

@interface StarkRecentsViewController : SearchCompletionsTableViewController <SearchCompletionsTableViewControllerDelegate> {

	/*^block*/id _completion;
	UIBarButtonItem* _doneBarButtonItem;

}

@property (nonatomic,readonly) UIBarButtonItem * doneBarButtonItem; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)searchCompletionsTableViewController:(id)arg1 hasCompletionsForQuery:(id)arg2 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectSearchCompletion:(id)arg2 forQuery:(id)arg3 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectQueryCompletion:(id)arg2 forQuery:(id)arg3 ;
-(void)searchCompletionsTableViewController:(id)arg1 didSelectHistoryItem:(id)arg2 forQuery:(id)arg3 ;
-(UIBarButtonItem *)doneBarButtonItem;
-(id)initWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)done;
@end

