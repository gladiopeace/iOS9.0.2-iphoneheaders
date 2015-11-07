/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteStep.h>

@protocol GEOTransitArtworkDataSource, GEOTransitRoutingIncidentMessage;
@class GEOTransitStep, NSArray, GEOInstructionSet, GEOPBTransitStop, NSString;

@interface GEOComposedTransitRouteStep : GEOComposedRouteStep {

	int _maneuver;
	unsigned _startTime;
	unsigned _duration;
	GEOTransitStep* _transitStep;
	NSArray* _routeDetailsPrimaryArtwork;
	id<GEOTransitArtworkDataSource> _routeDetailsSecondaryArtwork;
	NSArray* _steppingArtwork;
	id<GEOTransitRoutingIncidentMessage> _steppingIncidentMessage;
	id<GEOTransitRoutingIncidentMessage> _routeDetailsIncidentMessage;

}

@property (nonatomic,readonly) int maneuver;                                                                  //@synthesize maneuver=_maneuver - In the implementation block
@property (nonatomic,readonly) GEOInstructionSet * instructions; 
@property (nonatomic,readonly) GEOComposedTransitRouteStep * previousTransitStep; 
@property (nonatomic,readonly) GEOComposedTransitRouteStep * nextTransitStep; 
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> steppingIncidentMessage;                  //@synthesize steppingIncidentMessage=_steppingIncidentMessage - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> routeDetailsIncidentMessage;              //@synthesize routeDetailsIncidentMessage=_routeDetailsIncidentMessage - In the implementation block
@property (nonatomic,readonly) GEOPBTransitStop * originStop; 
@property (nonatomic,readonly) GEOPBTransitStop * destinationStop; 
@property (nonatomic,readonly) GEOTransitStep * transitStep;                                                  //@synthesize transitStep=_transitStep - In the implementation block
@property (nonatomic,readonly) unsigned long long originTransitEntityMuid; 
@property (nonatomic,readonly) unsigned long long destinationTransitEntityMuid; 
@property (nonatomic,readonly) NSString * originStopIntermediateListName; 
@property (nonatomic,readonly) NSString * destinationStopIntermediateListName; 
-(void)dealloc;
-(id)description;
-(unsigned)duration;
-(unsigned)startTime;
-(GEOInstructionSet *)instructions;
-(NSString *)originStopIntermediateListName;
-(GEOComposedTransitRouteStep *)nextTransitStep;
-(GEOComposedTransitRouteStep *)previousTransitStep;
-(GEOPBTransitStop *)originStop;
-(id)startingStop;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(int)arg2 step:(id)arg3 stepIndex:(unsigned)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(id)previousStop;
-(NSString *)destinationStopIntermediateListName;
-(unsigned long long)_muidForStop:(id)arg1 ;
-(id)nextAlightingStep;
-(id)nextBoardingStep;
-(id)previousAlightingStep;
-(SCD_Struct_GE16)startGeoCoordinate;
-(GEOTransitStep *)transitStep;
-(id<GEOTransitRoutingIncidentMessage>)steppingIncidentMessage;
-(id)previousBoardingStep;
-(id)_intermediateListNameForStop:(id)arg1 ;
-(id)routeDetailsSecondaryArtwork;
-(void)_populateIncidentsWithDecoderData:(id)arg1 ;
-(SCD_Struct_GE16)endGeoCoordinate;
-(id)_largestEntityAtStop:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(id<GEOTransitRoutingIncidentMessage>)routeDetailsIncidentMessage;
-(GEOPBTransitStop *)destinationStop;
-(id)endingStop;
-(unsigned long long)originTransitEntityMuid;
-(id)nextStop;
-(id)routeDetailsPrimaryArtwork;
-(unsigned long long)destinationTransitEntityMuid;
-(void)_populateArtworksWithDecoderData:(id)arg1 ;
-(int)maneuver;
-(id)steppingArtwork;
-(char)hasDuration;
-(unsigned)distance;
@end

