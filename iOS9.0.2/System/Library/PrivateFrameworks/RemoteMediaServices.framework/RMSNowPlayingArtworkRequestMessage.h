/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RMSNowPlayingArtworkRequestMessage : PBCodable <NSCopying> {

	NSString* _artworkIdentifier;
	float _compressionQuality;
	unsigned _height;
	unsigned _width;
	SCD_Struct_RM5 _has;

}

@property (nonatomic,readonly) char hasArtworkIdentifier; 
@property (nonatomic,retain) NSString * artworkIdentifier;              //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (assign,nonatomic) char hasWidth; 
@property (assign,nonatomic) unsigned width;                            //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) char hasHeight; 
@property (assign,nonatomic) unsigned height;                           //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) char hasCompressionQuality; 
@property (assign,nonatomic) float compressionQuality;                  //@synthesize compressionQuality=_compressionQuality - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)width;
-(unsigned)height;
-(id)dictionaryRepresentation;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasHeight;
-(char)hasWidth;
-(void)setHasWidth:(char)arg1 ;
-(void)setHasHeight:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setCompressionQuality:(float)arg1 ;
-(float)compressionQuality;
-(void)setHasCompressionQuality:(char)arg1 ;
-(char)hasCompressionQuality;
-(NSString *)artworkIdentifier;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(char)hasArtworkIdentifier;
@end

