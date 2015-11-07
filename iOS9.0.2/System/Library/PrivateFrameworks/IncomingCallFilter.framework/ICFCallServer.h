/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:13 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IncomingCallFilter.framework/IncomingCallFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSMutableArray;

@interface ICFCallServer : NSObject {

	NSObject*<OS_xpc_object> _connection;
	NSMutableArray* _clients;
	char _hasRegistered;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_cleanup;
-(void)_cleanupClient:(id)arg1 ;
-(void)_configureWithClient:(id)arg1 ;
-(void)_clientConnected;
-(void)shouldAllowIncomingCallForNumber:(id)arg1 forService:(id)arg2 response:(/*^block*/id)arg3 ;
-(void)_requestCallGrantForIdentifier:(id)arg1 forService:(id)arg2 waitForResponse:(char)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

