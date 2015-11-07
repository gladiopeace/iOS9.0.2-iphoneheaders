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

@class GEOLatLng, GEOTimezone;

@interface GEOPDPlaceInfo : PBCodable <NSCopying> {

	double _area;
	GEOLatLng* _center;
	GEOTimezone* _timezone;
	char _isApproximateCenter;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) char hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                       //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) char hasArea; 
@property (assign,nonatomic) double area;                              //@synthesize area=_area - In the implementation block
@property (nonatomic,readonly) char hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone;                   //@synthesize timezone=_timezone - In the implementation block
@property (assign,nonatomic) char hasIsApproximateCenter; 
@property (assign,nonatomic) char isApproximateCenter;                 //@synthesize isApproximateCenter=_isApproximateCenter - In the implementation block
+(id)placeInfoForPlaceData:(id)arg1 ;
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
-(char)hasCenter;
-(char)hasTimezone;
-(char)hasArea;
-(void)setIsApproximateCenter:(char)arg1 ;
-(void)setArea:(double)arg1 ;
-(double)area;
-(char)hasIsApproximateCenter;
-(GEOTimezone *)timezone;
-(void)setHasIsApproximateCenter:(char)arg1 ;
-(char)isApproximateCenter;
-(void)setHasArea:(char)arg1 ;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

