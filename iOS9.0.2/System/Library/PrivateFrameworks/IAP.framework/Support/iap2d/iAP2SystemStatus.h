/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <iap2d/iap2d-Structs.h>
@class NSObject;

@interface iAP2SystemStatus : NSObject {

	unsigned long long _holdState;
	BTSessionImplRef _session;
	NSObject*<OS_dispatch_queue> _btEventQueue;

}

@property (assign,nonatomic) unsigned long long holdState;                             //@synthesize holdState=_holdState - In the implementation block
@property (assign,nonatomic) BTSessionImplRef btSession;                               //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> btEventQueue;              //@synthesize btEventQueue=_btEventQueue - In the implementation block
+(id)GetDeviceName;
+(id)GetMobileGestaltKeyValue:(CFStringRef)arg1 ;
+(id)GetSerialNumber;
+(id)GetModelName;
+(id)GetSoftwareVersion;
+(id)sharedInstance;
-(void)_changeListenerQueuePriorityHigh:(id)arg1 ;
-(void)_changeListenerQueuePriorityStop:(id)arg1 ;
-(void)clearRegisteredComponentsForConnectionID:(unsigned)arg1 ;
-(BOOL)IsHoldSwitchOn;
-(unsigned char)modeForMACAddress:(id)arg1 ;
-(int)UpdateBTComponent:(id)arg1 withState:(int)arg2 ;
-(void)registerComponent:(id)arg1 forConnectionID:(unsigned)arg2 ;
-(char)isComponent:(id)arg1 registeredForConnectionID:(unsigned)arg2 ;
-(void)unregisterComponent:(id)arg1 forConnectionID:(unsigned)arg2 ;
-(void)setMode:(unsigned char)arg1 forMACAddress:(id)arg2 ;
-(id)GetNowPlayingApp;
-(id)GetNowPlayingAppName;
-(BOOL)IsAssistiveTouchEnabled;
-(void)PostSwapAccessoryNotificationActivate:(id)arg1 deactivate:(id)arg2 ;
-(void)NotifyOfUSBHostModeChange:(id)arg1 ;
-(void)PostNowPlayingAppChangedNotification;
-(void)PostAudioOutputStateChange:(unsigned char)arg1 ;
-(unsigned long long)holdState;
-(void)setHoldState:(unsigned long long)arg1 ;
-(BTSessionImplRef)btSession;
-(void)setBtSession:(BTSessionImplRef)arg1 ;
-(NSObject*<OS_dispatch_queue>)btEventQueue;
-(void)dealloc;
-(id)init;
@end

