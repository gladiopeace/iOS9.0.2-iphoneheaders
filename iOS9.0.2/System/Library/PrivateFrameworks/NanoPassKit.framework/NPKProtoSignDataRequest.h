/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoSignDataRequest : PBRequest <NSCopying> {

	NSData* _dataToSign;
	NSData* _digestToSign;

}

@property (nonatomic,readonly) char hasDataToSign; 
@property (nonatomic,retain) NSData * dataToSign;                 //@synthesize dataToSign=_dataToSign - In the implementation block
@property (nonatomic,readonly) char hasDigestToSign; 
@property (nonatomic,retain) NSData * digestToSign;               //@synthesize digestToSign=_digestToSign - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDataToSign:(NSData *)arg1 ;
-(void)setDigestToSign:(NSData *)arg1 ;
-(char)hasDataToSign;
-(char)hasDigestToSign;
-(NSData *)dataToSign;
-(NSData *)digestToSign;
-(char)readFrom:(id)arg1 ;
@end

