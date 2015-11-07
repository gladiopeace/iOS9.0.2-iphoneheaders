/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSDate, UISegmentedControl, UIDatePicker, RoutePickingTiming;

@interface TransitOptionsWheelsOfTimeCell : UITableViewCell {

	NSDate* _now;
	UISegmentedControl* _arriveDepartSegmentedControl;
	UIDatePicker* _datePicker;
	char _compact;
	/*^block*/id _userSelectionDidChange;
	RoutePickingTiming* _timing;

}

@property (nonatomic,copy) id userSelectionDidChange;                      //@synthesize userSelectionDidChange=_userSelectionDidChange - In the implementation block
@property (nonatomic,retain) RoutePickingTiming * timing;                  //@synthesize timing=_timing - In the implementation block
@property (getter=isCompact,nonatomic,readonly) char compact;              //@synthesize compact=_compact - In the implementation block
-(char)selectedArriveByOption;
-(void)setUserSelectionDidChange:(id)arg1 ;
-(void)_setDatePickerBoundaries;
-(id)userSelectionDidChange;
-(void)updateImmediatelyIfNeeded;
-(id)initShowingArriveBy:(char)arg1 compact:(char)arg2 ;
-(void)_selectionDidChange;
-(void)_update;
-(RoutePickingTiming *)timing;
-(void)setTiming:(RoutePickingTiming *)arg1 ;
-(char)isCompact;
@end

