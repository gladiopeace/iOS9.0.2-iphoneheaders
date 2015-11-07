/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOTFInfo : PBCodable <NSCopying> {

	NSString* _comment;
	NSString* _language;

}

@property (nonatomic,readonly) char hasLanguage; 
@property (nonatomic,retain) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) char hasComment; 
@property (nonatomic,retain) NSString * comment;               //@synthesize comment=_comment - In the implementation block
-(void)setComment:(NSString *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasComment;
-(NSString *)comment;
-(char)hasLanguage;
-(char)readFrom:(id)arg1 ;
@end

