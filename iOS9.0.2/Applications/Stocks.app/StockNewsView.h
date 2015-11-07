/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class LoadingLabel, UITableView, UIImageView, UIView, Stock, NSArray;

@interface StockNewsView : UIView {

	LoadingLabel* _loadingLabel;
	UITableView* _newsTable;
	UIImageView* _fadeMask;
	UIView* _containerView;
	char _showingSheet;
	char _drawsBottomLine;
	char _useLargerFonts;
	Stock* _stock;
	NSArray* _newsItems;

}

@property (nonatomic,readonly) UITableView * table;                                //@synthesize newsTable=_newsTable - In the implementation block
@property (assign,getter=isShowingSheet,nonatomic) char showingSheet;              //@synthesize showingSheet=_showingSheet - In the implementation block
@property (nonatomic,retain) Stock * stock;                                        //@synthesize stock=_stock - In the implementation block
@property (nonatomic,copy) NSArray * newsItems;                                    //@synthesize newsItems=_newsItems - In the implementation block
@property (assign,nonatomic) char drawsBottomLine;                                 //@synthesize drawsBottomLine=_drawsBottomLine - In the implementation block
@property (assign,nonatomic) char useLargerFonts;                                  //@synthesize useLargerFonts=_useLargerFonts - In the implementation block
-(void)setShowingSheet:(char)arg1 ;
-(id)headlineFont;
-(id)infoFont;
-(char)useLargerFonts;
-(char)drawsBottomLine;
-(void)setDrawsBottomLine:(char)arg1 ;
-(void)setUseLargerFonts:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(float)rowHeight;
-(char)isEmpty;
-(UITableView *)table;
-(char)isShowingSheet;
-(void)contentSizeDidChange:(id)arg1 ;
-(void)resetLocale;
-(Stock *)stock;
-(void)setStock:(Stock *)arg1 ;
-(NSArray *)newsItems;
-(void)setNewsItems:(NSArray *)arg1 ;
@end

