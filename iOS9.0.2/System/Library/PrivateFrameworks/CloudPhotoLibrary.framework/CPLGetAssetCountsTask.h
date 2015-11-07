/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol CPLEngineTransportGetAssetCountsTask;
@interface CPLGetAssetCountsTask : CPLEngineSyncTask {

	id<CPLEngineTransportGetAssetCountsTask> _transportTask;

}
-(void)launch;
-(void)cancel;
-(void)resume;
-(void)pause;
-(id)taskIdentifier;
@end

