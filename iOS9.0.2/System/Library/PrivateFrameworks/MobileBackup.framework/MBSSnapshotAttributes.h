/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <backupd/backupd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface MBSSnapshotAttributes : PBCodable <NSCopying> {

	int _backupReason;
	int _backupType;
	NSString* _buildVersion;
	NSString* _deviceName;
	unsigned _keybagID;
	NSData* _keybagUUID;
	NSString* _productVersion;
	SCD_Struct_MB5 _has;

}

@property (nonatomic,readonly) char hasDeviceName; 
@property (nonatomic,retain) NSString * deviceName;                  //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) char hasProductVersion; 
@property (nonatomic,retain) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,readonly) char hasBuildVersion; 
@property (nonatomic,retain) NSString * buildVersion;                //@synthesize buildVersion=_buildVersion - In the implementation block
@property (assign,nonatomic) char hasKeybagID; 
@property (assign,nonatomic) unsigned keybagID;                      //@synthesize keybagID=_keybagID - In the implementation block
@property (nonatomic,readonly) char hasKeybagUUID; 
@property (nonatomic,retain) NSData * keybagUUID;                    //@synthesize keybagUUID=_keybagUUID - In the implementation block
@property (assign,nonatomic) char hasBackupReason; 
@property (assign,nonatomic) int backupReason;                       //@synthesize backupReason=_backupReason - In the implementation block
@property (assign,nonatomic) char hasBackupType; 
@property (assign,nonatomic) int backupType;                         //@synthesize backupType=_backupType - In the implementation block
+(id)systemAttributes;
+(id)snapshotAttributes;
-(int)backupReason;
-(int)backupType;
-(NSData *)keybagUUID;
-(void)setBackupReason:(int)arg1 ;
-(unsigned)keybagID;
-(void)setKeybagID:(unsigned)arg1 ;
-(void)setKeybagUUID:(NSData *)arg1 ;
-(void)setBackupType:(int)arg1 ;
-(void)setHasKeybagID:(char)arg1 ;
-(char)hasKeybagID;
-(char)hasProductVersion;
-(char)hasBuildVersion;
-(char)hasKeybagUUID;
-(void)setHasBackupReason:(char)arg1 ;
-(char)hasBackupReason;
-(void)setHasBackupType:(char)arg1 ;
-(char)hasBackupType;
-(void)setProductVersion:(NSString *)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)buildVersion;
-(NSString *)deviceName;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(char)hasDeviceName;
-(NSString *)productVersion;
@end

