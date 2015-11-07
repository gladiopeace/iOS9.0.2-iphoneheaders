/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppConduit.framework/AppConduit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, NSError;

@interface ACXStreamingZipSocketSender : NSObject {

	char _stopWriting;
	/*^block*/id _progressBlock;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSURL* _url;
	NSError* _error;
	/*^block*/id _writerBlock;
	long long _bytesOutput;
	long long _totalBytes;

}

@property (copy) id progressBlock;                                          //@synthesize progressBlock=_progressBlock - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) NSURL * url;                                           //@synthesize url=_url - In the implementation block
@property (assign) long long bytesOutput;                                   //@synthesize bytesOutput=_bytesOutput - In the implementation block
@property (assign) long long totalBytes;                                    //@synthesize totalBytes=_totalBytes - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (assign) char stopWriting;                                        //@synthesize stopWriting=_stopWriting - In the implementation block
@property (readonly) id writerBlock;                                        //@synthesize writerBlock=_writerBlock - In the implementation block
+(id)senderForURL:(id)arg1 queue:(id)arg2 writingUsingBlock:(/*^block*/id)arg3 ;
-(NSError *)error;
-(NSURL *)url;
-(void)beginSendingWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)cancelSending;
-(id)initWithURL:(id)arg1 queue:(id)arg2 writerBlock:(/*^block*/id)arg3 ;
-(void)setStopWriting:(char)arg1 ;
-(long long)bytesOutput;
-(void)setBytesOutput:(long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)writerBlock;
-(void)setError:(NSError *)arg1 ;
-(char)stopWriting;
-(id)progressBlock;
-(long long)totalBytes;
-(void)setTotalBytes:(long long)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
@end

