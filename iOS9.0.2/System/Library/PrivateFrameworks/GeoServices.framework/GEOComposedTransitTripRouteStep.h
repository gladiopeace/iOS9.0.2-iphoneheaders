/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedTransitRouteStep.h>

@protocol GEOTransitLine, GEOTransitSystem;
@class NSArray, GEOPBTransitStop, NSTimeZone, NSDate, GEOTransitVehicleInfo;

@interface GEOComposedTransitTripRouteStep : GEOComposedTransitRouteStep {

	NSArray* _departureTimes;
	NSArray* _arrivalTimes;
	double _departureTimeIntervalMin;
	double _departureTimeIntervalMax;
	GEOPBTransitStop* _originStop;
	GEOPBTransitStop* _destinationStop;
	unsigned _defaultVehicleIndex;
	unsigned _vehicleIndex;
	NSArray* _transitVehicles;
	NSArray* _transitLines;
	NSArray* _transitSystems;
	NSArray* _instructions;
	NSArray* _routeLineArtworks;
	NSArray* _routeDetailsPrimaryArtworkArrays;
	NSArray* _routeDetailsSecondaryArtworks;
	NSArray* _steppingArtworkArrays;
	id<GEOTransitLine> _transitLine;
	id<GEOTransitSystem> _transitSystem;
	char _isRail;
	char _isBus;
	char _canPreloadTiles;

}

@property (nonatomic,readonly) NSTimeZone * departureTimeZone; 
@property (nonatomic,readonly) NSTimeZone * arrivalTimeZone; 
@property (nonatomic,readonly) NSDate * departureTime; 
@property (nonatomic,readonly) NSDate * arrivalTime; 
@property (nonatomic,readonly) NSArray * departureTimes;                                      //@synthesize departureTimes=_departureTimes - In the implementation block
@property (nonatomic,readonly) NSArray * arrivalTimes;                                        //@synthesize arrivalTimes=_arrivalTimes - In the implementation block
@property (nonatomic,readonly) double departureTimeIntervalMin;                               //@synthesize departureTimeIntervalMin=_departureTimeIntervalMin - In the implementation block
@property (nonatomic,readonly) double departureTimeIntervalMax;                               //@synthesize departureTimeIntervalMax=_departureTimeIntervalMax - In the implementation block
@property (nonatomic,readonly) GEOTransitVehicleInfo * transitVehicle; 
@property (nonatomic,readonly) id<GEOTransitLine> transitLine;                                //@synthesize transitLine=_transitLine - In the implementation block
@property (nonatomic,readonly) id<GEOTransitSystem> transitSystem;                            //@synthesize transitSystem=_transitSystem - In the implementation block
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> routeLineArtwork; 
@property (nonatomic,readonly) char isRail;                                                   //@synthesize isRail=_isRail - In the implementation block
@property (nonatomic,readonly) char isBus;                                                    //@synthesize isBus=_isBus - In the implementation block
@property (nonatomic,readonly) char canPreloadTilesForThisStep; 
@property (nonatomic,readonly) unsigned defaultVehicleIndex;                                  //@synthesize defaultVehicleIndex=_defaultVehicleIndex - In the implementation block
@property (nonatomic,readonly) unsigned vehicleCount; 
@property (assign,nonatomic) unsigned vehicleIndex;                                           //@synthesize vehicleIndex=_vehicleIndex - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned)duration;
-(id)instructions;
-(NSDate *)departureTime;
-(id)originStop;
-(id)routeDetailsSecondaryArtwork;
-(id)destinationStop;
-(id)routeDetailsPrimaryArtwork;
-(id)steppingArtwork;
-(NSArray *)arrivalTimes;
-(id)routeDetailsSecondaryArtworkForVehicle:(unsigned)arg1 ;
-(NSDate *)arrivalTime;
-(unsigned)defaultVehicleIndex;
-(id)steppingArtworkForVehicle:(unsigned)arg1 ;
-(id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned)arg4 duration:(unsigned)arg5 pointRange:(NSRange)arg6 ;
-(double)departureTimeIntervalMax;
-(id<GEOTransitLine>)transitLine;
-(NSTimeZone *)departureTimeZone;
-(id)transitLineForVehicle:(unsigned)arg1 ;
-(id<GEOTransitSystem>)transitSystem;
-(unsigned)vehicleIndex;
-(NSTimeZone *)arrivalTimeZone;
-(unsigned)vehicleCount;
-(GEOTransitVehicleInfo *)transitVehicle;
-(void)setVehicleIndex:(unsigned)arg1 ;
-(char)isBus;
-(char)canPreloadTilesForThisStep;
-(char)isRail;
-(NSArray *)departureTimes;
-(id<GEOTransitArtworkDataSource>)routeLineArtwork;
-(double)departureTimeIntervalMin;
-(id)routeDetailsPrimaryArtworkForVehicle:(unsigned)arg1 ;
-(char)hasDuration;
@end

