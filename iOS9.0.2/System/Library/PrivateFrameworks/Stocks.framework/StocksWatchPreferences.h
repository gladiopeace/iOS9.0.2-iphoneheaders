/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NPSDomainAccessor;

@interface StocksWatchPreferences : NSObject {

	char _changeColorSwapped;
	unsigned _textDirection;
	NPSDomainAccessor* _watchDefaults;

}
+(id)sharedPreferences;
-(void)dealloc;
-(id)init;
-(void)syncKey:(id)arg1 ;
-(id)defaultStockSymbol;
-(void)setDefaultStockSymbol:(id)arg1 ;
-(int)complicationDisplayMode;
-(void)setComplicationDisplayMode:(int)arg1 ;
-(void)syncSelectedStock;
-(void)syncStocksList;
-(void)syncChartInterval;
-(void)syncRowDataType;
@end

