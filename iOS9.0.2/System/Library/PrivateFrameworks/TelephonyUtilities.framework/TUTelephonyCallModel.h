/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TUCallModel.h>

@protocol OS_dispatch_queue;
@class NSObject, NSDictionary;

@interface TUTelephonyCallModel : TUCallModel {

	char _networkCanTakeCallsPrivate;
	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _callManagementState;

}

@property (getter=isWiFiCallingCurrentlyAvailable,nonatomic,readonly) char wiFiCallingCurrentlyAvailable; 
@property (getter=isWiFiEmergencyCallingAllowed,nonatomic,readonly) char wiFiEmergencyCallingAllowed; 
@property (nonatomic,readonly) int expectedOutgoingCallSubType; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDictionary * callManagementState;                                                       //@synthesize callManagementState=_callManagementState - In the implementation block
@property (assign,nonatomic) char networkCanTakeCallsPrivate;                                                          //@synthesize networkCanTakeCallsPrivate=_networkCanTakeCallsPrivate - In the implementation block
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isMergeable;
-(int)ambiguityState;
-(char)isTakingCallsPrivateAllowed;
-(char)isHardPauseAvailable;
-(char)isEndAndAnswerAllowed;
-(char)isSendToVoicemailAllowed;
-(id)audioCategoryForCall:(id)arg1 ;
-(char)isSwappable;
-(char)isHoldAllowed;
-(char)isAddCallAllowed;
-(char)isHoldAndAnswerAllowed;
-(id)audioModeForCall:(id)arg1 ;
-(char)isWiFiCallingCurrentlyAvailable;
-(char)isWiFiEmergencyCallingAllowed;
-(void)updateCallManagementState;
-(void)updateNetworkCanTakeCallsPrivate;
-(NSDictionary *)callManagementState;
-(char)_isAmbiguousCallList;
-(char)_isAmbiguousMultiPartyCall;
-(char)networkCanTakeCallsPrivate;
-(int)expectedOutgoingCallSubType;
-(void)setCallManagementState:(NSDictionary *)arg1 ;
-(void)setNetworkCanTakeCallsPrivate:(char)arg1 ;
@end

