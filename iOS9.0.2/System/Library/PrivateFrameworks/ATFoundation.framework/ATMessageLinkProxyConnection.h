/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATMessageLinkProxyConnection.h>

@protocol ATMessageLinkProxyConnection <NSObject>
@required
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 completion:(/*^block*/id)arg3;
-(void)removeRequestHandlerForDataClass:(id)arg1 completion:(/*^block*/id)arg2;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)connectWithCompletion:(/*^block*/id)arg1;

@end

#import <libobjc.A.dylib/NSStreamDelegate.h>
#import <ATFoundation/ATMessageLinkObserver.h>
#import <ATFoundation/ATMessageLinkRequestHandler.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, ATMessageLink, NSObject, NSString;

@interface ATMessageLinkProxyConnection : NSObject <ATMessageLinkProxyConnection, NSStreamDelegate, ATMessageLinkObserver, ATMessageLinkRequestHandler> {

	NSXPCConnection* _connection;
	ATMessageLink* _messageLink;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) ATMessageLink * messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)sendResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)initWithMessageLink:(id)arg1 connection:(id)arg2 ;
-(void)addRequestHandler:(id)arg1 forDataClass:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeRequestHandlerForDataClass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)messageLinkWasOpened:(id)arg1 ;
-(void)messageLinkWasInitialized:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg1 ;
-(void)sendRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)messageLink:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(ATMessageLink *)messageLink;
-(void)setMessageLink:(ATMessageLink *)arg1 ;
@end

