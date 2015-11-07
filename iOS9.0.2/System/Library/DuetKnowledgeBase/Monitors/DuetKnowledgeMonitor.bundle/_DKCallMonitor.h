/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/DuetKnowledgeMonitor-Structs.h>
#import <DuetKnowledgeMonitor/_DKMonitor.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface _DKCallMonitor : _DKMonitor {

	NSObject*<OS_dispatch_queue> _callHistoryQueue;
	CTServerConnectionRef _telephony;

}
+(id)_eventWithState:(id)arg1 interaction:(id)arg2 ;
+(char)writeRepopulationCheckpoint:(id)arg1 ;
+(id)readRepopulationCheckpoint;
+(id)eventStream;
+(id)entitlements;
-(void)_handleDistributedNotification:(id)arg1 ;
-(void)deleteCallHistory;
-(void)requestCallHistoryRepopulation;
-(id)_initialCallHistoryLookbackDate;
-(void)recordCallHistoryFromStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)_recordCallHistoryFromStartDate:(id)arg1 toEndDate:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)stop;
-(void)start;
-(void)update;
-(void)_handleNotification:(id)arg1 info:(id)arg2 forConnection:(CTServerConnectionRef)arg3 ;
@end

