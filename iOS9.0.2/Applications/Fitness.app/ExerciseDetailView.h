/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Fitness/DetailView.h>

@class ActivityBriskMinutesChart;

@interface ExerciseDetailView : DetailView {

	ActivityBriskMinutesChart* _chart;

}
-(void)setBriskMinutes:(int)arg1 goal:(int)arg2 percent:(double)arg3 ;
-(void)setActiveMinutes:(int)arg1 ;
-(void)setBriskMinutesChartData:(id)arg1 ;
-(id)initWithDate:(id)arg1 ;
@end
