/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSStreamDelegate;
#import <CompanionSync/CompanionSync-Structs.h>
@class NSObject, NSError;

@interface _SYStreamGuts : NSObject {

	CFRunLoopSourceRef _runloopSource;
	unsigned _port;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _handler;
	id<NSStreamDelegate> _delegate;
	NSError* _error;
	unsigned _status;

}
-(void)dealloc;
-(void)setEventHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)createRunloopSourceForStream:(id)arg1 ;
-(void)postStreamEvent:(unsigned)arg1 forStream:(id)arg2 ;
@end

