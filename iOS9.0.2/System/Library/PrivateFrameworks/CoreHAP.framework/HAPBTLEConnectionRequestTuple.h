/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface HAPBTLEConnectionRequestTuple : NSObject {

	NSObject*<OS_dispatch_source> _connectionRequestTimer;
	NSString* _identifier;
	unsigned _protocolVersion;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> connectionRequestTimer;              //@synthesize connectionRequestTimer=_connectionRequestTimer - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                             //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned protocolVersion;                                          //@synthesize protocolVersion=_protocolVersion - In the implementation block
+(id)connectionRequestTupleWithTimer:(id)arg1 identifier:(id)arg2 protocolVersion:(unsigned)arg3 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setConnectionRequestTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)connectionRequestTimer;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(unsigned)protocolVersion;
@end

