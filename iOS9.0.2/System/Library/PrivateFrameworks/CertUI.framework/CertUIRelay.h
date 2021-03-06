/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CertUI.framework/certui_relay
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSTimer;

@interface CertUIRelay : NSObject {

	NSMutableDictionary* _promptsForDigest;
	char _waitingOnPrompt;
	int _outstandingRequestCount;
	NSTimer* _killTimer;

}
-(id)_relayCenter;
-(void)_shutdown;
-(void)_killTimerFired;
-(void)_registerReply;
-(void)_showNextPrompt;
-(void)_registerNewRequest;
-(id)_uniqueDigest;
-(void)_trustInfoMessageReceived:(id)arg1 userInfo:(id)arg2 ;
-(void)_centerDiedWithNotification:(id)arg1 ;
-(id)init;
@end

