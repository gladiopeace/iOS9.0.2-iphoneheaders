/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AXSettingsVoiceAssetManagerDelegate;
@class NSMutableDictionary;

@interface AXSettingsVoiceAssetManager : NSObject {

	NSMutableDictionary* _assets;
	id<AXSettingsVoiceAssetManagerDelegate> _delegate;

}

@property (assign,nonatomic) id<AXSettingsVoiceAssetManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_mobileAssetDownloadOptions;
-(void)requestVoiceLanguageDownloadProgress:(id)arg1 ;
-(void)requestVoiceAlternateVoiceDownloadProgress:(id)arg1 ;
-(void)startDownloadingAlternateVoice:(id)arg1 ;
-(void)startDownloading:(id)arg1 ;
-(void)clientUpdateAvailableSpeechAssets;
-(void)deleteDownloadAlternateVoice:(id)arg1 ;
-(void)stopDownloading:(id)arg1 ;
-(void)_startDownloadingAlternateVoice:(id)arg1 ;
-(id)_assetForVoiceId:(id)arg1 forDeletion:(char)arg2 ;
-(void)_handleAssetProgress:(id)arg1 error:(id)arg2 voiceId:(id)arg3 diskSize:(long long)arg4 asset:(id)arg5 ;
-(void)_requestVoiceAlternateVoiceDownloadProgress:(id)arg1 ;
-(void)requestVoiceLanguageIsCompact:(id)arg1 ;
-(void)requestVoiceLanguageIsDownloading:(id)arg1 ;
-(void)requestVoiceLanguageLanguageDownloadInProgress;
-(void)stopDownloadingAlternateVoice:(id)arg1 ;
-(void)requestVoiceLanguageIsDownloadingPaused:(id)arg1 ;
-(void)setDelegate:(id<AXSettingsVoiceAssetManagerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<AXSettingsVoiceAssetManagerDelegate>)delegate;
-(id)_speechAssetUpdaterClient;
-(void)deleteDownload:(id)arg1 ;
@end

