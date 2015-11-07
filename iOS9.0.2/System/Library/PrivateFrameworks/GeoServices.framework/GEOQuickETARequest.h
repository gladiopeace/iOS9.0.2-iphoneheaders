/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GEOComposedWaypoint, NSDate, GEOLocation, GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions, NSArray;

@interface GEOQuickETARequest : NSObject {

	GEOComposedWaypoint* _sourceWaypoint;
	GEOComposedWaypoint* _destinationWaypoint;
	NSDate* _departureDate;
	NSDate* _arrivalDate;
	int _transportType;
	GEOLocation* _currentLocation;
	char _includeDistance;
	GEOAutomobileOptions* _automobileOptions;
	GEOTransitOptions* _transitOptions;
	GEOWalkingOptions* _walkingOptions;
	NSArray* _additionalTransportTypesRequested;

}

@property (nonatomic,readonly) GEOComposedWaypoint * sourceWaypoint;                     //@synthesize sourceWaypoint=_sourceWaypoint - In the implementation block
@property (nonatomic,readonly) GEOComposedWaypoint * destinationWaypoint;                //@synthesize destinationWaypoint=_destinationWaypoint - In the implementation block
@property (nonatomic,readonly) NSDate * departureDate;                                   //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,readonly) NSDate * arrivalDate;                                     //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,readonly) int transportType;                                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) GEOLocation * currentLocation;                            //@synthesize currentLocation=_currentLocation - In the implementation block
@property (nonatomic,readonly) char includeDistance;                                     //@synthesize includeDistance=_includeDistance - In the implementation block
@property (nonatomic,readonly) GEOAutomobileOptions * automobileOptions;                 //@synthesize automobileOptions=_automobileOptions - In the implementation block
@property (nonatomic,readonly) GEOTransitOptions * transitOptions;                       //@synthesize transitOptions=_transitOptions - In the implementation block
@property (nonatomic,readonly) GEOWalkingOptions * walkingOptions;                       //@synthesize walkingOptions=_walkingOptions - In the implementation block
@property (nonatomic,readonly) NSArray * additionalTransportTypesRequested;              //@synthesize additionalTransportTypesRequested=_additionalTransportTypesRequested - In the implementation block
-(id)initWithDirectionsRequest:(id)arg1 origin:(id)arg2 destination:(id)arg3 ;
-(void)dealloc;
-(id)description;
-(NSDate *)arrivalDate;
-(int)transportType;
-(GEOAutomobileOptions *)automobileOptions;
-(GEOTransitOptions *)transitOptions;
-(GEOWalkingOptions *)walkingOptions;
-(char)includeDistance;
-(NSDate *)departureDate;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(char)arg5 automobileOptions:(id)arg6 transitOptions:(id)arg7 walkingOptions:(id)arg8 ;
-(GEOLocation *)currentLocation;
-(NSArray *)additionalTransportTypesRequested;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(char)arg6 additionalTransportTypesRequested:(id)arg7 automobileOptions:(id)arg8 transitOptions:(id)arg9 walkingOptions:(id)arg10 ;
-(GEOComposedWaypoint *)destinationWaypoint;
-(GEOComposedWaypoint *)sourceWaypoint;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(char)arg5 automobileOptions:(id)arg6 transitOptions:(id)arg7 walkingOptions:(id)arg8 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(char)arg6 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(char)arg6 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(char)arg6 additionalTransportTypesRequested:(id)arg7 automobileOptions:(id)arg8 transitOptions:(id)arg9 walkingOptions:(id)arg10 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(char)arg6 additionalTransportTypesRequested:(id)arg7 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 ;
-(id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(char)arg6 additionalTransportTypesRequested:(id)arg7 ;
@end

