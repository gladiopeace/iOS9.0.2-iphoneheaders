/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <VoiceTrigger/VoiceTrigger-Structs.h>
@class NSArray, NSString, AudioCircularBuffer, NSDateFormatter, NSObject;

@interface VTPhraseSpotter : NSObject {

	double _hardwareSampleRate;
	void* _ndetect;
	NSArray* _triggerPhrases;
	/*^block*/id _readyCompletion;
	/*^block*/id _readyForAnalyze;
	int _firstUnlockAfterRebootNotificationToken;
	char _isMaximized;
	int _numFramesFromPreTrigger;
	double _threshold;
	double _thresholdSecondChance;
	double _effectiveThreshold;
	char _audioLoggingEnabled;
	double _thresholdLogNearMisses;
	NSString* _audioFileDir;
	char _secondPassAudioLoggingEnabled;
	NSString* _languageCode;
	NSString* _configPath;
	NSString* _configData;
	NSString* _configLanguageCode;
	NSString* _configVersion;
	NSString* _resourcePath;
	double _triggerThreshold;
	unsigned _extraSamplesAtStart;
	char _isRunningSATEnrollment;
	char _isRunningSATDetection;
	double _thresholdSAT;
	NSString* _satAudioDirectory;
	NSString* _satModelDirectory;
	char _implicitlyTrained;
	AudioCircularBuffer* _audioBuffer;
	NSDateFormatter* _formatter;
	char _doSuperVectorSecondaryTest;
	double _thresholdPreSuperVector;
	char _isSuperVectorNeeded;
	unsigned _samplecount;
	unsigned _samplecountAtLastTriggerStart;
	unsigned _samplecountAtLastTriggerEnd;
	unsigned _sampleCountAtFirstChance;
	unsigned _lastEventEnd;
	int _nearMissLogPreDelayTimer;
	char _firstChanceDetected;
	double _firstChanceDetectionTime;
	char _isSecondChanceEffective;
	double _lastUptime;
	double _lastDowntime;
	double _lastScore;
	char _earlyDetected;
	double _earlyDetectTime;
	NSObject*<OS_dispatch_queue> _loggingQueue;
	NSObject*<OS_dispatch_queue> _ndetectQueue;
	int _heartbeatCounter;
	int _languageCodeChangedNotificationToken;
	NSObject*<OS_dispatch_queue> _assetChangedQueue;
	char _registeredForPhraseSpotterNotification;
	char _phraseSpotterEnabled;
	char _registeredforVoiceTriggerEnabledNotification;
	char _voiceTriggerEnabled;
	char _isSecondPass;
	int _secondPassResetTimer;
	char _secondPassAccepted;
	double _secondPassBestScore;
	char _didWakeAP;
	char _secondPassTriggered;
	/*^block*/id _assetChangedCallback;
	unsigned long long _samplerate;

}

@property (readonly) unsigned long long samplerate;                               //@synthesize samplerate=_samplerate - In the implementation block
@property (readonly) unsigned long long sampleCount; 
@property (readonly) unsigned long long sampleCountAtStartOfTrigger; 
@property (readonly) unsigned long long sampleCountAtEndOfTrigger; 
@property (readonly) double lastScore;                                            //@synthesize lastScore=_lastScore - In the implementation block
+(void)initialize;
-(unsigned long long)getAdjustedDeviceStartTime:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)sampleCount;
-(void)_commonInit;
-(void)_listenForFirstUnlockAfterReboot;
-(void)_unlistenForFirstUnlockAfterReboot;
-(id)initWithHardwareSampleRate:(double)arg1 ;
-(void)notifyAssetChangeWithCallback:(/*^block*/id)arg1 ;
-(id)getCorealisRTModel;
-(id)initWithHardwareSampleRate:(double)arg1 readyCompletion:(/*^block*/id)arg2 ;
-(void)_initDetector;
-(char)_configureWithDefaults;
-(void)_performReadyCompletion;
-(char)_configureWithConfig:(id)arg1 resourcePath:(id)arg2 ;
-(void)_resetCounters;
-(unsigned long long)_applyExtraTimeTo:(unsigned long long)arg1 ;
-(void)_listenForLanguageCodeUpdates;
-(void)_assetsAvailable:(id)arg1 ;
-(void)_handleAssetChangeForLanguageCode:(id)arg1 ;
-(void)_unlistenForLanguageCodeUpdates;
-(void)_safeReconfig;
-(id)_analyzeEvents:(const ndresult*)arg1 ;
-(id)_analyzeMakeResult:(const ndresult*)arg1 eventKind:(unsigned char)arg2 satScore:(double)arg3 ;
-(void)_logMetaData:(id)arg1 ;
-(void)_analyzeReset;
-(void)_recordTrainingSamples;
-(id)_handleTriggerEvent:(const ndresult*)arg1 num_new_samples:(unsigned)arg2 satScore:(double)arg3 ;
-(id)_capturePath:(unsigned char)arg1 ;
-(id)_getAssetHashFromConfigPath:(id)arg1 ;
-(void)_safeConfigureWithNdetect:(void*)arg1 path:(id)arg2 data:(id)arg3 resourcePath:(id)arg4 ;
-(double)_floatValFromNdetect:(void*)arg1 withName:(const char*)arg2 defaultTo:(double)arg3 ;
-(char)_boolValFromNdetect:(void*)arg1 withName:(const char*)arg2 defaultTo:(char)arg3 ;
-(id)_getSpeakerModelPath:(id)arg1 createDirectory:(char)arg2 ;
-(char)_removeInvalidSATModel;
-(char)_retrainingSATModel:(void*)arg1 satAudioPath:(id)arg2 ;
-(id)initWithConfig:(id)arg1 resourcePath:(id)arg2 ;
-(void)_phraseSpotterEnabledDidChange;
-(void)_voiceTriggerEnabledDidChange;
-(id)getLanguageCode;
-(void)audioRecordingForSiriStatusChanged:(char)arg1 ;
-(id)getSATDirectory;
-(void)_languageCodeChanged;
-(unsigned long long)samplerate;
-(id)initWithLanguageCodeForSATEnrollment:(id)arg1 ;
-(void)prepareWithProperty:(id)arg1 readyCompletion:(/*^block*/id)arg2 ;
-(id)analyze:(AudioBuffer*)arg1 ;
-(unsigned long long)sampleCountAtStartOfTrigger;
-(unsigned long long)sampleCountAtEndOfTrigger;
-(double)lastScore;
@end

