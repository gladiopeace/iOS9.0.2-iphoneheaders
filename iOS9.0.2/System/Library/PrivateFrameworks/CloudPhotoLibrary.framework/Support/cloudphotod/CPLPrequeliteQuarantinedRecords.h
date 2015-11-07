/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineQuarantinedRecordsImplementation.h>

@class NSString;

@interface CPLPrequeliteQuarantinedRecords : CPLPrequeliteStorage <CPLEngineQuarantinedRecordsImplementation>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(char)_createStorage;
-(char)resetWithError:(id*)arg1 ;
-(char)addQuarantinedRecordsWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)removeQuarantinedRecordsWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)isRecordWithIdentifierQuarantined:(id)arg1 ;
@end

