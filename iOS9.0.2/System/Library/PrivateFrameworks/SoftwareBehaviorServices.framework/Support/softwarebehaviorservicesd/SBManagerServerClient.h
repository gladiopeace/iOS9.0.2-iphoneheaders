/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/Support/softwarebehaviorservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSXPCConnection;

@interface SBManagerServerClient : NSObject {

	int _pid;
	NSString* _identifier;
	NSXPCConnection* _connection;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                    //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int pid;                                         //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) id<SBManagerClientInterface> proxy; 
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(NSString *)identifier;
-(NSXPCConnection *)connection;
-(id<SBManagerClientInterface>)proxy;
-(id)initWithConnection:(id)arg1 ;
-(int)pid;
@end

