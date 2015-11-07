/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SPCompanionAppServerProtocol <NSObject>
@required
-(void)sendCacheRequest:(id)arg1 identifier:(id)arg2;
-(void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3;
-(void)sendData:(id)arg1 identifier:(id)arg2 clientIdentifiers:(id)arg3 reply:(/*^block*/id)arg4;
-(void)fetchNotificationForNotificationID:(id)arg1 completion:(/*^block*/id)arg2;
-(void)requestTimingData:(id)arg1 timingMetaData:(id)arg2;
-(void)launchCompanionAppForGizmoAppWithIdentifier:(id)arg1 withUserInfoData:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remoteInterfaceDidDeactivate:(id)arg1;
-(void)extensionWithIdentifier:(id)arg1 gotUnknownInterfaceController:(id)arg2;

@end

