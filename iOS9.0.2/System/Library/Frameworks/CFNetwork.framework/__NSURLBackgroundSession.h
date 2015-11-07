/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/__NSCFURLSession.h>
#import <libobjc.A.dylib/NDBackgroundSessionClient.h>
#import <libobjc.A.dylib/NSURLSessionSubclass.h>

@protocol NDBackgroundSessionProtocol, OS_dispatch_queue;
@class NSXPCConnection, NSMutableDictionary, NSMutableArray, NSObject, NSString, NSURL, NSError;

@interface __NSURLBackgroundSession : __NSCFURLSession <NDBackgroundSessionClient, NSURLSessionSubclass> {

	unsigned _identSeed;
	id<NDBackgroundSessionProtocol> _remoteSession;
	NSXPCConnection* _xpcConn;
	NSMutableDictionary* _tasks;
	NSMutableArray* _taskIDsToFailOnReconnection;
	NSObject*<OS_dispatch_queue> _invalidateQueue;
	/*^block*/id _invalidateCallback;
	NSString* _appWakeUUID;
	NSURL* _downloadDirectory;
	char _isPrivileged;
	char _isInvalid;
	char _companionAvailable;
	unsigned _wifiRetainCount;
	NSError* _invalidationError;
	char _tryToReconnect;

}

