/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface SYVectorClock : PBCodable <NSCopying> {

	NSMutableArray* _clocks;

}

@property (nonatomic,retain) NSMutableArray * clocks;              //@synthesize clocks=_clocks - In the implementation block
+(void)initialize;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)jsonRepresentation;
-(id)initWithJSONRepresentation:(id)arg1 ;
-(unsigned)clocksCount;
-(void)incrementClockForPeerID:(id)arg1 ;
-(char)hasClockForPeer:(id)arg1 ;
-(id)clockForPeer:(id)arg1 ;
-(void)addClocks:(id)arg1 ;
-(unsigned long long)clockValueForPeerID:(id)arg1 ;
-(unsigned long long)clockValueForPeer:(id)arg1 ;
-(void)setClockValue:(unsigned long long)arg1 forPeer:(id)arg2 ;
-(void)increaseClockForPeerID:(id)arg1 by:(unsigned long long)arg2 ;
-(char)_setTheory_isEqual:(id)arg1 ;
-(char)hasClockForPeerID:(id)arg1 ;
-(id)clockForPeerID:(id)arg1 ;
-(void)setClockValue:(unsigned long long)arg1 forPeerID:(id)arg2 ;
-(id)compactDictionaryRepresentation;
-(void)increaseClockForPeer:(id)arg1 by:(unsigned long long)arg2 ;
-(void)incrementClockForPeer:(id)arg1 ;
-(void)clearClocks;
-(id)clocksAtIndex:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(NSMutableArray *)clocks;
-(void)setClocks:(NSMutableArray *)arg1 ;
@end

