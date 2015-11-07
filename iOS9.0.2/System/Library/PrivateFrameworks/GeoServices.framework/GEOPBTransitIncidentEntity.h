/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIncidentEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOPBTransitIncidentEntity : PBCodable <GEOTransitIncidentEntity, NSCopying> {

	unsigned long long _affectedMuid;
	int _entityType;
	SCD_Struct_GE7 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long muid; 
@property (assign,nonatomic) char hasAffectedMuid; 
@property (assign,nonatomic) unsigned long long affectedMuid;              //@synthesize affectedMuid=_affectedMuid - In the implementation block
@property (assign,nonatomic) char hasEntityType; 
@property (assign,nonatomic) int entityType;                               //@synthesize entityType=_entityType - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned long long)muid;
-(char)hasEntityType;
-(void)setEntityType:(int)arg1 ;
-(void)setHasAffectedMuid:(char)arg1 ;
-(unsigned long long)affectedMuid;
-(void)setAffectedMuid:(unsigned long long)arg1 ;
-(int)entityType;
-(void)setHasEntityType:(char)arg1 ;
-(char)hasAffectedMuid;
-(char)readFrom:(id)arg1 ;
@end

