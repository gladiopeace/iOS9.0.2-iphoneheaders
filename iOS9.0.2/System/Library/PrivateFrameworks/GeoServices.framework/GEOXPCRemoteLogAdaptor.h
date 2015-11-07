/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOBaseLogAdaptor.h>
#import <libobjc.A.dylib/PBRequesterDelegate.h>

@protocol OS_dispatch_queue;
@class NSURL, NSString, NSLock, GEOLogMessageCacheManager, GEORequester, NSObject;

@interface GEOXPCRemoteLogAdaptor : GEOBaseLogAdaptor <PBRequesterDelegate> {

	NSURL* _remoteURL;
	NSString* _debugRequestName;
	NSLock* _xpcActivityInfoLock;
	NSString* _logMessageCacheFilePath;
	GEOLogMessageCacheManager* _logMessageCacheManager;
	GEORequester* _logMessageCollectionRequester;
	NSLock* _logMessageCollectionRequesterLock;
	NSObject*<OS_dispatch_queue> _logMessageSendQueue;

}

@property (nonatomic,retain) NSURL * remoteURL;                              //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,retain) NSString * debugRequestName;                    //@synthesize debugRequestName=_debugRequestName - In the implementation block
@property (assign,nonatomic) long long xpcActivityTriggerCount; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)_deviceLocking;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requesterDidFinish:(id)arg1 ;
-(void)setDebugRequestName:(NSString *)arg1 ;
-(NSString *)debugRequestName;
-(void)_sendLogMessageRequest:(id)arg1 ;
-(void)incrementXpcActivityTriggerCount;
-(void)queueLogMessage:(id)arg1 ;
-(void)_purgeExpiredLogMessagesFromCache;
-(void)_unregisterXPCActivityTimer;
-(void)_purgeAndSendLogMessages;
-(id)initWithRemoteURL:(id)arg1 debugRequestName:(id)arg2 supportedTypes:(id)arg3 supportedSubTypes:(id)arg4 ;
-(void)_registerXPCActivityTimer;
-(void)_sendNextLogMessageChunk;
-(void)flushLogs;
-(void)_deviceUnlocked;
-(void)_cleanupLogMessageCollectionRequester;
-(void)_beginSendingLogMessageChunks;
-(void)_queueNextLogMessagesChunkForSending;
-(void)_requesterDidCompleteHandler:(id)arg1 ;
-(void)_initializeAdaptor;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(long long)_sizeOfLogMessageRequest:(id)arg1 ;
-(char)_isLogMessageCollectionRequesterPending;
-(void)setXpcActivityTriggerCount:(long long)arg1 ;
-(NSURL *)remoteURL;
-(long long)xpcActivityTriggerCount;
@end

