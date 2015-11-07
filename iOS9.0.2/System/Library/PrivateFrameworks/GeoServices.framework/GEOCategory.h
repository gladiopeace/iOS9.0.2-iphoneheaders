/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOCategory : PBCodable <NSCopying> {

	long long _geoOntologyId;
	NSString* _alias;
	int _level;
	NSMutableArray* _localizedNames;
	SCD_Struct_GE3 _has;

}

@property (nonatomic,retain) NSString * alias;                             //@synthesize alias=_alias - In the implementation block
@property (assign,nonatomic) int level;                                    //@synthesize level=_level - In the implementation block
@property (assign,nonatomic) char hasGeoOntologyId; 
@property (assign,nonatomic) long long geoOntologyId;                      //@synthesize geoOntologyId=_geoOntologyId - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedNames;              //@synthesize localizedNames=_localizedNames - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(int)arg1 ;
-(int)level;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithPlaceDataCategory:(id)arg1 ;
-(NSMutableArray *)localizedNames;
-(void)setHasGeoOntologyId:(char)arg1 ;
-(long long)geoOntologyId;
-(void)clearLocalizedNames;
-(id)localizedNamesAtIndex:(unsigned)arg1 ;
-(unsigned)localizedNamesCount;
-(void)addLocalizedNames:(id)arg1 ;
-(void)setGeoOntologyId:(long long)arg1 ;
-(NSString *)alias;
-(char)hasGeoOntologyId;
-(void)setAlias:(NSString *)arg1 ;
-(void)setLocalizedNames:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

