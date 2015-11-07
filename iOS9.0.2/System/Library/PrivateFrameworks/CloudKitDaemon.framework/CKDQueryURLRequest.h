/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableArray, CKQuery, NSData, CKRecordZoneID, NSArray;

@interface CKDQueryURLRequest : CKDURLRequest {

	NSMutableArray* _queryResponses;
	char _shouldFetchAssetContent;
	CKQuery* _query;
	NSData* _cursor;
	unsigned _limit;
	CKRecordZoneID* _zoneID;
	NSArray* _requestedFields;
	NSData* _resultsCursor;

}

@property (nonatomic,retain) CKQuery * query;                           //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSData * cursor;                           //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) unsigned limit;                            //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                   //@synthesize zoneID=_zoneID - In the implementation block
@property (nonatomic,retain) NSArray * requestedFields;                 //@synthesize requestedFields=_requestedFields - In the implementation block
@property (assign,nonatomic) char shouldFetchAssetContent;              //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (nonatomic,retain) NSArray * queryResponses;                  //@synthesize queryResponses=_queryResponses - In the implementation block
@property (nonatomic,retain) NSData * resultsCursor;                    //@synthesize resultsCursor=_resultsCursor - In the implementation block
-(CKQuery *)query;
-(void)setQuery:(CKQuery *)arg1 ;
-(NSData *)cursor;
-(void)setCursor:(NSData *)arg1 ;
-(CKRecordZoneID *)zoneID;
-(void)setRequestedFields:(NSArray *)arg1 ;
-(NSArray *)requestedFields;
-(char)allowsAnonymousAccount;
-(void)setShouldFetchAssetContent:(char)arg1 ;
-(char)shouldFetchAssetContent;
-(NSArray *)queryResponses;
-(NSData *)resultsCursor;
-(void)setResultsCursor:(NSData *)arg1 ;
-(id)initWithQuery:(id)arg1 cursor:(id)arg2 limit:(unsigned)arg3 requestedFields:(id)arg4 zoneID:(id)arg5 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(id)requestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)setQueryResponses:(NSArray *)arg1 ;
-(void)setLimit:(unsigned)arg1 ;
-(unsigned)limit;
-(int)operationType;
@end

