/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableView.h>

@protocol SKUITrendingSearchPageViewDelegate;
@class SKUIClientContext, SKUILoadTrendingSearchPageOperation, NSOperationQueue, SKUITrendingSearchPage, SKUITrendingSearchPageView;

@interface SKUISearchFieldTableView : UITableView {

	SKUIClientContext* _clientContext;
	SKUILoadTrendingSearchPageOperation* _loadOperation;
	NSOperationQueue* _operationQueue;
	SKUITrendingSearchPage* _page;
	SKUITrendingSearchPageView* _pageView;
	id<SKUITrendingSearchPageViewDelegate> _trendingSearchDelegate;
	char _trendingSearchesVisible;

}

@property (nonatomic,retain) SKUIClientContext * clientContext;                                                 //@synthesize clientContext=_clientContext - In the implementation block
@property (assign,nonatomic,__weak) id<SKUITrendingSearchPageViewDelegate> trendingSearchDelegate;              //@synthesize trendingSearchDelegate=_trendingSearchDelegate - In the implementation block
@property (assign,nonatomic) char trendingSearchesVisible;                                                      //@synthesize trendingSearchesVisible=_trendingSearchesVisible - In the implementation block
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 style:(int)arg2 ;
-(void)_reloadData;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
-(void)_reloadView;
-(void)_setTrendingResponse:(id)arg1 error:(id)arg2 ;
-(void)setTrendingSearchDelegate:(id<SKUITrendingSearchPageViewDelegate>)arg1 ;
-(void)setTrendingSearchesVisible:(char)arg1 ;
-(id<SKUITrendingSearchPageViewDelegate>)trendingSearchDelegate;
-(char)trendingSearchesVisible;
@end

