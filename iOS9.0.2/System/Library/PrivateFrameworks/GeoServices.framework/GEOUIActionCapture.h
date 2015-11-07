/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOUIActionCapture : PBCodable <NSCopying> {

	double _duration;
	int _actionType;
	int _sequenceNumber;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) char hasActionType; 
@property (assign,nonatomic) int actionType;                      //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic) char hasDuration; 
@property (assign,nonatomic) double duration;                     //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) char hasSequenceNumber; 
@property (assign,nonatomic) int sequenceNumber;                  //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
-(int)actionType;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSequenceNumber:(int)arg1 ;
-(char)hasSequenceNumber;
-(int)sequenceNumber;
-(void)setHasSequenceNumber:(char)arg1 ;
-(void)setHasActionType:(char)arg1 ;
-(char)hasActionType;
-(void)setActionType:(int)arg1 ;
-(char)hasDuration;
-(void)setHasDuration:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

