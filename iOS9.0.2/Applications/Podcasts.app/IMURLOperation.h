/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURLRequest, NSURLConnection;

@interface IMURLOperation : NSOperation {

	char _isFinished;
	char _isExecuting;
	char _isStarted;
	NSURLRequest* _request;
	NSURLConnection* _connection;
	/*^block*/id _successCallback;
	/*^block*/id _errorCallback;

}

@property (readonly) NSURLRequest * request;                    //@synthesize request=_request - In the implementation block
@property (assign) char isFinished;                             //@synthesize isFinished=_isFinished - In the implementation block
@property (assign) char isExecuting;                            //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) char isStarted;                              //@synthesize isStarted=_isStarted - In the implementation block
@property (readonly) NSURLConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) id successCallback;                        //@synthesize successCallback=_successCallback - In the implementation block
@property (readonly) id errorCallback;                          //@synthesize errorCallback=_errorCallback - In the implementation block
-(id)initWithRequest:(id)arg1 withSuccessCallback:(/*^block*/id)arg2 withErrorCallback:(/*^block*/id)arg3 ;
-(id)initWithRequest:(id)arg1 withSuccessCallback:(/*^block*/id)arg2 ;
-(id)successCallback;
-(char)isConcurrent;
-(void)cancel;
-(NSURLRequest *)request;
-(void)start;
-(NSURLConnection *)connection;
-(void)cleanup;
-(char)isFinished;
-(char)isExecuting;
-(char)isStarted;
-(void)setIsFinished:(char)arg1 ;
-(void)setIsExecuting:(char)arg1 ;
-(id)errorCallback;
-(void)setIsStarted:(char)arg1 ;
@end

