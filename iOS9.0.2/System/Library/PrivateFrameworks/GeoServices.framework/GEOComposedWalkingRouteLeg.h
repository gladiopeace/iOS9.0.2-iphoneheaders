/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteLeg.h>

@protocol GEOTransitRoutingIncidentMessage;
@class GEOComposedWalkingRouteStep, GEOComposedTransitWalkingRouteStep;

@interface GEOComposedWalkingRouteLeg : GEOComposedRouteLeg {

	id<GEOTransitRoutingIncidentMessage> _transitSteppingIncidentMessage;
	id<GEOTransitRoutingIncidentMessage> _transitRouteDetailsIncidentMessage;

}

@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitSteppingIncidentMessage;                  //@synthesize transitSteppingIncidentMessage=_transitSteppingIncidentMessage - In the implementation block
@property (nonatomic,readonly) id<GEOTransitRoutingIncidentMessage> transitRouteDetailsIncidentMessage;              //@synthesize transitRouteDetailsIncidentMessage=_transitRouteDetailsIncidentMessage - In the implementation block
@property (nonatomic,readonly) GEOComposedWalkingRouteStep * lastWalkingStep; 
@property (nonatomic,readonly) GEOComposedTransitWalkingRouteStep * arrivalStep; 
-(void)dealloc;
-(id<GEOTransitRoutingIncidentMessage>)transitSteppingIncidentMessage;
-(GEOComposedTransitWalkingRouteStep *)arrivalStep;
-(id)initWithComposedRoute:(id)arg1 stepRange:(NSRange)arg2 pointRange:(NSRange)arg3 transitSteppingIncidentMessage:(id)arg4 transitRouteDetailsIncidentMessage:(id)arg5 ;
-(GEOComposedWalkingRouteStep *)lastWalkingStep;
-(id<GEOTransitRoutingIncidentMessage>)transitRouteDetailsIncidentMessage;
@end

