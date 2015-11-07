/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <libobjc.A.dylib/HKGraphSeriesDataSourceDelegate.h>

@protocol HKSeriesDelegate, HKGraphSeriesAxisScalingRule;
@class NSMutableDictionary, NSNumber, HKPropertyAnimationApplier, HKGraphSeriesDataSource, NSUUID, HKAxis, UIColor, NSString;

@interface HKGraphSeries : NSObject <HKGraphSeriesDataSourceDelegate> {

	char _dirty;
	SCD_Struct_HK3 _selectedPointPath;
	NSMutableDictionary* _cachedCoordinateListsByBlockPath;
	NSMutableDictionary* _cachedDataBlocksByBlockPath;
	NSNumber* _closestSelectedXCoordinate;
	HKPropertyAnimationApplier* _animationApplier;
	HKGraphSeriesDataSource* _dataSource;
	id<HKSeriesDelegate> _delegate;
	float _alpha;
	float _offscreenIndicatorAlpha;
	NSUUID* _UUID;
	HKAxis* _yAxis;
	id<HKGraphSeriesAxisScalingRule> _axisScalingRule;
	UIColor* _offScreenIndicatorColor;

}

@property (nonatomic,retain) HKGraphSeriesDataSource * dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<HKSeriesDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) float alpha;                                                   //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) float offscreenIndicatorAlpha;                                 //@synthesize offscreenIndicatorAlpha=_offscreenIndicatorAlpha - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                                               //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy) HKAxis * yAxis;                                                  //@synthesize yAxis=_yAxis - In the implementation block
@property (nonatomic,retain) id<HKGraphSeriesAxisScalingRule> axisScalingRule;              //@synthesize axisScalingRule=_axisScalingRule - In the implementation block
@property (nonatomic,retain) UIColor * offScreenIndicatorColor;                             //@synthesize offScreenIndicatorColor=_offScreenIndicatorColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(HKGraphSeriesDataSource *)arg1 ;
-(void)setDelegate:(id<HKSeriesDelegate>)arg1 ;
-(void)dealloc;
-(float)alpha;
-(void)setAlpha:(float)arg1 ;
-(id)init;
-(HKGraphSeriesDataSource *)dataSource;
-(id<HKSeriesDelegate>)delegate;
-(void)_setDirty;
-(NSUUID *)UUID;
-(char)isHighlighted;
-(void)dataSourceDidUpdateCache:(id)arg1 ;
-(SCD_Struct_HK4)selectedPointPath;
-(UIColor *)offScreenIndicatorColor;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK0)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(float)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(float)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(float)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(void)autoscaleYAxisWithValueRange:(id)arg1 xAxis:(id)arg2 dateZoom:(int)arg3 chartRect:(CGRect)arg4 animated:(char)arg5 ;
-(id)_valueRangeForYAxisWithXAxisRange:(id)arg1 xAxis:(id)arg2 dateZoom:(int)arg3 ;
-(id)_dataBlockForBlockPath:(SCD_Struct_HK0)arg1 ;
-(void)_enumeratePathIndexesInDateRange:(id)arg1 zoomLevel:(int)arg2 block:(/*^block*/id)arg3 ;
-(id)_coordinateListsForGeneratorWithXAxis:(id)arg1 zoomScale:(float)arg2 chartRect:(CGRect)arg3 contentOffset:(CGPoint)arg4 ;
-(CGAffineTransform)coordinateTransformForChartRect:(CGRect)arg1 xAxisTransform:(CGAffineTransform)arg2 ;
-(void)enumerateCoordinatesInChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(float)arg3 contentOffset:(CGPoint)arg4 xAxisTransform:(CGAffineTransform)arg5 roundToViewScale:(char)arg6 rejectPointsOutOfChartRect:(char)arg7 block:(/*^block*/id)arg8 ;
-(id)_visibleXValueRangeWithAxis:(id)arg1 chartRect:(CGRect)arg2 contentOffset:(CGPoint)arg3 zoomScale:(float)arg4 ;
-(id)_coordinateListsWithXValueRange:(id)arg1 xAxis:(id)arg2 zoomLevel:(int)arg3 ;
-(id)_cachedCoordinatesForBlockPath:(SCD_Struct_HK0)arg1 ;
-(id)_coordinatesForBlockPath:(SCD_Struct_HK0)arg1 xAxis:(id)arg2 ;
-(void)_cacheCoordinates:(id)arg1 forBlockPath:(SCD_Struct_HK0)arg2 ;
-(void)selectPathAtPoint:(SCD_Struct_HK4)arg1 closestXCoordinate:(id)arg2 ;
-(void)enumerateCoordinatesInChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(float)arg3 contentOffset:(CGPoint)arg4 xAxisTransform:(CGAffineTransform)arg5 roundToViewScale:(char)arg6 block:(/*^block*/id)arg7 ;
-(void)autoscaleYAxisIfNecessaryWithValueRange:(id)arg1 xAxis:(id)arg2 dateZoom:(int)arg3 chartRect:(CGRect)arg4 ;
-(float)xAxisSelectedCoordinate:(float)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(void)drawWithChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(float)arg3 contentOffset:(CGPoint)arg4 zoomLevelConfiguration:(id)arg5 xAxisTransform:(CGAffineTransform)arg6 inContext:(CGContextRef)arg7 secondaryRenderContext:(id)arg8 ;
-(char)containsCoordinatesInChartRect:(CGRect)arg1 xAxis:(id)arg2 zoomScale:(float)arg3 contentOffset:(CGPoint)arg4 xAxisTransform:(CGAffineTransform)arg5 ;
-(void)_sendInvalidateToDelegate;
-(id)closestSelectedXCoordinate;
-(void)deselectPath;
-(float)distanceFromTouchPoint:(CGPoint)arg1 inChartRect:(CGRect)arg2 xAxis:(id)arg3 zoomScale:(float)arg4 contentOffset:(CGPoint)arg5 xAxisTransform:(CGAffineTransform)arg6 ;
-(float)offscreenIndicatorAlpha;
-(void)setOffscreenIndicatorAlpha:(float)arg1 ;
-(HKAxis *)yAxis;
-(void)setYAxis:(HKAxis *)arg1 ;
-(id<HKGraphSeriesAxisScalingRule>)axisScalingRule;
-(void)setAxisScalingRule:(id<HKGraphSeriesAxisScalingRule>)arg1 ;
-(void)setOffScreenIndicatorColor:(UIColor *)arg1 ;
@end

