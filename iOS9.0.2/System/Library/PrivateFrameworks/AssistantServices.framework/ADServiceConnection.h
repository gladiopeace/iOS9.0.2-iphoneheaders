/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSXPCConnection, ADServiceStatistics, NSDictionary;

@interface ADServiceConnection : NSObject {

	NSObject*<OS_dispatch_queue> _targetQueue;
	NSString* _identifier;
	NSString* _path;
	NSXPCConnection* _connection;
	char _serviceLoaded;
	ADServiceStatistics* _stats;
	NSDictionary* _commandMap;
	NSDictionary* _anchorKeyClassMap;
	NSString* _domainObjectClearingClassName;
	char _preheated;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)_bundleClassForDomain:(id)arg1 commandName:(id)arg2 ;
-(id)_providerServiceWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_providerServiceDelegate;
-(id)_syncClassForAnchorKey:(id)arg1 ;
-(id)_providerService;
-(id)initWithIdentifier:(id)arg1 path:(id)arg2 commandMap:(id)arg3 anchorMap:(id)arg4 clearingClass:(id)arg5 queue:(id)arg6 ;
-(void)sendClientBoundCommand:(id)arg1 domain:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)sendBeginSyncWithInfo:(id)arg1 chunkHandler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendClearDomainObjects;
-(void)preheatServiceBundle;
-(void)dealloc;
-(void)invalidate;
-(NSString *)identifier;
-(id)_connection;
-(void)_openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

