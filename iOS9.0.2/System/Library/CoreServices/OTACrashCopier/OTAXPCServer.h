/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/OTACrashCopier
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSString, NSObject;

@interface OTAXPCServer : NSObject {

	NSString* _serviceName;
	NSString* _connectionEntitlement;
	NSObject*<OS_xpc_object> _serverConn;
	NSObject*<OS_dispatch_queue> _targetQueue;
	/*^block*/id _messageHandler;
	/*^block*/id _errorHandler;

}

@property (nonatomic,copy,readonly) NSString * serviceName;               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * connectionEntitlement;              //@synthesize connectionEntitlement=_connectionEntitlement - In the implementation block
@property (nonatomic,copy) id messageHandler;                             //@synthesize messageHandler=_messageHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                               //@synthesize errorHandler=_errorHandler - In the implementation block
-(id)initWithServiceName:(id)arg1 targetQueue:(id)arg2 ;
-(void)_handleConnectionEvent:(id)arg1 forConnection:(id)arg2 ;
-(void)_handleError:(id)arg1 forConnection:(id)arg2 ;
-(NSString *)connectionEntitlement;
-(void)setConnectionEntitlement:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)dealloc;
-(void)start;
-(void)_handleNewConnection:(id)arg1 ;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(id)messageHandler;
-(void)setMessageHandler:(id)arg1 ;
@end

