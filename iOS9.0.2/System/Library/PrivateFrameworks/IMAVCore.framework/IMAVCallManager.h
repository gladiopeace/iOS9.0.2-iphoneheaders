/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IMPowerAssertion, NSMutableArray, NSMutableDictionary, NSDate, NSArray;

@interface IMAVCallManager : NSObject {

	IMPowerAssertion* _powerAssertion;
	NSMutableArray* _chatArray;
	NSMutableArray* _acChatProxyArray;
	NSMutableArray* _avChatProxyArray;
	NSMutableDictionary* _guidToACChatProxyMap;
	NSMutableDictionary* _guidToAVChatProxyMap;
	NSDate* _lastCallStateChange;
	int _avToken;
	int _acToken;
	unsigned _avCallState;
	unsigned _acCallState;
	unsigned _telephonyCallState;
	unsigned _globalCallState;

}

@property (nonatomic,readonly) unsigned callState; 
@property (nonatomic,readonly) char hasActiveCall; 
@property (nonatomic,retain,readonly) NSArray * calls; 
@property (assign,setter=_setTelephonyCallState:,nonatomic) unsigned _telephonyCallState;              //@synthesize telephonyCallState=_telephonyCallState - In the implementation block
@property (nonatomic,retain,readonly) NSArray * _FTCalls; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(char)hasActiveCall;
-(char)_hasActiveFaceTimeCall;
-(void)_updateACChatProxyWithInfo:(id)arg1 ;
-(void)_updateAVChatProxyWithInfo:(id)arg1 ;
-(void)_updateOverallChatState;
-(void)_addIMAVChatToChatList:(id)arg1 ;
-(void)_addAVChatProxy:(id)arg1 ;
-(void)_addACChatProxy:(id)arg1 ;
-(void)_removeIMAVChatFromChatList:(id)arg1 ;
-(void)_sendProxyUpdate;
-(char)_hasActiveAudioCall;
-(void)_updateAVCallState;
-(void)_updateACCallState;
-(void)_setTelephonyCallState:(unsigned)arg1 ;
-(char)_hasActiveTelephonyCall;
-(void)_setAVCallState:(unsigned)arg1 ;
-(void)_setACCallState:(unsigned)arg1 ;
-(void)_setAVCallState:(unsigned)arg1 quietly:(char)arg2 ;
-(void)_setACCallState:(unsigned)arg1 quietly:(char)arg2 ;
-(void)__setTelephonyCallState:(unsigned)arg1 ;
-(NSArray *)_FTCalls;
-(id)_mutableFTCalls;
-(id)_copyMutableFTCalls;
-(void)_postStateChangeNamed:(id)arg1 fromState:(unsigned)arg2 toState:(unsigned)arg3 postType:(char)arg4 type:(unsigned)arg5 ;
-(unsigned)_telephonyCallState;
-(void)_postStateChangeIfNecessary;
-(id)_calls;
-(unsigned)_callStateForType:(unsigned)arg1 ;
-(id)_nonRetainingChatList;
-(id)_activeFaceTimeCall;
-(id)_activeAudioCall;
-(unsigned)callState;
-(unsigned)_callState;
-(NSArray *)calls;
@end

