/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotificationsUI.framework/NotificationsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NCNotificationDateLabel <NSObject>
@property (assign,getter=isAllDay,nonatomic) char allDay; 
@property (assign,nonatomic) id<SBDateLabelDelegate> delegate; 
@property (assign,nonatomic) int labelType; 
@property (assign,nonatomic) char isTimestamp; 
@required
-(char)isAllDay;
-(void)setDelegate:(id)arg1;
-(id<SBDateLabelDelegate>)delegate;
-(void)prepareForReuse;
-(void)setAllDay:(char)arg1;
-(void)setLabelType:(int)arg1;
-(int)labelType;
-(void)startCoalescingUpdates;
-(void)setStartDate:(id)arg1 withTimeZone:(id)arg2;
-(void)setEndDate:(id)arg1 withTimeZone:(id)arg2;
-(void)stopCoalescingUpdates;
-(char)isTimestamp;
-(void)setIsTimestamp:(char)arg1;

@end

