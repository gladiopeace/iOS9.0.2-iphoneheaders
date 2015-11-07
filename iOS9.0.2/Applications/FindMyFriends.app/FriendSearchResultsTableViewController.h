/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FriendSearchResultDelegate;
@class NSArray, NSString;

@interface FriendSearchResultsTableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {

	char _allowPhoneNumbers;
	char _searchTextMayBePhoneNumber;
	id<FriendSearchResultDelegate> _delegate;
	NSArray* _results;
	NSString* _searchText;

}

@property (assign,nonatomic,__weak) id<FriendSearchResultDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * results;                                           //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSString * searchText;                                       //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) char allowPhoneNumbers;                                      //@synthesize allowPhoneNumbers=_allowPhoneNumbers - In the implementation block
@property (assign,nonatomic) char searchTextMayBePhoneNumber;                             //@synthesize searchTextMayBePhoneNumber=_searchTextMayBePhoneNumber - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSearchTextMayBePhoneNumber:(char)arg1 ;
-(char)hasActualRecipients;
-(char)allowPhoneNumbers;
-(void)setAllowPhoneNumbers:(char)arg1 ;
-(char)searchTextMayBePhoneNumber;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setDelegate:(id<FriendSearchResultDelegate>)arg1 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FriendSearchResultDelegate>)delegate;
-(void)viewDidLoad;
-(NSString *)searchText;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
@end

