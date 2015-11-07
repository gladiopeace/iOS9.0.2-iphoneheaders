/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/HKCalendarWeekViewDelegate.h>

@protocol HKCalendarViewControllerDelegate;
@class HKCalendarDayCell, HKDateCache, NSMutableArray, UIScrollView, NSCalendar, NSArray, NSString;

@interface HKCalendarScrollViewController : UIViewController <UIScrollViewDelegate, HKCalendarWeekViewDelegate> {

	HKCalendarDayCell* _selectedCell;
	HKDateCache* _dateCache;
	NSMutableArray* _weekViews;
	unsigned _numberOfRows;
	char _needsInitialOffset;
	UIScrollView* _scrollView;
	NSCalendar* _calendar;
	float _topInset;
	id<HKCalendarViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) UIScrollView * scrollView;                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) NSCalendar * calendar;                                             //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,retain) HKCalendarDayCell * selectedCell;                                  //@synthesize selectedCell=_selectedCell - In the implementation block
@property (assign,nonatomic) float topInset;                                                    //@synthesize topInset=_topInset - In the implementation block
@property (nonatomic,readonly) NSArray * weekViews;                                             //@synthesize weekViews=_weekViews - In the implementation block
@property (assign,nonatomic,__weak) id<HKCalendarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKCalendarDayCell *)selectedCell;
-(id)_todayAttributes;
-(NSArray *)weekViews;
-(void)setDelegate:(id<HKCalendarViewControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id<HKCalendarViewControllerDelegate>)delegate;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(void)week:(id)arg1 todayCellUpdated:(id)arg2 ;
-(void)_calendarDayChanged;
-(void)_createWeekViews;
-(void)_selectTodayCell;
-(CGPoint)_setWeekViewsToCenterDate:(id)arg1 forceUpdate:(char)arg2 ;
-(float)_heightOfAllWeekCells;
-(Class)weekClass;
-(void)weekViewWasCreated:(id)arg1 atIndex:(int)arg2 ;
-(id)_weekForDate:(id)arg1 ;
-(id)_weekViewForToday;
-(void)_pulseCircle;
-(void)setSelectedCell:(HKCalendarDayCell *)arg1 ;
-(id)_currentlyCenteredVisibleWeek;
-(id)_startDateToTileWeekViews:(id)arg1 ;
-(void)weekViewWasRearranged:(id)arg1 ;
-(CGPoint)_centerPointToCenterDate:(id)arg1 ;
-(char)_dateIsVisible:(id)arg1 ;
-(void)scrollToDate:(id)arg1 ;
-(CGRect)_visibleContentRect;
-(unsigned)_firstVisibleWeekIndex;
-(void)week:(id)arg1 cellSelected:(id)arg2 ;
-(void)week:(id)arg1 pressedOnDay:(int)arg2 down:(char)arg3 ;
-(void)scrollToToday;
-(float)topInset;
-(void)setTopInset:(float)arg1 ;
@end

