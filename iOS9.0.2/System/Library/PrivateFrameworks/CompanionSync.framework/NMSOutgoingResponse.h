/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@class NMSIncomingRequest, NSData, NSDictionary, NSString;

@interface NMSOutgoingResponse : NSObject <NMSObfuscatableDescriptionProviding> {

	char _sent;
	NMSIncomingRequest* _request;
	NSData* _data;
	unsigned _priority;
	NSDictionary* _persistentUserInfo;
	NSDictionary* _extraIDSOptions;
	NSString* _idsIdentifier;
	id _pbResponse;
	double _sendTimeout;

}

@property (assign,nonatomic,__weak) NMSIncomingRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSData * data;                                    //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned priority;                                //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                               //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;                //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * extraIDSOptions;                   //@synthesize extraIDSOptions=_extraIDSOptions - In the implementation block
@property (getter=isSent) char sent;                                           //@synthesize sent=_sent - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                           //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,retain) id pbResponse;                                    //@synthesize pbResponse=_pbResponse - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NMSIncomingRequest *)request;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(void)send;
-(char)isSent;
-(void)setExtraIDSOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)extraIDSOptions;
-(id)CPObfuscatedDescriptionObject;
-(id)_makePBResponse;
-(void)setRequest:(NMSIncomingRequest *)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
-(NSString *)idsIdentifier;
-(id)pbResponse;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(void)setPbResponse:(id)arg1 ;
-(NSDictionary *)persistentUserInfo;
-(double)sendTimeout;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(void)setSent:(char)arg1 ;
@end

