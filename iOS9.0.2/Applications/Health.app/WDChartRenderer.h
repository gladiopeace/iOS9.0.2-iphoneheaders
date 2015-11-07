/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <Health/WDChartDataGroupDataSource.h>

@protocol OS_dispatch_queue, WDChartRendererDataSource;
@class NSObject, NSOperationQueue, NSDate, NSNumber, WDChartDataGroup, UIImage, NSString;

@interface WDChartRenderer : NSObject <WDChartDataGroupDataSource> {

	NSObject*<OS_dispatch_queue> _renderQueue;
	NSOperationQueue* _operationQueue;
	char _finishedLoadingData;
	id<WDChartRendererDataSource> _dataSource;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSDate* _minXValue;
	NSDate* _maxXValue;
	NSNumber* _minYValue;
	NSNumber* _maxYValue;
	NSNumber* _maxYValueInData;
	int _decimalPrecision;
	WDChartDataGroup* _dataGroup;
	int _dataState;
	UIImage* _chartImage;
	UIImage* _chartFillImage;
	UIImage* _chartSecondaryFillImage;
	UIEdgeInsets _chartInsets;

}

@property (nonatomic,__weak,readonly) id<WDChartRendererDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                     //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,retain) NSDate * minXValue;                                             //@synthesize minXValue=_minXValue - In the implementation block
@property (nonatomic,retain) NSDate * maxXValue;                                             //@synthesize maxXValue=_maxXValue - In the implementation block
@property (assign,nonatomic) UIEdgeInsets chartInsets;                                       //@synthesize chartInsets=_chartInsets - In the implementation block
@property (nonatomic,readonly) NSNumber * minYValue;                                         //@synthesize minYValue=_minYValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maxYValue;                                         //@synthesize maxYValue=_maxYValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maxYValueInData;                                   //@synthesize maxYValueInData=_maxYValueInData - In the implementation block
@property (nonatomic,readonly) int decimalPrecision;                                         //@synthesize decimalPrecision=_decimalPrecision - In the implementation block
@property (nonatomic,readonly) WDChartDataGroup * dataGroup;                                 //@synthesize dataGroup=_dataGroup - In the implementation block
@property (nonatomic,readonly) int dataState;                                                //@synthesize dataState=_dataState - In the implementation block
@property (nonatomic,readonly) UIImage * chartImage;                                         //@synthesize chartImage=_chartImage - In the implementation block
@property (nonatomic,readonly) UIImage * chartFillImage;                                     //@synthesize chartFillImage=_chartFillImage - In the implementation block
@property (nonatomic,readonly) UIImage * chartSecondaryFillImage;                            //@synthesize chartSecondaryFillImage=_chartSecondaryFillImage - In the implementation block
@property (nonatomic,readonly) char finishedLoadingData;                                     //@synthesize finishedLoadingData=_finishedLoadingData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dataUnit;
-(id)unitController;
-(void)_renderChartWithSize:(CGSize)arg1 renderInsets:(UIEdgeInsets)arg2 viewScale:(float)arg3 shouldRenderFillSeparately:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)_reloadData:(/*^block*/id)arg1 ;
-(void)_nts_adjustMinMaxValues;
-(id)_getChartSeries;
-(void)_prepareSeriesForDrawing:(id)arg1 chartSize:(CGSize)arg2 minXValue:(id)arg3 maxXValue:(id)arg4 minYValue:(id)arg5 maxYValue:(id)arg6 insets:(UIEdgeInsets)arg7 dataGroup:(id)arg8 ;
-(void)_drawSeriesFill:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)_drawSeriesSecondaryFill:(id)arg1 inContext:(CGContextRef)arg2 ;
-(void)_drawSeries:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithClientQueue:(id)arg1 dataSource:(id)arg2 ;
-(char)dataForChartRendererIsFinishedLoading;
-(void)renderChartWithSize:(CGSize)arg1 renderInsets:(UIEdgeInsets)arg2 viewScale:(float)arg3 shouldRenderFillSeparately:(char)arg4 completion:(/*^block*/id)arg5 ;
-(void)_clearCachedImages;
-(UIEdgeInsets)chartInsets;
-(void)setChartInsets:(UIEdgeInsets)arg1 ;
-(NSNumber *)maxYValueInData;
-(int)decimalPrecision;
-(WDChartDataGroup *)dataGroup;
-(int)dataState;
-(UIImage *)chartImage;
-(UIImage *)chartFillImage;
-(UIImage *)chartSecondaryFillImage;
-(char)finishedLoadingData;
-(id<WDChartRendererDataSource>)dataSource;
-(unsigned)_getNumberOfSeries;
-(id)_getSeriesAtIndex:(unsigned)arg1 ;
-(unsigned)_getNumberOfDataPointsForSeriesAtIndex:(unsigned)arg1 ;
-(id)_getDataPointAtIndex:(unsigned)arg1 forSeriesAtIndex:(unsigned)arg2 ;
-(unsigned)numberOfDataSetsInGroup:(id)arg1 ;
-(unsigned)dataGroup:(id)arg1 numberOfPointsInSetAtIndex:(unsigned)arg2 ;
-(id)dataGroup:(id)arg1 pointForSetAtIndex:(unsigned)arg2 pointIndex:(unsigned)arg3 ;
-(NSDate *)minXValue;
-(void)setMinXValue:(NSDate *)arg1 ;
-(NSDate *)maxXValue;
-(void)setMaxXValue:(NSDate *)arg1 ;
-(NSNumber *)minYValue;
-(NSNumber *)maxYValue;
-(NSObject*<OS_dispatch_queue>)clientQueue;
@end

