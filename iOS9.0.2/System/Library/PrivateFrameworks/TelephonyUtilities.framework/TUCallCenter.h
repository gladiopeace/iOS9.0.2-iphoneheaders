/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TUCallModelState, NSArray, TUCall;

@interface TUCallCenter : NSObject {

	TUCallModelState* _callModelState;

}

@property (nonatomic,copy,readonly) NSArray * currentCalls; 
@property (nonatomic,copy,readonly) NSArray * currentVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * currentAudioAndVideoCalls; 
@property (nonatomic,copy,readonly) NSArray * incomingCalls; 
@property (nonatomic,copy,readonly) NSArray * displayedCalls; 
@property (nonatomic,copy,readonly) NSArray * conferenceParticipantCalls; 
@property (nonatomic,copy,readonly) NSArray * callsHostedElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsWithAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsHostedOrAnEndpointElsewhere; 
@property (nonatomic,copy,readonly) NSArray * callsOnDefaultPairedDevice; 
@property (nonatomic,retain,readonly) TUCall * incomingCall; 
@property (nonatomic,retain,readonly) TUCall * incomingVideoCall; 
@property (nonatomic,retain,readonly) TUCall * activeVideoCall; 
@property (nonatomic,retain,readonly) TUCall * currentVideoCall; 
@property (nonatomic,readonly) unsigned currentCallCount; 
@property (nonatomic,readonly) unsigned currentVideoCallCount; 
@property (nonatomic,readonly) unsigned currentAudioAndVideoCallCount; 
@property (nonatomic,readonly) unsigned callCountOnDefaultPairedDevice; 
@property (nonatomic,readonly) char anyCallIsHostedOnCurrentDevice; 
@property (nonatomic,readonly) char anyCallIsEndpointOnCurrentDevice; 
@property (nonatomic,retain,readonly) NSArray * currentCallGroups; 
@property (nonatomic,copy,readonly) NSArray * callGroupsOnDefaultPairedDevice; 
@property (nonatomic,retain) TUCallModelState * callModelState;                              //@synthesize callModelState=_callModelState - In the implementation block
+(id)sharedInstance;
+(char)isInCallServiceProcess;
+(void*)sharedAddressBook;
+(char)emergencyCallBackModeIsActive;
+(id)_sharedInstanceWithDaemonDelegate:(id)arg1 ;
-(void)dealloc;
-(NSArray *)currentCalls;
-(char)isAmbiguous;
-(char)isMergeable;
-(int)ambiguityState;
-(char)isTakingCallsPrivateAllowed;
-(char)isHardPauseAvailable;
-(char)isEndAndAnswerAllowed;
-(char)isSendToVoicemailAllowed;
-(id)displayedCallFromCalls:(id)arg1 ;
-(TUCall *)incomingCall;
-(void)handleCallModelStateChanged:(id)arg1 ;
-(char)isSwappable;
-(char)isHoldAllowed;
-(char)isAddCallAllowed;
-(char)isHoldAndAnswerAllowed;
-(unsigned)currentCallCount;
-(unsigned)currentVideoCallCount;
-(id)callWithCallUUID:(id)arg1 ;
-(char)anyCallPassesTest:(/*^block*/id)arg1 ;
-(NSArray *)conferenceParticipantCalls;
-(char)allCallsAreOfService:(int)arg1 ;
-(id)_allCalls;
-(void)_handleCallControlFailure:(id)arg1 ;
-(TUCallModelState *)callModelState;
-(id)dialWithRequest:(id)arg1 ;
-(void)swapCalls;
-(void)disconnectCurrentCallAndActivateHeld;
-(void)disconnectAllCalls;
-(void)pullRelayingCallsFromClient;
-(void)pushRelayingCallsToHostWithSourceIdentifier:(id)arg1 ;
-(void)pushHostedCallsToPairedClientDevice;
-(void)pullHostedCallsFromPairedHostDevice;
-(void)enteredBackgroundForAllCalls;
-(id)callWithUniqueProxyIdentifier:(id)arg1 ;
-(void)dialWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)pullThumperCallFromClientUsingInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(TUCall *)activeVideoCall;
-(TUCall *)incomingVideoCall;
-(id)displayedCall;
-(id)initWithDaemonDelegate:(id)arg1 ;
-(void)_callStatusChangedInternal:(id)arg1 ;
-(void)enumerateCallsWithOptions:(unsigned)arg1 invokingBlock:(/*^block*/id)arg2 forCallsPassingTest:(/*^block*/id)arg3 ;
-(id)callsPassingTest:(/*^block*/id)arg1 returningNilForEmpty:(char)arg2 ;
-(void)enumerateCallsInvokingBlock:(/*^block*/id)arg1 forCallsPassingTest:(/*^block*/id)arg2 ;
-(id)callsPassingTest:(/*^block*/id)arg1 ;
-(id)conferenceCall;
-(id)callPassingTest:(/*^block*/id)arg1 withOptions:(unsigned)arg2 ;
-(id)callPassingTest:(/*^block*/id)arg1 ;
-(NSArray *)currentVideoCalls;
-(id)callPassingTest:(/*^block*/id)arg1 sortedUsingComparator:(/*^block*/id)arg2 ;
-(id)callWithStatus:(int)arg1 ;
-(id)audioOrVideoCallWithStatus:(int)arg1 ;
-(unsigned)countOfCallsPassingTest:(/*^block*/id)arg1 ;
-(char)allCallsPassTest:(/*^block*/id)arg1 ;
-(id)_callGroupsFromCalls:(id)arg1 ;
-(NSArray *)callsOnDefaultPairedDevice;
-(NSArray *)currentCallGroups;
-(id)_dialWithRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)canInitiateCalls;
-(char)canInitiateCallForService:(int)arg1 ;
-(char)canInitiateVoicemailCall;
-(char)canUseThumperOverRelayForIncomingAndOutgoingCalls;
-(void)disconnectNonRelayingCalls;
-(id)dial:(id)arg1 callID:(int)arg2 service:(int)arg3 ;
-(id)dial:(id)arg1 callID:(int)arg2 service:(int)arg3 sourceIdentifier:(id)arg4 uniqueProxyIdentifier:(id)arg5 ;
-(id)_dial:(id)arg1 callID:(int)arg2 service:(int)arg3 sourceIdentifier:(id)arg4 dialType:(int)arg5 uniqueProxyIdentifier:(id)arg6 ;
-(id)dialEmergency:(id)arg1 sourceIdentifier:(id)arg2 ;
-(id)dialVoicemailWithSourceIdentifier:(id)arg1 ;
-(void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 ;
-(void)answerCall:(id)arg1 withSourceIdentifier:(id)arg2 wantsHoldMusic:(char)arg3 ;
-(void)disconnectCall:(id)arg1 withReason:(int)arg2 ;
-(void)answerCall:(id)arg1 ;
-(id)audioAndVideoCallsWithStatus:(int)arg1 ;
-(void)endActiveAndAnswerCall:(id)arg1 ;
-(void)endHeldAndAnswerCall:(id)arg1 ;
-(void)disconnectCall:(id)arg1 ;
-(NSArray *)displayedCalls;
-(NSArray *)callsHostedElsewhere;
-(NSArray *)currentAudioAndVideoCalls;
-(NSArray *)incomingCalls;
-(NSArray *)callsWithAnEndpointElsewhere;
-(NSArray *)callsHostedOrAnEndpointElsewhere;
-(id)callsWithStatus:(int)arg1 ;
-(TUCall *)currentVideoCall;
-(id)videoCallWithStatus:(int)arg1 ;
-(id)frontmostCall;
-(id)frontmostAudioOrVideoCall;
-(unsigned)callCountOnDefaultPairedDevice;
-(char)anyCallIsHostedOnCurrentDevice;
-(char)anyCallIsEndpointOnCurrentDevice;
-(NSArray *)callGroupsOnDefaultPairedDevice;
-(id)dial:(id)arg1 service:(int)arg2 ;
-(id)dialEmergency:(id)arg1 ;
-(id)dialVoicemail;
-(void)sendFieldModeDigits:(id)arg1 ;
-(void)answerCallWithHoldMusic:(id)arg1 ;
-(void)holdActiveAndAnswerCall:(id)arg1 ;
-(void)endActiveOrHeldAndAnswerCall:(id)arg1 ;
-(void)resumeCall:(id)arg1 ;
-(void)pushRelayingCallsToHost;
-(void)disconnectRelayingCalls;
-(void)enteredForegroundForCall:(id)arg1 ;
-(char)canMergeCalls;
-(void)endEmergencyCallBackMode;
-(void)setCallModelState:(TUCallModelState *)arg1 ;
-(unsigned)currentAudioAndVideoCallCount;
@end
