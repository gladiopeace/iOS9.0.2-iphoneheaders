/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NPKProtoHash, NSMutableArray;

@interface NPKProtoResyncNeededRequest : PBRequest <NSCopying> {

	NPKProtoHash* _expectedHash;
	NSMutableArray* _manifestHashes;
	unsigned _resyncID;
	NSMutableArray* _uniqueIDs;
	char _fullResyncNeeded;
	SCD_Struct_NP2 _has;

}

@property (nonatomic,readonly) char hasExpectedHash; 
@property (nonatomic,retain) NPKProtoHash * expectedHash;                  //@synthesize expectedHash=_expectedHash - In the implementation block
@property (nonatomic,retain) NSMutableArray * uniqueIDs;                   //@synthesize uniqueIDs=_uniqueIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * manifestHashes;              //@synthesize manifestHashes=_manifestHashes - In the implementation block
@property (assign,nonatomic) char hasFullResyncNeeded; 
@property (assign,nonatomic) char fullResyncNeeded;                        //@synthesize fullResyncNeeded=_fullResyncNeeded - In the implementation block
@property (assign,nonatomic) char hasResyncID; 
@property (assign,nonatomic) unsigned resyncID;                            //@synthesize resyncID=_resyncID - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addUniqueIDs:(id)arg1 ;
-(void)addManifestHashes:(id)arg1 ;
-(void)setExpectedHash:(NPKProtoHash *)arg1 ;
-(unsigned)uniqueIDsCount;
-(void)clearUniqueIDs;
-(id)uniqueIDsAtIndex:(unsigned)arg1 ;
-(unsigned)manifestHashesCount;
-(void)clearManifestHashes;
-(id)manifestHashesAtIndex:(unsigned)arg1 ;
-(char)hasExpectedHash;
-(void)setFullResyncNeeded:(char)arg1 ;
-(void)setHasFullResyncNeeded:(char)arg1 ;
-(char)hasFullResyncNeeded;
-(void)setResyncID:(unsigned)arg1 ;
-(void)setHasResyncID:(char)arg1 ;
-(char)hasResyncID;
-(NPKProtoHash *)expectedHash;
-(NSMutableArray *)manifestHashes;
-(void)setManifestHashes:(NSMutableArray *)arg1 ;
-(char)fullResyncNeeded;
-(unsigned)resyncID;
-(char)readFrom:(id)arg1 ;
-(NSMutableArray *)uniqueIDs;
-(void)setUniqueIDs:(NSMutableArray *)arg1 ;
@end

