/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray, NSTimer;

@interface TLAlert : NSObject {

	char _shouldOverrideMasterSwitches;
	char _repeatedlyPlaying;
	int _type;
	NSString* _accountIdentifier;
	NSString* _toneIdentifier;
	NSString* _vibrationIdentifier;
	NSArray* _alertCompletions;
	NSTimer* _completionFallbackTimer;
	long long _instanceIndex;

}

@property (assign,nonatomic) int type;                                                                                       //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                                                                     //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,copy) NSString * toneIdentifier;                                                                        //@synthesize toneIdentifier=_toneIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vibrationIdentifier;                                                                   //@synthesize vibrationIdentifier=_vibrationIdentifier - In the implementation block
@property (setter=_setAlertCompletions:,nonatomic,copy) NSArray * _alertCompletions;                                         //@synthesize alertCompletions=_alertCompletions - In the implementation block
@property (setter=_setCompletionFallbackTimer:,nonatomic,retain) NSTimer * _completionFallbackTimer;                         //@synthesize completionFallbackTimer=_completionFallbackTimer - In the implementation block
@property (assign,setter=_setRepeatedlyPlaying:,getter=_isRepeatedlyPlaying,nonatomic) char _repeatedlyPlaying;              //@synthesize repeatedlyPlaying=_repeatedlyPlaying - In the implementation block
@property (assign,setter=_setShouldOverrideMasterSwitches:,nonatomic) char _shouldOverrideMasterSwitches;                    //@synthesize shouldOverrideMasterSwitches=_shouldOverrideMasterSwitches - In the implementation block
@property (assign,setter=_setInstanceIndex:,nonatomic) long long _instanceIndex;                                             //@synthesize instanceIndex=_instanceIndex - In the implementation block
+(void)_playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(char)arg4 ;
+(void)playToneAndVibrationForType:(int)arg1 ;
+(void)playToneAndVibrationForType:(int)arg1 accountIdentifier:(id)arg2 ;
+(void)playToneAndVibrationForType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ;
+(char)_watchPrefersSalientToneAndVibration;
+(void)_setWatchPrefersSalientToneAndVibration:(char)arg1 ;
-(id)initWithType:(int)arg1 accountIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(int)type;
-(void)_setType:(int)arg1 ;
-(void)stop;
-(id)initWithType:(int)arg1 ;
-(NSString *)toneIdentifier;
-(NSString *)vibrationIdentifier;
-(id)initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 ;
-(char)playWithCompletionHandler:(/*^block*/id)arg1 targetQueue:(id)arg2 ;
-(NSString *)accountIdentifier;
-(id)_initWithType:(int)arg1 toneIdentifier:(id)arg2 vibrationIdentifier:(id)arg3 shouldOverrideMasterSwitches:(char)arg4 ;
-(void)_setAccountIdentifier:(id)arg1 ;
-(void)_setInstanceIndex:(long long)arg1 ;
-(void)_setToneIdentifier:(id)arg1 ;
-(void)_setVibrationIdentifier:(id)arg1 ;
-(void)_setShouldOverrideMasterSwitches:(char)arg1 ;
-(void)_setAlertCompletions:(id)arg1 ;
-(void)_setCompletionFallbackTimer:(id)arg1 ;
-(void)stopWithFadeOutDuration:(double)arg1 ;
-(long long)_instanceIndex;
-(void)startPlayingRepeatedly;
-(void)stopPlayingRepeatedlyWithOptions:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 targetQueue:(id)arg3 ;
-(char)_shouldOverrideMasterSwitches;
-(NSArray *)_alertCompletions;
-(NSTimer *)_completionFallbackTimer;
-(char)_isRepeatedlyPlaying;
-(void)_setRepeatedlyPlaying:(char)arg1 ;
@end

