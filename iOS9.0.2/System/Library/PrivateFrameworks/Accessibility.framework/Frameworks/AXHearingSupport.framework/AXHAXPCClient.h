/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface AXHAXPCClient : NSObject {

	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcQueue;
	unsigned long long _requestedUpdates;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcQueue;               //@synthesize xpcQueue=_xpcQueue - In the implementation block
@property (assign,nonatomic) unsigned long long requestedUpdates;                 //@synthesize requestedUpdates=_requestedUpdates - In the implementation block
+(id)clientWithConnection:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setXpcQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned long long)requestedUpdates;
-(void)setRequestedUpdates:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)xpcQueue;
-(void)setWantsUpdates:(char)arg1 forIdentifier:(unsigned long long)arg2 ;
-(char)wantsUpdatesForIdentifier:(unsigned long long)arg1 ;
-(void)sendMessage:(id)arg1 withError:(id*)arg2 ;
-(id)initWithConnection:(id)arg1 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)teardownConnection;
@end

