/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSSearchDelegate.h>

@class NSOperationQueue, MSSearch, ACAccount, NSString;

@interface AAAutoAccountVerifier : NSObject <MSSearchDelegate> {

	NSOperationQueue* _requesterQueue;
	MSSearch* _search;
	ACAccount* _account;
	/*^block*/id _handler;
	int _attempts;
	char _canceled;

}

@property (nonatomic,retain) ACAccount * account;                   //@synthesize account=_account - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id)init;
-(void)_resendVerificationEmailForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_verify;
-(void)_validateToken:(id)arg1 ;
-(char)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)sendVerificationEmail;
-(void)verifyWithHandler:(/*^block*/id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(ACAccount *)account;
@end

