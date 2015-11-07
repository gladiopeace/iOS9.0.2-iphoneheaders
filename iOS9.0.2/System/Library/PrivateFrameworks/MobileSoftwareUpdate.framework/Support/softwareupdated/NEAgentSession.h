/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileSoftwareUpdate.framework/Support/softwareupdated
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NEAgentSessionDelegate, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface NEAgentSession : NSObject {

	id<NEAgentSessionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	int _pluginVersion;

}

@property (retain) id<NEAgentSessionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) NSObject*<OS_xpc_object> connection;               //@synthesize connection=_connection - In the implementation block
@property (assign) int pluginVersion;                                 //@synthesize pluginVersion=_pluginVersion - In the implementation block
+(id)copyDeviceIdentifier;
-(int)pluginVersion;
-(void)sendFlowDivertControlSocketRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)sendMessageWithType:(long long)arg1 archiveKey:(id)arg2 objectToArchive:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)handleInitCommand:(id)arg1 ;
-(void)handleDisposeCommand:(id)arg1 ;
-(void)setPluginVersion:(int)arg1 ;
-(void)sendVirtualInterfaceRequestWithType:(long)arg1 maxPendingPackets:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setDelegate:(id<NEAgentSessionDelegate>)arg1 ;
-(id<NEAgentSessionDelegate>)delegate;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)sendMessage:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)sendMessage:(id)arg1 withReply:(/*^block*/id)arg2 ;
@end

