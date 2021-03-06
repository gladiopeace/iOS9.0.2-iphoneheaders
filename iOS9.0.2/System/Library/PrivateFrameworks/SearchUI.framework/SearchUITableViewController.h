/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <SearchUI/SearchUICardViewController.h>

@protocol SearchUIViewControllerDelegate;
@class NSString;

@interface SearchUITableViewController : UITableViewController <SearchUICardViewController> {

	id<SearchUIViewControllerDelegate> _searchUIViewControllerDelegate;
	id<SearchUIViewControllerDelegate> _searchUICardViewControllerDelegate;
	unsigned _style;

}

@property (assign,nonatomic,__weak) id<SearchUIViewControllerDelegate> searchUICardViewControllerDelegate;              //@synthesize searchUICardViewControllerDelegate=_searchUICardViewControllerDelegate - In the implementation block
@property (assign) unsigned style;                                                                                      //@synthesize style=_style - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SearchUIViewControllerDelegate> searchUIViewControllerDelegate;                  //@synthesize searchUIViewControllerDelegate=_searchUIViewControllerDelegate - In the implementation block
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)initWithStyle:(unsigned)arg1 ;
-(unsigned)style;
-(void)setStyle:(unsigned)arg1 ;
-(id<SearchUIViewControllerDelegate>)searchUIViewControllerDelegate;
-(void)setSearchUIViewControllerDelegate:(id<SearchUIViewControllerDelegate>)arg1 ;
-(id<SearchUIViewControllerDelegate>)searchUICardViewControllerDelegate;
-(void)setSearchUICardViewControllerDelegate:(id<SearchUIViewControllerDelegate>)arg1 ;
@end

