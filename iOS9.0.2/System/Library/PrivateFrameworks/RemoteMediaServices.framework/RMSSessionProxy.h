/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSTimer;

@interface RMSSessionProxy : NSObject {

	NSTimer* _heartbeatTimer;
	double _sessionTimeout;
	double _lastHeartbeatTime;
	char _isPaused;
	int _sessionIdentifier;

}

@property (assign,nonatomic) int sessionIdentifier;              //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(void)dealloc;
-(id)init;
-(int)sessionIdentifier;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)beginHeartbeat;
-(void)endHeartbeat;
-(char)sessionMatchesNotification:(id)arg1 ;
-(void)heartbeatDidFail;
-(int)heartbeatTime;
-(void)_sendHeartbeat:(id)arg1 ;
@end

