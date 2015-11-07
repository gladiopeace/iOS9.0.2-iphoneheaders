/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLResourceTransferTask.h>

@protocol CPLEngineTransportTask;
@class CPLResource, NSString;

@interface CPLEngineResourceDownloadTask : CPLResourceTransferTask {

	char _backgroundTask;
	char _cancelledByEngine;
	char _wantsTransportTask;
	char _transportOwnsTask;
	CPLResource* _cloudResource;
	unsigned _taskIdentifierForQueue;
	NSString* _clientBundleID;
	id<CPLEngineTransportTask> _transportTask;
	/*^block*/id _launchHandler;
	/*^block*/id _cancelHandler;
	/*^block*/id _didStartHandler;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) CPLResource * cloudResource;                                    //@synthesize cloudResource=_cloudResource - In the implementation block
@property (assign,nonatomic) unsigned taskIdentifierForQueue;                                //@synthesize taskIdentifierForQueue=_taskIdentifierForQueue - In the implementation block
@property (nonatomic,retain) NSString * clientBundleID;                                      //@synthesize clientBundleID=_clientBundleID - In the implementation block
@property (assign,getter=isBackgroundTask,nonatomic) char backgroundTask;                    //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (assign,getter=isCancelledByEngine,nonatomic) char cancelledByEngine;              //@synthesize cancelledByEngine=_cancelledByEngine - In the implementation block
@property (assign,nonatomic) char wantsTransportTask;                                        //@synthesize wantsTransportTask=_wantsTransportTask - In the implementation block
@property (assign,nonatomic) char transportOwnsTask;                                         //@synthesize transportOwnsTask=_transportOwnsTask - In the implementation block
@property (nonatomic,retain) id<CPLEngineTransportTask> transportTask;                       //@synthesize transportTask=_transportTask - In the implementation block
@property (nonatomic,readonly) id launchHandler;                                             //@synthesize launchHandler=_launchHandler - In the implementation block
@property (nonatomic,readonly) id cancelHandler;                                             //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (nonatomic,readonly) id didStartHandler;                                           //@synthesize didStartHandler=_didStartHandler - In the implementation block
@property (nonatomic,readonly) id progressHandler;                                           //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,readonly) id completionHandler;                                         //@synthesize completionHandler=_completionHandler - In the implementation block
-(void)launch;
-(id)didStartHandler;
-(id)progressHandler;
-(id)completionHandler;
-(void)setClientBundleID:(NSString *)arg1 ;
-(id<CPLEngineTransportTask>)transportTask;
-(id)initWithLaunchHandler:(/*^block*/id)arg1 cancelHandler:(/*^block*/id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setCloudResource:(CPLResource *)arg1 ;
-(void)setTransportTask:(id<CPLEngineTransportTask>)arg1 ;
-(void)setTaskIdentifierForQueue:(unsigned)arg1 ;
-(void)setBackgroundTask:(char)arg1 ;
-(char)wantsTransportTask;
-(void)setWantsTransportTask:(char)arg1 ;
-(CPLResource *)cloudResource;
-(NSString *)clientBundleID;
-(char)isBackgroundTask;
-(char)transportOwnsTask;
-(void)setTransportOwnsTask:(char)arg1 ;
-(void)setCancelledByEngine:(char)arg1 ;
-(char)isCancelledByEngine;
-(unsigned)taskIdentifierForQueue;
-(id)launchHandler;
-(id)cancelHandler;
-(void)cancelTask;
@end

