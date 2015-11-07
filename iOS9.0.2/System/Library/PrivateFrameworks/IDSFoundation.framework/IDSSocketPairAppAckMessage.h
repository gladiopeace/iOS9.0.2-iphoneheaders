/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSString;

@interface IDSSocketPairAppAckMessage : IDSSocketPairMessage {

	unsigned _offset;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	NSString* _peerResponseIdentifier;

}

@property (assign,nonatomic) unsigned sequenceNumber;                                 //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) unsigned short streamID;                                 //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,retain,readonly) NSString * peerResponseIdentifier;              //@synthesize peerResponseIdentifier=_peerResponseIdentifier - In the implementation block
-(unsigned char)command;
-(void)dealloc;
-(unsigned short)streamID;
-(void)setStreamID:(unsigned short)arg1 ;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(NSString *)peerResponseIdentifier;
-(id)initWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 peerResponseIdentifier:(id)arg3 ;
@end

