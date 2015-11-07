/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBReachabilityTriggerDelegate.h>

@class NSHashTable, NSMutableSet, SBReachabilityTrigger, NSString;

@interface SBReachabilityManager : NSObject <SBReachabilityTriggerDelegate> {

	NSHashTable* _observers;
	char _reachabilityModeActive;
	unsigned _reachabilityExtensionGenerationCount;
	char _reachabilityModeEnabled;
	NSMutableSet* _temporaryDisabledReasons;
	SBReachabilityTrigger* _trigger;

}

@property (nonatomic,readonly) char reachabilityModeActive;              //@synthesize reachabilityModeActive=_reachabilityModeActive - In the implementation block
@property (assign,nonatomic) char reachabilityEnabled; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)reachabilitySupported;
+(id)sharedInstance;
-(void)_handleReachabilityDeactivated;
-(void)_handleSignificantTimeChanged;
-(void)cancelPendingReachabilityRequests;
-(void)deactivateReachabilityModeForObserver:(id)arg1 ;
-(void)_toggleReachabilityModeWithRequestingObserver:(id)arg1 ;
-(void)triggerDidTriggerReachability:(id)arg1 ;
-(char)reachabilityEnabled;
-(void)setReachabilityEnabled:(char)arg1 ;
-(void)setReachabilityTemporarilyDisabled:(char)arg1 forReason:(id)arg2 ;
-(char)reachabilityModeActive;
-(void)_handleReachabilityActivated;
-(void)dealloc;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_notifyObserversReachabilityModeActive:(char)arg1 excludingObserver:(id)arg2 ;
-(void)_setKeepAliveTimer;
-(void)_updateReachabilityModeActive:(char)arg1 withRequestingObserver:(id)arg2 ;
@end

