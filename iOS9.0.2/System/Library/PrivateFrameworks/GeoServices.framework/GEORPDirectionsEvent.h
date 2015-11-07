/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOLatLng, NSData;

@interface GEORPDirectionsEvent : PBCodable <NSCopying> {

	long long _errorCode;
	NSString* _errorDomain;
	GEOLatLng* _occurrenceLatLng;
	unsigned _occurrenceResponseIndex;
	NSData* _occurrenceRouteId;
	unsigned _occurrenceStepIndex;
	unsigned _switchedToResponseIndex;
	NSData* _switchedToRouteId;
	NSString* _synthesizedStepInstructions;
	int _synthesizedStepManeuverType;
	int _type;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasOccurrenceResponseIndex; 
@property (assign,nonatomic) unsigned occurrenceResponseIndex;                    //@synthesize occurrenceResponseIndex=_occurrenceResponseIndex - In the implementation block
@property (nonatomic,readonly) char hasOccurrenceRouteId; 
@property (nonatomic,retain) NSData * occurrenceRouteId;                          //@synthesize occurrenceRouteId=_occurrenceRouteId - In the implementation block
@property (assign,nonatomic) char hasOccurrenceStepIndex; 
@property (assign,nonatomic) unsigned occurrenceStepIndex;                        //@synthesize occurrenceStepIndex=_occurrenceStepIndex - In the implementation block
@property (nonatomic,readonly) char hasOccurrenceLatLng; 
@property (nonatomic,retain) GEOLatLng * occurrenceLatLng;                        //@synthesize occurrenceLatLng=_occurrenceLatLng - In the implementation block
@property (assign,nonatomic) char hasSwitchedToResponseIndex; 
@property (assign,nonatomic) unsigned switchedToResponseIndex;                    //@synthesize switchedToResponseIndex=_switchedToResponseIndex - In the implementation block
@property (nonatomic,readonly) char hasSwitchedToRouteId; 
@property (nonatomic,retain) NSData * switchedToRouteId;                          //@synthesize switchedToRouteId=_switchedToRouteId - In the implementation block
@property (assign,nonatomic) char hasSynthesizedStepManeuverType; 
@property (assign,nonatomic) int synthesizedStepManeuverType;                     //@synthesize synthesizedStepManeuverType=_synthesizedStepManeuverType - In the implementation block
@property (nonatomic,readonly) char hasSynthesizedStepInstructions; 
@property (nonatomic,retain) NSString * synthesizedStepInstructions;              //@synthesize synthesizedStepInstructions=_synthesizedStepInstructions - In the implementation block
@property (nonatomic,readonly) char hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                              //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) char hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                                 //@synthesize errorCode=_errorCode - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(void)setHasSynthesizedStepManeuverType:(char)arg1 ;
-(char)hasOccurrenceResponseIndex;
-(long long)errorCode;
-(GEOLatLng *)occurrenceLatLng;
-(void)setHasSwitchedToResponseIndex:(char)arg1 ;
-(NSString *)errorDomain;
-(unsigned)occurrenceStepIndex;
-(void)setHasOccurrenceResponseIndex:(char)arg1 ;
-(char)hasSynthesizedStepManeuverType;
-(char)hasErrorCode;
-(unsigned)switchedToResponseIndex;
-(char)hasSynthesizedStepInstructions;
-(void)setErrorDomain:(NSString *)arg1 ;
-(char)hasSwitchedToResponseIndex;
-(void)setOccurrenceLatLng:(GEOLatLng *)arg1 ;
-(void)setOccurrenceResponseIndex:(unsigned)arg1 ;
-(char)hasSwitchedToRouteId;
-(void)setHasOccurrenceStepIndex:(char)arg1 ;
-(unsigned)occurrenceResponseIndex;
-(char)hasErrorDomain;
-(char)hasOccurrenceStepIndex;
-(void)setOccurrenceStepIndex:(unsigned)arg1 ;
-(NSData *)switchedToRouteId;
-(void)setSynthesizedStepInstructions:(NSString *)arg1 ;
-(int)synthesizedStepManeuverType;
-(void)setErrorCode:(long long)arg1 ;
-(char)hasOccurrenceLatLng;
-(void)setSynthesizedStepManeuverType:(int)arg1 ;
-(void)setOccurrenceRouteId:(NSData *)arg1 ;
-(char)hasOccurrenceRouteId;
-(void)setHasErrorCode:(char)arg1 ;
-(NSData *)occurrenceRouteId;
-(void)setSwitchedToRouteId:(NSData *)arg1 ;
-(void)setSwitchedToResponseIndex:(unsigned)arg1 ;
-(NSString *)synthesizedStepInstructions;
-(char)readFrom:(id)arg1 ;
-(char)hasType;
@end
