/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface ATGrappaSession : NSObject {

	unsigned long _sessionId;
	unsigned _sessionType;
	NSData* _sessionResponseData;
	NSData* _sessionRequestData;

}
-(id)initWithType:(unsigned)arg1 ;
-(id)establishHostSessionWithDeviceInfo:(id)arg1 clientRequestData:(id*)arg2 ;
-(id)establishDeviceSessionWithRequestData:(id)arg1 responseData:(id*)arg2 ;
-(id)beginHostSessionWithDeviceResponseData:(id)arg1 ;
-(id)_deviceCreateSignature:(id*)arg1 forData:(id)arg2 ;
-(id)_hostCreateSignature:(id*)arg1 forData:(id)arg2 ;
-(id)_deviceVerifySignature:(id)arg1 forData:(id)arg2 ;
-(id)_hostVerifySignature:(id)arg1 forData:(id)arg2 ;
-(id)createSignature:(id*)arg1 forData:(id)arg2 ;
-(id)verifySignature:(id)arg1 forData:(id)arg2 ;
-(id)deviceInfo;
@end

