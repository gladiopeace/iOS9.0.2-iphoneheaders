/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/CALayer.h>

@class AVPlayerLayer, CALayer, ISPlayer;

@interface ISPlayerLayer : CALayer {

	AVPlayerLayer* _videoLayer;
	CALayer* _photoLayer;
	char _readyForDisplay;
	char __needsUpdateReadyForDisplay;
	ISPlayer* _player;

}

@property (nonatomic,retain) ISPlayer * player;                                                                   //@synthesize player=_player - In the implementation block
@property (assign,getter=isReadyForDisplay,nonatomic) char readyForDisplay;                                       //@synthesize readyForDisplay=_readyForDisplay - In the implementation block
@property (assign,setter=_setNeedsUpateReadyForDisplay:,nonatomic) char _needsUpdateReadyForDisplay;              //@synthesize _needsUpdateReadyForDisplay=__needsUpdateReadyForDisplay - In the implementation block
-(id)videoLayer;
-(void)setPlayer:(ISPlayer *)arg1 ;
-(char)isReadyForDisplay;
-(void)_setReadyForDisplay:(char)arg1 ;
-(ISPlayer *)player;
-(void)dealloc;
-(id)init;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)layoutSublayers;
-(id)photoLayer;
-(void)_invalidateIsReadyForDisplay;
-(void)_updateIsReadyForDisplayIfNeeded;
-(void)_removeExistingContent;
-(void)_setNeedsUpateReadyForDisplay:(char)arg1 ;
-(char)_needsUpdateReadyForDisplay;
@end

