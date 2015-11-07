/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKDayViewControllerDelegate <NSObject>
@optional
-(void)dayViewControllerDidFinishPinchingDayView:(id)arg1;
-(void)dayViewControllerIsPinchingDayView:(id)arg1;
-(void)dayViewControllerDidChangeDisplayedOccurrences:(id)arg1;
-(void)dayViewController:(id)arg1 awaitsRefreshingOccurrence:(id)arg2;
-(void)dayViewController:(id)arg1 awaitsDeletingOccurrence:(id)arg2;
-(void)dayViewControllerDidReloadData:(id)arg1;
-(void)dayViewControllerDidUpdateScrollPosition:(id)arg1;
-(void)dayViewControllerDidTapEmptySpace:(id)arg1;
-(id)dayViewController:(id)arg1 createEventAtDate:(id)arg2 allDay:(char)arg3;
-(char)dayViewControllerShouldAllowLongPress:(id)arg1;
-(void)dayViewcontrollerDidBeginMovingEventWithGesture:(id)arg1;
-(void)dayViewController:(id)arg1 beginEditingOccurrence:(id)arg2;
-(char)delegateWantsToHandleDayViewController:(id)arg1 gestureCommittingOccurrence:(id)arg2;
-(void)dayViewController:(id)arg1 handleGestureCommittingOccurrence:(id)arg2;
-(char)dayViewControllerShouldShowDetachDialogOnGestureDraggingEnd:(id)arg1;
-(void)dayViewController:(id)arg1 didScrollToDate:(id)arg2 normalizedOffset:(float)arg3;
-(void)dayViewController:(id)arg1 didStartDeceleratingTargettingDate:(id)arg2;
-(void)dayViewControllerDidRespondToApplicationDidBecomeActiveStateChange:(id)arg1;
-(void)dayViewControllerDidBeginScrolling:(id)arg1;
-(void)dayViewControllerDidEndScrolling:(id)arg1;
-(char)dayviewControllerShouldAllowSwipeToChangeDays:(id)arg1;
-(void)updateSelectedOccurrenceView;

@required
-(void)dayViewController:(id)arg1 didSelectEvent:(id)arg2 animated:(char)arg3;
-(void)dayViewController:(id)arg1 didChangeDisplayDate:(id)arg2;

@end

