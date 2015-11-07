/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSTimer, NSObject;

@interface WBSPeriodicActivityScheduler : NSObject {

	/*^block*/id _block;
	char _invalidated;
	NSTimer* _timer;
	double _interval;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)invalidate;
-(id)initWithInterval:(double)arg1 minimumDelay:(double)arg2 lastFireDate:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)_scheduleTimerWithFireInterval:(double)arg1 ;
-(void)_timerDidFire:(id)arg1 ;
@end

