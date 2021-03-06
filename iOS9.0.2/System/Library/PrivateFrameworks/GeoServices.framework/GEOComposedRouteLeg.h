/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOComposedRoute, NSArray, GEOPBTransitStop;

@interface GEOComposedRouteLeg : NSObject {

	GEOComposedRoute* _composedRoute;
	int _type;
	NSRange _pointRange;
	NSRange _stepRange;

}

@property (nonatomic,readonly) int type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int transportType; 
@property (assign,nonatomic) GEOComposedRoute * composedRoute;                      //@synthesize composedRoute=_composedRoute - In the implementation block
@property (nonatomic,readonly) NSRange pointRange;                                  //@synthesize pointRange=_pointRange - In the implementation block
@property (nonatomic,readonly) NSRange stepRange;                                   //@synthesize stepRange=_stepRange - In the implementation block
@property (nonatomic,readonly) NSRange transitStepRange; 
@property (nonatomic,readonly) unsigned startPointIndex; 
@property (nonatomic,readonly) unsigned endPointIndex; 
@property (nonatomic,readonly) unsigned pointCount; 
@property (nonatomic,readonly) unsigned startStepIndex; 
@property (nonatomic,readonly) unsigned endStepIndex; 
@property (nonatomic,readonly) unsigned stepCount; 
@property (nonatomic,readonly) NSArray * steps; 
@property (nonatomic,readonly) double expectedTime; 
@property (nonatomic,readonly) unsigned numberOfTransitStops; 
@property (nonatomic,readonly) GEOPBTransitStop * startingTransitStop; 
@property (nonatomic,readonly) GEOPBTransitStop * endingTransitStop; 
@property (nonatomic,readonly) NSArray * enterTransitAccessPoints; 
@property (nonatomic,readonly) NSArray * exitTransitAccessPoints; 
-(id)description;
-(int)type;
-(GEOPBTransitStop *)endingTransitStop;
-(NSArray *)exitTransitAccessPoints;
-(GEOPBTransitStop *)startingTransitStop;
-(NSArray *)enterTransitAccessPoints;
-(NSRange)transitStepRange;
-(int)transportType;
-(NSArray *)steps;
-(double)expectedTime;
-(unsigned)numberOfTransitStops;
-(unsigned)endPointIndex;
-(unsigned)startPointIndex;
-(NSRange)stepRange;
-(unsigned)stepCount;
-(double)remainingDistanceAlongLegFromStepIndex:(unsigned)arg1 currentStepRemainingDistance:(double)arg2 ;
-(double)remainingTimeAlongLegFromStepIndex:(unsigned)arg1 currentStepRemainingDistance:(double)arg2 ;
-(GEOComposedRoute *)composedRoute;
-(char)contains:(id)arg1 ;
-(NSRange)pointRange;
-(id)initWithComposedRoute:(id)arg1 routeLegType:(int)arg2 stepRange:(NSRange)arg3 pointRange:(NSRange)arg4 ;
-(void)setComposedRoute:(GEOComposedRoute *)arg1 ;
-(unsigned)startStepIndex;
-(unsigned)endStepIndex;
-(unsigned)pointCount;
@end

