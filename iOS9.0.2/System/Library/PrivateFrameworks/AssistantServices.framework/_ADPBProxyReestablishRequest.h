/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/assistantd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <assistantd/assistantd-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _ADPBProxyReestablishRequest : PBRequest <NSCopying> {

	NSString* _lastKnownStreamId;

}

@property (nonatomic,readonly) char hasLastKnownStreamId; 
@property (nonatomic,retain) NSString * lastKnownStreamId;              //@synthesize lastKnownStreamId=_lastKnownStreamId - In the implementation block
+(unsigned short)_ADPBProxyRequestType;
-(void)setLastKnownStreamId:(NSString *)arg1 ;
-(char)hasLastKnownStreamId;
-(NSString *)lastKnownStreamId;
-(void)_ad_performWithPeerStreamConnection:(id)arg1 context:(id)arg2 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

