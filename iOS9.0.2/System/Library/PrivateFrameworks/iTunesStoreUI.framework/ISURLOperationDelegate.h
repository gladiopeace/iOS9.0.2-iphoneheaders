/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:46 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ISURLOperationDelegate <ISOperationDelegate>
@optional
-(void)operation:(id)arg1 didDiscoverContentLength:(id)arg2;
-(void)operation:(id)arg1 didReceiveResponse:(id)arg2;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2;
-(id)operation:(id)arg1 needNewBodyStream:(id)arg2;
-(char)operation:(id)arg1 processData:(id)arg2 error:(id*)arg3;
-(void)operation:(id)arg1 willSendRequest:(id)arg2;
-(char)operation:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
-(id)operation:(id)arg1 sanitizedStringForString:(id)arg2;

@end

