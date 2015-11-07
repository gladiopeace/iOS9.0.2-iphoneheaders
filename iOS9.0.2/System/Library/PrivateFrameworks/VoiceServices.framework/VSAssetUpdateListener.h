/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:39 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject {

	char _isListening;
	PCPersistentTimer* _assetCleanupTimer;

}
+(id)sharedListener;
-(id)_initShared;
-(void)dealloc;
-(id)init;
-(void)startListening;
-(void)stopListening;
-(void)_spokenLanguageChanged:(id)arg1 ;
-(void)_cleanupAssets;
-(void)_scheduleNextCleanupForDate:(id)arg1 ;
-(void)_rescheduleAssetCleanup;
-(void)_flushLanguageChanges;
-(void)_cancelAssetCleanupTimer;
-(void)_updateNextCleanupDate;
-(void)downloadAssetForLanguage:(id)arg1 ;
-(id)downloadingAssetLanguage;
-(int)assetStatusForLanguage:(id)arg1 ;
-(char)assetDownloadStatus:(id)arg1 progress:(float*)arg2 size:(long long*)arg3 ;
-(void)removeAssetForLanguage:(id)arg1 ;
@end

