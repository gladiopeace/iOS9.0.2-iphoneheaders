/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapItemStorage;

@interface MSPPlaceDisplay : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapItemStorage* _placeMapItemStorage;

}

@property (nonatomic,readonly) char hasPlaceMapItemStorage; 
@property (nonatomic,retain) GEOMapItemStorage * placeMapItemStorage;              //@synthesize placeMapItemStorage=_placeMapItemStorage - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(char)hasPlaceMapItemStorage;
-(GEOMapItemStorage *)placeMapItemStorage;
-(void)setPlaceMapItemStorage:(GEOMapItemStorage *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

