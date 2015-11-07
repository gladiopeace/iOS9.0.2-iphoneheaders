/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:17:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/Support/touchsetupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <touchsetupd/TRDeviceSetupBrowserDelegate.h>
#import <touchsetupd/TRDeviceSetupPeripheralDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableSet, NSObject, TRDeviceSetupBrowser, NSString;

@interface DeviceSetupBrowser : NSObject <TRDeviceSetupBrowserDelegate, TRDeviceSetupPeripheralDelegate> {

	char _buddySetupDone;
	int _buddySetupDoneToken;
	char _buddySetupDoneTokenIsValid;
	NSMutableSet* _discoveredPeripherals;
	double _lastTapTimeInterval;
	char _scanning;
	NSObject*<OS_dispatch_source> _scanningDurationTimer;
	TRDeviceSetupBrowser* _setupBrowser;
	NSObject*<OS_dispatch_source> _setupTimeoutTimer;
	char _setupInProgress;
	double _scanningStartTimeInterval;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSetupBrowser;
-(void)beginScan;
-(void)_beginActualScan;
-(void)_endScanIfNecessary;
-(void)_startSetupTimeoutTimer;
-(void)_endActualScan;
-(void)_cancelScanningDurationTimer;
-(void)deviceSetupBrowser:(id)arg1 didRemovePeripheral:(id)arg2 ;
-(void)endScan;
-(void)dealloc;
-(id)init;
-(void)deviceSetupBrowserDidChangeState:(id)arg1 ;
-(void)deviceSetupBrowser:(id)arg1 didFindPeripheral:(id)arg2 ;
-(void)deviceSetupPeripheralDidTap:(id)arg1 ;
-(void)deviceSetupPeripheralSetupDidComplete:(id)arg1 ;
-(void)deviceSetupPeripheralSetupDidFail:(id)arg1 withError:(id)arg2 ;
@end

