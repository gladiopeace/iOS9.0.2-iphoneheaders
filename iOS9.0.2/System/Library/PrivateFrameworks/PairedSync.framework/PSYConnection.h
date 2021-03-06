/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PSYConnectionDelegate;
@class PSYOptions, NSXPCConnection;

@interface PSYConnection : NSObject {

	char _valid;
	id<PSYConnectionDelegate> _delegate;
	PSYOptions* _options;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic,__weak) id<PSYConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid;                            //@synthesize valid=_valid - In the implementation block
@property (nonatomic,retain) PSYOptions * options;                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
-(void)setDelegate:(id<PSYConnectionDelegate>)arg1 ;
-(id)init;
-(id<PSYConnectionDelegate>)delegate;
-(char)isValid;
-(void)setOptions:(PSYOptions *)arg1 ;
-(PSYOptions *)options;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)startSyncWithOptions:(id)arg1 ;
-(void)_handleConnectionInterruption;
-(void)_handleConnectionInvalidation;
-(id)remoteConnection;
-(void)_resumeConnectionIfPossible;
-(void)startSync;
@end

