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

@interface GEOTransitOptions : PBCodable <NSCopying> {

	SCD_Struct_GE1* _avoidedModes;
	int _prioritization;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,readonly) unsigned avoidedModesCount; 
@property (nonatomic,readonly) int* avoidedModes; 
@property (assign,nonatomic) char hasPrioritization; 
@property (assign,nonatomic) int prioritization;                        //@synthesize prioritization=_prioritization - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addAvoidedMode:(int)arg1 ;
-(void)setHasPrioritization:(char)arg1 ;
-(int)prioritization;
-(void)setAvoidedModes:(int*)arg1 count:(unsigned)arg2 ;
-(int)avoidedModeAtIndex:(unsigned)arg1 ;
-(void)clearAvoidedModes;
-(unsigned)avoidedModesCount;
-(void)setPrioritization:(int)arg1 ;
-(char)hasPrioritization;
-(int*)avoidedModes;
-(char)readFrom:(id)arg1 ;
@end

