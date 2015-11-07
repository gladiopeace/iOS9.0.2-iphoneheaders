/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Security.framework/CircleJoinRequested/CircleJoinRequested
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSNumber;

@interface PersistentState : NSObject {

	char _absentCircleWithNoReason;
	int _lastCircleStatus;
	NSDate* _lastWritten;
	NSDate* _pendingApplicationReminder;
	unsigned _pendingApplicationReminderAlertInterval;
	NSDate* _applicationDate;
	NSNumber* _debugShowLeftReason;

}

@property (assign) int lastCircleStatus;                                          //@synthesize lastCircleStatus=_lastCircleStatus - In the implementation block
@property (retain) NSDate * lastWritten;                                          //@synthesize lastWritten=_lastWritten - In the implementation block
@property (retain) NSDate * pendingApplicationReminder;                           //@synthesize pendingApplicationReminder=_pendingApplicationReminder - In the implementation block
@property (assign) unsigned pendingApplicationReminderAlertInterval;              //@synthesize pendingApplicationReminderAlertInterval=_pendingApplicationReminderAlertInterval - In the implementation block
@property (retain) NSDate * applicationDate;                                      //@synthesize applicationDate=_applicationDate - In the implementation block
@property (retain) NSNumber * debugShowLeftReason;                                //@synthesize debugShowLeftReason=_debugShowLeftReason - In the implementation block
@property (assign) char absentCircleWithNoReason;                                 //@synthesize absentCircleWithNoReason=_absentCircleWithNoReason - In the implementation block
+(id)loadFromStorage;
-(id)urlForStorage;
-(void)setLastCircleStatus:(int)arg1 ;
-(void)setLastWritten:(NSDate *)arg1 ;
-(void)setPendingApplicationReminder:(NSDate *)arg1 ;
-(void)setApplicationDate:(NSDate *)arg1 ;
-(void)setDebugShowLeftReason:(NSNumber *)arg1 ;
-(unsigned)defaultPendingApplicationReminderAlertInterval;
-(void)setPendingApplicationReminderAlertInterval:(unsigned)arg1 ;
-(void)setAbsentCircleWithNoReason:(char)arg1 ;
-(int)lastCircleStatus;
-(NSDate *)pendingApplicationReminder;
-(NSDate *)applicationDate;
-(unsigned)pendingApplicationReminderAlertInterval;
-(char)absentCircleWithNoReason;
-(NSNumber *)debugShowLeftReason;
-(void)writeToStorage;
-(NSDate *)lastWritten;
@end