@property (getter=isCompanionAvailable) char companionAvailable;              //@synthesize companionAvailable=_companionAvailable - In the implementation block
@property (copy) NSString * appWakeUUID;                                      //@synthesize appWakeUUID=_appWakeUUID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_onqueue_invokeInvalidateCallback;
-(id)copyTasks;
-(id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
-(void)_onqueue_invalidateSession:(char)arg1 withQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)dataTaskForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)downloadTaskForRequest:(id)arg1 downloadFilePath:(id)arg2 resumeData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_AVAssetDownloadTaskForURL:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(id)AVAssetDownloadTaskForURLAsset:(id)arg1 destinationURL:(id)arg2 options:(id)arg3 ;
-(void)_onqueue_flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_completeInvalidation:(char)arg1 ;
-(void)_onqueue_resetStorageWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onqueue_getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)backgroundDownloadsDirectory;
-(void)moveFileForResumeData:(id)arg1 fromDirectory:(id)arg2 toDirectory:(id)arg3 ;
-(id)backgroundResumeDataFromLegacyClientResumeData:(id)arg1 ;
-(void)moveFileToBackgroundDownloadsDirectoryForLocalResumeData:(id)arg1 ;
-(id)cachesDirectory;
-(void)setupXPCConnection;
-(void)setupBackgroundSession;
-(void)sendInvalidationRequest;
-(void)cleanupConfig;
-(void)wentToBackground:(id)arg1 ;
-(void)cameIntoForeground:(id)arg1 ;
-(void)recreateExistingTasks:(id)arg1 ;
-(void)failDisconnectedTasks;
-(id)taskForIdentifier:(unsigned)arg1 ;
-(void)_onqueue_retryDataTaskWithIdentifier:(unsigned)arg1 ;
-(id)disconnectedErrorWithURL:(id)arg1 ;
-(id)_onqueue_dataTaskForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performBlockOnQueueAndRethrowExceptions:(/*^block*/id)arg1 ;
-(void)validateSerializabilityForRequest:(id)arg1 completion:(id)arg2 ;
-(id)_onqueue_dummyTaskForClass:(Class)arg1 withRequest:(id)arg2 error:(id)arg3 ;
-(id)requestWithCookiesApplied:(id)arg1 ;
-(id)placeholderErrorWithURL:(id)arg1 ;
-(id)_onqueue_uploadTaskForRequest:(id)arg1 uploadFile:(id)arg2 bodyData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)validateUploadFile:(id)arg1 ;
-(id)_onqueue_downloadTaskForRequest:(id)arg1 resumeData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)backgroundResumeDataFromClientResumeData:(id)arg1 ;
-(id)_downloadTaskForResumeData:(id)arg1 ;
-(id)_downloadTaskForRequest:(id)arg1 ;
-(id)_onqueue_AVAssetDownloadTaskForURLAsset:(id)arg1 URL:(id)arg2 destinationURL:(id)arg3 options:(id)arg4 ;
-(id)connectionLostErrorWithURL:(id)arg1 ;
-(void)setCookiesFromResponse:(id)arg1 forOriginalRequest:(id)arg2 ;
-(NSString *)appWakeUUID;
-(void)setAppWakeUUID:(NSString *)arg1 ;
-(void)backgroundTaskDidResume:(unsigned)arg1 ;
-(void)backgroundTaskDidSuspend:(unsigned)arg1 ;
-(void)backgroundTask:(unsigned)arg1 didReceiveChallenge:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)backgroundTask:(unsigned)arg1 willPerformHTTPRedirection:(id)arg2 withNewRequest:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)backgroundTask:(unsigned)arg1 _willSendRequestForEstablishedConnection:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)backgroundTaskHasConnectionWaiting:(unsigned)arg1 ;
-(void)backgroundTask:(unsigned)arg1 hasConnectionWaitingWithReason:(long long)arg2 ;
-(void)backgroundTask:(unsigned)arg1 hasConnectionWaitingWithError:(id)arg2 ;
-(void)backgroundTask:(unsigned)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3 ;
-(void)backgroundTask:(unsigned)arg1 didReceiveResponse:(id)arg2 timingData:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)backgroundTask:(unsigned)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4 ;
-(void)backgroundTask:(unsigned)arg1 needNewBodyStream:(char)arg2 withReply:(/*^block*/id)arg3 ;
-(void)backgroundTask:(unsigned)arg1 didCompleteWithError:(id)arg2 timingData:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)backgroundDataTask:(unsigned)arg1 didReceiveData:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)backgroundTask:(unsigned)arg1 getAuthHeadersForResponse:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)backgroundDataTaskDidBecomeDownloadTask:(unsigned)arg1 ;
-(void)willRetryBackgroundDataTask:(unsigned)arg1 withError:(id)arg2 timingData:(id)arg3 ;
-(void)backgroundDownloadTask:(unsigned)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)backgroundDownloadTask:(unsigned)arg1 didResumeAtOffset:(long long)arg2 expectedTotalBytes:(long long)arg3 ;
-(void)backgroundDownloadTask:(unsigned)arg1 didFinishDownloadingToURL:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)openFileAtPath:(id)arg1 mode:(int)arg2 withReply:(/*^block*/id)arg3 ;
-(void)backgroundAVAssetDownloadTaskDidUpdateProgress:(unsigned)arg1 totalBytesWritten:(unsigned long long)arg2 totalBytesExpectedToWrite:(unsigned long long)arg3 ;
-(void)backgroundAVAssetDownloadTask:(unsigned)arg1 didReceiveDownloadToken:(unsigned long long)arg2 ;
-(void)backgroundAVAssetDownloadTask:(unsigned)arg1 didLoadTimeRange:(id)arg2 totalTimeRangesLoaded:(id)arg3 timeRangeExpectedToLoad:(id)arg4 ;
-(void)backgroundAVAssetDownloadTask:(unsigned)arg1 didResolveMediaSelectionProperyList:(id)arg2 ;
-(void)backgroundSessionDidStartAppWake:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)credStorage_getInitialCredentialDictionariesWithReply:(/*^block*/id)arg1 ;
-(void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)credStorage_allCredentialsWithReply:(/*^block*/id)arg1 ;
-(void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2 ;
-(void)moveFileToTempForBackgroundResumeData:(id)arg1 ;
-(void)_onqueue_disavowTask:(id)arg1 ;
-(char)isCompanionAvailable;
-(void)setCompanionAvailable:(char)arg1 ;
-(void)dealloc;
@end

