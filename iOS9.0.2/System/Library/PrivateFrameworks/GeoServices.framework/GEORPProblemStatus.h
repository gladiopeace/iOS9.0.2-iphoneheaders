/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEORPDetails, GEORPNotification, NSString, GEORPResolution;

@interface GEORPProblemStatus : PBCodable <NSCopying> {

	double _creationDate;
	GEORPDetails* _details;
	GEORPNotification* _notification;
	NSString* _problemId;
	GEORPResolution* _problemResolution;
	int _problemState;
	SCD_Struct_GE7 _has;

}

@property (nonatomic,readonly) char hasProblemId; 
@property (nonatomic,retain) NSString * problemId;                             //@synthesize problemId=_problemId - In the implementation block
@property (assign,nonatomic) char hasCreationDate; 
@property (assign,nonatomic) double creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) char hasProblemState; 
@property (assign,nonatomic) int problemState;                                 //@synthesize problemState=_problemState - In the implementation block
@property (nonatomic,readonly) char hasProblemResolution; 
@property (nonatomic,retain) GEORPResolution * problemResolution;              //@synthesize problemResolution=_problemResolution - In the implementation block
@property (nonatomic,readonly) char hasNotification; 
@property (nonatomic,retain) GEORPNotification * notification;                 //@synthesize notification=_notification - In the implementation block
@property (nonatomic,readonly) char hasDetails; 
@property (nonatomic,retain) GEORPDetails * details;                           //@synthesize details=_details - In the implementation block
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(GEORPNotification *)notification;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasCreationDate:(char)arg1 ;
-(char)hasCreationDate;
-(void)setProblemId:(NSString *)arg1 ;
-(NSString *)problemId;
-(char)hasProblemId;
-(void)setDetails:(GEORPDetails *)arg1 ;
-(GEORPDetails *)details;
-(char)hasNotification;
-(char)hasDetails;
-(void)setNotification:(GEORPNotification *)arg1 ;
-(char)hasProblemResolution;
-(int)problemState;
-(GEORPResolution *)problemResolution;
-(char)hasProblemState;
-(void)setHasProblemState:(char)arg1 ;
-(void)setProblemState:(int)arg1 ;
-(void)setProblemResolution:(GEORPResolution *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

