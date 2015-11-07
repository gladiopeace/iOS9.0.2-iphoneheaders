/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MRAssetPlayer.h>
#import <OpusOrigamiProducer/MRAssetPlayerTimeSupport.h>
#import <OpusOrigamiProducer/MRAudioPlayer.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>

@protocol OS_dispatch_queue;
@class AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, NSObject, EAGLContext, NSConditionLock, NSString;

@interface MRAssetPlayerMovie : MRAssetPlayer <MRAssetPlayerTimeSupport, MRAudioPlayer, AVPlayerItemOutputPullDelegate> {

	AVPlayer* _avPlayer;
	AVPlayerItem* _playerItem;
	AVPlayerItemVideoOutput* _videoOutput;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	double _movieDuration;
	CVOpenGLESTextureCacheRef _cvTextureCache;
	EAGLContext* _textureCacheContext;
	NSConditionLock* _semaphore;
	unsigned char _orientation;
	char _newImageIsAvailable;
	char _movieIsReadyToPlay;
	char _imageIsThumbnail;
	char _isPlaying;
	char _isMuted;
	float _volume;
	double _startTime;
	double _duration;
	double _fadeInDuration;
	double _fadeOutDuration;

}

@property (assign,nonatomic) double startTime;                      //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double time; 
@property (assign,nonatomic) char isPlaying;                        //@synthesize isPlaying=_isPlaying - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float volume;                          //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) double fadeInDuration;                 //@synthesize fadeInDuration=_fadeInDuration - In the implementation block
@property (assign,nonatomic) double fadeOutDuration;                //@synthesize fadeOutDuration=_fadeOutDuration - In the implementation block
@property (assign,nonatomic) char isMuted;                          //@synthesize isMuted=_isMuted - In the implementation block
-(void)setIsPlaying:(char)arg1 ;
-(id)_posterImage:(char)arg1 ;
-(void)loadForTime:(double)arg1 ;
-(char)newImageIsAvailable;
-(id)retainedByUserImageAtTime:(double)arg1 displayLinkTimestamp:(double)arg2 ;
-(id)initWithPath:(id)arg1 size:(CGSize)arg2 master:(id)arg3 andOptions:(id)arg4 ;
-(void)_finishLoadingAsset:(id)arg1 forTime:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)_finishLoadingAsset:(id)arg1 andVideoTrack:(id)arg2 forTime:(double)arg3 ;
-(void)outputMediaDataWillChange:(id)arg1 ;
-(char)isPlaying;
-(void)setVolume:(float)arg1 ;
-(void)dealloc;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setTime:(double)arg1 ;
-(double)time;
-(double)startTime;
-(void)setFadeInDuration:(double)arg1 ;
-(void)setFadeOutDuration:(double)arg1 ;
-(double)fadeInDuration;
-(double)fadeOutDuration;
-(float)volume;
-(char)isMuted;
-(void)setIsMuted:(char)arg1 ;
@end

