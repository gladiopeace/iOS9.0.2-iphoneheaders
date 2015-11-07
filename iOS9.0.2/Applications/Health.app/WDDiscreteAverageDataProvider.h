/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Health/WDDataProvider.h>

@class HKStatisticsCollectionQuery, HKQuery;

@interface WDDiscreteAverageDataProvider : WDDataProvider {

	HKStatisticsCollectionQuery* _statisticsQuery;
	HKQuery* _averageQuery;
	HKQuery* _currentValueQuery;

}
-(void)restartQueries;
-(void)_restartCurrentValueQuery;
-(void)_restartHistoricalDataQuery;
-(void)stopQueries;
-(void)_stopCurrentValueQuery;
-(void)_stopHistoricalDataQuery;
-(id)_historicalDataQuery;
-(void)_updateMostRecentObject;
-(id)_currentValueQuery;
-(void)_restartAverageQuery;
-(void)_stopAverageQuery;
-(id)_chartPointForStatistics:(id)arg1 dataUnit:(id)arg2 ;
-(id)_averageQuery;
-(void)_refreshHistoricalDataWithStatistics:(id)arg1 error:(id)arg2 dataUnit:(id)arg3 timeScope:(int)arg4 ;
@end

