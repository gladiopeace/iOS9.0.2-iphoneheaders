/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
@class NSObject;

@interface HMDWiFiManager : NSObject {

	char _hmdWoWAssterted;
	char _wifiLinkState;
	NSObject*<OS_dispatch_queue> _workQueue;
	WiFiManagerClientRef _wifiClientReference;
	WiFiDeviceClientRef _wifiDeviceReference;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (assign,nonatomic) char hmdWoWAssterted;                                  //@synthesize hmdWoWAssterted=_hmdWoWAssterted - In the implementation block
@property (assign,nonatomic) char wifiLinkState;                                    //@synthesize wifiLinkState=_wifiLinkState - In the implementation block
@property (assign,nonatomic) WiFiManagerClientRef wifiClientReference;              //@synthesize wifiClientReference=_wifiClientReference - In the implementation block
@property (assign,nonatomic) WiFiDeviceClientRef wifiDeviceReference;               //@synthesize wifiDeviceReference=_wifiDeviceReference - In the implementation block
+(id)defaultManager;
+(void)initialize;
-(void)dealloc;
-(id)init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)takeWoWAssertion;
-(void)releaseWoWAssertion;
-(WiFiManagerClientRef)wifiClientReference;
-(void)setWifiClientReference:(WiFiManagerClientRef)arg1 ;
-(WiFiDeviceClientRef)wifiDeviceReference;
-(void)setWifiDeviceReference:(WiFiDeviceClientRef)arg1 ;
-(void)_initalizeWiFiDevice:(WiFiDeviceClientRef)arg1 ;
-(char)hmdWoWAssterted;
-(void)setHmdWoWAssterted:(char)arg1 ;
-(void)setWifiLinkState:(char)arg1 ;
-(void)startWithWiFiDevice:(WiFiDeviceClientRef)arg1 ;
-(void)handleWiFiLinkChange:(char)arg1 ;
-(char)wifiLinkState;
@end

