/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSDictionary, NSOperation, NSMutableDictionary;

@interface CKDPublishAssetsOperation : CKDDatabaseOperation {

	/*^block*/id _assetPublishedBlock;
	NSArray* _recordIDs;
	NSDictionary* _fileNamesByAssetFieldNames;
	unsigned _requestedTTL;
	unsigned _URLOptions;
	NSOperation* _fetchRecordsOperation;
	NSMutableDictionary* _fetchedRecordsByID;

}

@property (nonatomic,copy) id assetPublishedBlock;                                   //@synthesize assetPublishedBlock=_assetPublishedBlock - In the implementation block
@property (nonatomic,retain) NSArray * recordIDs;                                    //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * fileNamesByAssetFieldNames;              //@synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames - In the implementation block
@property (assign,nonatomic) unsigned requestedTTL;                                  //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned URLOptions;                                    //@synthesize URLOptions=_URLOptions - In the implementation block
@property (retain) NSOperation * fetchRecordsOperation;                              //@synthesize fetchRecordsOperation=_fetchRecordsOperation - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fetchedRecordsByID;               //@synthesize fetchedRecordsByID=_fetchedRecordsByID - In the implementation block
-(void)cancel;
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setAssetPublishedBlock:(id)arg1 ;
-(id)nameForState:(unsigned)arg1 ;
-(unsigned long long)activityStart;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(char)makeStateTransition;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)_fetchRecords;
-(NSArray *)recordIDs;
-(NSDictionary *)fileNamesByAssetFieldNames;
-(unsigned)requestedTTL;
-(unsigned)URLOptions;
-(void)_fetchPCSForRecords;
-(id)assetPublishedBlock;
-(id)_expandTemplateURL:(id)arg1 fieldValues:(id)arg2 ;
-(NSMutableDictionary *)fetchedRecordsByID;
-(void)_dispatchAssetURLsForRecord:(id)arg1 recordID:(id)arg2 pcs:(OpaquePCSShareProtectionRef)arg3 error:(id)arg4 ;
-(void)setRequestedTTL:(unsigned)arg1 ;
-(void)setURLOptions:(unsigned)arg1 ;
-(void)setFetchRecordsOperation:(NSOperation *)arg1 ;
-(NSOperation *)fetchRecordsOperation;
-(void)setFileNamesByAssetFieldNames:(NSDictionary *)arg1 ;
-(void)setFetchedRecordsByID:(NSMutableDictionary *)arg1 ;
@end

