/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NPKProtoMarkPaymentPassForDeleteResponse : PBCodable <NSCopying> {

	char _pending;
	char _success;
	SCD_Struct_NP2 _has;

}

@property (assign,nonatomic) char hasPending; 
@property (assign,nonatomic) char pending;                 //@synthesize pending=_pending - In the implementation block
@property (assign,nonatomic) char hasSuccess; 
@property (assign,nonatomic) char success;                 //@synthesize success=_success - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPending:(char)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasPending:(char)arg1 ;
-(char)hasPending;
-(char)pending;
-(char)readFrom:(id)arg1 ;
-(char)success;
-(void)setSuccess:(char)arg1 ;
-(void)setHasSuccess:(char)arg1 ;
-(char)hasSuccess;
@end

