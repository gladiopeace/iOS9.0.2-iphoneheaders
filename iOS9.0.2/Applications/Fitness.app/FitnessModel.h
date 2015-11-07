/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSCalendar;

@interface FitnessModel : NSObject {

	NSDate* _currentDate;
	NSCalendar* _calendar;

}

@property (nonatomic,retain) NSDate * currentDate;               //@synthesize currentDate=_currentDate - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
-(void)setCurrentDate:(id)arg1 from:(id)arg2 ;
-(void)timeChanged:(id)arg1 ;
-(NSDate *)currentDate;
-(void)dealloc;
-(id)init;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(void)setCurrentDate:(NSDate *)arg1 ;
@end

