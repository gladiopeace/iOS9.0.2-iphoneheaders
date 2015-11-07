/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSDateFormatter;

@interface AlarmScheduleHeaderView : UIView {

	NSMutableArray* _dateLabels;
	NSDateFormatter* _formatter;
	int _firstDayOfWeek;
	int _currentDayOfWeek;
	float _leftMargin;
	float _columnWidth;

}

@property (assign,nonatomic) int firstDayOfWeek;                //@synthesize firstDayOfWeek=_firstDayOfWeek - In the implementation block
@property (assign,nonatomic) int currentDayOfWeek;              //@synthesize currentDayOfWeek=_currentDayOfWeek - In the implementation block
@property (assign,nonatomic) float leftMargin;                  //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) float columnWidth;                 //@synthesize columnWidth=_columnWidth - In the implementation block
+(float)defaultHeight;
-(int)currentDayOfWeek;
-(void)setCurrentDayOfWeek:(int)arg1 ;
-(void)updateDayLabelValues;
-(id)newDateLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(float)columnWidth;
-(void)setColumnWidth:(float)arg1 ;
-(void)setFirstDayOfWeek:(int)arg1 ;
-(int)firstDayOfWeek;
-(float)leftMargin;
-(void)setLeftMargin:(float)arg1 ;
-(void)handleLocaleChange;
@end
