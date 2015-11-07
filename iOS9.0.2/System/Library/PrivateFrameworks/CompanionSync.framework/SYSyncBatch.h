/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, SYMessageHeader, NSString;

@interface SYSyncBatch : PBCodable <NSCopying> {

	unsigned long long _index;
	NSMutableArray* _changes;
	SYMessageHeader* _header;
	NSString* _sessionID;

}

@property (nonatomic,retain) SYMessageHeader * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) NSString * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSMutableArray * changes;              //@synthesize changes=_changes - In the implementation block
-(void)addChanges:(id)arg1 ;
-(NSMutableArray *)changes;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)index;
-(id)dictionaryRepresentation;
-(void)setIndex:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(unsigned)changesCount;
-(void)clearChanges;
-(id)changesAtIndex:(unsigned)arg1 ;
-(void)setChanges:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
@end

