/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLSession, NSURLSessionDataTask, NSURL;

@interface RUIImageLoad : NSObject {

	NSURLSession* _urlSession;
	NSURLSessionDataTask* _dataTask;
	NSURL* _URL;

}

@property (nonatomic,copy) NSURL * URL;              //@synthesize URL=_URL - In the implementation block
-(void)dealloc;
-(void)start;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(char)receivedValidResponse:(id)arg1 ;
@end

