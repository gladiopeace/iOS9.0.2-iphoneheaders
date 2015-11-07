/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSXPCInterface, NSObject, NSMutableDictionary, NSMutableSet, NSXPCConnection;

@interface SGDaemonConnection : NSObject {

	NSString* _machServiceName;
	NSXPCInterface* _xpcInterface;
	NSObject*<OS_dispatch_queue> _connectLock;
	NSMutableDictionary* _aborts;
	int _abortCounter;
	int _abortLock;
	int _disconnectCount;
	NSMutableSet* _outstandingAsyncCallbacks0;
	NSMutableSet* _outstandingAsyncCallbacks1;
	int _outstandingAsyncCallbacksLock;
	NSXPCConnection* _xpcConnection;

}
-(void)_connectToServer;
-(void)dealloc;
-(void)disconnect;
-(id)initWithMachServiceName:(id)arg1 xpcInterface:(id)arg2 ;
-(char)addOutstandingAsyncCallback0:(/*^block*/id)arg1 ;
-(char)removeOutstandingAsyncCallback1:(/*^block*/id)arg1 ;
-(void)_cancelAllOutstandingAsyncCallbacks;
-(id)waitUntilReturn:(/*^block*/id)arg1 error:(id*)arg2 ;
-(char)removeOutstandingAsyncCallback0:(/*^block*/id)arg1 ;
-(char)addOutstandingAsyncCallback1:(/*^block*/id)arg1 ;
-(id)xpcConnection;
@end

