/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOStateTimingFeedbackCollection : PBCodable <NSCopying> {

	SCD_Struct_GE4 _sessionID;
	double _durationInOldState;
	double _sessionRelativeTimestamp;
	NSMutableArray* _stateTransitions;
	SCD_Struct_GE49 _has;

}

@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) SCD_Struct_GE4 sessionID;                       //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSMutableArray * stateTransitions;              //@synthesize stateTransitions=_stateTransitions - In the implementation block
@property (assign,nonatomic) char hasDurationInOldState; 
@property (assign,nonatomic) double durationInOldState;                      //@synthesize durationInOldState=_durationInOldState - In the implementation block
@property (assign,nonatomic) char hasSessionRelativeTimestamp; 
@property (assign,nonatomic) double sessionRelativeTimestamp;                //@synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(SCD_Struct_GE4)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(SCD_Struct_GE4)sessionID;
-(void)setHasDurationInOldState:(char)arg1 ;
-(void)setSessionRelativeTimestamp:(double)arg1 ;
-(char)hasDurationInOldState;
-(double)durationInOldState;
-(void)setHasSessionRelativeTimestamp:(char)arg1 ;
-(char)hasSessionRelativeTimestamp;
-(double)sessionRelativeTimestamp;
-(void)setDurationInOldState:(double)arg1 ;
-(void)clearStateTransitions;
-(void)setStateTransitions:(NSMutableArray *)arg1 ;
-(id)stateTransitionAtIndex:(unsigned)arg1 ;
-(void)addStateTransition:(id)arg1 ;
-(unsigned)stateTransitionsCount;
-(NSMutableArray *)stateTransitions;
-(char)readFrom:(id)arg1 ;
@end

