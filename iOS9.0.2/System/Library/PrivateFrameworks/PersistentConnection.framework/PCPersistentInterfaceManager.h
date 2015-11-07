/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>

@class NSRecursiveLock, NSMapTable, PCSimpleTimer, NSString, NSTimer;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceMonitorDelegate> {

	NSRecursiveLock* _lock;
	NSMapTable* _delegatesAndQueues;
	CFSetRef _WiFiAutoAssociationDelegates;
	PCSimpleTimer* _WiFiAutoAssociationDisableTimer;
	CFSetRef _wakeOnWiFiDelegates;
	PCSimpleTimer* _wakeOnWiFiDisableTimer;
	void* _ctServerConnection;
	void* _interfaceAssertion;
	long _WWANContextIdentifier;
	NSString* _WWANInterfaceName;
	char _isWWANInterfaceUp;
	NSTimer* _inCallWWANOverrideTimer;
	char _isWWANInterfaceDataActive;
	char _ctIsWWANInHomeCountry;
	char _hasWWANStatusIndicator;
	char _isPowerStateDetectionSupported;
	char _isWWANInterfaceInProlongedHighPowerState;
	char _isWWANInterfaceActivationPermitted;
	double _lastActivationTime;
	int _wwanRSSI;
	char _isInCall;
	char _isWakeOnWiFiSupported;
	char _isWakeOnWiFiEnabled;
	char _shouldOverrideOnCallBehavior;

}

@property (readonly) char isWWANInterfaceUp; 
@property (readonly) char isWWANInHomeCountry; 
@property (readonly) char isWWANBetterThanWiFi; 
@property (readonly) char doesWWANInterfaceExist; 
@property (readonly) NSString * WWANInterfaceName; 
@property (readonly) char isInternetReachableViaWiFi; 
@property (readonly) char isWakeOnWiFiSupported; 
@property (readonly) char isInternetReachable; 
@property (nonatomic,retain,readonly) NSString * currentLinkQualityString; 
@property (readonly) char isPowerStateDetectionSupported; 
@property (readonly) char isWWANInterfaceInProlongedHighPowerState; 
@property (readonly) char isInCall; 
@property (readonly) char isWWANInterfaceActivationPermitted; 
@property (readonly) char areAllNetworkInterfacesDisabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)handleMachMessage:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(char)isInternetReachable;
-(void)_createCTConnection;
-(void)_updateWWANInterfaceUpStateLocked;
-(void)_serverCallbackLocked:(id)arg1 info:(id)arg2 ;
-(void)_mainThreadCTConnectionAttempt;
-(void)_ctConnectionAttempt;
-(void)_updateWWANInterfaceAssertionsLocked;
-(void)_updateWWANInterfaceUpState;
-(void)_scheduleCalloutsForSelector:(SEL)arg1 ;
-(void)_updateCTIsWWANInHomeCountry:(char)arg1 isWWANInterfaceDataActive:(char)arg2 ;
-(char)_wantsWWANInterfaceAssertion;
-(void)_clearInCallWWANOverrideTimerLocked;
-(void)_inCallWWANOverrideTimerFired;
-(char)_isWWANInHomeCountryLocked;
-(char)_isInternetReachableLocked;
-(void)_adjustWakeOnWiFi;
-(void)_adjustWiFiAutoAssociationLocked;
-(void)_adjustWiFiAutoAssociation;
-(char)_wantsWakeOnWiFiEnabled;
-(void)_adjustWakeOnWiFiLocked;
-(char)doesWWANInterfaceExist;
-(char)isWWANInterfaceActivationPermitted;
-(char)isInCall;
-(char)_isWiFiUsable;
-(char)_allowBindingToWWAN;
-(void)bindCFStream:(CFReadStreamRef)arg1 toWWANInterface:(char)arg2 ;
-(id)urlConnectionBoundToWWANInterface:(char)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(char)arg4 maxContentLength:(long long)arg5 startImmediately:(char)arg6 connectionProperties:(id)arg7 ;
-(void)_serverCallback:(id)arg1 info:(id)arg2 ;
-(NSString *)currentLinkQualityString;
-(char)_wwanIsPoorLinkQuality;
-(char)_wifiIsPoorLinkQuality;
-(char)isWWANBetterThanWiFi;
-(char)isWWANInterfaceUp;
-(NSString *)WWANInterfaceName;
-(char)isPowerStateDetectionSupported;
-(char)isWWANInterfaceInProlongedHighPowerState;
-(char)isWWANInHomeCountry;
-(char)isInternetReachableViaWiFi;
-(char)isWakeOnWiFiSupported;
-(char)areAllNetworkInterfacesDisabled;
-(void)cutWiFiManagerDeviceAttached:(id)arg1 ;
-(void)_updateWWANInterfaceAssertions;
-(void)enableWiFiAutoAssociation:(char)arg1 forDelegate:(id)arg2 ;
-(void)enableWakeOnWiFi:(char)arg1 forDelegate:(id)arg2 ;
-(void)bindCFStreamToWWANInterface:(CFReadStreamRef)arg1 ;
-(id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(char)arg3 maxContentLength:(long long)arg4 startImmediately:(char)arg5 connectionProperties:(id)arg6 ;
-(void)removeDelegate:(id)arg1 ;
@end

