/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface GKVoiceChatSession : NSObject {

	id opaqueSession;

}

@property (assign) id<GKVoiceChatSessionDelegate> delegate; 
@property (readonly) NSString * sessionName; 
@property (readonly) NSArray * peerList; 
@property (getter=isActiveSession) char activeSession; 
@property (readonly) float inputMeter; 
@property (assign) float sessionVolume; 
-(void)setDelegate:(id<GKVoiceChatSessionDelegate>)arg1 ;
-(void)dealloc;
-(id<GKVoiceChatSessionDelegate>)delegate;
-(id)initWithGKSession:(id)arg1 sessionName:(id)arg2 ;
-(void)stopSession;
-(void)setMute:(char)arg1 forPeer:(id)arg2 ;
-(NSString *)sessionName;
-(void)setActiveSession:(char)arg1 ;
-(char)isActiveSession;
-(void)setSessionVolume:(float)arg1 ;
-(float)sessionVolume;
-(float)inputMeter;
-(char)getMuteStateForPeer:(id)arg1 ;
-(NSArray *)peerList;
-(float)outputMeterForPeer:(id)arg1 ;
-(void)startSession;
@end

