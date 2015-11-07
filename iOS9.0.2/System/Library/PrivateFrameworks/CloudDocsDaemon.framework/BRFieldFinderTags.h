/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BRFieldFinderTags : PBCodable <NSCopying> {

	NSMutableArray* _tags;

}

@property (nonatomic,retain) NSMutableArray * tags;              //@synthesize tags=_tags - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)tags;
-(id)dictionaryRepresentation;
-(unsigned)tagsCount;
-(void)addTags:(id)arg1 ;
-(void)clearTags;
-(id)tagsAtIndex:(unsigned)arg1 ;
-(void)setTags:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

