/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSDictionary, NSArray, NSData, NSMutableDictionary;

@interface CKDModifyRecordsURLRequest : CKDURLRequest {

	char _atomic;
	char _oplock;
	char _sendAllFields;
	NSDictionary* _recordIDsToDeleteToEtags;
	NSDictionary* _conflictLosersToResolveByRecordID;
	/*^block*/id _recordPostedBlock;
	NSArray* _records;
	NSArray* _recordIDsToDelete;
	NSData* _clientChangeTokenData;
	NSMutableDictionary* _recordIDByRequestID;
	NSMutableDictionary* _recordByRequestID;

}

@property (nonatomic,retain) NSDictionary * recordIDsToDeleteToEtags;                       //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictLosersToResolveByRecordID;              //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (assign,nonatomic) char atomic;                                                   //@synthesize atomic=_atomic - In the implementation block
@property (nonatomic,copy) id recordPostedBlock;                                            //@synthesize recordPostedBlock=_recordPostedBlock - In the implementation block
@property (nonatomic,retain) NSArray * records;                                             //@synthesize records=_records - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToDelete;                                   //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (assign,nonatomic) char oplock;                                                   //@synthesize oplock=_oplock - In the implementation block
@property (assign,nonatomic) char sendAllFields;                                            //@synthesize sendAllFields=_sendAllFields - In the implementation block
@property (nonatomic,retain) NSData * clientChangeTokenData;                                //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDByRequestID;                     //@synthesize recordIDByRequestID=_recordIDByRequestID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordByRequestID;                       //@synthesize recordByRequestID=_recordByRequestID - In the implementation block
-(NSArray *)records;
-(id)requestOperations;
-(int)isolationLevel;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(NSMutableDictionary *)recordIDByRequestID;
-(void)setRecordIDByRequestID:(NSMutableDictionary *)arg1 ;
-(NSArray *)recordIDsToDelete;
-(NSDictionary *)recordIDsToDeleteToEtags;
-(NSDictionary *)conflictLosersToResolveByRecordID;
-(NSData *)clientChangeTokenData;
-(char)atomic;
-(id)initWithRecordsToSave:(id)arg1 recordIDsToDelete:(id)arg2 oplock:(char)arg3 sendAllFields:(char)arg4 clientChangeTokenData:(id)arg5 ;
-(void)setAtomic:(char)arg1 ;
-(void)setRecordPostedBlock:(id)arg1 ;
-(void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg1 ;
-(void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg1 ;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(void)setClientChangeTokenData:(NSData *)arg1 ;
-(char)sendAllFields;
-(char)oplock;
-(NSMutableDictionary *)recordByRequestID;
-(id)recordPostedBlock;
-(void)setOplock:(char)arg1 ;
-(void)setSendAllFields:(char)arg1 ;
-(void)setRecordByRequestID:(NSMutableDictionary *)arg1 ;
-(void)setRecords:(NSArray *)arg1 ;
-(int)operationType;
@end

