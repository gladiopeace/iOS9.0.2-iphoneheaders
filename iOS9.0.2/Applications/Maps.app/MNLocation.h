/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <CoreLocation/CLLocation.h>

@class GEORouteMatch, GEORoadMatch, CLLocation, NSString, NSDate;

@interface MNLocation : CLLocation {

	int _state;
	char _isDirectional;
	GEORouteMatch* _routeMatch;
	GEORoadMatch* _roadMatch;
	CLLocation* _rawLocation;
	NSString* _roadName;
	long long _shieldType;
	NSString* _shieldText;
	char _locationUnreliable;
	NSDate* _originalDate;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) int state;                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) char isDirectional;                      //@synthesize isDirectional=_isDirectional - In the implementation block
@property (nonatomic,readonly) NSString * roadName; 
@property (nonatomic,readonly) char hadRouteToCompare; 
@property (nonatomic,retain) GEORouteMatch * routeMatch;              //@synthesize routeMatch=_routeMatch - In the implementation block
@property (nonatomic,readonly) GEORoadMatch * roadMatch;              //@synthesize roadMatch=_roadMatch - In the implementation block
@property (nonatomic,readonly) CLLocation * rawLocation;              //@synthesize rawLocation=_rawLocation - In the implementation block
@property (nonatomic,readonly) double routeAccuracy; 
@property (nonatomic,readonly) long long shieldType;                  //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,readonly) NSString * shieldText;                 //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) char locationUnreliable;                 //@synthesize locationUnreliable=_locationUnreliable - In the implementation block
@property (nonatomic,readonly) char isProjected; 
@property (nonatomic,retain) NSDate * originalDate;                   //@synthesize originalDate=_originalDate - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                 //@synthesize expirationDate=_expirationDate - In the implementation block
+(id)locationWithRawLocation:(id)arg1 routeMatch:(id)arg2 roadName:(id)arg3 shieldType:(long long)arg4 shieldText:(id)arg5 useMatchLocation:(char)arg6 ;
+(id)locationWithRawLocation:(id)arg1 coordinate:(SCD_Struct_RA7)arg2 course:(double)arg3 ;
+(id)locationWithRawLocation:(id)arg1 ;
+(id)locationWithRawLocation:(id)arg1 roadMatch:(id)arg2 roadName:(id)arg3 useMatchLocation:(char)arg4 ;
-(id)initWithRawLocation:(id)arg1 coordinate:(SCD_Struct_RA7)arg2 course:(double)arg3 ;
-(char)isDirectional;
-(id)initWithRawLocation:(id)arg1 roadMatch:(id)arg2 roadName:(id)arg3 useMatchLocation:(char)arg4 ;
-(double)routeAccuracy;
-(void)setIsDirectional:(char)arg1 ;
-(char)hadRouteToCompare;
-(GEORoadMatch *)roadMatch;
-(id)initWithRawLocation:(id)arg1 routeMatch:(id)arg2 roadName:(id)arg3 shieldType:(long long)arg4 shieldText:(id)arg5 useMatchLocation:(char)arg6 ;
-(char)isProjected;
-(char)_mapkit_isStale;
-(id)_mapkit_routeMatch;
-(char)_mapkit_hasValidCourse;
-(id)description;
-(int)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEORouteMatch *)routeMatch;
-(char)locationUnreliable;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)shieldText;
-(CLLocation *)rawLocation;
-(void)setLocationUnreliable:(char)arg1 ;
-(void)setRouteMatch:(GEORouteMatch *)arg1 ;
-(long long)shieldType;
-(NSString *)roadName;
-(void)setOriginalDate:(NSDate *)arg1 ;
-(NSDate *)originalDate;
@end

