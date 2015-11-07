/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Stocks/StockUpdateObserver.h>
#import <Stocks/NewsUpdaterDelegate.h>
#import <Stocks/WCSessionDelegate.h>

@class NSTimer, UIWindow, Stock, NSString;

@interface StocksController : UIViewController <StockUpdateObserver, NewsUpdaterDelegate, WCSessionDelegate> {

	char _syncInProgress;
	char _pauseNewsUpdates;
	char _reachabilityCancelledLoads;
	char _suspending;
	char _sendNextStockInfoUpdate;
	int _rowDataType;
	NSTimer* _stockUpdateTimer;
	NSTimer* _newsUpdateTimer;
	UIWindow* _window;
	Stock* _selectedStock;

}

@property (nonatomic,retain) UIWindow * window;                     //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) Stock * selectedStock;                 //@synthesize selectedStock=_selectedStock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedStocksController;
-(void)sendUpdatedComplicationSettingsToWatch;
-(void)prepareForApplicationScreenshot;
-(void)setSelectedStock:(Stock *)arg1 ;
-(Stock *)selectedStock;
-(void)updateSessionApplicationContextForStock:(id)arg1 dataSeries:(id)arg2 didSettingsChange:(char)arg3 ;
-(void)setSelectedStockAndScrollToSelection:(id)arg1 ;
-(void)_stocksWillSync;
-(id)newsView;
-(id)chartView;
-(void)updateLoadingStatus;
-(void)viewFullQuoteForStock:(id)arg1 ;
-(void)updateChartData;
-(void)updateStockData;
-(double)_minimumStockStreamInterval;
-(void)_updateStockDataTimerFired;
-(void)stopStockUpdateTimer;
-(void)startStockUpdateTimer;
-(void)updateStockDataForAllStocks:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateNewsTimerFired;
-(void)stopNewsUpdateTimer;
-(void)startNewsUpdateTimer;
-(void)updateNewsDataWithCompletion:(/*^block*/id)arg1 ;
-(void)stocksListChanged;
-(void)_restoreSelectedStock;
-(void)updateNewsData;
-(void)setSelectedStock:(id)arg1 writeToDefaults:(char)arg2 ;
-(char)shouldUpdateSelectedStockComprehensive;
-(void)_reloadStockUpdateTimerIfNecessary;
-(void)setNewsUpdatesPaused:(char)arg1 ;
-(char)isAnyStockStale;
-(char)isNetworkReachable;
-(void)dealloc;
-(UIWindow *)window;
-(id)init;
-(void)setWindow:(UIWindow *)arg1 ;
-(int)preferredStatusBarStyle;
-(void)suspend;
-(void)resume;
-(void)run;
-(char)isLoading;
-(void)session:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)didBecomeActive;
-(void)reachabilityChanged:(id)arg1 ;
-(id)listView;
-(void)willResignActive;
-(void)resetLocale;
-(void)stockUpdateManager:(id)arg1 didUpdateStocks:(id)arg2 updates:(int)arg3 ;
-(void)newsUpdater:(id)arg1 didReceiveNewsItems:(id)arg2 ;
-(void)newsUpdater:(id)arg1 didFailWithError:(id)arg2 ;
@end
