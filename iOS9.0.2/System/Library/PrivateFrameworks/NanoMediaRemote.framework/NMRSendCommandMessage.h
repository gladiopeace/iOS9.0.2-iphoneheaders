/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRSendCommandMessageProtobuf, NSDictionary, NSDate, NSString;

@interface NMRSendCommandMessage : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRSendCommandMessageProtobuf* _protobuf;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,readonly) NSDictionary * options; 
@property (nonatomic,readonly) NSDate * serializationDate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messageWithCommand:(unsigned)arg1 options:(id)arg2 ;
-(unsigned)command;
-(NSDictionary *)options;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(NSDate *)serializationDate;
-(id)initWithCommand:(unsigned)arg1 options:(id)arg2 ;
@end

