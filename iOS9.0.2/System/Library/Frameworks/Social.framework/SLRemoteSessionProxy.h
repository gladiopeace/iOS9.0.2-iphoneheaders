/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSXPCInterface, NSXPCConnection, NSMutableArray, NSLock, NSObject;

@interface SLRemoteSessionProxy : NSObject {

	NSString* _serviceName;
	NSXPCInterface* _remoteInterface;
	id _remoteProxy;
	NSXPCConnection* _connection;
	NSMutableArray* _guaranteedRemoteCalls;
	NSLock* _guaranteedRemoteCallsLock;
	NSObject* _exportedObject;
	NSXPCInterface* _exportedInterface;
	/*^block*/id _connectionResetBlock;

}

@property (__weak) NSObject * exportedObject;                       //@synthesize exportedObject=_exportedObject - In the implementation block
@property (retain) NSXPCInterface * exportedInterface;              //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (copy) id connectionResetBlock;                           //@synthesize connectionResetBlock=_connectionResetBlock - In the implementation block
-(NSObject *)exportedObject;
-(id)initForRemoteServiceName:(id)arg1 remoteInterface:(id)arg2 ;
-(void)setConnectionResetBlock:(id)arg1 ;
-(void)dropGuaraneteedRemoteCall:(id)arg1 ;
-(void)registerGuaranteedRemoteCall:(id)arg1 ;
-(id)connectionResetBlock;
-(void)_remoteSessionConnectionWasInterrupted;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(NSXPCInterface *)exportedInterface;
-(void)disconnect;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)setExportedObject:(NSObject *)arg1 ;
-(void)_setupConnection;
@end

