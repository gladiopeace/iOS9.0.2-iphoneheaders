/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IDSPushHandlerDelegate <NSObject>
@optional
-(void)handler:(id)arg1 pushTokenChanged:(id)arg2;
-(void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3;
-(void)handler:(id)arg1 receivedNoStorageResponseForTopic:(id)arg2 messageContext:(id)arg3;
-(void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;
-(void)handler:(id)arg1 isConnectedChanged:(char)arg2;

@end

