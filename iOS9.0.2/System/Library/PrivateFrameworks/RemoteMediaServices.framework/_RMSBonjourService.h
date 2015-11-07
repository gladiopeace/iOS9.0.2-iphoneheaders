/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RMSService, NSNetService;

@interface _RMSBonjourService : NSObject {

	char _available;
	RMSService* _service;
	NSNetService* _netService;
	int _state;

}

@property (nonatomic,retain) RMSService * service;                           //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSNetService * netService;                      //@synthesize netService=_netService - In the implementation block
@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
@property (assign,getter=isAvailable,nonatomic) char available;              //@synthesize available=_available - In the implementation block
-(char)isAvailable;
-(int)state;
-(void)setState:(int)arg1 ;
-(RMSService *)service;
-(void)setAvailable:(char)arg1 ;
-(NSNetService *)netService;
-(void)setNetService:(NSNetService *)arg1 ;
-(void)setService:(RMSService *)arg1 ;
@end

