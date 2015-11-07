/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameKitServices/GKVoiceChatServicePrivate.h>

@class NSMutableArray, NSString;

@interface GKVoiceChatServiceFocus : GKVoiceChatServicePrivate {

	NSMutableArray* outgoingCallDictList;
	NSMutableArray* incomingCallDictList;
	int incomingUID;
	NSString* currentFocus;
	int packetsPerBundle;
	char hasMic;

}

@property (nonatomic,copy) NSString * currentFocus; 
@property (assign) int packetsPerBundle; 
@property (assign) char hasMic; 
+(id)defaultVoiceChatService;
-(void)dealloc;
-(id)init;
-(char)startVoiceChatWithParticipantID:(id)arg1 error:(id*)arg2 ;
-(char)acceptCallID:(unsigned long)arg1 error:(id*)arg2 ;
-(void)denyCallID:(unsigned long)arg1 ;
-(void)receivedData:(id)arg1 fromParticipantID:(id)arg2 ;
-(void)setRemoteVideoLayer:(void*)arg1 ;
-(void*)remoteVideoLayer;
-(void)videoConference:(id)arg1 didStartSession:(char)arg2 withCallID:(unsigned long)arg3 error:(id)arg4 ;
-(void)videoConference:(id)arg1 didStopWithCallID:(unsigned long)arg2 error:(id)arg3 ;
-(int)packetsPerBundle;
-(void)setQualityDelegate:(id)arg1 ;
-(void)setPacketsPerBundle:(int)arg1 ;
-(void)setShouldTimeoutPackets:(char)arg1 ;
-(void)setIsUsingSuppression:(char)arg1 ;
-(void)setChatMode:(int)arg1 ;
-(void)setCurrentFocus:(NSString *)arg1 ;
-(void)updatedMutedPeers:(id)arg1 forParticipantID:(id)arg2 ;
-(void)updatedConnectedPeers:(id)arg1 ;
-(void)setHasMic:(char)arg1 ;
-(char)hasMic;
-(NSString *)currentFocus;
-(void)setSpeakingDelegate:(id)arg1 ;
-(void)setTalkingPeersLimit:(unsigned)arg1 ;
-(void)setLocalVideoLayer:(void*)arg1 ;
-(void*)localVideoLayer;
-(void)setFocus:(char)arg1 ;
-(void)remoteCancelledProc:(id)arg1 ;
-(void)stopVoiceChatProc:(id)arg1 participantDidCancel:(char)arg2 ;
-(id)openOutgoingDictionaryForParticipantID:(id)arg1 ;
-(id)dictionaryForCallID:(unsigned long)arg1 isIncomingDictonary:(char)arg2 ;
-(char)processInviteDictionary:(id)arg1 fromParticipantID:(id)arg2 ;
-(char)processReplyDict:(id)arg1 ;
-(char)processCancelDict:(id)arg1 ;
-(char)processFocusDict:(id)arg1 fromParticipantID:(id)arg2 ;
-(char)processInviteDictionaryForTie:(id)arg1 fromParticipantID:(id)arg2 ;
-(id)dictionaryForParticipantID:(id)arg1 isIncomingDictonary:(char)arg2 ;
-(id)dictionaryForNonce:(int)arg1 participantID:(id)arg2 isIncomingDictonary:(char)arg3 ;
-(id)incomingDictionaryMatchingOriginalCallID:(unsigned long)arg1 participantID:(id)arg2 ;
-(char)processFocusChange:(id)arg1 fromParticipantID:(id)arg2 ;
-(void)remoteCancelled:(id)arg1 ;
-(void)stopVoiceChatProc:(id)arg1 ;
-(void)sendFocusChange:(char)arg1 ;
-(double)localFramerate;
-(double)localBitrate;
-(double)remoteFramerate;
-(double)remoteBitrate;
-(id)localDisplayNameForCallID:(unsigned long)arg1 ;
-(id)remoteDisplayNameForCallID:(unsigned long)arg1 ;
-(char)isAudioPausedToParticipantID:(id)arg1 ;
-(void)pauseAudio:(char)arg1 toParticipantID:(id)arg2 ;
@end

