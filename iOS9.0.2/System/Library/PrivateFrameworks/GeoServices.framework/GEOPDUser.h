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

@class GEOPDPhoto, NSString;

@interface GEOPDUser : PBCodable <NSCopying> {

	GEOPDPhoto* _image;
	NSString* _name;

}

@property (nonatomic,readonly) char hasName; 
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) char hasImage; 
@property (nonatomic,retain) GEOPDPhoto * image;              //@synthesize image=_image - In the implementation block
-(void)setImage:(GEOPDPhoto *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEOPDPhoto *)image;
-(id)dictionaryRepresentation;
-(char)hasImage;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasName;
-(char)readFrom:(id)arg1 ;
@end

