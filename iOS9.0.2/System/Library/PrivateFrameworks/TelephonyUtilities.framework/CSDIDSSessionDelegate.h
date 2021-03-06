/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CSDIDSSessionDelegate <NSObject>
@required
-(void)session:(id)arg1 endedWithReason:(int)arg2 previousState:(int)arg3;
-(void)session:(id)arg1 receivedInvitationAcceptWithData:(id)arg2;
-(void)session:(id)arg1 receivedInvitationDeclineWithData:(id)arg2 fromDevice:(id)arg3;
-(void)session:(id)arg1 receivedInvitationCancelWithData:(id)arg2 fromDevice:(id)arg3;
-(void)session:(id)arg1 receivedData:(id)arg2 fromDevice:(id)arg3;
-(void)sessionStarted:(id)arg1;
-(id)deviceForFromID:(id)arg1;

@end

