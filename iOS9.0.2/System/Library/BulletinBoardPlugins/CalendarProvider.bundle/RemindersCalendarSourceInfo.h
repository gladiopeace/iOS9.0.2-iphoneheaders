/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/BulletinBoardPlugins/CalendarProvider.bundle/CalendarProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKSource, NSMutableArray;

@interface RemindersCalendarSourceInfo : NSObject {

	EKSource* _source;
	NSMutableArray* _array;

}

@property (readonly) NSMutableArray * calendarArray;              //@synthesize array=_array - In the implementation block
+(id)sortedGroupsOfCalendarsInEventStore:(id)arg1 includingInvitations:(char)arg2 ;
-(char)_isNonEmpty;
-(char)canAddList;
-(NSMutableArray *)calendarArray;
-(char)canDeleteList;
-(char)shouldShowWhenEditingLists;
-(char)shouldShowWhenViewingLists;
-(id)initWithSource:(id)arg1 ;
-(id)title;
-(int)sortOrder;
-(id)source;
@end

