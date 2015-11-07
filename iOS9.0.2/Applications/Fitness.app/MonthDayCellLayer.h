/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Fitness/Fitness-Structs.h>
#import <QuartzCore/CALayer.h>

@class CircleLayer, MonthTappableDay, NSDate;

@interface MonthDayCellLayer : CALayer {

	char _cellMinimized;
	char _isFutureDay;
	char _isToday;
	CircleLayer* _circleLayer;
	MonthTappableDay* _tappableDayView;
	NSDate* _date;
	CGRect _fullFrame;
	CGRect _narrowFrame;

}

@property (nonatomic,retain) CircleLayer * circleLayer;                       //@synthesize circleLayer=_circleLayer - In the implementation block
@property (assign,nonatomic) char cellMinimized;                              //@synthesize cellMinimized=_cellMinimized - In the implementation block
@property (nonatomic,retain) MonthTappableDay * tappableDayView;              //@synthesize tappableDayView=_tappableDayView - In the implementation block
@property (assign,nonatomic) char isFutureDay;                                //@synthesize isFutureDay=_isFutureDay - In the implementation block
@property (assign,nonatomic) CGRect fullFrame;                                //@synthesize fullFrame=_fullFrame - In the implementation block
@property (assign,nonatomic) CGRect narrowFrame;                              //@synthesize narrowFrame=_narrowFrame - In the implementation block
@property (nonatomic,retain) NSDate * date;                                   //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) char isToday;                                    //@synthesize isToday=_isToday - In the implementation block
+(void)initialize;
-(int)setWeekStart:(id)arg1 index:(int)arg2 ;
-(void)setFullFrame:(CGRect)arg1 ;
-(void)setNarrowFrame:(CGRect)arg1 ;
-(MonthTappableDay *)tappableDayView;
-(void)setDayScaling:(float)arg1 animated:(char)arg2 ;
-(char)isFutureDay;
-(void)pressToTransition:(char)arg1 ;
-(CircleLayer *)circleLayer;
-(void)setNumberOfWorkouts:(id)arg1 ;
-(void)_updateTodayHighlighting;
-(id)reusedImageForDateString:(id)arg1 ;
-(void)setCircleLayer:(CircleLayer *)arg1 ;
-(char)cellMinimized;
-(void)setCellMinimized:(char)arg1 ;
-(void)setTappableDayView:(MonthTappableDay *)arg1 ;
-(void)setIsFutureDay:(char)arg1 ;
-(CGRect)fullFrame;
-(CGRect)narrowFrame;
-(void)setIsToday:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)layoutSublayers;
-(char)isToday;
@end

