/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <FTServices/FTIDSMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface IDSGetDependentRegistrationMessage : FTIDSMessage <NSCopying> {

	NSString* _service;
	NSArray* _responseRegistrations;

}

@property (copy) NSString * service;                           //@synthesize service=_service - In the implementation block
@property (copy) NSArray * responseRegistrations;              //@synthesize responseRegistrations=_responseRegistrations - In the implementation block
-(NSArray *)responseRegistrations;
-(void)setResponseRegistrations:(NSArray *)arg1 ;
-(int)command;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)service;
-(id)bagKey;
-(char)wantsHTTPHeaders;
-(char)wantsBinaryPush;
-(char)wantsCompressedBody;
-(char)wantsBagKey;
-(int)maxTimeoutRetries;
-(char)wantsExtraTimeoutRetry;
-(double)anisetteHeadersTimeout;
-(int)responseCommand;
-(id)additionalMessageHeaders;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)requiredKeys;
-(id)messageBody;
-(void)setService:(NSString *)arg1 ;
@end

