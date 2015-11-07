/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMSObfuscatableDescriptionProviding.h>

@class NMSMessageCenter, NSString, NSURL, NSDictionary;

@interface NMSIncomingFileTransfer : NSObject <NMSObfuscatableDescriptionProviding> {

	NMSMessageCenter* _messageCenter;
	NSString* _idsIdentifier;
	NSURL* _fileURL;
	NSDictionary* _metadata;
	id _pbHeaderInfo;
	unsigned _priority;

}

@property (assign,nonatomic,__weak) NMSMessageCenter * messageCenter;              //@synthesize messageCenter=_messageCenter - In the implementation block
@property (nonatomic,copy) NSString * idsIdentifier;                               //@synthesize idsIdentifier=_idsIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                        //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                                //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) id pbHeaderInfo;                                      //@synthesize pbHeaderInfo=_pbHeaderInfo - In the implementation block
@property (assign,nonatomic) unsigned priority;                                    //@synthesize priority=_priority - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(unsigned)priority;
-(void)setPriority:(unsigned)arg1 ;
-(NSURL *)fileURL;
-(void)setPbHeaderInfo:(id)arg1 ;
-(id)CPObfuscatedDescriptionObject;
-(id)pbHeaderInfo;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)idsIdentifier;
-(NMSMessageCenter *)messageCenter;
-(void)setMessageCenter:(NMSMessageCenter *)arg1 ;
-(void)setIdsIdentifier:(NSString *)arg1 ;
-(NSDictionary *)metadata;
-(void)setFileURL:(NSURL *)arg1 ;
@end

