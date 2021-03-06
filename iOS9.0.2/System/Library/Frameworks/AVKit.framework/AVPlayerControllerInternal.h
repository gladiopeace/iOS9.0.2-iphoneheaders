/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVPlayerController.h>

@protocol AVPlayerLayer, OS_dispatch_queue, OS_dispatch_source;
@class CALayer, NSArray, NSObject, AVPlayer, AVValueTiming, NSDictionary;

@interface AVPlayerControllerInternal : AVPlayerController {

	unsigned _jKeyDown : 1;
	unsigned _kKeyDown : 1;
	unsigned _lKeyDown : 1;
	CALayer*<AVPlayerLayer> _playerLayer;
	id _deviceBatteryStateDidChangeObserver;
	unsigned _deviceBatteryMonitoringWasEnabled : 1;
	unsigned _deviceBatteryChargingOrFull : 1;
	unsigned _playingOnSecondScreen : 1;
	NSArray* _audioMediaSelectionOptions;
	NSArray* _legibleMediaSelectionOptions;
	SCD_Struct_AV8 _seekToTime;
	id _timeObserverToken;
	id _playerItemTimeJumpedObserver;
	id _playerItemDidPlayToEndTimeObserver;
	id _audioSessionInterruptionObserver;
	unsigned _audioSessionInterrupted : 1;
	unsigned _pictureInPictureInterrupted : 1;
	float _rateBeforeInterruption;
	unsigned _isPictureInPictureSupported : 1;
	char _looping;
	int _actionAtItemEnd;
	NSObject*<OS_dispatch_queue> _seekQueue;
	char _isSeeking;
	char _pendingSeek;
	SCD_Struct_AV8 _toleranceBefore;
	SCD_Struct_AV8 _toleranceAfter;
	char _playbackSuspended;
	char _isScanningForward;
	char _isScanningBackward;
	unsigned _scanningCount;
	double _preScanningRate;
	unsigned _shouldPlayWhenLikelyToKeepUp : 1;
	float _rate;
	char _isResumed;
	NSObject*<OS_dispatch_source> _seekTimer;
	double _timeOfLastUpdate;
	char _forceScanning;
	double _rateBeforeForceScanning;
	char _scrubbing;
	char _atMaxTime;
	char _atMinTime;
	char _composable;
	char _hasProtectedContent;
	char _compatibleWithAirPlayVideo;
	char _preventingIdleSystemSleep;
	char _preventingIdleDisplaySleep;
	char _disablingAutomaticTermination;
	AVPlayer* _player;
	AVValueTiming* _timing;
	NSDictionary* _metadata;
	NSArray* _contentChapters;
	NSArray* _availableMetadataFormats;
	double _rateBeforeScrubBegan;

}

