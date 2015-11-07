/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPOplockFailure, CKDPUniqueFieldFailure;

@interface CKDPResponseOperationResultErrorClient : PBCodable <NSCopying> {

	CKDPOplockFailure* _oplockFailure;
	int _type;
	CKDPUniqueFieldFailure* _uniqueFieldFailure;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) char hasOplockFailure; 
@property (nonatomic,retain) CKDPOplockFailure * oplockFailure; 
@property (nonatomic,readonly) char hasUniqueFieldFailure; 
@property (nonatomic,retain) CKDPUniqueFieldFailure * uniqueFieldFailure; 
@property (assign,nonatomic) char hasType; 
@property (assign,nonatomic) int type;                                                 //@synthesize type=_type - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setOplockFailure:(CKDPOplockFailure *)arg1 ;
-(void)setUniqueFieldFailure:(CKDPUniqueFieldFailure *)arg1 ;
-(char)hasOplockFailure;
-(CKDPOplockFailure *)oplockFailure;
-(char)hasUniqueFieldFailure;
-(CKDPUniqueFieldFailure *)uniqueFieldFailure;
-(id)_prettyDictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasType:(char)arg1 ;
-(char)readFrom:(id)arg1 ;
-(char)hasType;
@end

