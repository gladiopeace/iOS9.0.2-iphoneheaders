/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSArray;

@interface AAEmailLookupRequest : AARequest {

	ACAccount* _account;
	NSArray* _emailAddresses;

}

@property (nonatomic,retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;              //@synthesize emailAddresses=_emailAddresses - In the implementation block
+(Class)responseClass;
-(id)urlString;
-(NSArray *)emailAddresses;
-(id)urlCredential;
-(id)initWithAccount:(id)arg1 emailAddresses:(id)arg2 ;
-(id)initWithURLString:(id)arg1 account:(id)arg2 emailAddresses:(id)arg3 ;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(id)urlRequest;
-(void)setAccount:(ACAccount *)arg1 ;
-(ACAccount *)account;
@end

