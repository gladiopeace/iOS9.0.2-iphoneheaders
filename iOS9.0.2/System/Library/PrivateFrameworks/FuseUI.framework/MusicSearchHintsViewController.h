/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>

@protocol MusicSearchHintsViewControllerDelegate;
@class NSString, SKUICompletionList, SSVLoadURLOperation, NSOperationQueue, UISearchBar, MusicClientContext, SKUIClientContext;

@interface MusicSearchHintsViewController : UITableViewController <MusicClientContextConsuming> {

	NSString* _baseHintsURLString;
	SKUICompletionList* _completionList;
	SSVLoadURLOperation* _loadOperation;
	NSOperationQueue* _operationQueue;
	UISearchBar* _searchBar;
	char _appendRadioTabParameter;
	MusicClientContext* _clientContext;
	id<MusicSearchHintsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic) char appendRadioTabParameter;                                            //@synthesize appendRadioTabParameter=_appendRadioTabParameter - In the implementation block
@property (assign,nonatomic,__weak) id<MusicSearchHintsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                                 //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SKUIClientContext * clientContext; 
-(void)setDelegate:(id<MusicSearchHintsViewControllerDelegate>)arg1 ;
-(void)reloadData;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<MusicSearchHintsViewControllerDelegate>)delegate;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidLoad;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(void)setAppendRadioTabParameter:(char)arg1 ;
-(char)appendRadioTabParameter;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_setResponse:(id)arg1 error:(id)arg2 ;
@end

