/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:02 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDNanoSyncDescription.h>

@class NSData, NSString, NSDictionary, HDIDSMessageCenter;

@interface HDIDSOutgoingRequest : NSObject <HDNanoSyncDescription> {

	char _doNotCompress;
	char _queueOnly1;
	char _forceLocalDelivery;
	unsigned short _messageID;
	NSData* _data;
	NSString* _idsIdentifier;
	unsigned _priority;
	NSDictionary* _persistentUserInfo;
	HDIDSMessageCenter* _messageCenter;
	id _pbRequest;
	double _sendTimeout;
	double _responseTimeout;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned short messageID;                               //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                                 //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (assign,nonatomic) unsigned priority;                                      //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                                     //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (assign,nonatomic) double responseTimeout;                                 //@synthesize responseTimeout=_responseTimeout - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;                      //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (assign,nonatomic) char doNotCompress;                                     //@synthesize doNotCompress=_doNotCompress - In the implementation block
@property (assign,nonatomic) char queueOnly1;                                        //@synthesize queueOnly1=_queueOnly1 - In the implementation block
@property (assign,nonatomic) char forceLocalDelivery;                                //@synthesize forceLocalDelivery=_forceLocalDelivery - In the implementation block
@property (assign,nonatomic,__weak) HDIDSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,retain) id pbRequest;                                           //@synthesize pbRequest=_pbRequest - In the implementation block
+(id)activationRequestWithRestore:(id)arg1 forStore:(id)arg2 ;
+(id)changeRequestWithChanges:(id)arg1 status:(id)arg2 forStore:(id)arg3 ;
+(id)requestWithMessageID:(unsigned short)arg1 ;
-(id)init;
-(NSString *)description;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(unsigned short)messageID;
-(void)setForceLocalDelivery:(char)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
-(void)setResponseTimeout:(double)arg1 ;
-(id)nanoSyncDescription;
-(id)pbRequest;
-(NSString *)idsIdentifier;
-(void)setPbRequest:(id)arg1 ;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(HDIDSMessageCenter *)messageCenter;
-(void)setMessageCenter:(HDIDSMessageCenter *)arg1 ;
-(NSDictionary *)persistentUserInfo;
-(double)sendTimeout;
-(char)doNotCompress;
-(char)forceLocalDelivery;
-(char)queueOnly1;
-(void)setMessageID:(unsigned short)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(double)responseTimeout;
-(void)setDoNotCompress:(char)arg1 ;
-(void)setQueueOnly1:(char)arg1 ;
@end

