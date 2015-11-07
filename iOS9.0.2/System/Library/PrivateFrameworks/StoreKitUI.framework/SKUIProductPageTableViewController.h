/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SKUIProductPageChildViewControllerDelegate, SKUIProductPageChildViewController;
@class SKUIClientContext, SKUIColorScheme, UIColor, SKUIProductPageHeaderViewController, NSArray, SKUIProductPageTableView, SKUILayoutCache, UITableView, NSString;

@interface SKUIProductPageTableViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	SKUIClientContext* _clientContext;
	SKUIColorScheme* _colorScheme;
	id<SKUIProductPageChildViewControllerDelegate> _delegate;
	id<SKUIProductPageChildViewController> _delegateSender;
	UIColor* _evenColor;
	SKUIProductPageHeaderViewController* _headerViewController;
	UIColor* _color;
	NSArray* _sections;
	SKUIProductPageTableView* _tableView;
	SKUILayoutCache* _textLayoutCache;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,copy) SKUIColorScheme * colorScheme;                                                 //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,copy) NSArray * sections;                                                            //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) SKUILayoutCache * textLayoutCache;                                           //@synthesize textLayoutCache=_textLayoutCache - In the implementation block
@property (nonatomic,readonly) UITableView * tableView; 
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUIProductPageHeaderViewController * headerViewController;                  //@synthesize headerViewController=_headerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIProductPageChildViewController> delegateSender;                //@synthesize delegateSender=_delegateSender - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SKUIProductPageChildViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<SKUIProductPageChildViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UITableView *)tableView;
-(id)_tableView;
-(void)viewWillAppear:(char)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(SKUILayoutCache *)textLayoutCache;
-(void)_addHeaderView;
-(SKUIProductPageHeaderViewController *)headerViewController;
-(void)setHeaderViewController:(SKUIProductPageHeaderViewController *)arg1 ;
-(void)setTextLayoutCache:(SKUILayoutCache *)arg1 ;
-(id)initWithInAppPurchases:(id)arg1 clientContext:(id)arg2 ;
-(void)scrollToView:(id)arg1 animated:(char)arg2 ;
-(void)setDelegateSender:(id<SKUIProductPageChildViewController>)arg1 ;
-(id)_textLayoutRequestWithText:(id)arg1 ;
-(id)initWithReleaseNotes:(id)arg1 clientContext:(id)arg2 ;
-(id<SKUIProductPageChildViewController>)delegateSender;
@end

