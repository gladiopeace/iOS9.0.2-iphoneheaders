/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTransitEnterExitInfo : PBCodable <NSCopying> {

	unsigned _accessPointIndex;
	unsigned _stopIndex;
	unsigned _transferTime;
	char _displayStop;
	char _uncertainArrival;
	SCD_Struct_GE93 _has;

}

@property (assign,nonatomic) char hasAccessPointIndex; 
@property (assign,nonatomic) unsigned accessPointIndex;              //@synthesize accessPointIndex=_accessPointIndex - In the implementation block
@property (assign,nonatomic) char hasStopIndex; 
@property (assign,nonatomic) unsigned stopIndex;                     //@synthesize stopIndex=_stopIndex - In the implementation block
@property (assign,nonatomic) char hasDisplayStop; 
@property (assign,nonatomic) char displayStop;                       //@synthesize displayStop=_displayStop - In the implementation block
@property (assign,nonatomic) char hasTransferTime; 
@property (assign,nonatomic) unsigned transferTime;                  //@synthesize transferTime=_transferTime - In the implementation block
@property (assign,nonatomic) char hasUncertainArrival; 
@property (assign,nonatomic) char uncertainArrival;                  //@synthesize uncertainArrival=_uncertainArrival - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAccessPointIndex:(unsigned)arg1 ;
-(void)setHasAccessPointIndex:(char)arg1 ;
-(unsigned)accessPointIndex;
-(char)hasAccessPointIndex;
-(void)setStopIndex:(unsigned)arg1 ;
-(void)setHasStopIndex:(char)arg1 ;
-(unsigned)stopIndex;
-(char)hasStopIndex;
-(char)displayStop;
-(char)hasDisplayStop;
-(unsigned)transferTime;
-(void)setHasTransferTime:(char)arg1 ;
-(char)hasTransferTime;
-(void)setTransferTime:(unsigned)arg1 ;
-(char)hasUncertainArrival;
-(char)uncertainArrival;
-(void)setUncertainArrival:(char)arg1 ;
-(void)setDisplayStop:(char)arg1 ;
-(void)setHasUncertainArrival:(char)arg1 ;
-(void)setHasDisplayStop:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

