/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface PLXPCRelay : NSObject {

	char _relayActive;
	NSObject*<OS_xpc_object> _xpcConnection;
	NSObject*<OS_xpc_object> _relayConnection;

}

@property (assign) char relayActive;                                                //@synthesize relayActive=_relayActive - In the implementation block
@property (retain) NSObject*<OS_xpc_object> xpcConnection;                          //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> relayConnection;              //@synthesize relayConnection=_relayConnection - In the implementation block
+(id)sharedInstance;
-(id)init;
-(char)isDebugEnabled;
-(void)stopRelay;
-(void)startRelay;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setRelayActive:(char)arg1 ;
-(void)resetRelayConnection;
-(NSObject*<OS_xpc_object>)relayConnection;
-(char)relayActive;
-(void)setRelayConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)handlePeer:(id)arg1 forEvent:(id)arg2 ;
@end

