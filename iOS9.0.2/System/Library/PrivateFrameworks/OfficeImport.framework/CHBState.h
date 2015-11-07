/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class CHDChart;

@interface CHBState : NSObject {

	CHDChart* mChart;
	CFArrayRef mXlChartDataSeriesCollection;
	int mXlSeriesCount;
	int mXlCurrentSeriesIndex;
	BOOL mHasPrimaryMixedArea;
	BOOL mHasPrimaryMixedColumn;
	BOOL mHasPrimaryMixedLine;
	BOOL mHasSecondaryMixedArea;
	BOOL mHasSecondaryMixedColumn;
	BOOL mHasSecondaryMixedLine;

}
-(void)dealloc;
-(id)init;
-(id)resources;
-(id)workbook;
-(void)setChart:(id)arg1 ;
-(id)chart;
-(int)xlSeriesCount;
-(XlChartDataSeries*)xlChartDataSeriesAtIndex:(int)arg1 ;
-(void)setXlCurrentSeriesIndex:(int)arg1 ;
-(void)deleteXlChartDataSeriesCollection;
-(void)readAndCacheXlChartDataSeries;
-(BOOL)hasPrimaryMixedArea;
-(BOOL)hasSecondaryMixedArea;
-(BOOL)hasPrimaryMixedColumn;
-(BOOL)hasSecondaryMixedColumn;
-(BOOL)hasPrimaryMixedLine;
-(XlChartDataSeries*)xlCurrentChartDataSeries;
-(int)xlCurrentChartDataSeriesIndex;
-(void)setHasPrimaryMixedArea:(BOOL)arg1 ;
-(void)setHasPrimaryMixedColumn:(BOOL)arg1 ;
-(void)setHasPrimaryMixedLine:(BOOL)arg1 ;
-(void)setHasSecondaryMixedArea:(BOOL)arg1 ;
-(void)setHasSecondaryMixedColumn:(BOOL)arg1 ;
-(BOOL)hasSecondaryMixedLine;
-(void)setHasSecondaryMixedLine:(BOOL)arg1 ;
-(BOOL)isMixedChart;
-(unsigned)chartGroupIndexForType:(int)arg1 isForPrimary:(BOOL)arg2 ;
@end

