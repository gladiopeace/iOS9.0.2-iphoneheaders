/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitDepartureSequence.h>

@protocol GEOTransitLine;
@class NSString, NSArray, GEOPDDepartureSequence;

@interface _GEOTransitDepartureSequence : NSObject <GEOTransitDepartureSequence> {

	GEOPDDepartureSequence* _sequence;
	id<GEOTransitLine> _line;

}

@property (nonatomic,readonly) NSArray * departures; 
@property (nonatomic,readonly) NSArray * frequencies; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<GEOTransitLine> line; 
@property (nonatomic,readonly) char isLowFrequency; 
@property (nonatomic,readonly) NSString * direction; 
@property (nonatomic,readonly) NSString * headsign; 
@property (nonatomic,readonly) NSArray * operatingHours; 
-(void)dealloc;
-(NSString *)direction;
-(id<GEOTransitLine>)line;
-(NSArray *)departures;
-(NSArray *)operatingHours;
-(NSString *)headsign;
-(id)initWithSequence:(id)arg1 line:(id)arg2 ;
-(id)firstDepartureValidForDate:(id)arg1 ;
-(void)_enumerateDeparturesValidForDate:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(id)firstDepartureOnOrAfterDate:(id)arg1 ;
-(id)firstDepartureAfterDate:(id)arg1 ;
-(unsigned)numberOfDeparturesAfterDate:(id)arg1 ;
-(char)hasFrequencyAtDate:(id)arg1 ;
-(char)isValidForDate:(id)arg1 inTimeZone:(id)arg2 ;
-(char)isLowFrequency;
-(id)frequencyToDescribeAtDate:(id)arg1 ;
-(double)frequencyForSortingAtDate:(id)arg1 ;
-(id)departuresValidForDate:(id)arg1 ;
-(NSArray *)frequencies;
-(char)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2 ;
@end
