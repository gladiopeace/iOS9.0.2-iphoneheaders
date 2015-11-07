/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputWritingHelper, AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper {

	AVAssetWriterInputWritingHelper* _writingHelper;
	AVAssetWriterInputPassDescription* _initialPassDescription;

}
-(id)initWithConfigurationState:(id)arg1 ;
-(char)canPerformMultiplePasses;
-(id)currentPassDescription;
-(char)shouldRespondToInitialPassDescription;
-(int)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(void)markCurrentPassAsFinished;
-(id)initWithWritingHelper:(id)arg1 ;
-(void)startPassAnalysis;
-(void)dealloc;
-(int)status;
-(char)isReadyForMoreMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(void)markAsFinished;
-(char)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_CM5)arg2 ;
@end

