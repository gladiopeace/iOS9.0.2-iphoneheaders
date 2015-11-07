/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _DECResult, NSXPCConnection, NSObject, _DECResultNotificationReceiver;

@interface _DECConsumer : NSObject {

	unsigned _consumerType;
	/*^block*/id _handler;
	_DECResult* _cachedResult;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_queue> _queue;
	char _startedMonitoring;
	unsigned _limit;
	_DECResultNotificationReceiver* _receiver;
	unsigned _category;

}

@property (assign,nonatomic) unsigned category;              //@synthesize category=_category - In the implementation block
-(id)init;
-(void)setCategory:(unsigned)arg1 ;
-(unsigned)category;
-(id)initWithCategory:(unsigned)arg1 consumerType:(unsigned)arg2 queue:(id)arg3 ;
-(void)fetchPredictionsWithLimit:(unsigned)arg1 handler:(/*^block*/id)arg2 ;
-(void)startMonitoringForPredictionsWithLimit:(unsigned)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopMonitoringForPredictions;
-(void)receivePrediction:(id)arg1 consumer:(unsigned)arg2 reply:(/*^block*/id)arg3 ;
-(void)_setupConnection;
-(id)initWithCategory:(unsigned)arg1 consumerType:(unsigned)arg2 ;
-(void)fetchPredictionsWithLimit:(unsigned)arg1 providesFeedback:(char)arg2 handler:(/*^block*/id)arg3 ;
@end

