/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/Endpointer.h>

@protocol AFAudioAnalyzerDelegate;
@class NSMutableData, NSDictionary, NSString;

@interface AFAudioAnalyzer : NSObject <Endpointer> {

	char _detectedStartPoint;
	char _communicatedStartPointDetection;
	char _detectedEndpoint;
	char _communicatedEndpointDetection;
	double _sampleRate;
	double _samplesSeen;
	unsigned long _frameRate;
	double _lastEndOfVoiceActivityTime;
	NSMutableData* _floatSampleBuffer;
	NSDictionary* _topLevelParameterDict;
	NSString* _modelDictPath;
	OpaqueAudioComponentInstanceRef _audioUnitEPVAD2;
	char _isConfigured;
	char _saveSampleSeenInReset;
	double _previousSamplesSeen;
	int _endpointMode;
	int _style;
	id<AFAudioAnalyzerDelegate> _delegate;
	double _startWaitTime;
	double _interspeechWaitTime;
	double _endWaitTime;
	double _automaticEndpointingSuspensionEndTime;

}

@property (assign,nonatomic) int style;                                                 //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) double lastEndOfVoiceActivityTime;                       //@synthesize lastEndOfVoiceActivityTime=_lastEndOfVoiceActivityTime - In the implementation block
@property (assign,nonatomic) double automaticEndpointingSuspensionEndTime;              //@synthesize automaticEndpointingSuspensionEndTime=_automaticEndpointingSuspensionEndTime - In the implementation block
@property (assign,nonatomic,__weak) id<AFAudioAnalyzerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) int endpointMode;                                                    //@synthesize endpointMode=_endpointMode - In the implementation block
@property (assign) double startWaitTime;                                                //@synthesize startWaitTime=_startWaitTime - In the implementation block
@property (assign) double interspeechWaitTime;                                          //@synthesize interspeechWaitTime=_interspeechWaitTime - In the implementation block
@property (assign) double endWaitTime;                                                  //@synthesize endWaitTime=_endWaitTime - In the implementation block
-(void)setDelegate:(id<AFAudioAnalyzerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AFAudioAnalyzerDelegate>)delegate;
-(void)reset;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)preheat;
-(void)_configureWithSampleRate:(double)arg1 andFrameRate:(unsigned long)arg2 ;
-(void)_detectVoiceActivityInSamples:(float*)arg1 numSamples:(unsigned long)arg2 ;
-(void)saveSamplesSeenOnNextReset;
-(void)setAutomaticEndpointingSuspensionEndTime:(double)arg1 ;
-(double)lastEndOfVoiceActivityTime;
-(double)automaticEndpointingSuspensionEndTime;
-(char)configureWithASBD:(AudioStreamBasicDescription*)arg1 andFrameRate:(unsigned long)arg2 ;
-(int)getStatus:(AudioQueueBuffer*)arg1 ;
-(int)endpointMode;
-(void)setEndpointMode:(int)arg1 ;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1 ;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1 ;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1 ;
@end

