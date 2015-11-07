/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/XPCServices/com.apple.siri.analyzer.xpc/com.apple.siri.analyzer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AWDServerConnection, NSObject, NSNumber;

@interface AFDiagnostics : NSObject {

	AWDServerConnection* _serverConnection;
	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _connectionStartTime;
	NSNumber* _voiceRecordingStartTime;
	NSNumber* _voiceRecordingEndTime;
	NSNumber* _voiceSendStartTime;
	NSNumber* _voiceSendEndTime;

}

@property (getter=_queue,nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                                                  //@synthesize queue=_queue - In the implementation block
@property (getter=_serverConnection,nonatomic,readonly) AWDServerConnection * serverConnection;                                                   //@synthesize serverConnection=_serverConnection - In the implementation block
@property (setter=_setConnectionStartTime:,getter=_connectionStartTime,nonatomic,retain) NSNumber * connectionStartTime;                          //@synthesize connectionStartTime=_connectionStartTime - In the implementation block
@property (setter=_setVoiceRecordingStartTime:,getter=_voiceRecordingStartTime,nonatomic,retain) NSNumber * voiceRecordingStartTime;              //@synthesize voiceRecordingStartTime=_voiceRecordingStartTime - In the implementation block
@property (setter=_setVoiceRecordingEndTime:,getter=_voiceRecordingEndTime,nonatomic,retain) NSNumber * voiceRecordingEndTime;                    //@synthesize voiceRecordingEndTime=_voiceRecordingEndTime - In the implementation block
@property (setter=_setVoiceSendStartTime:,getter=_voiceSendStartTime,nonatomic,retain) NSNumber * voiceSendStartTime;                             //@synthesize voiceSendStartTime=_voiceSendStartTime - In the implementation block
@property (setter=_setVoiceSendEndTime:,getter=_voiceSendEndTime,nonatomic,retain) NSNumber * voiceSendEndTime;                                   //@synthesize voiceSendEndTime=_voiceSendEndTime - In the implementation block
+(id)sharedDiagnostics;
-(unsigned long long)_AWDTimestampTruncatedToHourPrecision;
-(double)_currentTime;
-(void)_setConnectionStartTime:(id)arg1 ;
-(void)_submitMetricWithIdentifier:(unsigned long)arg1 hotShipIdentifier:(unsigned long)arg2 hotShipTimestamp:(unsigned long long)arg3 generation:(/*^block*/id)arg4 ;
-(id)_connectionStartTime;
-(unsigned long long)_durationInMillisecondsFromTime:(double)arg1 toTime:(double)arg2 ;
-(void)_setVoiceRecordingStartTime:(id)arg1 ;
-(void)_setVoiceRecordingEndTime:(id)arg1 ;
-(id)_voiceRecordingStartTime;
-(void)_setVoiceSendStartTime:(id)arg1 ;
-(void)_setVoiceSendEndTime:(id)arg1 ;
-(id)_voiceSendStartTime;
-(id)_voiceRecordingEndTime;
-(id)_voiceSendEndTime;
-(void)_submitMetricWithIdentifier:(unsigned long)arg1 generation:(/*^block*/id)arg2 ;
-(void)logConnectionStart;
-(void)logConnectionOpenWithConnectionType:(int)arg1 ;
-(void)logConnectionFailedWithError:(id)arg1 connectionType:(int)arg2 ;
-(void)logVoiceRecordingStart;
-(void)logVoiceRecordingEnd;
-(void)logVoiceSendStart;
-(void)logVoiceSendEnd;
-(void)logNetworkAnalyzeRunWithResults:(id)arg1 ;
-(void)logSpeechRecognized;
-(id)init;
-(void)flush;
-(id)_queue;
-(id)_serverConnection;
@end

