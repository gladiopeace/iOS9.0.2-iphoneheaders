/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/Health-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol WDChartDataSetDataSource;
@class NSArray;

@interface WDChartDataSet : NSObject <NSCopying> {

	NSArray* _data;
	id<WDChartDataSetDataSource> _dataSource;
	int _tag;

}

@property (assign,nonatomic,__weak) id<WDChartDataSetDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) int tag;                                                     //@synthesize tag=_tag - In the implementation block
-(id)averageYValue;
-(id)allDataPoints;
-(id)totalYValue;
-(id)_getChartPointAndAnnotationAtIndex:(unsigned)arg1 ;
-(id)_getAnnotationForPointAtIndex:(unsigned)arg1 ;
-(id)annotationForPointAtIndex:(unsigned)arg1 ;
-(void)addDataPointWithXValue:(id)arg1 yValue:(id)arg2 annotation:(id)arg3 ;
-(id)_getChartPointsAndAnnotations;
-(void)setDataSource:(id<WDChartDataSetDataSource>)arg1 ;
-(void)reloadData;
-(id)description;
-(id<WDChartDataSetDataSource>)dataSource;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)tag;
-(void)setTag:(int)arg1 ;
-(id)minXValue;
-(id)maxXValue;
-(void)normalizeDataWithMinYValue:(id)arg1 maxYValue:(id)arg2 minXValue:(id)arg3 maxXValue:(id)arg4 ;
-(unsigned)_getNumberOfDataPoints;
-(id)_getPointAtIndex:(unsigned)arg1 ;
-(id)_getPoints;
-(unsigned)numDataPoints;
-(id)yValueForPointAtIndex:(unsigned)arg1 ;
-(id)yValueForPointAtIndex:(unsigned)arg1 key:(id)arg2 ;
-(id)xValueForPointAtIndex:(unsigned)arg1 ;
-(void)normalizeData;
-(void)reloadDataPointAtIndex:(unsigned)arg1 ;
-(void)removeDataPointAtIndex:(unsigned)arg1 ;
-(id)pointAtIndex:(unsigned)arg1 ;
-(id)minYValue;
-(id)maxYValue;
@end

