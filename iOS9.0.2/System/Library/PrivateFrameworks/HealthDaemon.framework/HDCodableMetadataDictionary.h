/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface HDCodableMetadataDictionary : PBCodable <NSCopying> {

	NSMutableArray* _keyValuePairs;

}

@property (nonatomic,retain) NSMutableArray * keyValuePairs;              //@synthesize keyValuePairs=_keyValuePairs - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addKeyValuePairs:(id)arg1 ;
-(unsigned)keyValuePairsCount;
-(void)clearKeyValuePairs;
-(id)keyValuePairsAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)keyValuePairs;
-(void)setKeyValuePairs:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

