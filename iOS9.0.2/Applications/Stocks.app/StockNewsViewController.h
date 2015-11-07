/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <Stocks/SFSafariViewControllerDelegate.h>

@protocol UIViewControllerPreviewing;
@class StockNewsView, UITableViewCell, NSString;

@interface StockNewsViewController : UITableViewController <UIViewControllerPreviewingDelegate_Private, SFSafariViewControllerDelegate> {

	StockNewsView* _newsView;
	UITableViewCell* _previewingCell;
	id<UIViewControllerPreviewing> _previewing;

}

@property (nonatomic,retain) StockNewsView * newsView;                               //@synthesize newsView=_newsView - In the implementation block
@property (nonatomic,retain) UITableViewCell * previewingCell;                       //@synthesize previewingCell=_previewingCell - In the implementation block
@property (nonatomic,retain) id<UIViewControllerPreviewing> previewing;              //@synthesize previewing=_previewing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNewsView:(StockNewsView *)arg1 ;
-(StockNewsView *)newsView;
-(void)setPreviewing:(id<UIViewControllerPreviewing>)arg1 ;
-(UITableViewCell *)previewingCell;
-(id<UIViewControllerPreviewing>)previewing;
-(void)_alertControllerDidDismiss;
-(void)addNewsItemsToReadingList:(id)arg1 ;
-(void)newsCellLongPress:(id)arg1 ;
-(void)setPreviewingCell:(UITableViewCell *)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)tableView;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)didDismissPreviewViewController:(id)arg1 committing:(char)arg2 ;
-(id)previewViewControllerForRowAtIndexPath:(id)arg1 ;
-(void)willPresentPreviewViewController:(id)arg1 forRowAtIndexPath:(id)arg2 ;
@end

