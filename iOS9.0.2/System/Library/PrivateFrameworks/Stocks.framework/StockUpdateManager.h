/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/StockUpdaterDelegate.h>

@class NSMutableArray, NSHashTable, NSString;

@interface StockUpdateManager : NSObject <StockUpdaterDelegate> {

	char _postingRemoteUpdateNotification;
	NSMutableArray* _activeUpdaters;
	NSMutableArray* _inactiveUpdaters;
	NSHashTable* _updateObservers;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)failWithError:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(void)reset;
-(char)isLoading;
-(void)_stocksDidReload;
-(void)_enumerateObserversRespondingToSelector:(SEL)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)hadError;
-(id)availableStockUpdater;
-(void)_kickoffUpdater:(id)arg1 forStocks:(id)arg2 comprehensive:(char)arg3 forceUpdate:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)updateStockComprehensive:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateStockComprehensive:(id)arg1 forced:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)updateAllStocksBasicWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateStocksBasic:(id)arg1 forced:(char)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_updaterDidCancelOrFinish:(id)arg1 ;
-(void)stockUpdater:(id)arg1 didRequestUpdateForStocks:(id)arg2 isComprehensive:(char)arg3 ;
-(void)stockUpdater:(id)arg1 didUpdateStocks:(id)arg2 isComprehensive:(char)arg3 ;
-(void)stockUpdater:(id)arg1 didFailWithError:(id)arg2 whileUpdatingStocks:(id)arg3 comprehensive:(char)arg4 ;
-(void)stocksDidUpdateRemotely;
-(void)addUpdateObserver:(id)arg1 ;
-(void)removeUpdateObserver:(id)arg1 ;
-(void)resetUpdaters;
-(void)updateStocksComprehensive:(id)arg1 ;
-(void)updateStockComprehensive:(id)arg1 ;
-(void)updateAllStocksBasic;
-(void)updateAllStocksBasic:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateStockBasicWithCompletion:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)updateStaleStocksBasicWithCompletion:(/*^block*/id)arg1 ;
@end

