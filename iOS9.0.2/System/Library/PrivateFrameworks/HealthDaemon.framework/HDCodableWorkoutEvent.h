/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableWorkoutEvent : PBCodable <NSCopying> {

	double _date;
	long long _type;
	SCD_Struct_HD1 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) long long type;              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasDate; 
@property (assign,nonatomic) double date;                 //@synthesize date=_date - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(double)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(void)setHasDate:(char)arg1 ;
-(char)hasDate;
-(id)decodedDate;
-(char)readFrom:(id)arg1 ;
-(char)hasType;
@end

