/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DuetKnowledgeMonitor/_DKMonitor.h>
#import <DuetKnowledgeMonitor/_DKNotificationReceiver.h>

@class NSString;

@interface _DKDeviceSleepMonitor : _DKMonitor <_DKNotificationReceiver> {

	char _enabled;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_eventWithMessage:(long)arg1 ;
+(id)eventStream;
+(id)entitlements;
-(void)receiveNotificationEvent:(id)arg1 ;
-(void)stop;
-(void)start;
@end

