/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/nanosystemsettingsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>
#import <nanosystemsettingsd/NSSConnectionHandlerDelegate.h>
#import <nanosystemsettingsd/NSSIDSServiceDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSSServerProtocol.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCListener, NSMutableArray, NSMutableDictionary, IDSService, NSString;

@interface NSSServer : NSObject <IDSServiceDelegate, NSSConnectionHandlerDelegate, NSSIDSServiceDelegate, NSXPCListenerDelegate, NSSServerProtocol> {

	NSObject*<OS_dispatch_queue> _idsQueue;
	NSXPCListener* _listener;
	NSMutableArray* _connections;
	NSObject*<OS_dispatch_queue> _modifyingConnectionsQueue;
	NSObject*<OS_dispatch_source> _vmPressureHandler;
	NSObject*<OS_dispatch_queue> _airplaneModeQueue;
	NSMutableDictionary* _airplaneModeDeliveryTimers;

}

@property (nonatomic,readonly) IDSService * idsService; 
@property (nonatomic,readonly) char isDefaultPairedDeviceNearby; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> idsQueue;                               //@synthesize idsQueue=_idsQueue - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                            //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSMutableArray * connections;                                        //@synthesize connections=_connections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> modifyingConnectionsQueue;              //@synthesize modifyingConnectionsQueue=_modifyingConnectionsQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> vmPressureHandler;                     //@synthesize vmPressureHandler=_vmPressureHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> airplaneModeQueue;                      //@synthesize airplaneModeQueue=_airplaneModeQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * airplaneModeDeliveryTimers;                    //@synthesize airplaneModeDeliveryTimers=_airplaneModeDeliveryTimers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)associateProtobufHandlers:(id)arg1 ;
+(Class)connectionHandlerClass;
+(void)tellRadiosPrefsToEnableAirplaneMode:(char)arg1 ;
+(double)mirrorAirplaneSendTimeout;
-(NSObject*<OS_dispatch_source>)vmPressureHandler;
-(void)setVmPressureHandler:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)earlyIvarInitialzation;
-(char)handleDarwinNotification:(id)arg1 ;
-(void)handleMemoryPressureEvent;
-(id)sendRequest:(id)arg1 expectsResponse:(char)arg2 replyBlock:(id)arg3 replyDictionary:(id)arg4 sendTimeout:(double)arg5 wantsAcknowledgement:(char)arg6 bypassDuet:(char)arg7 ;
-(id)sendMessage:(id)arg1 identifier:(id*)arg2 sendTimeout:(double)arg3 wantsAcknowledgement:(char)arg4 queueOneIdentifier:(id)arg5 overBluetoothOnly:(char)arg6 ;
-(id)sendProtobuf:(id)arg1 options:(id)arg2 identifier:(id*)arg3 ;
-(char)messageIdentifier:(id)arg1 didSendWithSuccess:(char)arg2 error:(id)arg3 ;
-(char)scheduleTimerForIdentifier:(id)arg1 requests:(id)arg2 timeout:(double)arg3 timeoutHandler:(/*^block*/id)arg4 timers:(id)arg5 utilityName:(id)arg6 ;
-(char)messageIdentifier:(id)arg1 hasBeenDeliveredWithContext:(id)arg2 ;
-(void)cancelTimerForIdentifier:(id)arg1 timers:(id)arg2 utilityName:(id)arg3 ;
-(void)connectionHandlerLostConnection:(id)arg1 ;
-(void)initializeIDS;
-(void)handleAirplaneModeMsg:(id)arg1 ;
-(void)failedToMirrorAirplaneMode;
-(void)displayAirplaneModeMirroringUserEducationAlertIfNeeded;
-(id)sendResponse:(id)arg1 forRequest:(id)arg2 identifier:(id*)arg3 bypassDuet:(char)arg4 ;
-(void)setIdsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)modifyingConnectionsQueue;
-(void)setModifyingConnectionsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)airplaneModeQueue;
-(void)setAirplaneModeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)airplaneModeDeliveryTimers;
-(void)setAirplaneModeDeliveryTimers:(NSMutableDictionary *)arg1 ;
-(char)isDefaultPairedDeviceNearby;
-(id)init;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)enableAirplaneMode:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)idsQueue;
-(NSMutableArray *)connections;
-(void)setConnections:(NSMutableArray *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(char)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(IDSService *)idsService;
-(id)systemBuildVersion;
@end

