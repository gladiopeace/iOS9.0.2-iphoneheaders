/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class GEOComposedRoute, MKRoutePolyline, NSArray, NSString, MKPolyline;

@interface MKRoute : NSObject {

	GEOComposedRoute* _geoComposedRoute;
	MKRoutePolyline* _polyline;
	NSArray* _steps;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSArray * advisoryNotices; 
@property (nonatomic,readonly) double distance; 
@property (nonatomic,readonly) double expectedTravelTime; 
@property (nonatomic,readonly) unsigned transportType; 
@property (nonatomic,readonly) MKPolyline * polyline;                                                     //@synthesize polyline=_polyline - In the implementation block
@property (nonatomic,readonly) NSArray * steps;                                                           //@synthesize steps=_steps - In the implementation block
@property (getter=_geoComposedRoute,nonatomic,readonly) GEOComposedRoute * geoComposedRoute;              //@synthesize geoComposedRoute=_geoComposedRoute - In the implementation block
-(double)expectedTravelTime;
-(id)_initWithGEOComposedRoute:(id)arg1 ;
-(MKPolyline *)polyline;
-(id)_geoComposedRoute;
-(id)_maneuverImageForStep:(id)arg1 size:(CGSize)arg2 scale:(float)arg3 ;
-(NSString *)name;
-(unsigned)transportType;
-(NSArray *)advisoryNotices;
-(NSArray *)steps;
-(double)distance;
@end

