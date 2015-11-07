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

@class NSString;

@interface GEOTransitDepartureSequenceUsage : PBCodable <NSCopying> {

	unsigned long long _lineId;
	NSString* _direction;
	NSString* _headsign;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) char hasLineId; 
@property (assign,nonatomic) unsigned long long lineId;              //@synthesize lineId=_lineId - In the implementation block
@property (nonatomic,readonly) char hasDirection; 
@property (nonatomic,retain) NSString * direction;                   //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) char hasHeadsign; 
@property (nonatomic,retain) NSString * headsign;                    //@synthesize headsign=_headsign - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDirection:(NSString *)arg1 ;
-(NSString *)direction;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasLineId:(char)arg1 ;
-(char)hasLineId;
-(unsigned long long)lineId;
-(void)setLineId:(unsigned long long)arg1 ;
-(void)setHeadsign:(NSString *)arg1 ;
-(NSString *)headsign;
-(char)hasHeadsign;
-(char)hasDirection;
-(char)readFrom:(id)arg1 ;
@end

