/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UNSystemStateProviding <NSObject>
@required
-(char)isApplicationInstalled:(id)arg1;
-(char)isApplicationRestricted:(id)arg1;
-(char)shouldThrottleContentNotificationForApplicatin:(id)arg1 onDate:(id)arg2 withLastCount:(unsigned*)arg3 onDay:(int*)arg4;
-(void)handleNewsstandNotificationForApplication:(id)arg1 userInfo:(id)arg2;
-(char)isRemoteNotificationBackgroundModeSupportedForApplication:(id)arg1;
-(void)handleContentAvailableNotificationForApplication:(id)arg1 userInfo:(id)arg2 priority:(int)arg3 completion:(/*^block*/id)arg4;
-(char)isNewsstandApplication:(id)arg1;
-(char)isNewsstandContentBackgroundModeSupportedForApplication:(id)arg1;
-(char)isBackgroundAppRefreshSupportedForApplication:(id)arg1;

@end

