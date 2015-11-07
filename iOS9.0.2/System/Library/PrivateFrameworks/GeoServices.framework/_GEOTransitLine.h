/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitLine.h>

@protocol GEOTransitSystem;
@class NSString, NSArray, GEOPBTransitLine, GEOStyleAttributes;

@interface _GEOTransitLine : NSObject <GEOTransitLine> {

	GEOPBTransitLine* _line;
	id<GEOTransitSystem> _system;

}

@property (nonatomic,readonly) GEOStyleAttributes * styleAttributes; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) id<GEOTransitSystem> system; 
@property (nonatomic,readonly) unsigned departureTimeDisplayStyle; 
@property (nonatomic,readonly) char departuresAreVehicleSpecific; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> artwork; 
@property (nonatomic,readonly) id<GEOTransitArtworkDataSource> modeArtwork; 
@property (nonatomic,readonly) char hasLineColorString; 
@property (nonatomic,readonly) NSString * lineColorString; 
@property (nonatomic,readonly) char showVehicleNumber; 
@property (nonatomic,readonly) NSArray * operatingHours; 
-(void)dealloc;
-(NSString *)name;
-(unsigned long long)muid;
-(GEOStyleAttributes *)styleAttributes;
-(NSArray *)operatingHours;
-(id<GEOTransitArtworkDataSource>)artwork;
-(id<GEOTransitArtworkDataSource>)modeArtwork;
-(char)showVehicleNumber;
-(NSString *)lineColorString;
-(char)hasLineColorString;
-(unsigned)departureTimeDisplayStyle;
-(id)initWithLine:(id)arg1 system:(id)arg2 ;
-(char)departuresAreVehicleSpecific;
-(id<GEOTransitSystem>)system;
@end

