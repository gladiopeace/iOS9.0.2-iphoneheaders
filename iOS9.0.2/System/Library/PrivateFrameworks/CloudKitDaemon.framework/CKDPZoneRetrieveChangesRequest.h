/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPZoneRetrieveChangesRequest : PBRequest <NSCopying> {

	unsigned _maxChangedZones;
	NSData* _syncContinuationToken;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasSyncContinuationToken; 
@property (nonatomic,retain) NSData * syncContinuationToken;               //@synthesize syncContinuationToken=_syncContinuationToken - In the implementation block
@property (assign,nonatomic) char hasMaxChangedZones; 
@property (assign,nonatomic) unsigned maxChangedZones;                     //@synthesize maxChangedZones=_maxChangedZones - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSyncContinuationToken:(NSData *)arg1 ;
-(char)hasSyncContinuationToken;
-(NSData *)syncContinuationToken;
-(void)setMaxChangedZones:(unsigned)arg1 ;
-(void)setHasMaxChangedZones:(char)arg1 ;
-(char)hasMaxChangedZones;
-(unsigned)maxChangedZones;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

