/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAssetsToDownload, CKDPRequestedFields, NSData, CKDPRecordZoneIdentifier;

@interface CKDPRecordRetrieveChangesRequest : PBRequest <NSCopying> {

	CKDPAssetsToDownload* _assetsToDownload;
	unsigned _maxChanges;
	int _requestedChangeTypes;
	CKDPRequestedFields* _requestedFields;
	NSData* _syncContinuationToken;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,readonly) char hasSyncContinuationToken; 
@property (nonatomic,retain) NSData * syncContinuationToken;                         //@synthesize syncContinuationToken=_syncContinuationToken - In the implementation block
@property (nonatomic,readonly) char hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (nonatomic,readonly) char hasRequestedFields; 
@property (nonatomic,retain) CKDPRequestedFields * requestedFields;                  //@synthesize requestedFields=_requestedFields - In the implementation block
@property (assign,nonatomic) char hasMaxChanges; 
@property (assign,nonatomic) unsigned maxChanges;                                    //@synthesize maxChanges=_maxChanges - In the implementation block
@property (assign,nonatomic) char hasRequestedChangeTypes; 
@property (assign,nonatomic) int requestedChangeTypes;                               //@synthesize requestedChangeTypes=_requestedChangeTypes - In the implementation block
@property (nonatomic,readonly) char hasAssetsToDownload; 
@property (nonatomic,retain) CKDPAssetsToDownload * assetsToDownload;                //@synthesize assetsToDownload=_assetsToDownload - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRequestedFields:(CKDPRequestedFields *)arg1 ;
-(void)setAssetsToDownload:(CKDPAssetsToDownload *)arg1 ;
-(char)hasRequestedFields;
-(char)hasAssetsToDownload;
-(CKDPRequestedFields *)requestedFields;
-(CKDPAssetsToDownload *)assetsToDownload;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(char)hasZoneIdentifier;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setMaxChanges:(unsigned)arg1 ;
-(void)setHasMaxChanges:(char)arg1 ;
-(char)hasMaxChanges;
-(unsigned)maxChanges;
-(void)setSyncContinuationToken:(NSData *)arg1 ;
-(char)hasSyncContinuationToken;
-(NSData *)syncContinuationToken;
-(void)setRequestedChangeTypes:(int)arg1 ;
-(int)requestedChangeTypes;
-(void)setHasRequestedChangeTypes:(char)arg1 ;
-(char)hasRequestedChangeTypes;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(char)readFrom:(id)arg1 ;
@end

