/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, MRNowPlayingArtwork;

@interface MRDNowPlayingInfoClient : NSObject {

	NSDictionary* _nowPlayingInfo;
	MRNowPlayingArtwork* _nowPlayingArtwork;
	unsigned _playbackState;

}

@property (nonatomic,copy) NSDictionary * nowPlayingInfo;                          //@synthesize nowPlayingInfo=_nowPlayingInfo - In the implementation block
@property (nonatomic,retain) MRNowPlayingArtwork * nowPlayingArtwork;              //@synthesize nowPlayingArtwork=_nowPlayingArtwork - In the implementation block
@property (assign,nonatomic) unsigned playbackState;                               //@synthesize playbackState=_playbackState - In the implementation block
-(void)setNowPlayingInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)nowPlayingInfo;
-(unsigned)playbackState;
-(void)dealloc;
-(id)init;
-(void)setPlaybackState:(unsigned)arg1 ;
-(MRNowPlayingArtwork *)nowPlayingArtwork;
-(void)setNowPlayingArtwork:(MRNowPlayingArtwork *)arg1 ;
@end

