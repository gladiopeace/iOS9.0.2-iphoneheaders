/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarItemEditItem.h>

@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem {

	unsigned _entityType;

}
-(id)cellForSubitemAtIndex:(unsigned)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned)arg2 ;
-(char)editItemViewControllerCommit:(id)arg1 ;
-(char)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(char)requiresReconfigurationOnCommit;
-(id)initWithEntityType:(unsigned)arg1 ;
-(char)_shouldShowSourceForCalendar:(id)arg1 ;
-(char)shouldAppearWithVisibility:(int)arg1 ;
-(id)init;
@end

