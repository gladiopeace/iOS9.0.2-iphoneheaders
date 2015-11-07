/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCharacteristicRequest.h>

@class NSData;

@interface HMDCharacteristicWriteRequest : HMDCharacteristicRequest {

	id _value;
	NSData* _authorizationData;

}

@property (nonatomic,readonly) id value;                                //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSData * authorizationData;              //@synthesize authorizationData=_authorizationData - In the implementation block
+(id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 ;
-(id)value;
-(NSData *)authorizationData;
-(id)initWithCharacteristic:(id)arg1 value:(id)arg2 authorizationData:(id)arg3 ;
@end

