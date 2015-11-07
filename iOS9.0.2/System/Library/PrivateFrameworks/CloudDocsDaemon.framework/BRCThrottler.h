/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class BRCThrottleBase, NSObject;

@interface BRCThrottler : NSObject {

	BRCThrottleBase* _throttle;
	long long _latestRetry;
	unsigned _retryCount;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _source;

}
-(void)cancel;
-(void)reset;
-(void)suspend;
-(void)resume;
-(void)scheduleNextEvent;
-(id)initWithName:(id)arg1 throttleParameters:(id)arg2 queue:(id)arg3 handler:(/*^block*/id)arg4 ;
@end

