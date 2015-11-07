/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>
#import <libobjc.A.dylib/BWBracketSettingsProvider.h>

@class NSDictionary, NSArray, FigCaptureStillImageSettings, NSString;

@interface BWSISNode : BWNode <BWBracketSettingsProvider> {

	/*function pointer*/void* _createSampleBufferProcessorFunction;
	OpaqueFigSampleBufferProcessorRef _sampleBufferProcessor;
	NSDictionary* _cameraTuningDictionary;
	NSDictionary* _sensorIDDictionary;
	NSDictionary* _noiseModelParamsDictionary;
	NSDictionary* _fusionParamsDictionary;
	int _fusionScheme;
	char _allowExperimentalOverrides;
	int _lensShadingCorrectionMode;
	double _integrationTimeThreshold;
	int _maxIntegrationTimeLimitMsec;
	float _bracketGainCap;
	NSArray* _exposureValues;
	NSArray* _afWindowParamsArray;
	int _sisBracketCount;
	NSArray* _oisExposureDurationTypes;
	int _oisBracketCount;
	FigCaptureStillImageSettings* _currentCaptureSettings;
	char _preBracketedFrameReceived;
	int _numberFramesReceived;
	int _lastFusionTypeUsed;

}

@property (nonatomic,readonly) double integrationTimeThreshold; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(id)nodeType;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)_clearCaptureRequestState;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(long)_setupSampleBufferProcessor;
-(int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1 ;
-(int)bracketCountForBracketingMode:(int)arg1 withCurrentFrameStats:(SCD_Struct_BW15*)arg2 stillImageSettings:(id)arg3 ;
-(id)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(SCD_Struct_BW15*)arg2 stillImageSettings:(id)arg3 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setAttachBracketToOutputSampleBuffer:(char)arg1 ;
-(char)attachBracketToOutputSampleBuffer;
-(id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 fusionScheme:(int)arg3 ;
-(double)integrationTimeThreshold;
-(id)_initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2 fusionScheme:(int)arg3 allowExperimentalOverrides:(char)arg4 ;
-(long)_unpackSISOptions;
-(id)_sisBracketSettingsWithCurrentFrameStats:(SCD_Struct_BW15*)arg1 stillImageSettings:(id)arg2 ;
-(id)_oisBracketSettingsWithCurrentFrameStats:(SCD_Struct_BW15*)arg1 stillImageSettings:(id)arg2 ;
-(void)_sampleBufferProcessorOutputReady:(long)arg1 sampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
@end

