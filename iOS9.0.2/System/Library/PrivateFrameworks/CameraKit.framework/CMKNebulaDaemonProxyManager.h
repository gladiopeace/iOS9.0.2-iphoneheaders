/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/CMKNebulaDaemonClientProtocol.h>
#import <libobjc.A.dylib/CMKNebulaDaemonProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface CMKNebulaDaemonProxyManager : NSObject <CMKNebulaDaemonClientProtocol, CMKNebulaDaemonProtocol> {

	NSObject*<OS_dispatch_queue> __queue;
	NSXPCConnection* __connection;
	int __connectionCount;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _queue;              //@synthesize _queue=__queue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * _connection;                    //@synthesize _connection=__connection - In the implementation block
@property (nonatomic,readonly) int _connectionCount;                             //@synthesize _connectionCount=__connectionCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)_daemonProtocolInterface;
+(id)_clientProtocolInterface;
-(id)init;
-(NSXPCConnection *)_connection;
-(NSObject*<OS_dispatch_queue>)_queue;
-(void)startTimelapseWithUUID:(id)arg1 ;
-(void)resumeTimelapseWithUUID:(id)arg1 ;
-(void)updateTimelapseWithUUID:(id)arg1 ;
-(void)finishCaptureForTimelapseWithUUID:(id)arg1 ;
-(void)stopTimelapseWithUUID:(id)arg1 ;
-(void)updatePendingWorkFromDiskForceEndLastSession:(char)arg1 ;
-(void)performIrisCrashRecovery;
-(void)forceStopTimelapseCaptureWithReasons:(int)arg1 ;
-(void)_getProxyForExecutingBlock:(/*^block*/id)arg1 ;
-(void)_ensureConnectionToDaemon;
-(void)_closeConnectionToDaemon;
-(void)ensureConnectionToDaemon;
-(void)closeConnectionToDaemon;
-(void)performCrashRecoveryIfNeededForceEndLastTimelapseSession:(char)arg1 ;
-(int)_connectionCount;
@end

