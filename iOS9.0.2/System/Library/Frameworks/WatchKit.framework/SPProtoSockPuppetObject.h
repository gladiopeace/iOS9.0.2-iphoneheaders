/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SPProtoCacheMessage, NSString, NSData;

@interface SPProtoSockPuppetObject : PBCodable <NSCopying> {

	double _ndouble;
	long long _nint64;
	unsigned long long _nuint64;
	SPProtoCacheMessage* _cacheMessage;
	NSString* _key;
	float _nfloat;
	int _nint32;
	unsigned _nuint32;
	NSData* _object;
	int _subtype;
	NSString* _text;
	int _type;
	char _nbool;
	SCD_Struct_SP1 _has;

}

@property (assign,nonatomic) int type;                                        //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char hasSubtype; 
@property (assign,nonatomic) int subtype;                                     //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) char hasCacheMessage; 
@property (nonatomic,retain) SPProtoCacheMessage * cacheMessage;              //@synthesize cacheMessage=_cacheMessage - In the implementation block
@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                                  //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) char hasText; 
@property (nonatomic,retain) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) char hasNdouble; 
@property (assign,nonatomic) double ndouble;                                  //@synthesize ndouble=_ndouble - In the implementation block
@property (assign,nonatomic) char hasNfloat; 
@property (assign,nonatomic) float nfloat;                                    //@synthesize nfloat=_nfloat - In the implementation block
@property (assign,nonatomic) char hasNint64; 
@property (assign,nonatomic) long long nint64;                                //@synthesize nint64=_nint64 - In the implementation block
@property (assign,nonatomic) char hasNint32; 
@property (assign,nonatomic) int nint32;                                      //@synthesize nint32=_nint32 - In the implementation block
@property (assign,nonatomic) char hasNuint64; 
@property (assign,nonatomic) unsigned long long nuint64;                      //@synthesize nuint64=_nuint64 - In the implementation block
@property (assign,nonatomic) char hasNuint32; 
@property (assign,nonatomic) unsigned nuint32;                                //@synthesize nuint32=_nuint32 - In the implementation block
@property (assign,nonatomic) char hasNbool; 
@property (assign,nonatomic) char nbool;                                      //@synthesize nbool=_nbool - In the implementation block
@property (nonatomic,readonly) char hasObject; 
@property (nonatomic,retain) NSData * object;                                 //@synthesize object=_object - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)key;
-(void)setType:(int)arg1 ;
-(int)type;
-(int)subtype;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)object;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSubtype:(int)arg1 ;
-(char)hasText;
-(void)setObject:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(char)hasKey;
-(void)setCacheMessage:(SPProtoCacheMessage *)arg1 ;
-(void)setHasSubtype:(char)arg1 ;
-(char)hasSubtype;
-(char)hasCacheMessage;
-(void)setNdouble:(double)arg1 ;
-(void)setHasNdouble:(char)arg1 ;
-(char)hasNdouble;
-(void)setNfloat:(float)arg1 ;
-(void)setHasNfloat:(char)arg1 ;
-(char)hasNfloat;
-(void)setNint64:(long long)arg1 ;
-(void)setHasNint64:(char)arg1 ;
-(char)hasNint64;
-(void)setNint32:(int)arg1 ;
-(void)setHasNint32:(char)arg1 ;
-(char)hasNint32;
-(void)setNuint64:(unsigned long long)arg1 ;
-(void)setHasNuint64:(char)arg1 ;
-(char)hasNuint64;
-(void)setNuint32:(unsigned)arg1 ;
-(void)setHasNuint32:(char)arg1 ;
-(char)hasNuint32;
-(void)setNbool:(char)arg1 ;
-(void)setHasNbool:(char)arg1 ;
-(char)hasNbool;
-(SPProtoCacheMessage *)cacheMessage;
-(double)ndouble;
-(float)nfloat;
-(long long)nint64;
-(int)nint32;
-(unsigned long long)nuint64;
-(unsigned)nuint32;
-(char)nbool;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasObject;
-(char)readFrom:(id)arg1 ;
@end

