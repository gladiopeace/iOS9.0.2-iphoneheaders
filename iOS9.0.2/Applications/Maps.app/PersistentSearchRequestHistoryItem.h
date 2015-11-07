/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <Maps/HistoryItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOPlaceSearchRequest, GEOPlaceSearchResponse;

@interface PersistentSearchRequestHistoryItem : PBCodable <HistoryItem, NSCopying> {

	double _latitude;
	double _latitudeSpan;
	double _longitude;
	double _longitudeSpan;
	double _position;
	double _timestamp;
	NSString* _displayLocation;
	NSString* _displayQuery;
	GEOPlaceSearchRequest* _request;
	GEOPlaceSearchResponse* _response;
	NSString* _syncIdentifier;
	SCD_Struct_Pe54 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char hasRequest; 
@property (nonatomic,retain) GEOPlaceSearchRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) char hasDisplayQuery; 
@property (nonatomic,retain) NSString * displayQuery;                        //@synthesize displayQuery=_displayQuery - In the implementation block
@property (nonatomic,readonly) char hasDisplayLocation; 
@property (nonatomic,retain) NSString * displayLocation;                     //@synthesize displayLocation=_displayLocation - In the implementation block
@property (assign,nonatomic) char hasLatitude; 
@property (assign,nonatomic) double latitude;                                //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) char hasLongitude; 
@property (assign,nonatomic) double longitude;                               //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) char hasLatitudeSpan; 
@property (assign,nonatomic) double latitudeSpan;                            //@synthesize latitudeSpan=_latitudeSpan - In the implementation block
@property (assign,nonatomic) char hasLongitudeSpan; 
@property (assign,nonatomic) double longitudeSpan;                           //@synthesize longitudeSpan=_longitudeSpan - In the implementation block
@property (nonatomic,readonly) char hasResponse; 
@property (nonatomic,retain) GEOPlaceSearchResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) char hasSyncIdentifier; 
@property (nonatomic,retain) NSString * syncIdentifier;                      //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) char hasPosition; 
@property (assign,nonatomic) double position;                                //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp;                               //@synthesize timestamp=_timestamp - In the implementation block
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(NSString *)syncIdentifier;
-(char)hasSyncIdentifier;
-(void)setHasLatitudeSpan:(char)arg1 ;
-(void)setDisplayLocation:(NSString *)arg1 ;
-(void)setLatitudeSpan:(double)arg1 ;
-(NSString *)displayQuery;
-(void)setHasLongitudeSpan:(char)arg1 ;
-(char)hasDisplayQuery;
-(char)hasLatitudeSpan;
-(double)latitudeSpan;
-(void)setLongitudeSpan:(double)arg1 ;
-(double)longitudeSpan;
-(void)setDisplayQuery:(NSString *)arg1 ;
-(char)hasDisplayLocation;
-(char)hasLongitudeSpan;
-(double)latitude;
-(double)longitude;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(double)timestamp;
-(GEOPlaceSearchRequest *)request;
-(void)setTimestamp:(double)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(GEOPlaceSearchResponse *)response;
-(id)dictionaryRepresentation;
-(NSString *)displayLocation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(char)hasPosition;
-(void)setLatitude:(double)arg1 ;
-(char)hasLatitude;
-(void)setHasLatitude:(char)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(char)hasLongitude;
-(void)setHasLongitude:(char)arg1 ;
-(char)hasRequest;
-(void)setRequest:(GEOPlaceSearchRequest *)arg1 ;
-(char)hasResponse;
-(void)setResponse:(GEOPlaceSearchResponse *)arg1 ;
-(void)setHasPosition:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

