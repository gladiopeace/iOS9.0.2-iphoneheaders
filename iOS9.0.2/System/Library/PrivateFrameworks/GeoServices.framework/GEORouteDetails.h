/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORouteDetails : PBCodable <NSCopying> {

	double _timeSinceRouteResponse;
	int _resultIndex;
	unsigned _stepID;
	char _isNearCurrentlyDisplayedStep;
	char _isNearRoute;
	char _isUserTrackingOn;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) char hasResultIndex; 
@property (assign,nonatomic) int resultIndex;                                   //@synthesize resultIndex=_resultIndex - In the implementation block
@property (assign,nonatomic) char hasStepID; 
@property (assign,nonatomic) unsigned stepID;                                   //@synthesize stepID=_stepID - In the implementation block
@property (assign,nonatomic) char hasIsNearRoute; 
@property (assign,nonatomic) char isNearRoute;                                  //@synthesize isNearRoute=_isNearRoute - In the implementation block
@property (assign,nonatomic) char hasIsNearCurrentlyDisplayedStep; 
@property (assign,nonatomic) char isNearCurrentlyDisplayedStep;                 //@synthesize isNearCurrentlyDisplayedStep=_isNearCurrentlyDisplayedStep - In the implementation block
@property (assign,nonatomic) char hasIsUserTrackingOn; 
@property (assign,nonatomic) char isUserTrackingOn;                             //@synthesize isUserTrackingOn=_isUserTrackingOn - In the implementation block
@property (assign,nonatomic) char hasTimeSinceRouteResponse; 
@property (assign,nonatomic) double timeSinceRouteResponse;                     //@synthesize timeSinceRouteResponse=_timeSinceRouteResponse - In the implementation block
+(id)routeDetailsWithResultIndex:(int)arg1 ;
+(id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 nearRoute:(char)arg3 nearCurrentlyDisplayedStep:(char)arg4 userTrackingOn:(char)arg5 timeSinceResponse:(double)arg6 ;
+(id)routeDetailsWithResultIndex:(int)arg1 stepID:(int)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasStepID;
-(unsigned)stepID;
-(void)setStepID:(unsigned)arg1 ;
-(void)setHasStepID:(char)arg1 ;
-(double)timeSinceRouteResponse;
-(void)setResultIndex:(int)arg1 ;
-(char)hasIsNearRoute;
-(char)isUserTrackingOn;
-(char)hasResultIndex;
-(char)hasIsUserTrackingOn;
-(void)setIsNearCurrentlyDisplayedStep:(char)arg1 ;
-(void)setTimeSinceRouteResponse:(double)arg1 ;
-(void)setHasResultIndex:(char)arg1 ;
-(void)setHasIsNearCurrentlyDisplayedStep:(char)arg1 ;
-(int)resultIndex;
-(void)setHasTimeSinceRouteResponse:(char)arg1 ;
-(char)hasIsNearCurrentlyDisplayedStep;
-(char)isNearCurrentlyDisplayedStep;
-(void)setIsNearRoute:(char)arg1 ;
-(void)setIsUserTrackingOn:(char)arg1 ;
-(char)hasTimeSinceRouteResponse;
-(char)isNearRoute;
-(void)setHasIsNearRoute:(char)arg1 ;
-(void)setHasIsUserTrackingOn:(char)arg1 ;
-(id)initWithResultIndex:(int)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

