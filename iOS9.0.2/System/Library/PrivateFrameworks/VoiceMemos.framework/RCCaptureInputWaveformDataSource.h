/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCWaveformDataSource.h>
#import <libobjc.A.dylib/AVCaptureAudioDataOutputSampleBufferDelegate.h>

@class RCMutableComposition, RCMutableCompositionFragment, RCComposition, RCCompositionFragment, RCWaveform, NSArray, NSString;

@interface RCCaptureInputWaveformDataSource : RCWaveformDataSource <AVCaptureAudioDataOutputSampleBufferDelegate> {

	char _overdub;
	char _canUpdateCaptureComposition;
	RCMutableComposition* _capturedComposition;
	RCMutableCompositionFragment* _capturedFragment;
	RCComposition* _destinationComposition;
	RCCompositionFragment* _destinationFragment;
	RCWaveform* _baseWaveform;
	NSArray* _captureInitialDecomposedFragments;
	double _updatedCapturedFragmentDuration;
	double _finalCapturedFragmentDuration;
	double _captureInsertionTimeInComposition;
	double _captureInsertionDurationInComposition;

}

@property (nonatomic,readonly) RCComposition * destinationComposition;                       //@synthesize destinationComposition=_destinationComposition - In the implementation block
@property (nonatomic,readonly) RCCompositionFragment * destinationFragment;                  //@synthesize destinationFragment=_destinationFragment - In the implementation block
@property (getter=isOverdub,nonatomic,readonly) char overdub;                                //@synthesize overdub=_overdub - In the implementation block
@property (nonatomic,readonly) RCMutableComposition * capturedComposition;                   //@synthesize capturedComposition=_capturedComposition - In the implementation block
@property (nonatomic,readonly) RCMutableCompositionFragment * capturedFragment;              //@synthesize capturedFragment=_capturedFragment - In the implementation block
@property (nonatomic,readonly) RCWaveform * baseWaveform;                                    //@synthesize baseWaveform=_baseWaveform - In the implementation block
@property (nonatomic,readonly) double updatedCapturedFragmentDuration;                       //@synthesize updatedCapturedFragmentDuration=_updatedCapturedFragmentDuration - In the implementation block
@property (nonatomic,readonly) double finalCapturedFragmentDuration;                         //@synthesize finalCapturedFragmentDuration=_finalCapturedFragmentDuration - In the implementation block
@property (nonatomic,readonly) char canUpdateCaptureComposition;                             //@synthesize canUpdateCaptureComposition=_canUpdateCaptureComposition - In the implementation block
@property (nonatomic,readonly) double captureInsertionTimeInComposition;                     //@synthesize captureInsertionTimeInComposition=_captureInsertionTimeInComposition - In the implementation block
@property (nonatomic,readonly) double captureInsertionDurationInComposition;                 //@synthesize captureInsertionDurationInComposition=_captureInsertionDurationInComposition - In the implementation block
@property (nonatomic,readonly) NSArray * captureInitialDecomposedFragments;                  //@synthesize captureInitialDecomposedFragments=_captureInitialDecomposedFragments - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)waitUntilFinished;
-(double)duration;
-(char)setPaused:(char)arg1 ;
-(void)startLoading;
-(RCMutableCompositionFragment *)capturedFragment;
-(RCMutableComposition *)capturedComposition;
-(char)appendAveragePowerLevelsByDigestingCapturedSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)flushPendingCapturedSampleBuffers;
-(void)finishLoadingWithCompletionTimeoutDate:(id)arg1 finalizedFragmentDuration:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)undoCapture;
-(void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2 ;
-(void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1 ;
-(SCD_Struct_RC4)timeRangeToHighlight;
-(id)waveformSegmentsInTimeRange:(SCD_Struct_RC4)arg1 ;
-(RCCompositionFragment *)destinationFragment;
-(id)initWithDestinationComposition:(id)arg1 destinationFragment:(id)arg2 isOverdub:(char)arg3 ;
-(void)_initializeCaptureComposition;
-(void)_updateCapturedComposition:(char)arg1 ;
-(void)_captureSesionCompletedWithFinalizedDuration:(double)arg1 ;
-(id)_captureSegmentsInComponentWaveform:(id)arg1 captureTimeRange:(SCD_Struct_RC4)arg2 componentWaveformSegmentOffset:(double)arg3 ;
-(double)_fragmentDuration;
-(void)_modifyAccumulatedWaveformSegmentsToMatchFinalDuration:(double)arg1 ;
-(void)_extendAccumulatedWaveformSegmentsToMatchFinalDuration:(double)arg1 ;
-(void)_truncateAccumulatedWaveformSegmentsToEndTime:(double)arg1 ;
-(char)waitUntilFinishedWithFinalizedDestinationFragmentDuration:(double)arg1 ;
-(void)appendAveragePowerLevelsByDigestingWaveformSegment:(id)arg1 ;
-(RCComposition *)destinationComposition;
-(char)isOverdub;
-(RCWaveform *)baseWaveform;
-(double)updatedCapturedFragmentDuration;
-(double)finalCapturedFragmentDuration;
-(char)canUpdateCaptureComposition;
-(double)captureInsertionTimeInComposition;
-(double)captureInsertionDurationInComposition;
-(NSArray *)captureInitialDecomposedFragments;
@end

