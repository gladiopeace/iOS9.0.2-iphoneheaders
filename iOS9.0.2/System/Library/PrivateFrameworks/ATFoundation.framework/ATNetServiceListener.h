/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATMessageLinkListener.h>

@protocol OS_tcp_listener, OS_dispatch_queue;
@class NSString, NSObject;

@interface ATNetServiceListener : ATMessageLinkListener {

	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;
	NSObject*<OS_tcp_listener> _tcpListener;
	NSObject*<OS_dispatch_queue> _queue;
	char _enableTLS;
	NSString* _interfaceName;

}

@property (nonatomic,copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign,nonatomic) char enableTLS;                      //@synthesize enableTLS=_enableTLS - In the implementation block
-(void)setEnableTLS:(char)arg1 ;
-(void)stop;
-(char)start;
-(id)initWithServiceName:(id)arg1 type:(id)arg2 domain:(id)arg3 ;
-(char)enableTLS;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
@end

