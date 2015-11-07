/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoMailKitServer/NanoMailKitServer-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NNMKProtoComposedMessageSendingProgressReport : PBCodable <NSCopying> {

	NSString* _composedMessageId;
	int _progress;
	SCD_Struct_NN1 _has;

}

@property (nonatomic,readonly) char hasComposedMessageId; 
@property (nonatomic,retain) NSString * composedMessageId;              //@synthesize composedMessageId=_composedMessageId - In the implementation block
@property (assign,nonatomic) char hasProgress; 
@property (assign,nonatomic) int progress;                              //@synthesize progress=_progress - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProgress:(int)arg1 ;
-(id)dictionaryRepresentation;
-(int)progress;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setComposedMessageId:(NSString *)arg1 ;
-(char)hasComposedMessageId;
-(NSString *)composedMessageId;
-(void)setHasProgress:(char)arg1 ;
-(char)hasProgress;
-(char)readFrom:(id)arg1 ;
@end

