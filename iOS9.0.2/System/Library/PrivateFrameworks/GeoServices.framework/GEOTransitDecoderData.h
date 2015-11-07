/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOTransitDecoderData : PBCodable <NSCopying> {

	NSMutableArray* _accessPoints;
	NSMutableArray* _artworks;
	NSMutableArray* _brands;
	NSMutableArray* _halls;
	NSMutableArray* _lines;
	NSMutableArray* _stations;
	NSMutableArray* _stops;
	NSMutableArray* _systems;
	NSMutableArray* _transitIncidentMessages;
	NSMutableArray* _transitIncidents;
	NSMutableArray* _walkings;
	NSMutableArray* _zilchPoints;

}

@property (nonatomic,retain) NSMutableArray * stations;                             //@synthesize stations=_stations - In the implementation block
@property (nonatomic,retain) NSMutableArray * brands;                               //@synthesize brands=_brands - In the implementation block
@property (nonatomic,retain) NSMutableArray * lines;                                //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessPoints;                         //@synthesize accessPoints=_accessPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * walkings;                             //@synthesize walkings=_walkings - In the implementation block
@property (nonatomic,retain) NSMutableArray * stops;                                //@synthesize stops=_stops - In the implementation block
@property (nonatomic,retain) NSMutableArray * zilchPoints;                          //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (nonatomic,retain) NSMutableArray * systems;                              //@synthesize systems=_systems - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitIncidents;                     //@synthesize transitIncidents=_transitIncidents - In the implementation block
@property (nonatomic,retain) NSMutableArray * halls;                                //@synthesize halls=_halls - In the implementation block
@property (nonatomic,retain) NSMutableArray * artworks;                             //@synthesize artworks=_artworks - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitIncidentMessages;              //@synthesize transitIncidentMessages=_transitIncidentMessages - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setZilchPoints:(NSMutableArray *)arg1 ;
-(NSMutableArray *)zilchPoints;
-(unsigned)linesCount;
-(NSMutableArray *)lines;
-(NSMutableArray *)systems;
-(unsigned)systemsCount;
-(void)setSystems:(NSMutableArray *)arg1 ;
-(id)lineAtIndex:(unsigned)arg1 ;
-(void)addSystem:(id)arg1 ;
-(id)systemAtIndex:(unsigned)arg1 ;
-(void)addLine:(id)arg1 ;
-(void)setLines:(NSMutableArray *)arg1 ;
-(void)clearLines;
-(void)clearSystems;
-(NSMutableArray *)transitIncidents;
-(void)setTransitIncidents:(NSMutableArray *)arg1 ;
-(void)clearTransitIncidents;
-(unsigned)transitIncidentsCount;
-(void)addTransitIncident:(id)arg1 ;
-(id)transitIncidentAtIndex:(unsigned)arg1 ;
-(void)addArtwork:(id)arg1 ;
-(id)artworkAtIndex:(unsigned)arg1 ;
-(void)setArtworks:(NSMutableArray *)arg1 ;
-(unsigned)artworksCount;
-(NSMutableArray *)artworks;
-(void)clearArtworks;
-(NSMutableArray *)halls;
-(id)zilchPointsAtIndex:(unsigned)arg1 ;
-(void)clearBrands;
-(void)setHalls:(NSMutableArray *)arg1 ;
-(void)addTransitIncidentMessage:(id)arg1 ;
-(void)clearAccessPoints;
-(unsigned)walkingsCount;
-(void)addZilchPoints:(id)arg1 ;
-(id)walkingAtIndex:(unsigned)arg1 ;
-(void)addStation:(id)arg1 ;
-(unsigned)zilchPointsCount;
-(id)brandAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)brands;
-(unsigned)brandsCount;
-(void)addBrand:(id)arg1 ;
-(void)setBrands:(NSMutableArray *)arg1 ;
-(unsigned)accessPointsCount;
-(NSMutableArray *)stations;
-(NSMutableArray *)transitIncidentMessages;
-(void)clearWalkings;
-(void)clearZilchPoints;
-(NSMutableArray *)walkings;
-(NSMutableArray *)accessPoints;
-(void)clearHalls;
-(void)addWalking:(id)arg1 ;
-(id)accessPointAtIndex:(unsigned)arg1 ;
-(void)addHall:(id)arg1 ;
-(unsigned)stopsCount;
-(void)clearStations;
-(void)clearTransitIncidentMessages;
-(void)addAccessPoint:(id)arg1 ;
-(void)addStop:(id)arg1 ;
-(id)stopAtIndex:(unsigned)arg1 ;
-(id)transitIncidentMessageAtIndex:(unsigned)arg1 ;
-(id)hallAtIndex:(unsigned)arg1 ;
-(void)setAccessPoints:(NSMutableArray *)arg1 ;
-(unsigned)hallsCount;
-(void)setTransitIncidentMessages:(NSMutableArray *)arg1 ;
-(void)setWalkings:(NSMutableArray *)arg1 ;
-(void)setStations:(NSMutableArray *)arg1 ;
-(unsigned)stationsCount;
-(id)stationAtIndex:(unsigned)arg1 ;
-(void)clearStops;
-(unsigned)transitIncidentMessagesCount;
-(NSMutableArray *)stops;
-(void)setStops:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

