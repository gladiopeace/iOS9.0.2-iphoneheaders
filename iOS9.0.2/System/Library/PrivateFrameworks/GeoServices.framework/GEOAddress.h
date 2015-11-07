/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, GEOStructuredAddress, NSString;

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying> {

	NSMutableArray* _formattedAddressLines;
	int _formattedAddressType;
	GEOStructuredAddress* _structuredAddress;
	SCD_Struct_GE3 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * formattedAddressLines;                //@synthesize formattedAddressLines=_formattedAddressLines - In the implementation block
@property (nonatomic,readonly) char hasStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * structuredAddress;              //@synthesize structuredAddress=_structuredAddress - In the implementation block
@property (assign,nonatomic) char hasFormattedAddressType; 
@property (assign,nonatomic) int formattedAddressType;                              //@synthesize formattedAddressType=_formattedAddressType - In the implementation block
+(id)geoAddressForPlaceData:(id)arg1 ;
-(id)singleLineAddress;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setFormattedAddressType:(int)arg1 ;
-(id)formattedAddressLineAtIndex:(unsigned)arg1 ;
-(unsigned)formattedAddressLinesCount;
-(void)setHasFormattedAddressType:(char)arg1 ;
-(GEOStructuredAddress *)structuredAddress;
-(void)setStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(void)setFormattedAddressLines:(NSMutableArray *)arg1 ;
-(char)hasStructuredAddress;
-(void)addFormattedAddressLine:(id)arg1 ;
-(NSMutableArray *)formattedAddressLines;
-(void)clearFormattedAddressLines;
-(int)formattedAddressType;
-(char)hasFormattedAddressType;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(char)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(id)urlRepresentation;
-(id)addressDictionary;
-(id)bestName;
-(id)initWithAddressDictionary:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

