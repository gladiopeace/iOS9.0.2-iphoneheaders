/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOAlmanacRiseTransitSet, NSDate;

@interface GEOAlmanac : NSObject {

	GEOAlmanacRiseTransitSet* _previousRiseTransitSet;
	GEOAlmanacRiseTransitSet* _currentRiseTransitSet;
	GEOAlmanacRiseTransitSet* _nextRiseTransitSet;

}

@property (nonatomic,readonly) char isDayLight; 
@property (nonatomic,readonly) NSDate * previousSunrise; 
@property (nonatomic,readonly) NSDate * previousTransit; 
@property (nonatomic,readonly) NSDate * previousSunset; 
@property (nonatomic,readonly) NSDate * sunrise; 
@property (nonatomic,readonly) NSDate * transit; 
@property (nonatomic,readonly) NSDate * sunset; 
@property (nonatomic,readonly) NSDate * nextSunrise; 
@property (nonatomic,readonly) NSDate * nextTransit; 
@property (nonatomic,readonly) NSDate * nextSunset; 
-(void)dealloc;
-(NSDate *)transit;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE16)arg1 time:(double)arg2 ;
-(id)_newRiseTransitSetForLocation:(SCD_Struct_GE16)arg1 julianDay:(double)arg2 altitude:(double)arg3 ;
-(void)calculateGeocentricDirectionForSunX:(double*)arg1 Y:(double*)arg2 Z:(double*)arg3 ;
-(NSDate *)sunrise;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE16)arg1 time:(double)arg2 altitudeInDegrees:(double)arg3 ;
-(NSDate *)previousTransit;
-(NSDate *)previousSunset;
-(NSDate *)nextSunset;
-(id)sortedTimesForDate:(id)arg1 ;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE16)arg1 ;
-(char)isDayLightForTime:(double)arg1 ;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE16)arg1 altitudeInDegrees:(double)arg2 ;
-(NSDate *)sunset;
-(NSDate *)nextSunrise;
-(char)isDayLightForDate:(id)arg1 ;
-(NSDate *)previousSunrise;
-(void)calculateAstronomicalTimeForLocation:(SCD_Struct_GE16)arg1 date:(id)arg2 altitudeInDegrees:(double)arg3 ;
-(NSDate *)nextTransit;
-(char)isDayLight;
@end

