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

@interface GEOTransitSegmentArtworkSet : PBCodable <NSCopying> {

	SCD_Struct_GE52* _artworkIndexs;

}

@property (nonatomic,readonly) unsigned artworkIndexsCount; 
@property (nonatomic,readonly) unsigned* artworkIndexs; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setArtworkIndexs:(unsigned*)arg1 count:(unsigned)arg2 ;
-(void)addArtworkIndex:(unsigned)arg1 ;
-(unsigned)artworkIndexAtIndex:(unsigned)arg1 ;
-(unsigned*)artworkIndexs;
-(unsigned)artworkIndexsCount;
-(void)clearArtworkIndexs;
-(char)readFrom:(id)arg1 ;
@end

