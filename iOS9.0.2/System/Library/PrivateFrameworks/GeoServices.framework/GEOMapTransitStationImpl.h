/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapTransitNodeBaseImpl.h>
#import <libobjc.A.dylib/GEOMapTransitStation.h>

@class NSString;

@interface GEOMapTransitStationImpl : GEOMapTransitNodeBaseImpl <GEOMapTransitStation>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE16 coordinate; 
@property (nonatomic,readonly) unsigned long long transitID; 
@property (nonatomic,readonly) NSString * internalName; 
@property (nonatomic,readonly) double boundingRadius; 
@property (nonatomic,readonly) SCD_Struct_GE57 boundingRect; 
@property (nonatomic,readonly) SCD_Struct_GE16* polygonPoints; 
@property (nonatomic,readonly) int polygonPointsCount; 
-(void)dealloc;
-(id)findAccessPoints:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)findStops:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

