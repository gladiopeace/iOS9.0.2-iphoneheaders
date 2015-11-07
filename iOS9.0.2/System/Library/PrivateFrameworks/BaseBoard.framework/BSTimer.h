/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, BSDispatchSource;

@interface BSTimer : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;
	BSDispatchSource* _source;
	double _fireInterval;
	double _repeatInterval;
	double _leewayInterval;

}
+(id)scheduledTimerWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(void)schedule;
-(id)initWithFireInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithFireInterval:(double)arg1 repeatInterval:(double)arg2 leewayInterval:(double)arg3 queue:(id)arg4 handler:(/*^block*/id)arg5 ;
@end

