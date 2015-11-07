/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BLTPBCancelBulletinRequest : PBRequest <NSCopying> {

	double _date;
	unsigned _feed;
	NSString* _publisherMatchID;
	NSString* _universalSectionID;
	SCD_Struct_BL3 _has;

}

@property (nonatomic,readonly) char hasUniversalSectionID; 
@property (nonatomic,retain) NSString * universalSectionID;              //@synthesize universalSectionID=_universalSectionID - In the implementation block
@property (nonatomic,readonly) char hasPublisherMatchID; 
@property (nonatomic,retain) NSString * publisherMatchID;                //@synthesize publisherMatchID=_publisherMatchID - In the implementation block
@property (assign,nonatomic) char hasFeed; 
@property (assign,nonatomic) unsigned feed;                              //@synthesize feed=_feed - In the implementation block
@property (assign,nonatomic) char hasDate; 
@property (assign,nonatomic) double date;                                //@synthesize date=_date - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(double)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)universalSectionID;
-(void)setUniversalSectionID:(NSString *)arg1 ;
-(NSString *)publisherMatchID;
-(unsigned)feed;
-(void)setFeed:(unsigned)arg1 ;
-(char)hasUniversalSectionID;
-(void)setPublisherMatchID:(NSString *)arg1 ;
-(char)hasPublisherMatchID;
-(void)setHasFeed:(char)arg1 ;
-(char)hasFeed;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasDate:(char)arg1 ;
-(char)hasDate;
-(char)readFrom:(id)arg1 ;
@end

