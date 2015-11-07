/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AFPreferences : NSObject {

	char _registeredForInternalPrefs;
	char _registeredForLanguageCode;
	char _registeredForOutputVoice;
	NSObject*<OS_dispatch_queue> _navTokenQueue;
	char _navTokenIsValid;
	int _navToken;

}
+(id)sharedPreferences;
-(void)dealloc;
-(id)init;
-(void)synchronize;
-(char)ignoreServerManualEndpointingThreshold;
-(id)manualEndpointingThreshold;
-(char)dictationIsEnabled;
-(id)languageCode;
-(char)assistantIsEnabled;
-(void)getOfflineDictationStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)_registerForInteralPrefs;
-(void)_registerForLanguageCode;
-(id)_localeMappedLanguageFor:(id)arg1 ;
-(id)bestSupportedLanguageCodeForLanguageCode:(id)arg1 ;
-(void)_registerForOutputVoice;
-(void)_registerForNavStatusIfNeeded;
-(void)_setLoggingDefaultValue:(id)arg1 forKey:(id)arg2 ;
-(int)handsFreeMode;
-(void)setHandsFreeMode:(int)arg1 ;
-(char)respectsSystemMute;
-(void)setRespectsSystemMute:(char)arg1 ;
-(void)_preferencesDidChangeExternally;
-(void)_internalPreferencesDidChangeExternally;
-(void)_languageCodeDidChangeExternally;
-(void)_ouputVoiceDidChangeExternally;
-(char)offlineDictationOverride;
-(void)setOfflineDictationOverride:(char)arg1 ;
-(void)_setAssistantIsEnabledLocal:(char)arg1 ;
-(void)_setDictationIsEnabledLocal:(char)arg1 ;
-(void)setAssistantIsEnabled:(char)arg1 ;
-(void)setDictationIsEnabled:(char)arg1 ;
-(int)bugReportingMode;
-(void)setBugReportingMode:(int)arg1 ;
-(void)setDebugButtonIsEnabled:(char)arg1 ;
-(void)setShowsHoldToTalkIndicator:(char)arg1 ;
-(void)setIgnoreServerManualEndpointingThreshold:(char)arg1 ;
-(void)setManualEndpointingThreshold:(id)arg1 ;
-(void)setStreamingDictationEnabled:(char)arg1 ;
-(int)useDeviceSpeakerForTTS;
-(void)setUseDeviceSpeakerForTTS:(int)arg1 ;
-(id)valueForSessionContextPreferenceKey:(id)arg1 ;
-(void)setValue:(id)arg1 forSessionContextKey:(id)arg2 ;
-(void)setFileLoggingIsEnabled:(char)arg1 ;
-(char)fileLoggingIsEnabled;
-(char)debugButtonIsEnabled;
-(char)showsHoldToTalkIndicator;
-(id)outputVoice;
-(void)setOutputVoice:(id)arg1 ;
-(void)synchronizeVoiceServicesLanguageCode;
-(char)streamingDictationEnabled;
-(void)setLanguageCode:(id)arg1 ;
-(char)disableAssistantWhilePasscodeLocked;
-(void)setDisableAssistantWhilePasscodeLocked:(char)arg1 ;
@end

