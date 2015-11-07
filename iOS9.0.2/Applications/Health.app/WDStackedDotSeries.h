/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/WDStackedValueSeries.h>

@class NSDictionary, UIColor;

@interface WDStackedDotSeries : WDStackedValueSeries {

	NSDictionary* _chartPointsByValue;
	UIColor* _pointColor;
	int _pointStyle;
	float _pointRadius;
	float _pointLineWidth;

}

@property (nonatomic,retain) UIColor * pointColor;              //@synthesize pointColor=_pointColor - In the implementation block
@property (assign,nonatomic) int pointStyle;                    //@synthesize pointStyle=_pointStyle - In the implementation block
@property (assign,nonatomic) float pointRadius;                 //@synthesize pointRadius=_pointRadius - In the implementation block
@property (assign,nonatomic) float pointLineWidth;              //@synthesize pointLineWidth=_pointLineWidth - In the implementation block
-(void)_renderPoints:(id)arg1 withYLocation:(float)arg2 context:(CGContextRef)arg3 ;
-(id)createChartPointsByValueFromDataSet;
-(void)renderChartInContext:(CGContextRef)arg1 ;
-(float)pointLineWidth;
-(void)setPointLineWidth:(float)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)pointColor;
-(void)setPointColor:(UIColor *)arg1 ;
-(int)pointStyle;
-(void)setPointStyle:(int)arg1 ;
-(float)pointRadius;
-(void)setPointRadius:(float)arg1 ;
@end

