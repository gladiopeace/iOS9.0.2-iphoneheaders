/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEExtensionTunnelProviderContext.h>
#import <libobjc.A.dylib/NEExtensionAppProxyProviderProtocol.h>
#import <libobjc.A.dylib/NEExtensionAppProxyProviderHostProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface NEExtensionAppProxyProviderContext : NEExtensionTunnelProviderContext <NEExtensionAppProxyProviderProtocol, NEExtensionAppProxyProviderHostProtocol> {

	NSObject*<OS_dispatch_queue> _flowQueue;
	NEFlowDirectorRef _director;

}

@property (retain) NSObject*<OS_dispatch_queue> flowQueue;              //@synthesize flowQueue=_flowQueue - In the implementation block
@property (assign) NEFlowDirectorRef director;                          //@synthesize director=_director - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(NEFlowDirectorRef)director;
-(void)setDirector:(NEFlowDirectorRef)arg1 ;
-(void)setDelegateInterface:(unsigned)arg1 ;
-(void)setInitialFlowDivertControlSocket:(id)arg1 ;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopWithReason:(int)arg1 ;
-(void)verifyAppWithPID:(int)arg1 uuid:(id)arg2 matchesAppRule:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)openFlowDivertControlSocketWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)completeSession;
-(void)setFlowQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)flowQueue;
-(void)flowDivertOpenControlSocket;
-(void)flowDivertMatchAppRulesWithFlow:(unsigned)arg1 pid:(int)arg2 uuid:(unsigned char)arg3 signingIdentifier:(CFStringRef)arg4 ;
-(void)flowDivertNewFlow:(NEFlowRef)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

