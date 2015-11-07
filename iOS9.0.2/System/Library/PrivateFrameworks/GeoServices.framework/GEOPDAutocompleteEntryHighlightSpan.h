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

@class PBUnknownFields;

@interface GEOPDAutocompleteEntryHighlightSpan : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _length;
	unsigned _startIndex;
	SCD_Struct_GE7 _has;

}

@property (assign,nonatomic) char hasStartIndex; 
@property (assign,nonatomic) unsigned startIndex;                            //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) char hasLength; 
@property (assign,nonatomic) unsigned length;                                //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(void)setStartIndex:(unsigned)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLength:(unsigned)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasStartIndex:(char)arg1 ;
-(char)hasStartIndex;
-(char)hasLength;
-(void)setHasLength:(char)arg1 ;
-(unsigned)startIndex;
-(char)readFrom:(id)arg1 ;
@end

