/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSXPCConnection;

@interface MCTeslaConfiguration : NSObject {

	char _fetching;
	/*^block*/id _callback;
	NSXPCConnection* _connection;

}

@property (nonatomic,copy) id callback;                                    //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                 //@synthesize connection=_connection - In the implementation block
@property (assign,getter=isFetching,nonatomic) char fetching;              //@synthesize fetching=_fetching - In the implementation block
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)fetchConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchDidFailWithError:(id)arg1 ;
-(void)setFetching:(char)arg1 ;
-(id)connectionError;
-(char)isFetching;
@end

