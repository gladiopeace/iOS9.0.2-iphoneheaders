/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {

	AVAssetReaderTrackOutputInternal* _trackOutputInternal;

}

@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (assign,nonatomic) char appliesPreferredTrackTransform; 
@property (getter=_isAttachedToMetadataAdaptor,nonatomic,readonly) char attachedToMetadataAdaptor; 
+(id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(char)appliesPreferredTrackTransform;
-(char)_isAttachedToMetadataAdaptor;
-(void)_attachToMetadataAdaptor:(id)arg1 ;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferForMetadataAdaptor;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(char)_trimsSampleDurations;
-(char)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(AVAssetTrack *)track;
-(id)initWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)mediaType;
-(id)_asset;
-(void)setAppliesPreferredTrackTransform:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(NSDictionary *)outputSettings;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(void)finalize;
@end

