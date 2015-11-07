/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface _NMRNowPlayingInfoProtobuf : PBCodable <NSCopying> {

	double _duration;
	double _elapsedTime;
	long long _radioStationIdentifier;
	double _timestamp;
	unsigned long long _uniqueIdentifier;
	NSString* _album;
	NSString* _artist;
	NSData* _artworkDataDigest;
	float _playbackRate;
	NSString* _radioStationHash;
	NSString* _radioStationName;
	int _repeatMode;
	int _shuffleMode;
	NSString* _title;
	char _isAdvertisement;
	char _isAlwaysLive;
	char _isExplicitTrack;
	char _isMusicApp;
	SCD_Struct_NM7 _has;

}

@property (nonatomic,readonly) char hasAlbum; 
@property (nonatomic,retain) NSString * album;                                 //@synthesize album=_album - In the implementation block
@property (nonatomic,readonly) char hasArtist; 
@property (nonatomic,retain) NSString * artist;                                //@synthesize artist=_artist - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasElapsedTime; 
@property (assign,nonatomic) double elapsedTime;                               //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (assign,nonatomic) char hasPlaybackRate; 
@property (assign,nonatomic) float playbackRate;                               //@synthesize playbackRate=_playbackRate - In the implementation block
@property (assign,nonatomic) char hasRepeatMode; 
@property (assign,nonatomic) int repeatMode;                                   //@synthesize repeatMode=_repeatMode - In the implementation block
@property (assign,nonatomic) char hasShuffleMode; 
@property (assign,nonatomic) int shuffleMode;                                  //@synthesize shuffleMode=_shuffleMode - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) char hasTitle; 
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) char hasUniqueIdentifier; 
@property (assign,nonatomic) unsigned long long uniqueIdentifier;              //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) char hasIsExplicitTrack; 
@property (assign,nonatomic) char isExplicitTrack;                             //@synthesize isExplicitTrack=_isExplicitTrack - In the implementation block
@property (assign,nonatomic) char hasIsMusicApp; 
@property (assign,nonatomic) char isMusicApp;                                  //@synthesize isMusicApp=_isMusicApp - In the implementation block
@property (assign,nonatomic) char hasRadioStationIdentifier; 
@property (assign,nonatomic) long long radioStationIdentifier;                 //@synthesize radioStationIdentifier=_radioStationIdentifier - In the implementation block
@property (nonatomic,readonly) char hasRadioStationHash; 
@property (nonatomic,retain) NSString * radioStationHash;                      //@synthesize radioStationHash=_radioStationHash - In the implementation block
@property (nonatomic,readonly) char hasRadioStationName; 
@property (nonatomic,retain) NSString * radioStationName;                      //@synthesize radioStationName=_radioStationName - In the implementation block
@property (nonatomic,readonly) char hasArtworkDataDigest; 
@property (nonatomic,retain) NSData * artworkDataDigest;                       //@synthesize artworkDataDigest=_artworkDataDigest - In the implementation block
@property (assign,nonatomic) char hasIsAlwaysLive; 
@property (assign,nonatomic) char isAlwaysLive;                                //@synthesize isAlwaysLive=_isAlwaysLive - In the implementation block
@property (assign,nonatomic) char hasIsAdvertisement; 
@property (assign,nonatomic) char isAdvertisement;                             //@synthesize isAdvertisement=_isAdvertisement - In the implementation block
-(int)repeatMode;
-(void)setRepeatMode:(int)arg1 ;
-(float)playbackRate;
-(void)setPlaybackRate:(float)arg1 ;
-(NSString *)artist;
-(char)isExplicitTrack;
-(int)shuffleMode;
-(void)setShuffleMode:(int)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)album;
-(void)setElapsedTime:(double)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setTimestamp:(double)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)uniqueIdentifier;
-(char)hasTitle;
-(void)setUniqueIdentifier:(unsigned long long)arg1 ;
-(double)elapsedTime;
-(char)isAdvertisement;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasUniqueIdentifier;
-(char)hasArtist;
-(char)hasAlbum;
-(void)setHasRepeatMode:(char)arg1 ;
-(char)hasRepeatMode;
-(void)setHasShuffleMode:(char)arg1 ;
-(char)hasShuffleMode;
-(NSString *)radioStationHash;
-(char)isMusicApp;
-(NSString *)radioStationName;
-(long long)radioStationIdentifier;
-(NSData *)artworkDataDigest;
-(void)setRadioStationHash:(NSString *)arg1 ;
-(void)setHasPlaybackRate:(char)arg1 ;
-(char)hasPlaybackRate;
-(char)hasRadioStationHash;
-(void)setRadioStationName:(NSString *)arg1 ;
-(void)setArtworkDataDigest:(NSData *)arg1 ;
-(void)setHasElapsedTime:(char)arg1 ;
-(char)hasElapsedTime;
-(void)setHasUniqueIdentifier:(char)arg1 ;
-(void)setIsExplicitTrack:(char)arg1 ;
-(void)setHasIsExplicitTrack:(char)arg1 ;
-(char)hasIsExplicitTrack;
-(void)setIsMusicApp:(char)arg1 ;
-(void)setHasIsMusicApp:(char)arg1 ;
-(char)hasIsMusicApp;
-(void)setRadioStationIdentifier:(long long)arg1 ;
-(void)setHasRadioStationIdentifier:(char)arg1 ;
-(char)hasRadioStationIdentifier;
-(char)hasRadioStationName;
-(char)hasArtworkDataDigest;
-(void)setIsAlwaysLive:(char)arg1 ;
-(void)setHasIsAlwaysLive:(char)arg1 ;
-(char)hasIsAlwaysLive;
-(void)setIsAdvertisement:(char)arg1 ;
-(void)setHasIsAdvertisement:(char)arg1 ;
-(char)hasIsAdvertisement;
-(char)hasDuration;
-(void)setHasDuration:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(char)isAlwaysLive;
@end

