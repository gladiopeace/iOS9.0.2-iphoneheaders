/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSArray, NSString;


@protocol GEOMapItemTransitInfo <GEOMapItemTransitSchedule>
@property (nonatomic,readonly) NSArray * labelItems; 
@property (nonatomic,readonly) NSArray * connections; 
@property (nonatomic,readonly) NSArray * systems; 
@property (nonatomic,readonly) unsigned systemsCount; 
@property (nonatomic,readonly) NSArray * lines; 
@property (nonatomic,readonly) unsigned linesCount; 
@property (nonatomic,readonly) NSArray * incidents; 
@property (nonatomic,readonly) char isTransitIncidentsTTLExpired; 
@property (nonatomic,readonly) char hasTransitIncidentComponent; 
@property (nonatomic,readonly) NSString * displayName; 
@required
-(NSString *)displayName;
-(unsigned)linesCount;
-(NSArray *)lines;
-(NSArray *)incidents;
-(char)isTransitIncidentsTTLExpired;
-(char)hasTransitIncidentComponent;
-(NSArray *)labelItems;
-(NSArray *)connections;
-(NSArray *)systems;
-(unsigned)systemsCount;

@end

