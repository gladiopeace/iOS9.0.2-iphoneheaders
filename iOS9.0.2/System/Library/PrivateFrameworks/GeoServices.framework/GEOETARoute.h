/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSData, GEOTrafficBannerText;

@interface GEOETARoute : PBCodable <NSCopying> {

	SCD_Struct_GE52* _incidentEndOffsetsInETARoutes;
	SCD_Struct_GE52* _trafficColorOffsets;
	SCD_Struct_GE52* _trafficColors;
	unsigned _historicTravelTime;
	NSMutableArray* _incidentsOffReRoutes;
	NSMutableArray* _incidentsOnETARoutes;
	NSMutableArray* _incidentsOnReRoutes;
	NSMutableArray* _invalidSectionZilchPoints;
	NSMutableArray* _reroutedRoutes;
	NSData* _routeID;
	NSMutableArray* _steps;
	GEOTrafficBannerText* _trafficBannerText;
	unsigned _travelTimeAggressiveEstimate;
	unsigned _travelTimeBestEstimate;
	unsigned _travelTimeConservativeEstimate;
	NSData* _zilchPoints;
	char _routeNoLongerValid;
	SCD_Struct_GE93 _has;

}

@property (nonatomic,readonly) double expectedTime; 
@property (nonatomic,readonly) char hasRouteID; 
@property (nonatomic,retain) NSData * routeID;                                           //@synthesize routeID=_routeID - In the implementation block
@property (nonatomic,retain) NSMutableArray * steps;                                     //@synthesize steps=_steps - In the implementation block
@property (nonatomic,readonly) char hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                                       //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (assign,nonatomic) char hasRouteNoLongerValid; 
@property (assign,nonatomic) char routeNoLongerValid;                                    //@synthesize routeNoLongerValid=_routeNoLongerValid - In the implementation block
@property (nonatomic,retain) NSMutableArray * reroutedRoutes;                            //@synthesize reroutedRoutes=_reroutedRoutes - In the implementation block
@property (nonatomic,retain) NSMutableArray * invalidSectionZilchPoints;                 //@synthesize invalidSectionZilchPoints=_invalidSectionZilchPoints - In the implementation block
@property (nonatomic,readonly) unsigned trafficColorsCount; 
@property (nonatomic,readonly) unsigned* trafficColors; 
@property (nonatomic,readonly) unsigned trafficColorOffsetsCount; 
@property (nonatomic,readonly) unsigned* trafficColorOffsets; 
@property (nonatomic,retain) NSMutableArray * incidentsOnETARoutes;                      //@synthesize incidentsOnETARoutes=_incidentsOnETARoutes - In the implementation block
@property (nonatomic,retain) NSMutableArray * incidentsOnReRoutes;                       //@synthesize incidentsOnReRoutes=_incidentsOnReRoutes - In the implementation block
@property (nonatomic,retain) NSMutableArray * incidentsOffReRoutes;                      //@synthesize incidentsOffReRoutes=_incidentsOffReRoutes - In the implementation block
@property (assign,nonatomic) char hasHistoricTravelTime; 
@property (assign,nonatomic) unsigned historicTravelTime;                                //@synthesize historicTravelTime=_historicTravelTime - In the implementation block
@property (nonatomic,readonly) unsigned incidentEndOffsetsInETARoutesCount; 
@property (nonatomic,readonly) unsigned* incidentEndOffsetsInETARoutes; 
@property (nonatomic,readonly) char hasTrafficBannerText; 
@property (nonatomic,retain) GEOTrafficBannerText * trafficBannerText;                   //@synthesize trafficBannerText=_trafficBannerText - In the implementation block
@property (assign,nonatomic) char hasTravelTimeAggressiveEstimate; 
@property (assign,nonatomic) unsigned travelTimeAggressiveEstimate;                      //@synthesize travelTimeAggressiveEstimate=_travelTimeAggressiveEstimate - In the implementation block
@property (assign,nonatomic) char hasTravelTimeBestEstimate; 
@property (assign,nonatomic) unsigned travelTimeBestEstimate;                            //@synthesize travelTimeBestEstimate=_travelTimeBestEstimate - In the implementation block
@property (assign,nonatomic) char hasTravelTimeConservativeEstimate; 
@property (assign,nonatomic) unsigned travelTimeConservativeEstimate;                    //@synthesize travelTimeConservativeEstimate=_travelTimeConservativeEstimate - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasZilchPoints;
-(char)hasRouteID;
-(NSData *)routeID;
-(void)setRouteID:(NSData *)arg1 ;
-(void)setZilchPoints:(NSData *)arg1 ;
-(NSData *)zilchPoints;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(void)addTrafficColor:(unsigned)arg1 ;
-(unsigned*)trafficColors;
-(char)hasHistoricTravelTime;
-(void)clearTrafficColors;
-(void)setTrafficColors:(unsigned*)arg1 count:(unsigned)arg2 ;
-(NSMutableArray *)steps;
-(char)hasTravelTimeAggressiveEstimate;
-(void)setTrafficColorOffsets:(unsigned*)arg1 count:(unsigned)arg2 ;
-(void)setTravelTimeAggressiveEstimate:(unsigned)arg1 ;
-(void)setHasTravelTimeAggressiveEstimate:(char)arg1 ;
-(void)addTrafficColorOffset:(unsigned)arg1 ;
-(void)clearSteps;
-(void)addStep:(id)arg1 ;
-(unsigned)trafficColorOffsetsCount;
-(unsigned)trafficColorOffsetAtIndex:(unsigned)arg1 ;
-(unsigned*)trafficColorOffsets;
-(void)setHistoricTravelTime:(unsigned)arg1 ;
-(unsigned)trafficColorAtIndex:(unsigned)arg1 ;
-(unsigned)historicTravelTime;
-(char)hasTravelTimeConservativeEstimate;
-(unsigned)travelTimeAggressiveEstimate;
-(void)setHasTravelTimeConservativeEstimate:(char)arg1 ;
-(void)setHasHistoricTravelTime:(char)arg1 ;
-(double)expectedTime;
-(void)setTravelTimeConservativeEstimate:(unsigned)arg1 ;
-(unsigned)travelTimeConservativeEstimate;
-(void)clearTrafficColorOffsets;
-(id)stepAtIndex:(unsigned)arg1 ;
-(unsigned)stepsCount;
-(unsigned)trafficColorsCount;
-(void)setTravelTimeBestEstimate:(unsigned)arg1 ;
-(unsigned)travelTimeBestEstimate;
-(char)hasTravelTimeBestEstimate;
-(void)setHasTravelTimeBestEstimate:(char)arg1 ;
-(void)setDebugBannerTitle:(id)arg1 bannerDescription:(id)arg2 bannerSpoken:(id)arg3 ;
-(double)remainingTimeAlongRoute:(unsigned)arg1 currentStepRemainingDistance:(double)arg2 ;
-(id)bannerTitle;
-(id)bannerDescription;
-(void)_addDebugArguments:(id)arg1 ;
-(id)bannerSpoken;
-(char)hasTrafficBannerText;
-(char)hasRouteNoLongerValid;
-(void)setIncidentsOffReRoutes:(NSMutableArray *)arg1 ;
-(void)clearIncidentEndOffsetsInETARoutes;
-(id)invalidSectionZilchPointsAtIndex:(unsigned)arg1 ;
-(void)setInvalidSectionZilchPoints:(NSMutableArray *)arg1 ;
-(GEOTrafficBannerText *)trafficBannerText;
-(void)clearIncidentsOnETARoutes;
-(id)reroutedRouteAtIndex:(unsigned)arg1 ;
-(void)setHasRouteNoLongerValid:(char)arg1 ;
-(void)setIncidentEndOffsetsInETARoutes:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned)incidentEndOffsetsInETARouteAtIndex:(unsigned)arg1 ;
-(void)addInvalidSectionZilchPoints:(id)arg1 ;
-(void)clearIncidentsOffReRoutes;
-(unsigned*)incidentEndOffsetsInETARoutes;
-(void)setRouteNoLongerValid:(char)arg1 ;
-(void)addReroutedRoute:(id)arg1 ;
-(unsigned)incidentEndOffsetsInETARoutesCount;
-(void)clearReroutedRoutes;
-(void)clearInvalidSectionZilchPoints;
-(id)incidentsOnReRoutesAtIndex:(unsigned)arg1 ;
-(unsigned)incidentsOnReRoutesCount;
-(void)addIncidentsOffReRoutes:(id)arg1 ;
-(void)addIncidentEndOffsetsInETARoute:(unsigned)arg1 ;
-(char)routeNoLongerValid;
-(id)incidentsOffReRoutesAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)reroutedRoutes;
-(void)addIncidentsOnETARoute:(id)arg1 ;
-(void)clearIncidentsOnReRoutes;
-(NSMutableArray *)invalidSectionZilchPoints;
-(unsigned)invalidSectionZilchPointsCount;
-(unsigned)reroutedRoutesCount;
-(NSMutableArray *)incidentsOnETARoutes;
-(void)addIncidentsOnReRoutes:(id)arg1 ;
-(void)setReroutedRoutes:(NSMutableArray *)arg1 ;
-(void)setIncidentsOnReRoutes:(NSMutableArray *)arg1 ;
-(void)setTrafficBannerText:(GEOTrafficBannerText *)arg1 ;
-(void)setIncidentsOnETARoutes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)incidentsOnReRoutes;
-(unsigned)incidentsOffReRoutesCount;
-(id)incidentsOnETARouteAtIndex:(unsigned)arg1 ;
-(unsigned)incidentsOnETARoutesCount;
-(NSMutableArray *)incidentsOffReRoutes;
-(char)readFrom:(id)arg1 ;
@end

