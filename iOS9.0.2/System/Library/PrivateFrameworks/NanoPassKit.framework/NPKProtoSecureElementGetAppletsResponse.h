/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoSecureElementGetAppletsResponse : PBCodable <NSCopying> {

	SCD_Struct_NP7* _activationStates;
	SCD_Struct_NP7* _lifecycleStates;
	NSMutableArray* _appletsBytes;
	NSMutableArray* _cardAIDs;
	char _pending;
	SCD_Struct_NP1 _has;

}

@property (assign,nonatomic) char hasPending; 
@property (assign,nonatomic) char pending;                                  //@synthesize pending=_pending - In the implementation block
@property (nonatomic,retain) NSMutableArray * cardAIDs;                     //@synthesize cardAIDs=_cardAIDs - In the implementation block
@property (nonatomic,readonly) unsigned lifecycleStatesCount; 
@property (nonatomic,readonly) unsigned* lifecycleStates; 
@property (nonatomic,readonly) unsigned activationStatesCount; 
@property (nonatomic,readonly) unsigned* activationStates; 
@property (nonatomic,retain) NSMutableArray * appletsBytes;                 //@synthesize appletsBytes=_appletsBytes - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPending:(char)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setHasPending:(char)arg1 ;
-(char)hasPending;
-(char)pending;
-(void)addCardAIDs:(id)arg1 ;
-(unsigned)cardAIDsCount;
-(void)clearCardAIDs;
-(id)cardAIDsAtIndex:(unsigned)arg1 ;
-(NSMutableArray *)cardAIDs;
-(void)setCardAIDs:(NSMutableArray *)arg1 ;
-(void)addAppletsBytes:(id)arg1 ;
-(unsigned)lifecycleStatesCount;
-(void)clearLifecycleStates;
-(unsigned)lifecycleStatesAtIndex:(unsigned)arg1 ;
-(void)addLifecycleStates:(unsigned)arg1 ;
-(unsigned)activationStatesCount;
-(void)clearActivationStates;
-(unsigned)activationStatesAtIndex:(unsigned)arg1 ;
-(void)addActivationStates:(unsigned)arg1 ;
-(unsigned)appletsBytesCount;
-(void)clearAppletsBytes;
-(id)appletsBytesAtIndex:(unsigned)arg1 ;
-(unsigned*)lifecycleStates;
-(void)setLifecycleStates:(unsigned*)arg1 count:(unsigned)arg2 ;
-(unsigned*)activationStates;
-(void)setActivationStates:(unsigned*)arg1 count:(unsigned)arg2 ;
-(NSMutableArray *)appletsBytes;
-(void)setAppletsBytes:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
@end

