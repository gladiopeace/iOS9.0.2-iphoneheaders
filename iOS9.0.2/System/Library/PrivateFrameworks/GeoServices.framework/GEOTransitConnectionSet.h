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

@class NSMutableArray;

@interface GEOTransitConnectionSet : PBCodable <NSCopying> {

	NSMutableArray* _connections;

}

@property (nonatomic,retain) NSMutableArray * connections;              //@synthesize connections=_connections - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)connections;
-(id)connectionAtIndex:(unsigned)arg1 ;
-(void)clearConnections;
-(unsigned)connectionsCount;
-(void)setConnections:(NSMutableArray *)arg1 ;
-(void)addConnection:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

