/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface DAEventNotification : NSObject
+(id)sharedInstance;
-(void)startMotionDetection;
-(void)startAccessoryConnectDetection;
-(void)startAccessoryDisconnectDetection;
-(void)startHeadsetDetection;
-(void)startAudioInterruptDetection;
-(void)accessoryDidDisconnect;
-(void)accessoryDidConnect;
-(id)getAccessoryModelNumbers;
-(void)audioRouteChanged;
-(void)audioSystemInterrupt:(id)arg1 ;
-(void)startEventNotifications;
-(void)dealloc;
@end

