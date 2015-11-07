/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:05 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWVideoFormat, BWPixelBufferPool;

@interface BWStillImageScalerNode : BWNode {

	BWVideoFormat* _outputFormat;
	opaqueCMFormatDescriptionRef _outputFormatDescription;
	int _poolCapacity;
	BWPixelBufferPool* _pool;
	OpaqueVTPixelTransferSessionRef _scalingSession;
	SCD_Struct_BW12 _nativeOutputDimensions;
	char _defersCropToJPEGEncoderWhenPossible;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id)nodeType;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(id)initWithPoolCapacity:(int)arg1 ;
-(void)_purgeResources;
-(char)_updatePoolWithSettings:(id)arg1 normalizedInputCropRect:(CGRect)arg2 scaledDenormalizedInputCropRectOut:(CGRect*)arg3 ;
-(long)_rebuildBufferPoolWithWidth:(unsigned long)arg1 height:(unsigned long)arg2 ;
-(long)_buildScalingSession;
-(void)setNativeOutputDimensions:(SCD_Struct_BW12)arg1 ;
-(SCD_Struct_BW12)nativeOutputDimensions;
-(void)setDefersCropToJPEGEncoderWhenPossible:(char)arg1 ;
-(char)defersCropToJPEGEncoderWhenPossible;
@end
