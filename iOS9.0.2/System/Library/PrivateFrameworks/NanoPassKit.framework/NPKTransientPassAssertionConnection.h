/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NPKTransientPassAssertionServerProtocol.h>

@protocol NPKTransientPassAssertionConnectionDelegate, OS_dispatch_queue;
@class NSObject, NPKTransientPassRequest, NSXPCConnection;

@interface NPKTransientPassAssertionConnection : NSObject <NPKTransientPassAssertionServerProtocol> {

	char _backgrounded;
	id<NPKTransientPassAssertionConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NPKTransientPassRequest* _transientPassRequest;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic,__weak) id<NPKTransientPassAssertionConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NPKTransientPassRequest * transientPassRequest;                               //@synthesize transientPassRequest=_transientPassRequest - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                                                 //@synthesize connection=_connection - In the implementation block
@property (assign,getter=isBackgrounded,nonatomic) char backgrounded;                                      //@synthesize backgrounded=_backgrounded - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<NPKTransientPassAssertionConnectionDelegate>)arg1 ;
-(id<NPKTransientPassAssertionConnectionDelegate>)delegate;
-(char)isBackgrounded;
-(void)setBackgrounded:(char)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setTransientPassUniqueID:(id)arg1 ;
-(void)setTransientPassRequest:(NPKTransientPassRequest *)arg1 ;
-(id)initWithConnection:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;
-(NPKTransientPassRequest *)transientPassRequest;
@end

