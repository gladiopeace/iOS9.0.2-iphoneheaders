/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, CUTWeakReference, NSMutableArray;

@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol> {

	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_dispatch_queue> _ivarQueue;
	int _interfaceIdentifier;
	NSString* _interfaceName;
	CUTWeakReference* _delegateReference;
	void* _reachability;
	char _isInternetReachable;
	void* _dynamicStore;
	CFRunLoopSourceRef _linkQualitySource;
	CFStringRef _lqKey;
	int _linkQuality;
	char _trackUsability;
	unsigned _thresholdOffTransitionCount;
	double _trackedTimeInterval;
	NSMutableArray* _offTransitions;

}

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
@property (nonatomic,readonly) CFStringRef currentRAT; 
@property (nonatomic,readonly) char isLTEWithCDRX; 
@property (nonatomic,readonly) CFStringRef wwanInterfaceName; 
@property (assign,nonatomic) id<PCInterfaceUsabilityMonitorDelegate> delegate; 
+(char)isBadLinkQuality:(int)arg1 ;
+(id)stringForLinkQuality:(int)arg1 ;
+(char)isPoorLinkQuality:(int)arg1 ;
-(void)setDelegate:(id<PCInterfaceUsabilityMonitorDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<PCInterfaceUsabilityMonitorDelegate>)delegate;
-(char)isInternetReachable;
-(char)isInterfaceUsable;
-(NSString *)linkQualityString;
-(char)isPoorLinkQuality;
-(char)isInterfaceHistoricallyUsable;
-(char)isBadLinkQuality;
-(void)_createLinkQualityMonitorOnIvarQueue;
-(void)_createReachabilityMonitorOnIvarQueue;
-(void)_unscheduleLinkQualityMonitorOnIvarQueue;
-(void)_unscheduleReachabilityMonitorOnIvarQueue;
-(void)_flushStaleTransitionsOnIvarQueue;
-(char)_isInterfaceUsableOnIvarQueue;
-(char)_isInterfaceHistoricallyUsableOnIvarQueue;
-(void)_reachabilityCallbackOnIvarQueue:(unsigned)arg1 ;
-(void)_callDelegateOnIvarQueueWithBlock:(/*^block*/id)arg1 ;
-(void)_updateOffTransitionsForLinkQualityChangeOnIvarQueue;
-(void)_processLinkQualityUpdateOnIvarQueueWithUpdatedLinkQuality:(int)arg1 ;
-(void)_dynamicStoreCallbackOnIvarQueue:(id)arg1 ;
-(void)_dynamicStoreCallback:(id)arg1 ;
-(void)setTrackedTimeInterval:(double)arg1 ;
-(void)setThresholdOffTransitionCount:(unsigned)arg1 ;
-(void)setTrackUsability:(char)arg1 ;
-(char)isRadioHot;
-(id)initWithInterfaceName:(id)arg1 interfaceIdentifier:(int)arg2 delegateQueue:(id)arg3 ;
-(void)_createReachabilityMonitor;
-(void)_reachabilityCallback:(unsigned)arg1 ;
-(void)_createLinkQualityMonitor;
-(int)linkQuality;
-(int)interfaceIdentifier;
@end

