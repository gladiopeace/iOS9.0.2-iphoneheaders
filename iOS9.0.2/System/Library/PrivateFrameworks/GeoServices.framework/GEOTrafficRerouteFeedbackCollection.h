/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSMutableArray;

@interface GEOTrafficRerouteFeedbackCollection : PBCodable <NSCopying> {

	NSData* _directionResponseID;
	unsigned _oldRouteHistoricTravelTime;
	NSData* _oldRouteID;
	NSMutableArray* _oldRouteIncidents;
	unsigned _oldRouteTravelTime;
	unsigned _reroutedRouteHistoricTravelTime;
	NSData* _reroutedRouteID;
	unsigned _reroutedRouteTravelTime;
	char _oldRouteBlocked;
	SCD_Struct_GE93 _has;

}

@property (assign,nonatomic) char hasOldRouteTravelTime; 
@property (assign,nonatomic) unsigned oldRouteTravelTime;                           //@synthesize oldRouteTravelTime=_oldRouteTravelTime - In the implementation block
@property (assign,nonatomic) char hasReroutedRouteTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteTravelTime;                      //@synthesize reroutedRouteTravelTime=_reroutedRouteTravelTime - In the implementation block
@property (assign,nonatomic) char hasOldRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned oldRouteHistoricTravelTime;                   //@synthesize oldRouteHistoricTravelTime=_oldRouteHistoricTravelTime - In the implementation block
@property (assign,nonatomic) char hasReroutedRouteHistoricTravelTime; 
@property (assign,nonatomic) unsigned reroutedRouteHistoricTravelTime;              //@synthesize reroutedRouteHistoricTravelTime=_reroutedRouteHistoricTravelTime - In the implementation block
@property (assign,nonatomic) char hasOldRouteBlocked; 
@property (assign,nonatomic) char oldRouteBlocked;                                  //@synthesize oldRouteBlocked=_oldRouteBlocked - In the implementation block
@property (nonatomic,retain) NSMutableArray * oldRouteIncidents;                    //@synthesize oldRouteIncidents=_oldRouteIncidents - In the implementation block
@property (nonatomic,readonly) char hasDirectionResponseID; 
@property (nonatomic,retain) NSData * directionResponseID;                          //@synthesize directionResponseID=_directionResponseID - In the implementation block
@property (nonatomic,readonly) char hasOldRouteID; 
@property (nonatomic,retain) NSData * oldRouteID;                                   //@synthesize oldRouteID=_oldRouteID - In the implementation block
@property (nonatomic,readonly) char hasReroutedRouteID; 
@property (nonatomic,retain) NSData * reroutedRouteID;                              //@synthesize reroutedRouteID=_reroutedRouteID - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSData *)directionResponseID;
-(char)hasDirectionResponseID;
-(void)setDirectionResponseID:(NSData *)arg1 ;
-(char)hasReroutedRouteHistoricTravelTime;
-(char)hasReroutedRouteTravelTime;
-(void)setHasOldRouteTravelTime:(char)arg1 ;
-(unsigned)oldRouteTravelTime;
-(char)hasReroutedRouteID;
-(void)setOldRouteID:(NSData *)arg1 ;
-(NSData *)reroutedRouteID;
-(void)setHasReroutedRouteHistoricTravelTime:(char)arg1 ;
-(NSMutableArray *)oldRouteIncidents;
-(void)clearOldRouteIncidents;
-(void)setHasOldRouteHistoricTravelTime:(char)arg1 ;
-(void)setOldRouteIncidents:(NSMutableArray *)arg1 ;
-(char)hasOldRouteTravelTime;
-(void)setOldRouteHistoricTravelTime:(unsigned)arg1 ;
-(NSData *)oldRouteID;
-(unsigned)oldRouteIncidentsCount;
-(char)hasOldRouteHistoricTravelTime;
-(unsigned)oldRouteHistoricTravelTime;
-(void)setReroutedRouteID:(NSData *)arg1 ;
-(void)addOldRouteIncidents:(id)arg1 ;
-(unsigned)reroutedRouteHistoricTravelTime;
-(id)oldRouteIncidentsAtIndex:(unsigned)arg1 ;
-(char)hasOldRouteID;
-(unsigned)reroutedRouteTravelTime;
-(void)setHasReroutedRouteTravelTime:(char)arg1 ;
-(void)setReroutedRouteTravelTime:(unsigned)arg1 ;
-(void)setOldRouteTravelTime:(unsigned)arg1 ;
-(void)setReroutedRouteHistoricTravelTime:(unsigned)arg1 ;
-(void)setOldRouteBlocked:(char)arg1 ;
-(void)setHasOldRouteBlocked:(char)arg1 ;
-(char)oldRouteBlocked;
-(char)hasOldRouteBlocked;
-(char)readFrom:(id)arg1 ;
@end

