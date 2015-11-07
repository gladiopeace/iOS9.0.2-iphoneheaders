/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/callservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <callservicesd/callservicesd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TUCallCapabilitiesState;

@interface CSDMessagingCallCapabilitiesState : PBCodable <NSCopying> {

	char _faceTimeAudioAvailable;
	char _faceTimeVideoAvailable;
	SCD_Struct_CS1 _has;

}

@property (nonatomic,readonly) TUCallCapabilitiesState * state; 
@property (assign,nonatomic) char hasFaceTimeAudioAvailable; 
@property (assign,nonatomic) char faceTimeAudioAvailable;                    //@synthesize faceTimeAudioAvailable=_faceTimeAudioAvailable - In the implementation block
@property (assign,nonatomic) char hasFaceTimeVideoAvailable; 
@property (assign,nonatomic) char faceTimeVideoAvailable;                    //@synthesize faceTimeVideoAvailable=_faceTimeVideoAvailable - In the implementation block
-(id)initWithCallCapabilitiesState:(id)arg1 ;
-(char)faceTimeAudioAvailable;
-(char)faceTimeVideoAvailable;
-(void)setHasFaceTimeAudioAvailable:(char)arg1 ;
-(char)hasFaceTimeAudioAvailable;
-(void)setHasFaceTimeVideoAvailable:(char)arg1 ;
-(char)hasFaceTimeVideoAvailable;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(TUCallCapabilitiesState *)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setFaceTimeAudioAvailable:(char)arg1 ;
-(void)setFaceTimeVideoAvailable:(char)arg1 ;
@end

