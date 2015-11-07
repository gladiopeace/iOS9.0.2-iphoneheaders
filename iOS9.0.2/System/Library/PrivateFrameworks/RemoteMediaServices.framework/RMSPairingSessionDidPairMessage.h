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

@interface RMSPairingSessionDidPairMessage : PBCodable <NSCopying> {

	NSString* _pairingGUID;
	NSString* _serviceNetworkName;
	int _sessionIdentifier;
	SCD_Struct_RM1 _has;

}

@property (assign,nonatomic) char hasSessionIdentifier; 
@property (assign,nonatomic) int sessionIdentifier;                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) char hasServiceNetworkName; 
@property (nonatomic,retain) NSString * serviceNetworkName;              //@synthesize serviceNetworkName=_serviceNetworkName - In the implementation block
@property (nonatomic,readonly) char hasPairingGUID; 
@property (nonatomic,retain) NSString * pairingGUID;                     //@synthesize pairingGUID=_pairingGUID - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSessionIdentifier:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setHasSessionIdentifier:(char)arg1 ;
-(char)hasSessionIdentifier;
-(void)setPairingGUID:(NSString *)arg1 ;
-(char)hasPairingGUID;
-(NSString *)pairingGUID;
-(NSString *)serviceNetworkName;
-(void)setServiceNetworkName:(NSString *)arg1 ;
-(char)hasServiceNetworkName;
@end

