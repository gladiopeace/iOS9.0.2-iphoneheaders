/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Assistant/UIPlugins/Calendar.siriUIBundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <libobjc.A.dylib/EKDayViewDelegate.h>
#import <libobjc.A.dylib/EKDayViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class EKEventStore, UIGestureRecognizer, EKCalendarDate, NSMutableArray, NSString;

@interface EKAssistantUIController : SiriUISnippetViewController <EKDayViewDelegate, EKDayViewDataSource, UITableViewDelegate, UITableViewDataSource> {

	char _isDraft;
	EKEventStore* _eventStore;
	UIGestureRecognizer* _eventTapRecognizer;
	EKCalendarDate* _date;
	NSMutableArray* _events;
	NSMutableArray* _sections;
	unsigned _hiddenEventCount;

}

@property (assign,nonatomic) EKEventStore * eventStore;                             //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * eventTapRecognizer;              //@synthesize eventTapRecognizer=_eventTapRecognizer - In the implementation block
@property (nonatomic,retain) EKCalendarDate * date;                                 //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) NSMutableArray * events;                               //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;                             //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) char isDraft;                                          //@synthesize isDraft=_isDraft - In the implementation block
@property (assign,nonatomic) unsigned hiddenEventCount;                             //@synthesize hiddenEventCount=_hiddenEventCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)closeEventStore;
+(id)openEventStore;
-(void)_buildSections;
-(void)tappedSingleEventGesture:(id)arg1 ;
-(UIGestureRecognizer *)eventTapRecognizer;
-(void)setEventTapRecognizer:(UIGestureRecognizer *)arg1 ;
-(unsigned)hiddenEventCount;
-(char)_buildEvents;
-(void)_openEvent:(id)arg1 ;
-(id)_eventFromAceEvent:(id)arg1 ;
-(void)setHiddenEventCount:(unsigned)arg1 ;
-(char)_crossesMultipleDays;
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(id)dayView:(id)arg1 eventsForStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)dayView:(id)arg1 didSelectEvent:(id)arg2 ;
-(void)dealloc;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(EKCalendarDate *)date;
-(void)loadView;
-(char)tableView:(id)arg1 wantsHeaderForSection:(int)arg2 ;
-(void)setDate:(EKCalendarDate *)arg1 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(id)initWithAceObject:(id)arg1 ;
-(void)setIsDraft:(char)arg1 ;
-(char)isDraft;
-(float)desiredHeight;
-(void)setEvents:(NSMutableArray *)arg1 ;
-(NSMutableArray *)events;
@end

