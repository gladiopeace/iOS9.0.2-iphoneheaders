/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSDictionary, NSError;

@interface HMDNotificationRelayState : NSObject {

	NSString* _destination;
	NSObject*<OS_dispatch_queue> _responseQueue;
	/*^block*/id _responseHandler;
	NSDictionary* _response;
	NSError* _responseError;

}

@property (nonatomic,retain) NSString * destination;                                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> responseQueue;              //@synthesize responseQueue=_responseQueue - In the implementation block
@property (nonatomic,copy) id responseHandler;                                        //@synthesize responseHandler=_responseHandler - In the implementation block
@property (nonatomic,retain) NSDictionary * response;                                 //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * responseError;                                 //@synthesize responseError=_responseError - In the implementation block
-(NSError *)responseError;
-(NSDictionary *)response;
-(NSString *)destination;
-(void)setDestination:(NSString *)arg1 ;
-(void)setResponse:(NSDictionary *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(id)initWithDestination:(id)arg1 responseQueue:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_dispatch_queue>)responseQueue;
-(void)setResponseQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setResponseError:(NSError *)arg1 ;
@end

