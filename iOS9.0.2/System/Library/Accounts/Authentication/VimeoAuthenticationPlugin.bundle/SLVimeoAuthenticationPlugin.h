/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:04:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Accounts/Authentication/VimeoAuthenticationPlugin.bundle/VimeoAuthenticationPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACDAccountAuthenticationPlugin.h>

@class NSString;

@interface SLVimeoAuthenticationPlugin : NSObject <ACDAccountAuthenticationPlugin>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsAccountType:(id)arg1 ;
-(char)_isClientEntitledToAccessVimeo:(id)arg1 ;
-(void)_authenticationAccount:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_handleAccessTokenResponseData:(id)arg1 forAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)credentialForAccount:(id)arg1 client:(id)arg2 ;
-(void)verifyCredentialsForAccount:(id)arg1 accountStore:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)renewCredentialsForAccount:(id)arg1 accountStore:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_consumerKey;
-(id)_consumerSecret;
@end

