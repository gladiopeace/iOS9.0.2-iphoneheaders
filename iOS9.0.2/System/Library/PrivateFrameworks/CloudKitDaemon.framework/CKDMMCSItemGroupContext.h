/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:15 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/CKDCancelling.h>

@class CKDOperation, CKDMMCS, CKDMMCSItemGroup, NSMapTable;

@interface CKDMMCSItemGroupContext : NSObject <CKDCancelling> {

	CKDOperation* _operation;
	CKDMMCS* _MMCS;
	CKDMMCSItemGroup* _itemGroup;
	/*^block*/id _progressBlock;
	/*^block*/id _startBlock;
	/*^block*/id _completionBlock;
	NSMapTable* _MMCSItemsByItemID;

}

@property (assign,nonatomic,__weak) CKDOperation * operation;              //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) CKDMMCS * MMCS;                               //@synthesize MMCS=_MMCS - In the implementation block
@property (nonatomic,retain) CKDMMCSItemGroup * itemGroup;                 //@synthesize itemGroup=_itemGroup - In the implementation block
@property (nonatomic,copy) id progressBlock;                               //@synthesize progressBlock=_progressBlock - In the implementation block
@property (nonatomic,copy) id startBlock;                                  //@synthesize startBlock=_startBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                             //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSMapTable * MMCSItemsByItemID;               //@synthesize MMCSItemsByItemID=_MMCSItemsByItemID - In the implementation block
-(void)cancel;
-(CKDOperation *)operation;
-(void)setOperation:(CKDOperation *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)start;
-(CKDMMCS *)MMCS;
-(void)setMMCS:(CKDMMCS *)arg1 ;
-(id)initWithMMCS:(id)arg1 itemGroup:(id)arg2 operation:(id)arg3 progress:(/*^block*/id)arg4 start:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)didCompleteRequestWithError:(id)arg1 ;
-(char)_setupMMCSItemsWithError:(id*)arg1 ;
-(id)startBlock;
-(NSMapTable *)MMCSItemsByItemID;
-(CKDMMCSItemGroup *)itemGroup;
-(void)_startTrackingMMCSItems:(id)arg1 ;
-(void)_stopTrackingMMCSItems:(id)arg1 ;
-(void)_cleanupMMCSItems;
-(id)findTrackedMMCSItemByItemID:(unsigned long long)arg1 ;
-(void)didPutItemID:(unsigned long long)arg1 signature:(id)arg2 receipt:(id)arg3 error:(id)arg4 ;
-(void)updateProgressForItemID:(unsigned long long)arg1 state:(int)arg2 progress:(double)arg3 error:(id)arg4 ;
-(void)didGetItemID:(unsigned long long)arg1 signature:(id)arg2 path:(id)arg3 error:(id)arg4 ;
-(void)didPutSectionWithItemID:(unsigned long long)arg1 signature:(id)arg2 receipt:(id)arg3 error:(id)arg4 ;
-(void)didGetMetricsForRequest:(id)arg1 ;
-(MMCSItemReaderRef)getMMCSItemReaderForItemID:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setItemGroup:(CKDMMCSItemGroup *)arg1 ;
-(void)setStartBlock:(id)arg1 ;
-(void)setMMCSItemsByItemID:(NSMapTable *)arg1 ;
-(id)progressBlock;
-(void)setProgressBlock:(id)arg1 ;
@end

