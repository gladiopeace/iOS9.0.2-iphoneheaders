/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitDeparture.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSString;

@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying> {

	double _absDepartureTime;
	NSString* _vehicleNumber;
	SCD_Struct_GE3 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * departureDate; 
@property (nonatomic,readonly) NSString * vehicleIdentifier; 
@property (assign,nonatomic) char hasAbsDepartureTime; 
@property (assign,nonatomic) double absDepartureTime;                     //@synthesize absDepartureTime=_absDepartureTime - In the implementation block
@property (nonatomic,readonly) char hasVehicleNumber; 
@property (nonatomic,retain) NSString * vehicleNumber;                    //@synthesize vehicleNumber=_vehicleNumber - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSDate *)departureDate;
-(NSString *)vehicleIdentifier;
-(char)hasVehicleNumber;
-(NSString *)vehicleNumber;
-(void)setVehicleNumber:(NSString *)arg1 ;
-(void)setHasAbsDepartureTime:(char)arg1 ;
-(double)absDepartureTime;
-(char)hasAbsDepartureTime;
-(void)setAbsDepartureTime:(double)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

