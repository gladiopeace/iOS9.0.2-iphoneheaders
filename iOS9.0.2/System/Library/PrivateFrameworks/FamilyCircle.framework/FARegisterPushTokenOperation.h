/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/familycircled
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <familycircled/FAFamilyCircleOperation.h>

@class NSString, NSData;

@interface FARegisterPushTokenOperation : FAFamilyCircleOperation {

	NSString* _appleIDorDSID;
	NSString* _passwordOrAuthToken;
	NSData* _pushToken;
	/*^block*/id _registerTokenCompletionHandler;

}

@property (readonly) NSData * pushToken;                         //@synthesize pushToken=_pushToken - In the implementation block
@property (copy) id registerTokenCompletionHandler;              //@synthesize registerTokenCompletionHandler=_registerTokenCompletionHandler - In the implementation block
-(void)didReceivePropertyListResponse:(id)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 pushToken:(id)arg3 ;
-(void)setRegisterTokenCompletionHandler:(id)arg1 ;
-(id)pushTokenString;
-(id)registerTokenCompletionHandler;
-(void)didFailWithError:(id)arg1 ;
-(NSData *)pushToken;
-(id)urlRequest;
@end

