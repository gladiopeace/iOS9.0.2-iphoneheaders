/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVVoiceControllerRecordDelegate <NSObject>
@optional
-(void)voiceControllerDidDetectStartpoint:(id)arg1;
-(void)voiceControllerDidStopRecording:(id)arg1 forReason:(int)arg2;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(char)arg2;
-(void)voiceControllerDidStartRecording:(id)arg1 successfully:(char)arg2 error:(id)arg3;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2;
-(void)voiceControllerDidDetectEndpoint:(id)arg1 ofType:(int)arg2 atTime:(double)arg3;
-(void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)voiceControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;
-(void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;
-(void)voiceControllerBeginRecordInterruption:(id)arg1;
-(void)voiceControllerEndRecordInterruption:(id)arg1;

@required
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2;

@end

