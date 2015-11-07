/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOSearchAttributionManifest : PBCodable <NSCopying> {

	double _timestamp;
	NSMutableArray* _actionComponentMapEntries;
	NSMutableArray* _searchAttributionSources;
	NSString* _sourceURL;
	SCD_Struct_GE3 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) char hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL; 
@property (nonatomic,retain) NSMutableArray * searchAttributionSources;               //@synthesize searchAttributionSources=_searchAttributionSources - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionComponentMapEntries;              //@synthesize actionComponentMapEntries=_actionComponentMapEntries - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasTimestamp;
-(void)setHasTimestamp:(char)arg1 ;
-(void)setSourceURL:(NSString *)arg1 ;
-(char)hasSourceURL;
-(NSString *)sourceURL;
-(void)addSearchAttributionSources:(id)arg1 ;
-(void)addActionComponentMapEntries:(id)arg1 ;
-(unsigned)actionComponentMapEntriesCount;
-(id)actionComponentMapEntriesAtIndex:(unsigned)arg1 ;
-(id)searchAttributionSourcesAtIndex:(unsigned)arg1 ;
-(void)setActionComponentMapEntries:(NSMutableArray *)arg1 ;
-(NSMutableArray *)searchAttributionSources;
-(unsigned)searchAttributionSourcesCount;
-(NSMutableArray *)actionComponentMapEntries;
-(void)clearActionComponentMapEntries;
-(void)clearSearchAttributionSources;
-(void)setSearchAttributionSources:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

