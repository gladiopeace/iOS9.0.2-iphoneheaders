/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSLock, NSXPCInterface, NSXPCConnection;

@interface MSXPCService : NSObject {

	NSLock* _lock;
	NSXPCInterface* _remoteObjectInterface;
	NSXPCConnection* _connection;
	char _shouldLaunchMobileMail;

}

@property (assign,nonatomic) char shouldLaunchMobileMail;              //@synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail - In the implementation block
-(void)dealloc;
-(id)init;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)connection;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(char)shouldLaunchMobileMail;
-(void)setShouldLaunchMobileMail:(char)arg1 ;
@end

