/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSURLConnectionDelegate <NSObject>
@optional
-(void)connection:(id)arg1 didFailWithError:(id)arg2;
-(char)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
-(char)connectionShouldUseCredentialStorage:(id)arg1;

@end

