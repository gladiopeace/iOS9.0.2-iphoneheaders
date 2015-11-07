/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>

@class CMMotionActivityManager, NSOperationQueue;

@interface _DKMotionMonitor : _DKMonitor {

	CMMotionActivityManager* _activityManager;
	char _monitoringActivity;
	NSOperationQueue* _queue;

}
+(id)_eventWithState:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
+(id)eventStream;
+(id)entitlements;
-(void)recordMotionActivity:(id)arg1 ;
-(unsigned long long)_activityTypeToState:(id)arg1 ;
-(void)computeDominantMotionType;
-(id)init;
-(void)stop;
-(void)start;
-(void)update;
@end

