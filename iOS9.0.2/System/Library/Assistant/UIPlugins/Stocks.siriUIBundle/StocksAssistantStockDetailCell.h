/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Stocks.siriUIBundle/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <Stocks/StocksAssistantStockCell.h>
#import <Stocks/ChartUpdaterDelegate.h>

@class StocksAssistantChartView, NSMutableArray, UILabel, SiriUIKeyline, ChartUpdater;

@interface StocksAssistantStockDetailCell : StocksAssistantStockCell <ChartUpdaterDelegate> {

	StocksAssistantChartView* _stockChart;
	NSMutableArray* _titleLabels;
	NSMutableArray* _valueLabels;
	UILabel* _priceLabel;
	UILabel* _changeLabel;
	SiriUIKeyline* _chartTopKeyline;
	SiriUIKeyline* _chartBottomKeyline;
	SiriUIKeyline* _infoKeylines[5];
	ChartUpdater* _chartUpdater;

}
+(id)infoLabelFont;
-(void)centerInfoLabelViews;
-(id)infoLabelWithText:(id)arg1 ;
-(void)resetInfoLabelColors;
-(void)layoutInfoLabelArray:(id)arg1 atPoint:(CGPoint)arg2 columnOrRowOffset:(float)arg3 maxLabelWidth:(float)arg4 horizontally:(char)arg5 step:(float)arg6 ;
-(char)shouldCenterInfoLabelViews;
-(void)setStockObject:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)setRequestType:(unsigned)arg1 ;
-(void)chartUpdater:(id)arg1 didReceiveStockChartData:(id)arg2 ;
-(void)chartUpdater:(id)arg1 didFailWithError:(id)arg2 ;
@end

