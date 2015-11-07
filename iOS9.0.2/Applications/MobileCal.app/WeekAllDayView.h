/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>
#import <MobileCal/WeekViewAllDayContentsDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol WeekAllDayViewDelegate;
@class NSDateComponents, NSArray, NSMutableArray, WeekViewAllDayContents, UIScrollView, UIView, EKEvent, EKDayOccurrenceView, UITapGestureRecognizer, NSCalendar, NSTimeZone, NSString;

@interface WeekAllDayView : UIView <WeekViewAllDayContentsDelegate, UIScrollViewDelegate> {

	NSDateComponents* _startDate;
	NSDateComponents* _endDate;
	unsigned _daysToDisplay;
	NSArray* _dayStarts;
	NSMutableArray* _layedOutRows;
	WeekViewAllDayContents* _contentView;
	UIScrollView* _scroller;
	NSArray* _dayNumberViews;
	NSArray* _dayNameLabels;
	NSArray* _verticalDaySeparators;
	UIView* _topSeparator;
	UIView* _bottomSeparator;
	EKEvent* _selectedEvent;
	EKEvent* _dimmedOccurrence;
	EKDayOccurrenceView* _selectedOccurrenceView;
	EKEvent* _scrollingToOccurrence;
	CGRect _latestVisibleRect;
	char _needsHeaderUpdate;
	UITapGestureRecognizer* _tapGestureRecognizer;
	char _showWeekNumbers;
	char _showsHalfOfScrolledEvents;
	char _allowsOccurrenceSelection;
	char _receiveTapsInHeader;
	char _usesSmallText;
	char _leftMarginIncludesTimeView;
	char _hideVerticalLinesInHeader;
	id<WeekAllDayViewDelegate> _delegate;
	NSCalendar* _calendar;
	float _fixedDayWidth;
	float _fixedDayHeight;
	int _orientation;
	float _minimumHeight;
	unsigned _visibleRowCount;

}

