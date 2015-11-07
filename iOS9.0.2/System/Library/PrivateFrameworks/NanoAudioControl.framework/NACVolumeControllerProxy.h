/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NACVolumeController.h>

@protocol OS_dispatch_source, NACVolumeControllerDelegate;
@class NACEventThrottler, NSObject, NSString, NACXPCClient, NSNumber;

@interface NACVolumeControllerProxy : NSObject <NACVolumeController> {

	NACEventThrottler* _volumeThrottler;
	NACEventThrottler* _hapticThrottler;
	NSObject*<OS_dispatch_source> _setVolumeTimer;
	NSObject*<OS_dispatch_source> _setHapticTimer;
	NSString* _category;
	NACXPCClient* _xpcClient;
	char _isObserving;
	float _lastReceivedVolumeValue;
	float _lastRecievedHapticIntensity;
	NSNumber* _volumeValue;
	NSNumber* _hapticIntensity;
	char _volumeControlAvailable;
	char _volumeWarningEnabled;
	char _muted;
	char _systemMuted;
	id<NACVolumeControllerDelegate> _delegate;
	float _EUVolumeLimit;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NACVolumeControllerDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (getter=isVolumeControlAvailable,nonatomic,readonly) char volumeControlAvailable;              //@synthesize volumeControlAvailable=_volumeControlAvailable - In the implementation block
@property (getter=isVolumeWarningEnabled,nonatomic,readonly) char volumeWarningEnabled;                  //@synthesize volumeWarningEnabled=_volumeWarningEnabled - In the implementation block
@property (getter=isMuted,nonatomic,readonly) char muted;                                                //@synthesize muted=_muted - In the implementation block
@property (nonatomic,readonly) float volumeValue; 
@property (nonatomic,readonly) float EUVolumeLimit;                                                      //@synthesize EUVolumeLimit=_EUVolumeLimit - In the implementation block
@property (assign,nonatomic) float hapticIntensity; 
@property (assign,getter=isSystemMuted,nonatomic) char systemMuted;                                      //@synthesize systemMuted=_systemMuted - In the implementation block
-(void)setVolumeValue:(float)arg1 ;
-(void)setMuted:(char)arg1 ;
-(float)EUVolumeLimit;
-(id)initWithAudioCategory:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(float)volumeValue;
-(void)setDelegate:(id<NACVolumeControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<NACVolumeControllerDelegate>)delegate;
-(void)beginObservingVolume;
-(void)endObservingVolume;
-(void)setHapticIntensity:(float)arg1 ;
-(void)setSystemMuted:(char)arg1 ;
-(char)isVolumeControlAvailable;
-(char)isVolumeWarningEnabled;
-(void)_setVolumeValue:(id)arg1 ;
-(void)_setHapticIntensity:(id)arg1 ;
-(void)_volumeControlAvailabilityDidChange;
-(void)_volumeValueDidChange;
-(void)_mutedStateDidChange;
-(void)_systemMutedStateDidChange;
-(void)_hapticIntensityDidChange;
-(void)_volumeWarningDidChange;
-(void)_EUVolumeLimitDidChange;
-(void)_cancelSetVolumeTimer;
-(void)_volumeTimout;
-(id)_scheduleTimeoutWithBlock:(/*^block*/id)arg1 ;
-(void)_notifyDelegateVolumeChanged;
-(void)_hapticTimeout;
-(void)_notifyDelegateHapticChanged;
-(void)_cancelSetHapticTimer;
-(void)_notifyDelegateSystemMutedStateChanged;
-(void)setVolumeValue:(float)arg1 muted:(char)arg2 overrideEULimit:(char)arg3 ;
-(float)hapticIntensity;
-(char)isSystemMuted;
-(char)isMuted;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
@end

