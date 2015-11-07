/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <identityservicesd/identityservicesd-Structs.h>
@class NSRecursiveLock, NSMutableDictionary;

@interface IDSOTRController : NSObject {

	NSRecursiveLock* _storageLock;
	NSMutableDictionary* _sessionStorage;
	opaque_pthread_mutex_t _lock;
	NSMutableDictionary* _sessionInfoToToken;
	NSMutableDictionary* _priorityToCompletionBlocks;
	NSMutableDictionary* _priorityToTimeoutBlocks;

}
+(id)sharedInstance;
-(void)resumeSessionNegotiation;
-(void)processNegotiationData:(id)arg1 deviceUniqueID:(id)arg2 token:(id)arg3 negotiationCount:(unsigned)arg4 ;
-(void)suspendSessionNegotiation:(id)arg1 ;
-(SecMPPublicIdentityRef)copyPairedDevicePublicIdentityWithDataProtectionClass:(unsigned)arg1 ;
-(SecOTRSessionRef)copySessionForToken:(id)arg1 ;
-(void)resetAllSessions;
-(void)removeAllCachedSessionsFromMainQueue;
-(void)setSessionReady:(id)arg1 ;
-(void)startOTRNegotiationWithDeviceIfNeeded:(id)arg1 token:(id)arg2 reset:(char)arg3 errorHandler:(/*^block*/id)arg4 ;
-(void)addOTRSessionBlock:(unsigned char)arg1 sessionBlock:(/*^block*/id)arg2 priority:(int)arg3 ;
-(char)isSessionReady:(id)arg1 ;
-(char)hasMessagableOTRSessionForToken:(id)arg1 ;
-(void)setOTRTestBlockFromCompletionBlock:(/*^block*/id)arg1 token:(id)arg2 ;
-(void)performOTRSessionBlock:(unsigned char)arg1 token:(id)arg2 ;
-(SecOTRSessionRef)_cachedSessionForToken:(id)arg1 ;
-(void)setupNewSessionInfoWithToken:(id)arg1 ;
-(void)_cacheSession:(SecOTRSessionRef)arg1 token:(id)arg2 ;
-(/*^block*/id)copyOTRTestBlock:(id)arg1 ;
-(unsigned)sessionNegotiationCount:(id)arg1 ;
-(char)isSessionNegotiating:(id)arg1 ;
-(double)sessionStartTimeWithToken:(id)arg1 ;
-(void)setSessionNegotiationComplete:(id)arg1 ;
-(void)_reportOTRTestResult:(id)arg1 setupTime:(double)arg2 result:(unsigned char)arg3 ;
-(void)setSessionNegotiationStart:(id)arg1 ;
-(void)_onQueueStartOTRNegotiationWithDeviceIfNeeded:(id)arg1 token:(id)arg2 reset:(char)arg3 errorHandler:(/*^block*/id)arg4 ;
-(char)serializeSession:(SecOTRSessionRef)arg1 token:(id)arg2 ;
-(void)_kickoffOTRNegotiationWithDevice:(id)arg1 token:(id)arg2 negotiationData:(id)arg3 ;
-(id)init;
@end

