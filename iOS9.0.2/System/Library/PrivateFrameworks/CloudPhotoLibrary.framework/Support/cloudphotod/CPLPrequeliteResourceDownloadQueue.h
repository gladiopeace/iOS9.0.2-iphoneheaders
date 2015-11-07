/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:12 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineResourceDownloadQueueImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceDownloadQueue : CPLPrequeliteStorage <CPLEngineResourceDownloadQueueImplementation> {

	CPLPrequeliteVariable* _nextTaskIdentifier;
	CPLPrequeliteVariable* _nextPosition;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(char)_getNextPosition:(unsigned*)arg1 andBumpWithError:(id*)arg2 ;
-(char)_enqueueResource:(id)arg1 error:(id*)arg2 ;
-(char)_deleteEnqueuedResource:(id)arg1 error:(id*)arg2 ;
-(id)_enqueuedResourceForResource:(id)arg1 ;
-(id)status;
-(char)openWithError:(id*)arg1 ;
-(char)resetWithError:(id*)arg1 ;
-(char)removeAllBackgroundDownloadTasksForItemWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(unsigned)newTaskIdentifier;
-(char)enqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned)arg2 error:(id*)arg3 ;
-(char)dequeueNextBackgroundDownloadTasks:(unsigned)arg1 resourceType:(unsigned)arg2 localResources:(id*)arg3 taskIdentifiers:(id*)arg4 error:(id*)arg5 ;
-(char)removeBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned)arg2 error:(id*)arg3 ;
-(char)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 taskIdentifier:(unsigned)arg2 error:(id*)arg3 ;
-(char)reenqueueBackgroundDownloadTaskForResource:(id)arg1 taskIdentifier:(unsigned)arg2 bumpRetryCount:(char)arg3 didDiscard:(char*)arg4 error:(id*)arg5 ;
-(char)dequeueNextBackgroundDownloadTask:(id*)arg1 resourceType:(unsigned)arg2 taskIdentifier:(unsigned*)arg3 error:(id*)arg4 ;
-(char)resetDequeuedBackgroundDownloadTasksWithError:(id*)arg1 ;
-(id)enumeratorForDownloadedResources;
-(unsigned)countOfQueuedDownloadTasks;
-(id)initWithAbstractObject:(id)arg1 ;
@end

