/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/nanosystemsettingsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <nanosystemsettingsd/nanosystemsettingsd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface NSSProfilesInfoRespMsgProfileInfo : PBCodable <NSCopying> {

	NSData* _expiryDate;
	NSString* _friendlyName;
	NSString* _identifier;
	NSString* _organization;
	NSString* _profileDescription;
	NSString* _uUID;

}

@property (nonatomic,readonly) char hasFriendlyName; 
@property (nonatomic,retain) NSString * friendlyName;                    //@synthesize friendlyName=_friendlyName - In the implementation block
@property (nonatomic,readonly) char hasProfileDescription; 
@property (nonatomic,retain) NSString * profileDescription;              //@synthesize profileDescription=_profileDescription - In the implementation block
@property (nonatomic,readonly) char hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char hasUUID; 
@property (nonatomic,retain) NSString * uUID;                            //@synthesize uUID=_uUID - In the implementation block
@property (nonatomic,readonly) char hasOrganization; 
@property (nonatomic,retain) NSString * organization;                    //@synthesize organization=_organization - In the implementation block
@property (nonatomic,readonly) char hasExpiryDate; 
@property (nonatomic,retain) NSData * expiryDate;                        //@synthesize expiryDate=_expiryDate - In the implementation block
-(NSString *)uUID;
-(char)hasUUID;
-(id)toMCProfileInfo;
-(id)initWithMCProfileInfo:(id)arg1 ;
-(char)hasFriendlyName;
-(char)hasProfileDescription;
-(char)hasOrganization;
-(char)hasExpiryDate;
-(NSData *)expiryDate;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)hasIdentifier;
-(NSString *)profileDescription;
-(NSString *)organization;
-(void)setFriendlyName:(NSString *)arg1 ;
-(void)setProfileDescription:(NSString *)arg1 ;
-(void)setOrganization:(NSString *)arg1 ;
-(void)setExpiryDate:(NSData *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(NSString *)friendlyName;
@end

