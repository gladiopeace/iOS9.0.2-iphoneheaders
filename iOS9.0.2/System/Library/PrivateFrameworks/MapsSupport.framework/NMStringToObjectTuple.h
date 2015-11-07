/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:50 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/nanomapscd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanomapscd/nanomapscd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NMStringToObjectTuple : PBCodable <NSCopying> {

	double _doubleValue;
	unsigned long long _intValue;
	NSData* _dataValue;
	NSString* _key;
	NSString* _stringValue;
	char _boolValue;
	SCD_Struct_NM2 _has;

}

@property (nonatomic,readonly) char hasKey; 
@property (nonatomic,retain) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) char hasStringValue; 
@property (nonatomic,retain) NSString * stringValue;                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) char hasDataValue; 
@property (nonatomic,retain) NSData * dataValue;                       //@synthesize dataValue=_dataValue - In the implementation block
@property (assign,nonatomic) char hasBoolValue; 
@property (assign,nonatomic) char boolValue;                           //@synthesize boolValue=_boolValue - In the implementation block
@property (assign,nonatomic) char hasIntValue; 
@property (assign,nonatomic) unsigned long long intValue;              //@synthesize intValue=_intValue - In the implementation block
@property (assign,nonatomic) char hasDoubleValue; 
@property (assign,nonatomic) double doubleValue;                       //@synthesize doubleValue=_doubleValue - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(double)doubleValue;
-(NSString *)key;
-(char)boolValue;
-(unsigned long long)intValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(char)hasKey;
-(void)setBoolValue:(char)arg1 ;
-(void)setHasBoolValue:(char)arg1 ;
-(char)hasBoolValue;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasStringValue;
-(void)setIntValue:(unsigned long long)arg1 ;
-(void)setHasIntValue:(char)arg1 ;
-(char)hasIntValue;
-(void)setDoubleValue:(double)arg1 ;
-(void)setHasDoubleValue:(char)arg1 ;
-(char)hasDoubleValue;
-(char)readFrom:(id)arg1 ;
-(NSData *)dataValue;
-(void)setDataValue:(NSData *)arg1 ;
-(char)hasDataValue;
@end