@property (assign,getter=isScrubbing,nonatomic) char scrubbing;                                                      //@synthesize scrubbing=_scrubbing - In the implementation block
@property (assign,getter=isAtMaxTime,nonatomic) char atMaxTime;                                                      //@synthesize atMaxTime=_atMaxTime - In the implementation block
@property (assign,getter=isAtMinTime,nonatomic) char atMinTime;                                                      //@synthesize atMinTime=_atMinTime - In the implementation block
@property (assign,getter=isDeviceBatteryChargingOrFull,nonatomic) char deviceBatteryChargingOrFull; 
@property (nonatomic,readonly) char shouldPreventIdleDisplaySleep; 
@property (nonatomic,retain) AVPlayer * player;                                                                      //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) AVValueTiming * timing;                                                                 //@synthesize timing=_timing - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                                                                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSArray * contentChapters;                                                              //@synthesize contentChapters=_contentChapters - In the implementation block
@property (assign,getter=isComposable,nonatomic) char composable;                                                    //@synthesize composable=_composable - In the implementation block
@property (assign,nonatomic) char hasProtectedContent;                                                               //@synthesize hasProtectedContent=_hasProtectedContent - In the implementation block
@property (nonatomic,retain) NSArray * availableMetadataFormats;                                                     //@synthesize availableMetadataFormats=_availableMetadataFormats - In the implementation block
@property (assign,getter=isCompatibleWithAirPlayVideo,nonatomic) char compatibleWithAirPlayVideo;                    //@synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo - In the implementation block
@property (assign,nonatomic) double rateBeforeScrubBegan;                                                            //@synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan - In the implementation block
@property (assign,getter=isPreventingIdleSystemSleep,nonatomic) char preventingIdleSystemSleep;                      //@synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep - In the implementation block
@property (assign,getter=isPreventingIdleDisplaySleep,nonatomic) char preventingIdleDisplaySleep;                    //@synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep - In the implementation block
@property (assign,getter=isDisablingAutomaticTermination,nonatomic) char disablingAutomaticTermination;              //@synthesize disablingAutomaticTermination=_disablingAutomaticTermination - In the implementation block
+(id)keyPathsForValuesAffectingRate;
+(id)keyPathsForValuesAffectingVolume;
+(id)keyPathsForValuesAffectingPictureInPicturePossible;
+(id)keyPathsForValuesAffectingCanSeekChapterBackward;
+(id)keyPathsForValuesAffectingCanTogglePlayback;
+(id)keyPathsForValuesAffectingHasContent;
+(id)keyPathsForValuesAffectingAllowsExternalPlayback;
+(id)keyPathsForValuesAffectingCanSeekFrameForward;
+(id)keyPathsForValuesAffectingCanPlay;
+(id)keyPathsForValuesAffectingCanSeekChapterForward;
+(id)keyPathsForValuesAffectingCanSeekFrameBackward;
+(id)keyPathsForValuesAffectingCanPause;
+(id)keyPathsForValuesAffectingSeekableTimeRanges;
+(id)keyPathsForValuesAffectingCanScanBackward;
+(id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+(id)keyPathsForValuesAffectingHasShareableContent;
+(id)keyPathsForValuesAffectingError;
+(id)keyPathsForValuesAffectingCanSeek;
+(id)keyPathsForValuesAffectingHasContentChapters;
+(id)keyPathsForValuesAffectingHasTrimmableContent;
+(id)keyPathsForValuesAffectingLoadedTimeRanges;
+(id)keyPathsForValuesAffectingHasEnabledAudio;
+(id)keyPathsForValuesAffectingHasEnabledVideo;
+(id)keyPathsForValuesAffectingMinTime;
+(id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+(id)keyPathsForValuesAffectingMaxTime;
+(id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+(id)keyPathsForValuesAffectingExternalPlaybackActive;
+(id)keyPathsForValuesAffectingContentDuration;
+(id)keyPathsForValuesAffectingContentDimensions;
+(id)keyPathsForValuesAffectingExternalPlaybackType;
+(id)keyPathsForValuesAffectingStatus;
+(id)keyPathsForValuesAffectingPlaying;
+(id)keyPathsForValuesAffectingHasLiveStreamingContent;
+(id)keyPathsForValuesAffectingCanScanForward;
+(id)keyPathsForValuesAffectingCanSeekToBeginning;
+(id)keyPathsForValuesAffectingCanSeekToEnd;
+(id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+(id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+(id)keyPathsForValuesAffectingPlayingOnExternalScreen;
-(float)preferredRate;
-(NSArray *)availableMetadataFormats;
-(char)isComposable;
-(char)isCompatibleWithAirPlayVideo;
-(char)hasEnabledVideo;
-(char)hasEnabledAudio;
-(id)audioOptions;
-(void)setPlayingOnSecondScreen:(char)arg1 ;
-(id)_localesForOptions:(id)arg1 ;
-(void)_disableLegibleMediaSelectionOptions:(id)arg1 ;
-(id)_extendedLanguageTagsForOptions:(id)arg1 ;
-(id)_mediaSelectionOptionForLocale:(id)arg1 options:(id)arg2 ;
-(id)_mediaSelectionOptionForLocale:(id)arg1 options:(id)arg2 preferAC3:(char)arg3 ;
-(id)_audioOptionsForMediaSelectionOptions:(id)arg1 ;
-(id)_pushSystemLanguageToTop:(id)arg1 ;
-(id)_DVSOptionsForMediaSelectionOptions:(id)arg1 ;
-(id)_subtitlesForOptions:(id)arg1 ;
-(id)legibleOptions;
-(void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2 ;
-(id)_playableMediaSelectionOptionsForMediaCharacteristic:(id)arg1 ;
-(id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1 ;
-(id)_auxiliaryOptionsForMediaSelectionOptions:(id)arg1 ;
-(void)_enableAutoMediaSelection:(id)arg1 ;
-(void)seekByTimeInterval:(double)arg1 ;
-(char)canSeekChapterBackward;
-(char)canSeekChapterForward;
-(void)setCALayerDestinationIsTVOut:(char)arg1 ;
-(char)isPlayingOnSecondScreen;
-(void)autoplay:(id)arg1 ;
-(char)isPreventingIdleSystemSleep;
-(char)hasTrimmableContent;
-(NSArray *)contentChapters;
-(char)hasContentChapters;
-(char)_isMarkedNotSerializablePlayerItem:(id)arg1 ;
-(void)setRateBeforeScrubBegan:(double)arg1 ;
-(void)setPreventingIdleDisplaySleep:(char)arg1 ;
-(void)updateTiming;
-(void)setPreventingIdleSystemSleep:(char)arg1 ;
-(void)seekToChapter:(id)arg1 ;
-(char)isPreventingIdleDisplaySleep;
-(void)setAtMaxTime:(char)arg1 ;
-(char)isDisablingAutomaticTermination;
-(void)setAtMinTime:(char)arg1 ;
-(char)_isRestrictedFromSavingPlayerItem:(id)arg1 ;
-(void)actuallySeekToTime;
-(id)_seekTimer;
-(void)setDisablingAutomaticTermination:(char)arg1 ;
-(char)shouldPreventIdleDisplaySleep;
-(void)setHasProtectedContent:(char)arg1 ;
-(void)setComposable:(char)arg1 ;
-(void)reloadAudioOptions;
-(void)setDeviceBatteryChargingOrFull:(char)arg1 ;
-(void)setAvailableMetadataFormats:(NSArray *)arg1 ;
-(void)toggleMuted:(id)arg1 ;
-(void)changeVolumeToMaximum:(id)arg1 ;
-(char)CALayerDestinationIsTVOut;
-(char)isDeviceBatteryChargingOrFull;
-(void)setContentChapters:(NSArray *)arg1 ;
-(void)scanBackward:(id)arg1 ;
-(double)rateBeforeScrubBegan;
-(void)scanForward:(id)arg1 ;
-(void)decreaseVolume:(id)arg1 ;
-(void)setCompatibleWithAirPlayVideo:(char)arg1 ;
-(void)changeVolumeToMinimum:(id)arg1 ;
-(void)increaseVolume:(id)arg1 ;
-(void)updateAtMinMaxTime;
-(void)reloadLegibleOptions;
-(void)setLooping:(char)arg1 ;
-(char)isAtMaxTime;
-(void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)_attemptToResumePlaybackAfterInterruption;
-(char)isAtMinTime;
-(id)scanningDelays;
-(char)canSeekFrameForward;
-(void)seekFrameForward:(id)arg1 ;
-(void)throttledSeekToTime:(SCD_Struct_AV8)arg1 toleranceBefore:(SCD_Struct_AV8)arg2 toleranceAfter:(SCD_Struct_AV8)arg3 ;
-(char)isSeeking;
-(void)_updateScanningBackwardRate;
-(void)_updateScanningForwardRate;
-(char)canSeekFrameBackward;
-(void)seekFrameBackward:(id)arg1 ;
-(char)hasShareableContent;
-(void)setScrubbing:(char)arg1 ;
-(void)reloadOptions;
-(double)currentTimeWithinEndTimes;
-(void)setRateWithForce:(double)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(char)isExternalPlaybackActive;
-(id)mediaSelectionGroupForMediaCharacteristic:(id)arg1 ;
-(id)loadedTimeRanges;
-(id)seekableTimeRanges;
-(void)seekToTime:(double)arg1 ;
-(char)allowsExternalPlayback;
-(double)maxTime;
-(int)externalPlaybackType;
-(char)isPictureInPicturePossible;
-(char)hasProtectedContent;
-(double)currentTime;
-(char)isScrubbing;
-(void)setPlayer:(AVPlayer *)arg1 ;
-(double)rate;
-(id)error;
-(void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)setAllowsExternalPlayback:(char)arg1 ;
-(char)isPlaying;
-(AVPlayer *)player;
-(void)setVolume:(double)arg1 ;
-(void)beginScrubbing;
-(void)endScrubbing;
-(void)dealloc;
-(id)init;
-(char)hasContent;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(int)status;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(AVValueTiming *)timing;
-(void)setTiming:(AVValueTiming *)arg1 ;
-(char)canSeek;
-(void)play:(id)arg1 ;
-(NSDictionary *)metadata;
-(double)volume;
-(char)isLooping;
-(void)pause:(id)arg1 ;
-(void)setRate:(double)arg1 ;
-(void)setPlaying:(char)arg1 ;
-(char)canPause;
-(double)contentDuration;
-(void)setMaxTime:(double)arg1 ;
-(void)setMinTime:(double)arg1 ;
-(void)setAudioMediaSelectionOptions:(id)arg1 ;
-(void)setCurrentAudioMediaSelectionOption:(id)arg1 ;
-(void)setLegibleMediaSelectionOptions:(id)arg1 ;
-(void)setCurrentLegibleMediaSelectionOption:(id)arg1 ;
-(void)togglePlayback:(id)arg1 ;
-(char)canPlay;
-(void)seekToBeginning:(id)arg1 ;
-(void)seekToEnd:(id)arg1 ;
-(char)hasAudioMediaSelectionOptions;
-(char)hasLegibleMediaSelectionOptions;
-(id)audioMediaSelectionOptions;
-(id)legibleMediaSelectionOptions;
-(void)togglePlaybackEvenWhenInBackground:(id)arg1 ;
-(void)beginScrubbing:(id)arg1 ;
-(void)endScrubbing:(id)arg1 ;
-(char)hasLiveStreamingContent;
-(void)skipBackwardThirtySeconds:(id)arg1 ;
-(void)gotoEndOfSeekableRanges:(id)arg1 ;
-(char)canScanForward;
-(void)beginScanningForward:(id)arg1 ;
-(void)endScanningForward:(id)arg1 ;
-(void)beginScanningBackward:(id)arg1 ;
-(void)endScanningBackward:(id)arg1 ;
-(char)canSeekToBeginning;
-(void)seekChapterBackward:(id)arg1 ;
-(char)canSeekToEnd;
-(void)seekChapterForward:(id)arg1 ;
-(char)hasMediaSelectionOptions;
-(id)currentAudioMediaSelectionOption;
-(id)currentLegibleMediaSelectionOption;
-(char)isPlayingOnExternalScreen;
-(char)isPictureInPictureInterrupted;
-(void)setPictureInPictureInterrupted:(char)arg1 ;
-(char)canScanBackward;
-(char)canTogglePlayback;
-(CGSize)contentDimensions;
-(double)minTime;
-(double)contentDurationWithinEndTimes;
-(id)externalPlaybackAirPlayDeviceLocalizedName;
@end

