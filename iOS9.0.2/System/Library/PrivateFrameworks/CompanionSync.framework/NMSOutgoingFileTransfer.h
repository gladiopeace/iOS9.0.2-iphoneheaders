/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@class NSURL, NSDictionary, NSString, NMSMessageCenter;

@interface NMSOutgoingFileTransfer : NSObject <NMSObfuscatableDescriptionProviding> {

	NSURL* _fileURL;
	NSDictionary* _metadata;
	id _pbHeaderInfo;
	NSString* _idsIdentifier;
	unsigned _priority;
	NSDictionary* _persistentUserInfo;
	NSDictionary* _extraIDSOptions;
	NMSMessageCenter* _messageCenter;
	double _sendTimeout;

}

@property (nonatomic,retain) NSURL * fileURL;                                      //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) id pbHeaderInfo;                                      //@synthesize pbHeaderInfo=_pbHeaderInfo - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (assign,nonatomic) unsigned priority;                                    //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double sendTimeout;                                   //@synthesize sendTimeout=_sendTimeout - In the implementation block
@property (nonatomic,retain) NSDictionary * persistentUserInfo;                    //@synthesize persistentUserInfo=_persistentUserInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * extraIDSOptions;                       //@synthesize extraIDSOptions=_extraIDSOptions - In the implementation block
@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(NSURL *)fileURL;
-(void)setExtraIDSOptions:(NSDictionary *)arg1 ;
-(void)setPbHeaderInfo:(id)arg1 ;
-(NSDictionary *)extraIDSOptions;
-(id)CPObfuscatedDescriptionObject;
-(id)pbHeaderInfo;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(void)setSendTimeout:(double)arg1 ;
-(NSString *)idsIdentifier;
-(void)setPersistentUserInfo:(NSDictionary *)arg1 ;
-(NMSMessageCenter *)messageCenter;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(NSDictionary *)persistentUserInfo;
-(double)sendTimeout;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(void)setFileURL:(NSURL *)arg1 ;
@end

