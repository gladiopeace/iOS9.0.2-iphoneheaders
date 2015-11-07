/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOTransitTimeRange.h>

@class NSDate, NSString;

@interface _GEOTimeRange : NSObject <GEOTransitTimeRange> {

	SCD_Struct_GE50 _pbTimeRange;
	SCD_Struct_GE50 _pdTimeRange;
	char _usePB;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double startTime; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
-(NSDate *)startDate;
-(NSDate *)endDate;
-(double)duration;
-(double)startTime;
-(char)contains:(id)arg1 ;
-(id)initWithPDTimeRange:(SCD_Struct_GE51)arg1 ;
-(id)initWithPBTimeRange:(SCD_Struct_GE51)arg1 ;
@end

