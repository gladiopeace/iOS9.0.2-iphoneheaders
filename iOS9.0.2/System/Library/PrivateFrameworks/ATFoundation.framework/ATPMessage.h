/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, ATPRequest, ATPResponse, ATPError;

@interface ATPMessage : PBCodable <NSCopying> {

	unsigned _messageID;
	int _messageType;
	NSData* _parameters;
	NSData* _paramsSignature;
	NSData* _payload;
	NSData* _payloadSignature;
	ATPRequest* _request;
	ATPResponse* _response;
	unsigned _sessionID;
	ATPError* _streamError;
	char _additionalPayload;
	SCD_Struct_AT1 _has;

}

@property (assign,nonatomic) char hasMessageType; 
@property (assign,nonatomic) int messageType;                         //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic) char hasMessageID; 
@property (assign,nonatomic) unsigned messageID;                      //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) char hasSessionID; 
@property (assign,nonatomic) unsigned sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) char hasParameters; 
@property (nonatomic,retain) NSData * parameters;                     //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,readonly) char hasParamsSignature; 
@property (nonatomic,retain) NSData * paramsSignature;                //@synthesize paramsSignature=_paramsSignature - In the implementation block
@property (nonatomic,readonly) char hasPayloadSignature; 
@property (nonatomic,retain) NSData * payloadSignature;               //@synthesize payloadSignature=_payloadSignature - In the implementation block
@property (nonatomic,readonly) char hasRequest; 
@property (nonatomic,retain) ATPRequest * request;                    //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) char hasResponse; 
@property (nonatomic,retain) ATPResponse * response;                  //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) char hasPayload; 
@property (nonatomic,retain) NSData * payload;                        //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) char hasAdditionalPayload; 
@property (assign,nonatomic) char additionalPayload;                  //@synthesize additionalPayload=_additionalPayload - In the implementation block
@property (nonatomic,readonly) char hasStreamError; 
@property (nonatomic,retain) ATPError * streamError;                  //@synthesize streamError=_streamError - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSData *)payload;
-(ATPRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(ATPResponse *)response;
-(id)dictionaryRepresentation;
-(NSData *)parameters;
-(void)setParameters:(NSData *)arg1 ;
-(void)setPayload:(NSData *)arg1 ;
-(void)setParamsSignature:(NSData *)arg1 ;
-(void)setPayloadSignature:(NSData *)arg1 ;
-(void)setStreamError:(ATPError *)arg1 ;
-(void)setHasMessageID:(char)arg1 ;
-(char)hasMessageID;
-(char)hasParameters;
-(char)hasParamsSignature;
-(char)hasPayloadSignature;
-(void)setAdditionalPayload:(char)arg1 ;
-(void)setHasAdditionalPayload:(char)arg1 ;
-(char)hasAdditionalPayload;
-(char)hasStreamError;
-(NSData *)paramsSignature;
-(NSData *)payloadSignature;
-(char)additionalPayload;
-(id)formattedDescription;
-(unsigned)messageID;
-(char)hasPayload;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSessionID:(unsigned)arg1 ;
-(void)setHasSessionID:(char)arg1 ;
-(char)hasSessionID;
-(unsigned)sessionID;
-(char)hasRequest;
-(void)setRequest:(ATPRequest *)arg1 ;
-(char)hasResponse;
-(void)setResponse:(ATPResponse *)arg1 ;
-(void)setMessageID:(unsigned)arg1 ;
-(ATPError *)streamError;
-(char)readFrom:(id)arg1 ;
-(void)setMessageType:(int)arg1 ;
-(void)setHasMessageType:(char)arg1 ;
-(char)hasMessageType;
-(int)messageType;
@end

