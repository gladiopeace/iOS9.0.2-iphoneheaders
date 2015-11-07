/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MIPSeries : PBCodable <NSCopying> {

	long long _storeId;
	NSString* _name;
	NSString* _sortName;
	SCD_Struct_MI3 _has;

}

@property (assign,nonatomic) char hasStoreId; 
@property (assign,nonatomic) long long storeId;                //@synthesize storeId=_storeId - In the implementation block
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasSortName; 
@property (nonatomic,retain) NSString * sortName;              //@synthesize sortName=_sortName - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)sortName;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasName;
-(void)setStoreId:(long long)arg1 ;
-(void)setHasStoreId:(char)arg1 ;
-(char)hasStoreId;
-(long long)storeId;
-(void)setSortName:(NSString *)arg1 ;
-(char)hasSortName;
-(char)readFrom:(id)arg1 ;
@end

