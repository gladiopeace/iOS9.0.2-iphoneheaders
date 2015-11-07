/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDCodableAuthorization : PBCodable <NSCopying> {

	long long _authorizationRequest;
	long long _authorizationStatus;
	double _modificationDate;
	long long _objectType;
	SCD_Struct_HD31 _has;

}

@property (assign,nonatomic) char hasObjectType; 
@property (assign,nonatomic) long long objectType;                        //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) char hasAuthorizationStatus; 
@property (assign,nonatomic) long long authorizationStatus;               //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic) char hasAuthorizationRequest; 
@property (assign,nonatomic) long long authorizationRequest;              //@synthesize authorizationRequest=_authorizationRequest - In the implementation block
@property (assign,nonatomic) char hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                     //@synthesize modificationDate=_modificationDate - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)modificationDate;
-(id)dictionaryRepresentation;
-(long long)authorizationStatus;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setObjectType:(long long)arg1 ;
-(void)setHasObjectType:(char)arg1 ;
-(char)hasObjectType;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(void)setHasAuthorizationStatus:(char)arg1 ;
-(char)hasAuthorizationStatus;
-(void)setAuthorizationRequest:(long long)arg1 ;
-(void)setHasAuthorizationRequest:(char)arg1 ;
-(char)hasAuthorizationRequest;
-(void)setHasModificationDate:(char)arg1 ;
-(char)hasModificationDate;
-(long long)objectType;
-(long long)authorizationRequest;
-(int)_authorizationRequest;
-(int)_authorizationStatus;
-(id)_modificationDate;
-(int)_dataTypeCode;
-(void)_setDataTypeCodeWithObjectType:(id)arg1 ;
-(void)_setAuthorizationStatusWithNumber:(id)arg1 ;
-(void)_setAuthorizationRequestWithNumber:(id)arg1 ;
-(void)_setModificationDate:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setModificationDate:(double)arg1 ;
@end

