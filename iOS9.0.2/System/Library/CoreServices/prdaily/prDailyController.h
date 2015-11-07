/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/prdaily
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDate, NSObject;

@interface prDailyController : NSObject {

	BOOL _btaJobExists;
	double _lastWakeupTime;
	NSDate* _expectedWakeupTime;
	NSDate* _plannedNextWakeupTime;
	NSObject*<OS_dispatch_queue> _requestQueue;
	int _todayDaysSince1970;

}

@property (assign,nonatomic) double lastWakeupTime;              //@synthesize lastWakeupTime=_lastWakeupTime - In the implementation block
+(int)_daysSince1970;
-(void)_setupBackgroundTaskAgentHandler;
-(int)_getWakeupStatus;
-(void)_markLastWakeupTime;
-(BOOL)_alreadyDumpedToday;
-(void)_rescheduleCurrentTrigger;
-(void)_rescheduleNextTrigger;
-(id)expectedWakeupTime;
-(id)plannedNextWakeupTime;
-(void)handleTrigger;
-(void)_handleBackgroundTaskAgentEvent:(id)arg1 ;
-(id)newBackgroundTaskAgentJobWithNextWakeupTime:(id)arg1 ;
-(void)_handleRequest:(id)arg1 ;
-(double)lastWakeupTime;
-(void)setLastWakeupTime:(double)arg1 ;
-(id)init;
@end

