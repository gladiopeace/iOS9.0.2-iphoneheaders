/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/WDChartSeries.h>

@class NSArray, UIColor;

@interface WDBarSeries : WDChartSeries {

	NSArray* _dataPoints;
	UIColor* _fillColor;
	float _barWidth;
	int _lineCapStyle;
	float _bottomPadding;

}

@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) float barWidth;                   //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) int lineCapStyle;                 //@synthesize lineCapStyle=_lineCapStyle - In the implementation block
@property (assign,nonatomic) float bottomPadding;              //@synthesize bottomPadding=_bottomPadding - In the implementation block
-(void)renderFillInContext:(CGContextRef)arg1 ;
-(void)prepareForRenderingWithSize:(CGSize)arg1 minXValue:(id)arg2 maxXValue:(id)arg3 minYValue:(id)arg4 maxYValue:(id)arg5 insets:(UIEdgeInsets)arg6 dataSet:(id)arg7 ;
-(id)_getPointsFromDataSet;
-(void)_enumerateChartPointsWithHandler:(/*^block*/id)arg1 ;
-(CGPoint)_basePointForPoint:(CGPoint)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)lineCapStyle;
-(void)setLineCapStyle:(int)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(float)bottomPadding;
-(void)setBottomPadding:(float)arg1 ;
-(void)setBarWidth:(float)arg1 ;
-(float)barWidth;
@end

