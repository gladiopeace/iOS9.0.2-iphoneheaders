/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ISVideoVolumeControllerDelegate;
#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class AVPlayer;

@interface ISVideoVolumeController : NSObject {

	struct {
		char respondsToVolumeDidChange;
	}  _delegateFlags;
	AVPlayer* _player;
	id<ISVideoVolumeControllerDelegate> _delegate;
	int __volumeRampRequestNumber;
	float __volumeRampStartValue;
	float __targetVolume;
	double __volumeRampStartTime;
	double __volumeRampDuration;

}

@property (nonatomic,__weak,readonly) AVPlayer * player;                                                    //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) float volume; 
@property (assign,nonatomic,__weak) id<ISVideoVolumeControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setVolumeRampRequestNumber:,nonatomic) int _volumeRampRequestNumber;              //@synthesize _volumeRampRequestNumber=__volumeRampRequestNumber - In the implementation block
@property (assign,setter=_setVolumeRampStartTime:,nonatomic) double _volumeRampStartTime;                   //@synthesize _volumeRampStartTime=__volumeRampStartTime - In the implementation block
@property (assign,setter=_setVolumeRampStartValue:,nonatomic) float _volumeRampStartValue;                  //@synthesize _volumeRampStartValue=__volumeRampStartValue - In the implementation block
@property (assign,setter=_setVolumeRampDuration:,nonatomic) double _volumeRampDuration;                     //@synthesize _volumeRampDuration=__volumeRampDuration - In the implementation block
@property (assign,setter=_setTargetVolume:,nonatomic) float _targetVolume;                                  //@synthesize _targetVolume=__targetVolume - In the implementation block
-(id)initWithPlayer:(id)arg1 ;
-(AVPlayer *)player;
-(void)setVolume:(float)arg1 ;
-(void)setDelegate:(id<ISVideoVolumeControllerDelegate>)arg1 ;
-(id<ISVideoVolumeControllerDelegate>)delegate;
-(float)volume;
-(void)setVolume:(float)arg1 withRampDuration:(double)arg2 ;
-(int)_volumeRampRequestNumber;
-(void)_setVolumeRampRequestNumber:(int)arg1 ;
-(void)_setVolumeRampStartTime:(double)arg1 ;
-(void)_setVolumeRampDuration:(double)arg1 ;
-(void)_setVolumeRampStartValue:(float)arg1 ;
-(void)_setTargetVolume:(float)arg1 ;
-(float)_targetVolume;
-(void)_tickRampVolumeWithRampRequestNumber:(int)arg1 ;
-(double)_volumeRampStartTime;
-(double)_volumeRampDuration;
-(float)_volumeRampStartValue;
@end
