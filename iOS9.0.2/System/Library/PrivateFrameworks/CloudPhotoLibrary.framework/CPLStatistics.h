/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>

@protocol OS_dispatch_queue;
@class NSURL, NSObject, NSString;

@interface CPLStatistics : NSObject <CPLEngineComponent> {

	NSURL* _logfileURL;
	SCD_Struct_CP6 _currentSnapshot;
	long _lastServedAggregationWindow;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _persistanceQueue;
	char _closed;
	char _statisticsEnabled;

}

@property (assign) char statisticsEnabled;                          //@synthesize statisticsEnabled=_statisticsEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)componentName;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeAndDeactivate:(char)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(/*^block*/id)attachToDownloadStartHandler:(/*^block*/id)arg1 forResource:(id)arg2 ;
-(/*^block*/id)attachToDownloadProgressHandler:(/*^block*/id)arg1 forResource:(id)arg2 ;
-(/*^block*/id)attachToDownloadCompletionHandler:(/*^block*/id)arg1 forResource:(id)arg2 ;
-(void)recordSyncErrorForState:(unsigned)arg1 ;
-(void)markAggregationWindowAsDirtyNow:(char)arg1 ;
-(void)recordDownloadingResource:(id)arg1 ;
-(void)recordDownloadingResource:(id)arg1 progress:(float)arg2 ;
-(void)recordDownloadedResource:(id)arg1 withPotentialError:(id)arg2 ;
-(void)recordUploadedResource:(id)arg1 withPotentialError:(id)arg2 ;
-(id)statisticsSnapshotSinceDate:(id)arg1 ;
-(/*^block*/id)attachToUploadRecordSaveHandler:(/*^block*/id)arg1 ;
-(void)recordUploadedBatchWithError:(id)arg1 ;
-(void)recordDownloadedBatchWithError:(id)arg1 ;
-(void)recordUploadingResource:(id)arg1 ;
-(void)recordUploadingResource:(id)arg1 progress:(float)arg2 ;
-(char)statisticsEnabled;
-(void)setStatisticsEnabled:(char)arg1 ;
@end

