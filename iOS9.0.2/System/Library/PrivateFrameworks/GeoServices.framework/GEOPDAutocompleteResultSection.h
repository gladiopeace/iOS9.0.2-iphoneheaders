/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOPDAutocompleteResultSection : PBCodable <NSCopying> {

	NSMutableArray* _entries;
	NSString* _name;
	int _type;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * entries;              //@synthesize entries=_entries - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)entries;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)hasName;
-(void)clearEntries;
-(id)entriesAtIndex:(unsigned)arg1 ;
-(void)addEntries:(id)arg1 ;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(unsigned)entriesCount;
-(char)readFrom:(id)arg1 ;
-(char)hasType;
@end

