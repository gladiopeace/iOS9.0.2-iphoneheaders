/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUI.framework/AccessibilityUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, AXAccessQueue, NSMutableDictionary;

@interface AXUIClientConnection : NSObject {

	char _connected;
	NSObject*<OS_xpc_object> _xpcConnection;
	AXAccessQueue* _connectionAccessQueue;
	NSMutableDictionary* _registeredClients;
	AXAccessQueue* _registeredClientsAccessQueue;

}

@property (assign,getter=isConnected,nonatomic) char connected;                         //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;                    //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) AXAccessQueue * connectionAccessQueue;                     //@synthesize connectionAccessQueue=_connectionAccessQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredClients;                   //@synthesize registeredClients=_registeredClients - In the implementation block
@property (nonatomic,retain) AXAccessQueue * registeredClientsAccessQueue;              //@synthesize registeredClientsAccessQueue=_registeredClientsAccessQueue - In the implementation block
+(id)sharedClientConnection;
-(void)dealloc;
-(id)init;
-(void)unregisterClient:(id)arg1 withIdentifier:(id)arg2 ;
-(void)performBlockWithXPCConnection:(/*^block*/id)arg1 ;
-(void)registerClient:(id)arg1 withIdentifier:(id)arg2 ;
-(void)setConnectionAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setRegisteredClientsAccessQueue:(AXAccessQueue *)arg1 ;
-(void)setRegisteredClients:(NSMutableDictionary *)arg1 ;
-(AXAccessQueue *)connectionAccessQueue;
-(id)_clientWithIdentifier:(id)arg1 ;
-(AXAccessQueue *)registeredClientsAccessQueue;
-(NSMutableDictionary *)registeredClients;
-(char)isConnected;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setConnected:(char)arg1 ;
@end

