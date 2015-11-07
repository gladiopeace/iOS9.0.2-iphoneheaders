/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng, NSMutableArray;

@interface GEOWaypointPlace : PBCodable <NSCopying> {

	GEOLatLng* _center;
	NSMutableArray* _roadAccessPoints;

}

@property (nonatomic,readonly) char hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                             //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * roadAccessPoints;              //@synthesize roadAccessPoints=_roadAccessPoints - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setRoadAccessPoints:(NSMutableArray *)arg1 ;
-(void)clearRoadAccessPoints;
-(char)hasCenter;
-(void)addRoadAccessPoint:(id)arg1 ;
-(NSMutableArray *)roadAccessPoints;
-(unsigned)roadAccessPointsCount;
-(id)roadAccessPointAtIndex:(unsigned)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

