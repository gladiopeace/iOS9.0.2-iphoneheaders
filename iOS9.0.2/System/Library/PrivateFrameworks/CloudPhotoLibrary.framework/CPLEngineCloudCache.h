/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@class NSString, CPLPlatformObject;

@interface CPLEngineCloudCache : CPLEngineStorage <CPLAbstractObject>

@property (readonly) char hasDoneAFirstSynchronization; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
-(char)resetWithError:(id*)arg1 ;
-(char)discardStagedChangesWithError:(id*)arg1 ;
-(char)resetSyncAnchorWithError:(id*)arg1 ;
-(id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(char)arg3 withError:(id*)arg4 ;
-(char)applyBatch:(id)arg1 isFinal:(char)arg2 withError:(id*)arg3 ;
-(char)setSyncAnchor:(id)arg1 error:(id*)arg2 ;
-(char)commitStagedChangesWithError:(id*)arg1 ;
-(id)recordWithIdentifier:(id)arg1 isFinal:(char)arg2 ;
-(char)updateRecord:(id)arg1 isFinal:(char)arg2 error:(id*)arg3 ;
-(id)resourceOfType:(unsigned)arg1 forRecordWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)hasRecordWithIdentifier:(id)arg1 ;
-(char)addRecord:(id)arg1 isFinal:(char)arg2 error:(id*)arg3 ;
-(char)deleteRecordWithIdentifier:(id)arg1 isFinal:(char)arg2 error:(id*)arg3 ;
-(char)remapAllRecordsWithPreviousIdentifier:(id)arg1 newIdentifier:(id)arg2 error:(id*)arg3 ;
-(char)hasDoneAFirstSynchronization;
-(char)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id*)arg3 ;
-(char)confirmAllRecordsWithError:(id*)arg1 ;
-(id)confirmedRecordWithIdentifier:(id)arg1 ;
-(id)recordsWithRelatedIdentifier:(id)arg1 isFinal:(char)arg2 ;
-(id)recordsOfClass:(Class)arg1 isFinal:(char)arg2 ;
-(void)getCommittedRecord:(id*)arg1 stagedRecord:(id*)arg2 forIdentifier:(id)arg3 ;
-(id)syncAnchor;
@end

