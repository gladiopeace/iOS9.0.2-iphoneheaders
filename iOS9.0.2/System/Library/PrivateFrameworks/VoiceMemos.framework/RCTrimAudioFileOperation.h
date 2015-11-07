/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <VoiceMemos/RCTrimTimeRangeOperation.h>

@class RCCompositionComposedAssetWriter, NSError, NSURL;

@interface RCTrimAudioFileOperation : RCTrimTimeRangeOperation {

	RCCompositionComposedAssetWriter* _assetWriter;
	char _success;
	char _createWaveform;
	NSError* _error;
	NSURL* _sourceURL;
	NSURL* _destinationURL;
	double _exportedDuration;

}

@property (nonatomic,copy,readonly) NSURL * sourceURL;                   //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * destinationURL;              //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) char createWaveform;                      //@synthesize createWaveform=_createWaveform - In the implementation block
+(id)exportableAudioFormatPathExtensionWithSourceURL:(id)arg1 ;
-(NSURL *)destinationURL;
-(id)error;
-(void)cancel;
-(double)progress;
-(void)main;
-(NSURL *)sourceURL;
-(char)success;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 createWaveform:(char)arg3 timeRange:(SCD_Struct_RC4)arg4 trimMode:(int)arg5 ;
-(double)exportedDuration;
-(char)createWaveform;
@end