@property (assign,nonatomic,__weak) id<WeekAllDayViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDateComponents * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;                                     //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) char showWeekNumbers;                                    //@synthesize showWeekNumbers=_showWeekNumbers - In the implementation block
@property (assign,nonatomic) char showsHalfOfScrolledEvents;                          //@synthesize showsHalfOfScrolledEvents=_showsHalfOfScrolledEvents - In the implementation block
@property (nonatomic,readonly) unsigned maxOccurrencesWithoutScroller; 
@property (assign,nonatomic) char allowsOccurrenceSelection;                          //@synthesize allowsOccurrenceSelection=_allowsOccurrenceSelection - In the implementation block
@property (assign,nonatomic) char receiveTapsInHeader;                                //@synthesize receiveTapsInHeader=_receiveTapsInHeader - In the implementation block
@property (assign,nonatomic) float fixedDayWidth;                                     //@synthesize fixedDayWidth=_fixedDayWidth - In the implementation block
@property (assign,nonatomic) float fixedDayHeight;                                    //@synthesize fixedDayHeight=_fixedDayHeight - In the implementation block
@property (assign,nonatomic) char usesSmallText;                                      //@synthesize usesSmallText=_usesSmallText - In the implementation block
@property (assign,nonatomic) int orientation;                                         //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset; 
@property (assign,nonatomic) float minimumHeight;                                     //@synthesize minimumHeight=_minimumHeight - In the implementation block
@property (nonatomic,readonly) float naturalHeight; 
@property (nonatomic,readonly) float firstEventYOffset; 
@property (nonatomic,readonly) NSArray * occurrenceViews; 
@property (assign,nonatomic) char leftMarginIncludesTimeView;                         //@synthesize leftMarginIncludesTimeView=_leftMarginIncludesTimeView - In the implementation block
@property (nonatomic,retain) EKEvent * dimmedOccurrence;                              //@synthesize dimmedOccurrence=_dimmedOccurrence - In the implementation block
@property (assign,nonatomic) char hideVerticalLinesInHeader;                          //@synthesize hideVerticalLinesInHeader=_hideVerticalLinesInHeader - In the implementation block
@property (assign,nonatomic) unsigned visibleRowCount;                                //@synthesize visibleRowCount=_visibleRowCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_dayLabelFont;
+(float)_heightForWeekdayLabels;
+(float)_yOffsetForWeekdayLabels;
+(id)_todayDayLabelFont;
+(float)baselineForWeekdayLabels;
+(float)dayLabelHeight;
+(UIEdgeInsets)occurrencePadding;
-(id)initWithFrame:(CGRect)arg1 orientation:(int)arg2 numberOfDaysToDisplay:(unsigned)arg3 opaque:(char)arg4 backgroundColor:(id)arg5 ;
-(void)_significantTimeChanged:(id)arg1 ;
-(void)_setNeedsHeaderUpdate;
-(void)_buildDayNumberAndNameViews;
-(void)_computeDayStartsAndEndDate;
-(void)setVisibleRowCount:(unsigned)arg1 ;
-(unsigned)visibleRowCount;
-(id)occurrenceViewForOccurrence:(id)arg1 ;
-(id)_calendarOrderSortDescriptor;
-(id)_numberOfDaysSortDescriptor;
-(id)_extractEventsStartingBeforeTimeframeFrom:(id)arg1 ;
-(id)_sortBlocks:(id)arg1 intoRowsUsingDataFrom:(id)arg2 ;
-(id)_extractEventsEndingAfterTimeframeFrom:(id)arg1 ;
-(id)_getSortedBlocksFromOccurrenceBlocks:(id)arg1 ;
-(int)rowIndexOfOccurrence:(id)arg1 ;
-(unsigned)maxOccurrencesWithoutScroller;
-(float)occurrenceHeight;
-(float)heightForNumberOfOccurrences:(unsigned)arg1 ;
-(void)_tapReceived:(id)arg1 ;
-(void)emptySpaceClickForCalendarWeekDayEventContent:(id)arg1 atPoint:(CGPoint)arg2 ;
-(CGRect)_weekdayFrameForDayIndex:(int)arg1 ;
-(CGRect)_numberFrameForDayIndex:(int)arg1 ;
-(CGSize)_circleSize;
-(int)_dayIndexForToday;
-(id)_dayLabelColorAtDayIndex:(int)arg1 ;
-(id)_dayLabelFontAtDayIndex:(int)arg1 ;
-(void)_updateHeaderViewsIfNeeded;
-(void)_layoutDayNumberCells;
-(void)_layoutDayNameLabels;
-(void)_buildVerticalDaySeparators;
-(void)_layoutVerticalDaySeparators;
-(CGRect)_frameForOccurrenceBlock:(id)arg1 index:(unsigned)arg2 ;
-(double)_dateForPoint:(CGPoint)arg1 ;
-(void)showOverlayMonthInCellAtOffset:(float)arg1 animated:(char)arg2 ;
-(id)selectedOccurrenceView;
-(void)scrollToEvent:(id)arg1 animating:(char)arg2 ;
-(char)hasOccurrences;
-(void)setReceiveTapsInHeader:(char)arg1 ;
-(unsigned)_calendarOrderForCalendar:(id)arg1 ;
-(float)nextAvailableOccurrenceViewYOriginForDay:(double)arg1 ;
-(char)leftMarginIncludesTimeView;
-(char)showsHalfOfScrolledEvents;
-(void)setShowsHalfOfScrolledEvents:(char)arg1 ;
-(char)receiveTapsInHeader;
-(float)fixedDayHeight;
-(void)setFixedDayHeight:(float)arg1 ;
-(void)setLeftMarginIncludesTimeView:(char)arg1 ;
-(char)hideVerticalLinesInHeader;
-(void)setHideVerticalLinesInHeader:(char)arg1 ;
-(void)setAllowsOccurrenceSelection:(char)arg1 ;
-(void)setUsesSmallText:(char)arg1 ;
-(NSArray *)occurrenceViews;
-(void)setViewsDimmed:(char)arg1 forEvent:(id)arg2 ;
-(void)setFixedDayWidth:(float)arg1 ;
-(float)_dayWidth;
-(void)rectBecameVisible:(CGRect)arg1 ;
-(id)selectedEvent;
-(void)selectEvent:(id)arg1 ;
-(void)setDimmedOccurrence:(EKEvent *)arg1 ;
-(void)dayOccurrenceViewClicked:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)occurrenceViewForEvent:(id)arg1 ;
-(void)setOccurrences:(id)arg1 ;
-(char)allowsOccurrenceSelection;
-(char)usesSmallText;
-(float)fixedDayWidth;
-(EKEvent *)dimmedOccurrence;
-(char)showWeekNumbers;
-(void)setShowWeekNumbers:(char)arg1 ;
-(float)naturalHeight;
-(float)firstEventYOffset;
-(void)addViewToScroller:(id)arg1 ;
-(NSDateComponents *)startDate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<WeekAllDayViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<WeekAllDayViewDelegate>)delegate;
-(CGPoint)contentOffset;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSTimeZone *)timeZone;
-(NSCalendar *)calendar;
-(float)minimumHeight;
-(void)setMinimumHeight:(float)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(void)setStartDate:(NSDateComponents *)arg1 ;
@end

