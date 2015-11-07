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

@class NSString, NSData;

@interface NSSLegalDocumentsRespMsg : PBCodable <NSCopying> {

	NSString* _buildVersion;
	NSData* _legalNotices;
	NSData* _license;
	NSData* _sarStatement;
	char _sarUrlAdded;
	SCD_Struct_NS1 _has;

}

@property (nonatomic,readonly) char hasLicense; 
@property (nonatomic,retain) NSData * license;                     //@synthesize license=_license - In the implementation block
@property (nonatomic,readonly) char hasSarStatement; 
@property (nonatomic,retain) NSData * sarStatement;                //@synthesize sarStatement=_sarStatement - In the implementation block
@property (nonatomic,readonly) char hasLegalNotices; 
@property (nonatomic,retain) NSData * legalNotices;                //@synthesize legalNotices=_legalNotices - In the implementation block
@property (nonatomic,readonly) char hasBuildVersion; 
@property (nonatomic,retain) NSString * buildVersion;              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (assign,nonatomic) char hasSarUrlAdded; 
@property (assign,nonatomic) char sarUrlAdded;                     //@synthesize sarUrlAdded=_sarUrlAdded - In the implementation block
-(char)hasBuildVersion;
-(void)setSarStatement:(NSData *)arg1 ;
-(void)setLegalNotices:(NSData *)arg1 ;
-(char)hasSarStatement;
-(char)hasLegalNotices;
-(void)setSarUrlAdded:(char)arg1 ;
-(void)setHasSarUrlAdded:(char)arg1 ;
-(char)hasSarUrlAdded;
-(NSData *)sarStatement;
-(NSData *)legalNotices;
-(char)sarUrlAdded;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)buildVersion;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)setLicense:(NSData *)arg1 ;
-(char)hasLicense;
-(NSData *)license;
@end

