/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@protocol ChartIntervalButtonRowDelegate;
@class NSArray;

@interface ChartIntervalButtonRow : UIView {

	NSArray* _intervalButtons;
	int _maxChartInterval;
	id<ChartIntervalButtonRowDelegate> _delegate;

}

@property (assign,nonatomic) int maxChartInterval;                                            //@synthesize maxChartInterval=_maxChartInterval - In the implementation block
@property (assign,nonatomic,__weak) id<ChartIntervalButtonRowDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setMaxChartInterval:(int)arg1 ;
-(void)setSelected:(char)arg1 forInterval:(int)arg2 ;
-(void)sizeToBoldLabels;
-(void)intervalButtonsTapped:(id)arg1 ;
-(int)maxChartInterval;
-(int)intervalForTouchLocation:(CGPoint)arg1 ;
-(void)setDelegate:(id<ChartIntervalButtonRowDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id<ChartIntervalButtonRowDelegate>)delegate;
@end

