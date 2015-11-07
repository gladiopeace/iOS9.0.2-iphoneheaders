/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NNMKProtoMoreMessagesRequest : PBRequest <NSCopying> {

	NSData* _beforeDateReceived;
	unsigned _fullSyncVersion;
	SCD_Struct_NN1 _has;

}

@property (assign,nonatomic) char hasFullSyncVersion; 
@property (assign,nonatomic) unsigned fullSyncVersion;                  //@synthesize fullSyncVersion=_fullSyncVersion - In the implementation block
@property (nonatomic,readonly) char hasBeforeDateReceived; 
@property (nonatomic,retain) NSData * beforeDateReceived;               //@synthesize beforeDateReceived=_beforeDateReceived - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setBeforeDateReceived:(NSData *)arg1 ;
-(void)setFullSyncVersion:(unsigned)arg1 ;
-(void)setHasFullSyncVersion:(char)arg1 ;
-(char)hasFullSyncVersion;
-(char)hasBeforeDateReceived;
-(unsigned)fullSyncVersion;
-(NSData *)beforeDateReceived;
-(char)readFrom:(id)arg1 ;
@end

