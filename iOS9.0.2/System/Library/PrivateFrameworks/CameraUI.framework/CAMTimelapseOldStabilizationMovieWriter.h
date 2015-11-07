/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <libobjc.A.dylib/AVOfflineVideoStabilizerDataProvider.h>
#import <libobjc.A.dylib/CAMTimelapseMovieWriterProtocol.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, AVOfflineVideoStabilizer, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSString;

@interface CAMTimelapseOldStabilizationMovieWriter : NSObject <AVOfflineVideoStabilizerDataProvider, CAMTimelapseMovieWriterProtocol> {

	char _suspended;
	NSArray* __frameFilePaths;
	NSArray* __visMetadataFilePaths;
	NSObject*<OS_dispatch_queue> __movieWritingQueue;
	AVOfflineVideoStabilizer* __stabilizer;
	AVAssetWriter* __writer;
	AVAssetWriterInput* __videoInput;
	AVAssetWriterInputPixelBufferAdaptor* __pixelBufferAdaptor;
	int __framesPerSecond;
	int __sourceFramesReadCount;
	int __framesWrittenCount;
	CVBufferRef __firstSourceFrame;
	opaqueCMFormatDescriptionRef __videoFormatDescription;
	/*^block*/id __completion;

}

@property (nonatomic,readonly) NSArray * _frameFilePaths;                                               //@synthesize _frameFilePaths=__frameFilePaths - In the implementation block
@property (nonatomic,readonly) NSArray * _visMetadataFilePaths;                                         //@synthesize _visMetadataFilePaths=__visMetadataFilePaths - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _movieWritingQueue;                         //@synthesize _movieWritingQueue=__movieWritingQueue - In the implementation block
@property (nonatomic,readonly) AVOfflineVideoStabilizer * _stabilizer;                                  //@synthesize _stabilizer=__stabilizer - In the implementation block
@property (nonatomic,readonly) AVAssetWriter * _writer;                                                 //@synthesize _writer=__writer - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInput * _videoInput;                                        //@synthesize _videoInput=__videoInput - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInputPixelBufferAdaptor * _pixelBufferAdaptor;              //@synthesize _pixelBufferAdaptor=__pixelBufferAdaptor - In the implementation block
@property (nonatomic,readonly) int _framesPerSecond;                                                    //@synthesize _framesPerSecond=__framesPerSecond - In the implementation block
@property (nonatomic,readonly) int _sourceFramesReadCount;                                              //@synthesize _sourceFramesReadCount=__sourceFramesReadCount - In the implementation block
@property (nonatomic,readonly) int _framesWrittenCount;                                                 //@synthesize _framesWrittenCount=__framesWrittenCount - In the implementation block
@property (nonatomic,readonly) CVBufferRef _firstSourceFrame;                                           //@synthesize _firstSourceFrame=__firstSourceFrame - In the implementation block
@property (nonatomic,readonly) opaqueCMFormatDescriptionRef _videoFormatDescription;                    //@synthesize _videoFormatDescription=__videoFormatDescription - In the implementation block
@property (nonatomic,copy,readonly) id _completion;                                                     //@synthesize _completion=__completion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isSuspended,nonatomic) char suspended;                                         //@synthesize suspended=_suspended - In the implementation block
-(char)isSuspended;
-(id)init;
-(void)_reset;
-(void)setSuspended:(char)arg1 ;
-(CVBufferRef)_copySourcePixelBufferForFrameNumber:(int)arg1 ;
-(CGSize)_desiredOutputSizeForFrameSize:(CGSize)arg1 ;
-(char)_startWritingWithOutputPath:(id)arg1 width:(int)arg2 height:(int)arg3 videoFormatDescription:(opaqueCMFormatDescriptionRef)arg4 transform:(CGAffineTransform)arg5 framesPerSecond:(int)arg6 frameCount:(int)arg7 visMetadataCount:(int)arg8 videoMetadata:(id)arg9 ;
-(void)_writeMovieAsynchronously;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferForAssetWriter;
-(char)_appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_finishMovieWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setMetadataOnVideoTrackAssetWriterInput:(id)arg1 ;
-(CVBufferRef)copySourcePixelBufferForFrameNumber:(int)arg1 outputSampleTime:(SCD_Struct_CA2*)arg2 stabilizer:(id)arg3 ;
-(id)copySourceStabilizationMetadataForFrameNumber:(int)arg1 outputSampleTime:(SCD_Struct_CA2*)arg2 stabilizer:(id)arg3 ;
-(void)writeMovieFromImageFiles:(id)arg1 visMetadataFiles:(id)arg2 startDate:(id)arg3 location:(id)arg4 outputPath:(id)arg5 transform:(CGAffineTransform)arg6 framesPerSecond:(int)arg7 completionHandler:(/*^block*/id)arg8 ;
-(NSArray *)_frameFilePaths;
-(NSArray *)_visMetadataFilePaths;
-(NSObject*<OS_dispatch_queue>)_movieWritingQueue;
-(AVOfflineVideoStabilizer *)_stabilizer;
-(AVAssetWriter *)_writer;
-(AVAssetWriterInput *)_videoInput;
-(AVAssetWriterInputPixelBufferAdaptor *)_pixelBufferAdaptor;
-(int)_framesPerSecond;
-(int)_sourceFramesReadCount;
-(int)_framesWrittenCount;
-(CVBufferRef)_firstSourceFrame;
-(opaqueCMFormatDescriptionRef)_videoFormatDescription;
-(id)_completion;
@end

