/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapItemTransitInfo.h>

@class NSArray, NSString, GEOPDTransitInfo, GEOPDTransitSchedule, NSTimeZone, NSDate;

@interface _GEOMapItemTransitInfo : NSObject <GEOMapItemTransitInfo> {

	GEOPDTransitInfo* _transitInfo;
	GEOPDTransitSchedule* _transitSchedule;
	NSArray* _systems;
	NSArray* _lines;
	NSArray* _departureSequences;
	NSTimeZone* _timeZone;
	NSArray* _incidents;
	char _hasTransitIncidentComponent;
	NSDate* _incidentExpirationDate;
	NSArray* _connections;
	NSString* _displayName;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * departureSequences; 
@property (nonatomic,readonly) NSDate * lastFullScheduleValidDate; 
@property (nonatomic,readonly) unsigned numAdditionalDepartures; 
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSArray * connections; 
@property (nonatomic,readonly) NSArray * systems; 
@property (nonatomic,readonly) unsigned systemsCount; 
@property (nonatomic,readonly) NSArray * lines; 
@property (nonatomic,readonly) unsigned linesCount; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) char isTransitIncidentsTTLExpired; 
@property (nonatomic,readonly) char hasTransitIncidentComponent;                //@synthesize hasTransitIncidentComponent=_hasTransitIncidentComponent - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
-(void)dealloc;
-(NSString *)displayName;
-(NSArray *)departureSequences;
-(id)_departureSequencesForSystem:(id)arg1 excludingLines:(id)arg2 ignoreDirectionFilter:(char)arg3 direction:(id)arg4 validForDateFromBlock:(/*^block*/id)arg5 ;
-(unsigned)linesCount;
-(NSArray *)lines;
-(id)departureSequencesForSystem:(id)arg1 excludingLines:(id)arg2 direction:(id)arg3 validForDateFromBlock:(/*^block*/id)arg4 ;
-(NSArray *)incidents;
-(char)isTransitIncidentsTTLExpired;
-(char)hasTransitIncidentComponent;
-(NSArray *)labelItems;
-(NSArray *)connections;
-(NSArray *)systems;
-(unsigned)systemsCount;
-(id)directionsForSystem:(id)arg1 excludingLines:(id)arg2 validForDateFromBlock:(/*^block*/id)arg3 hasSequencesWithNoDirection:(out char*)arg4 ;
-(unsigned)numAdditionalDepartures;
-(id)sequencesForSystem:(id)arg1 excludingLines:(id)arg2 direction:(id)arg3 validForDateFromBlock:(/*^block*/id)arg4 ;
-(id)initWithTransitInfo:(id)arg1 schedule:(id)arg2 timeZone:(id)arg3 incidents:(id)arg4 hasTransitIncidentComponent:(char)arg5 incidentExpirationDate:(id)arg6 providerID:(int)arg7 ;
-(NSDate *)lastFullScheduleValidDate;
@end

