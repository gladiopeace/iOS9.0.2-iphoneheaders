/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject;

@interface FMDFMIPManager : NSObject {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionCreationQueue;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                                      //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> xpcConnectionCreationQueue;              //@synthesize xpcConnectionCreationQueue=_xpcConnectionCreationQueue - In the implementation block
+(id)sharedInstance;
-(void)initiateLostModeExitAuthWithCompletion:(/*^block*/id)arg1 ;
-(char)lostModeIsActive;
-(void)dealloc;
-(id)init;
-(void)userNotifiedOfActivationLockForAllPairedDevices;
-(void)fmipStateWithCompletion:(/*^block*/id)arg1 ;
-(id)enableFMIPInContext:(unsigned)arg1 ;
-(id)disableFMIPUsingToken:(id)arg1 inContext:(unsigned)arg2 ;
-(void)_destroyXPCConnection;
-(void)_checkCallingOSUser;
-(id)currentXPCConnection;
-(id)newErrorForCode:(int)arg1 message:(id)arg2 ;
-(void)fmipAccountWithCompletion:(/*^block*/id)arg1 ;
-(void)markPairedDeviceWithUDID:(id)arg1 asMissingUsingToken:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)lostModeInfo;
-(void)disableLostMode;
-(void)deviceActivationDidSucceed;
-(char)lockdownShouldDisableDeviceRestore;
-(char)lockdownShouldDisableDevicePairing;
-(id)fmipAccount;
-(void)didChangeFMIPAccountInfo:(id)arg1 ;
-(void)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)markAsMissingSupportedForPairedDeviceWithUDID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)isActivationLockAllowedWithCompletion:(/*^block*/id)arg1 ;
-(void)isActivationLockEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)enableActivationLockWithCompletion:(/*^block*/id)arg1 ;
-(char)needsLostModeExitAuth;
-(void)didReceiveLostModeExitAuthToken:(id)arg1 ;
-(void)lowBatteryLocateEnabledWithCompletion:(/*^block*/id)arg1 ;
-(void)setLowBatteryLocateEnabled:(char)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)userNotifiedOfActivationLockForPairedDevices:(id)arg1 ;
-(void)_forceALUpgradeAlertWithCompletion:(/*^block*/id)arg1 ;
-(id)disableFMIPUsingToken:(id)arg1 forPairedDeviceWithUDID:(id)arg2 ;
-(void)markPairedDeviceWithUDID:(id)arg1 asMissingWithCompletion:(/*^block*/id)arg2 ;
-(void)userNotifiedOfWatchActivationLock;
-(NSObject*<OS_dispatch_queue>)xpcConnectionCreationQueue;
-(void)setXpcConnectionCreationQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(char)_quickFetchFMIPEnabledstate;
-(void)disableTouchIDForLostModeWithCompletion:(/*^block*/id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)enableLostModeWithInfo:(id)arg1 ;
-(void)isActivationLockedWithCompletion:(/*^block*/id)arg1 ;
@end

