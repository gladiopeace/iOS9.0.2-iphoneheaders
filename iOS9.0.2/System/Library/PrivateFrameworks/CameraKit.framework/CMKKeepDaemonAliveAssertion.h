/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface CMKKeepDaemonAliveAssertion : NSObject {

	NSObject*<OS_xpc_object> _keepaliveConnection;

}
+(id)assertion;
-(void)dealloc;
-(id)init;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_tearDownConnection;
-(void)_registerForAppActiveNotifications;
-(void)_unregisterForAppActiveNotifications;
-(void)_setupHeartBeatForConnection:(id)arg1 ;
-(void)_setupConnection;
@end

