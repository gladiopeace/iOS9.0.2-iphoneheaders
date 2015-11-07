/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDNanoSyncDescription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableNanoSyncActivationRestore, HDCodableNanoSyncChangeSet, NSData, HDCodableNanoSyncStatus, NSString;

@interface HDCodableNanoSyncMessage : PBCodable <HDNanoSyncDescription, NSCopying> {

	HDCodableNanoSyncActivationRestore* _activationRestore;
	HDCodableNanoSyncChangeSet* _changeSet;
	NSData* _healthPairingUUID;
	NSData* _persistentPairingUUID;
	HDCodableNanoSyncStatus* _status;
	int _version;
	SCD_Struct_HD22 _has;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) int version;                                                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char hasPersistentPairingUUID; 
@property (nonatomic,retain) NSData * persistentPairingUUID;                                      //@synthesize persistentPairingUUID=_persistentPairingUUID - In the implementation block
@property (nonatomic,readonly) char hasHealthPairingUUID; 
@property (nonatomic,retain) NSData * healthPairingUUID;                                          //@synthesize healthPairingUUID=_healthPairingUUID - In the implementation block
@property (nonatomic,readonly) char hasChangeSet; 
@property (nonatomic,retain) HDCodableNanoSyncChangeSet * changeSet;                              //@synthesize changeSet=_changeSet - In the implementation block
@property (nonatomic,readonly) char hasStatus; 
@property (nonatomic,retain) HDCodableNanoSyncStatus * status;                                    //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) char hasActivationRestore; 
@property (nonatomic,retain) HDCodableNanoSyncActivationRestore * activationRestore;              //@synthesize activationRestore=_activationRestore - In the implementation block
+(id)messageWithSyncStore:(id)arg1 ;
+(id)messageFromPersistentUserInfo:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(int)arg1 ;
-(int)version;
-(HDCodableNanoSyncStatus *)status;
-(void)setStatus:(HDCodableNanoSyncStatus *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasStatus;
-(char)hasVersion;
-(void)setHasVersion:(char)arg1 ;
-(id)nanoSyncDescription;
-(HDCodableNanoSyncActivationRestore *)activationRestore;
-(id)decodedPersistentPairingUUID;
-(id)decodedHealthPairingUUID;
-(HDCodableNanoSyncChangeSet *)changeSet;
-(void)setPersistentPairingUUID:(NSData *)arg1 ;
-(void)setHealthPairingUUID:(NSData *)arg1 ;
-(void)setActivationRestore:(HDCodableNanoSyncActivationRestore *)arg1 ;
-(id)copyPersistentUserInfo;
-(void)setChangeSet:(HDCodableNanoSyncChangeSet *)arg1 ;
-(char)hasPersistentPairingUUID;
-(char)hasHealthPairingUUID;
-(char)hasChangeSet;
-(char)hasActivationRestore;
-(NSData *)persistentPairingUUID;
-(NSData *)healthPairingUUID;
-(char)readFrom:(id)arg1 ;
@end

