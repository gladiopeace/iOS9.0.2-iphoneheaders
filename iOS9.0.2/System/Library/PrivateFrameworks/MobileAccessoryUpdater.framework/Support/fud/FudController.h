/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Support/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_source, OS_dispatch_queue;
@class NSObject, FudIpcDispatch, FudStorage, NSMutableArray;

@interface FudController : NSObject {

	NSObject*<OS_xpc_object> _listener;
	long long _idleExitTimeoutSec;
	char _isRunningTimer;
	char _isWatchingGroup;
	NSObject*<OS_dispatch_source> _idleTimer;
	NSObject*<OS_dispatch_queue> _timeoutQueue;
	NSObject*<OS_dispatch_queue> _processingQueue;
	FudIpcDispatch* _fudIpcDispatch;
	unsigned long long _numProcessedConnection;
	FudStorage* _fudStorage;
	NSMutableArray* _defaultClients;

}
-(char)processEvent:(id)arg1 ;
-(id)initWithIdleTimeout:(long long)arg1 ;
-(char)initializeFud;
-(void)handleXPCAPIEvent:(id)arg1 ;
-(void)processAPIDict:(id)arg1 ;
-(void)cancelIdleTimer;
-(void)watchSharedGroup;
-(void)idleExit;
-(void)beginIdleTimer;
-(void)handleXPCStreamEvent:(id)arg1 ;
-(void)handleInternalAPIEvent:(id)arg1 ;
-(void)handleBrokenConnection:(id)arg1 ;
-(void)initIdleTimer;
-(id)loadPolicyForAllPlugins;
-(char)setupXPCStreamsWithPolicies:(id)arg1 shouldRegister:(char)arg2 ;
-(void)handleInternalClientMessage:(id)arg1 ;
-(char)startDefaultClients;
-(void)handleIdleTimeout;
@end

