/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:47 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSInputStream, ATCodableStream;

@interface ATMessage : NSObject <NSSecureCoding> {

	unsigned _messageID;
	unsigned _sessionID;
	NSDictionary* _parameters;
	NSInputStream* _dataStream;
	ATCodableStream* _stream;
	double _timestamp;

}

@property (assign,nonatomic) unsigned messageID;                      //@synthesize messageID=_messageID - In the implementation block
@property (assign,nonatomic) unsigned sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;               //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) double timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSInputStream * dataStream;              //@synthesize dataStream=_dataStream - In the implementation block
@property (assign,nonatomic) unsigned options; 
@property (nonatomic,retain) ATCodableStream * stream;                //@synthesize stream=_stream - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithATPMessage:(id)arg1 ;
-(id)ATPMessage;
-(id)ATPMessageWithPayloadData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setOptions:(unsigned)arg1 ;
-(unsigned)options;
-(id)additionalDescription;
-(void)setDataStream:(NSInputStream *)arg1 ;
-(NSInputStream *)dataStream;
-(id)parameterForKey:(id)arg1 ;
-(unsigned)messageID;
-(void)setStream:(ATCodableStream *)arg1 ;
-(void)setSessionID:(unsigned)arg1 ;
-(unsigned)sessionID;
-(void)setMessageID:(unsigned)arg1 ;
-(ATCodableStream *)stream;
@end

