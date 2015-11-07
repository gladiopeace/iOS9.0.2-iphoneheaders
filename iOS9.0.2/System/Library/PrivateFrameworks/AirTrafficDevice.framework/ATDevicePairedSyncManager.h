/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/PSYProgressObserverDelegate.h>
#import <libobjc.A.dylib/ATMessageLinkObserver.h>
#import <libobjc.A.dylib/ATIDSServiceListener.h>
#import <libobjc.A.dylib/ATSessionObserver.h>

@protocol OS_dispatch_queue;
@class PSYProgressObserver, ATDeviceService, NSObject, ATIDSService, NSString;

@interface ATDevicePairedSyncManager : NSObject <PSYProgressObserverDelegate, ATMessageLinkObserver, ATIDSServiceListener, ATSessionObserver> {

	PSYProgressObserver* _syncProgressObserver;
	ATDeviceService* _deviceService;
	NSObject*<OS_dispatch_queue> _queue;
	ATIDSService* _idsService;
	char _initialSyncPhaseCompleted;

}

@property (assign) char initialSyncPhaseCompleted;                  //@synthesize initialSyncPhaseCompleted=_initialSyncPhaseCompleted - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)progressObserverDidChangeState:(id)arg1 ;
-(void)progressObserverDidChangeProgress:(id)arg1 ;
-(void)progressObserver:(id)arg1 didFinishActivity:(id)arg2 withError:(id)arg3 ;
-(void)idsServiceDevicesDidChange:(id)arg1 ;
-(id)initWithIDSService:(id)arg1 ;
-(char)hasRestriction;
-(void)handleDevicePairedNotification;
-(void)handleDeviceUnPairedNotification;
-(char)initialSyncPhaseCompleted;
-(void)setInitialSyncPhaseCompleted:(char)arg1 ;
@end

