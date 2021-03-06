/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:10 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <libobjc.A.dylib/CKVoiceControllerDelegate.h>

@protocol CKAudioRecorderDelegate;
@class CKVoiceController, NSURL, NSDate, NSString;

@interface CKAudioRecorder : NSObject <CKVoiceControllerDelegate> {

	char _recording;
	char _recordingEmpty;
	char _cancelled;
	char _shouldPlayStartSound;
	char _shouldPlayStopSound;
	id<CKAudioRecorderDelegate> _delegate;
	CKVoiceController* _voiceController;
	NSURL* _fileURL;
	NSDate* _startDate;
	/*^block*/id _completion;
	OpaqueAudioFileIDRef _fileID;
	long long _totalPacketsCount;

}

@property (assign,nonatomic) id<CKAudioRecorderDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double duration; 
@property (assign,getter=isRecording,nonatomic) char recording;                        //@synthesize recording=_recording - In the implementation block
@property (assign,getter=isRecordingEmpty,nonatomic) char recordingEmpty;              //@synthesize recordingEmpty=_recordingEmpty - In the implementation block
@property (assign,getter=isCancelled,nonatomic) char cancelled;                        //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,retain) CKVoiceController * voiceController;                      //@synthesize voiceController=_voiceController - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                          //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                       //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) id completion;                                              //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) char shouldPlayStartSound;                                //@synthesize shouldPlayStartSound=_shouldPlayStartSound - In the implementation block
@property (assign,nonatomic) char shouldPlayStopSound;                                 //@synthesize shouldPlayStopSound=_shouldPlayStopSound - In the implementation block
@property (assign,nonatomic) OpaqueAudioFileIDRef fileID;                              //@synthesize fileID=_fileID - In the implementation block
@property (assign,nonatomic) long long totalPacketsCount;                              //@synthesize totalPacketsCount=_totalPacketsCount - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)startDate;
-(void)setDelegate:(id<CKAudioRecorderDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<CKAudioRecorderDelegate>)delegate;
-(double)duration;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(char)isCancelled;
-(void)setCancelled:(char)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(NSURL *)fileURL;
-(char)isRecording;
-(void)cancelRecording;
-(void)startRecordingAndPlaySound:(char)arg1 ;
-(void)stopRecordingAndPlaySound:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopRecording:(/*^block*/id)arg1 ;
-(void)startRecordingForRaiseGesture;
-(char)isRecordingEmpty;
-(void)setVoiceController:(CKVoiceController *)arg1 ;
-(CKVoiceController *)voiceController;
-(void)voiceControllerDidDetectStartpoint:(id)arg1 ;
-(void)voiceControllerDidStartRecording:(id)arg1 ;
-(void)voiceControllerRecordBufferAvailable:(id)arg1 buffer:(id)arg2 ;
-(void)voiceControllerDidFinishRecording:(id)arg1 successfully:(char)arg2 ;
-(void)voiceController:(id)arg1 didUpdateAveragePower:(float)arg2 ;
-(void)resetState;
-(void)startRecordingForRaiseGesture:(char)arg1 shouldPlaySound:(char)arg2 ;
-(void)setRecording:(char)arg1 ;
-(void)setShouldPlayStartSound:(char)arg1 ;
-(void)setFileID:(OpaqueAudioFileIDRef)arg1 ;
-(void)setShouldPlayStopSound:(char)arg1 ;
-(void)setRecordingEmpty:(char)arg1 ;
-(char)shouldPlayStartSound;
-(OpaqueAudioFileIDRef)fileID;
-(char)shouldPlayStopSound;
-(long long)totalPacketsCount;
-(void)setTotalPacketsCount:(long long)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end

