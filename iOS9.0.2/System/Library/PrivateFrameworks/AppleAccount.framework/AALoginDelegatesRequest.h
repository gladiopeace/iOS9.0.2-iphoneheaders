/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, ACAccount;

@interface AALoginDelegatesRequest : AARequest {

	NSDictionary* _loginParameters;
	ACAccount* _account;

}
+(Class)responseClass;
-(id)urlString;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 parameters:(id)arg2 ;
@end

