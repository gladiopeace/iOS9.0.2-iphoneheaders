/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMSPlaybackCommandMessage : PBCodable <NSCopying> {

	int _playbackCommand;
	int _sessionIdentifier;
	SCD_Struct_RM4 _has;

}

@property (assign,nonatomic) char hasPlaybackCommand; 
@property (assign,nonatomic) int playbackCommand;                    //@synthesize playbackCommand=_playbackCommand - In the implementation block
@property (assign,nonatomic) char hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                  //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)playbackCommand;
-(void)setPlaybackCommand:(int)arg1 ;
-(void)setSessionIdentifier:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setHasSessionIdentifier:(char)arg1 ;
-(char)hasSessionIdentifier;
-(void)setHasPlaybackCommand:(char)arg1 ;
-(char)hasPlaybackCommand;
@end

