/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorProtocol.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CUTWeakReference, NSString, PCInterfaceUsabilityMonitor;

@interface PCWWANUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	NSObject*<OS_dispatch_queue> _monitorDelegateQueue;
	CUTWeakReference* _delegateReference;
	char _isInCall;
	char _isInHighPowerState;
	char _trackUsability;
	unsigned _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	NSString* _interfaceName;
	PCInterfaceUsabilityMonitor* _interfaceMonitor;
	CFStringRef _currentRAT;
	int _powerlogCDRXToken;
	CTServerConnectionRef _telephonyServer;
	long _wwanContextID;
	NSObject*<OS_dispatch_queue> _ctServerQueue;

}

@property (nonatomic,readonly) CFStringRef currentRAT;                                      //@synthesize currentRAT=_currentRAT - In the implementation block
@property (nonatomic,readonly) char isLTEWithCDRX; 
@property (nonatomic,readonly) CFStringRef wwanInterfaceName; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int interfaceIdentifier; 
@property (nonatomic,readonly) int linkQuality; 
@property (nonatomic,readonly) char isInterfaceUsable; 
@property (nonatomic,readonly) char isInterfaceHistoricallyUsable; 
@property (nonatomic,readonly) char isInternetReachable; 
@property (nonatomic,retain,readonly) NSString * linkQualityString; 
@property (nonatomic,readonly) char isPoorLinkQuality; 
@property (nonatomic,readonly) char isBadLinkQuality; 
@property (nonatomic,readonly) char isRadioHot; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
-(void)setDelegate:(id<PCInterfaceUsabilityMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(CFStringRef)wwanInterfaceName;
-(char)isInternetReachable;
-(char)isInterfaceUsable;
-(NSString *)linkQualityString;
-(char)isPoorLinkQuality;
-(char)isInterfaceHistoricallyUsable;
-(char)isBadLinkQuality;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/id)arg1 ;
-(void)setTrackedTimeInterval:(double)arg1 ;
-(void)setThresholdOffTransitionCount:(unsigned)arg1 ;
-(void)setTrackUsability:(char)arg1 ;
-(char)isRadioHot;
-(CFStringRef)currentRAT;
-(char)isLTEWithCDRX;
-(void)_forwardConfigurationOnIvarQueue;
-(id)initWithDelegateQueue:(id)arg1 ;
-(void)_setupWWANMonitor;
-(void)_adjustInterfaceNameForWWANContextID:(long)arg1 ;
-(void)_handleTelephonyNotificationWithName:(CFStringRef)arg1 userInfo:(CFDictionaryRef)arg2 ;
-(int)linkQuality;
-(int)interfaceIdentifier;
@end

