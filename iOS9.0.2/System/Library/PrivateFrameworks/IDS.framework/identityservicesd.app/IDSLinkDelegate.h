/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IDSLinkDelegate <NSObject>
@optional
-(void)link:(id)arg1 hostAwakeDidChange:(char)arg2;
-(void)link:(id)arg1 hasSpaceAvailable:(char)arg2 deviceID:(id)arg3;

@required
-(char)link:(id)arg1 fromDeviceID:(id)arg2 didReceivePacket:(/*function pointer*/void**)arg3;
-(void)link:(id)arg1 didConnectForDevice:(id)arg2;
-(void)link:(id)arg1 didDisconnectForDevice:(id)arg2;

@end

