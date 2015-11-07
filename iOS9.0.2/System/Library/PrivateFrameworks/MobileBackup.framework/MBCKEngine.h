/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/backupd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileBackup/MBEngine.h>

@class MBAggregateDictionary, MBCKProgressModel, MBCKRetryStrategy, NSError, MBCKSettingsContext, MBCKCache, MBServiceReachabilityMonitor, MBCKDevice, MBCKEncryptionManager;

@interface MBCKEngine : MBEngine {

	MBAggregateDictionary* _aggregateDictionary;
	MBCKProgressModel* _progressModel;
	MBCKRetryStrategy* _retryStrategy;
	MBCKRetryStrategy* _multistateRetryStrategy;
	char _isCancelled;
	char _isFinished;
	char _hasError;
	char _shouldAdvanceState;
	char _verifyProgressModel;
	NSError* _engineError;
	NSError* _injectedError;
	MBCKSettingsContext* _context;
	MBCKCache* _cache;
	MBServiceReachabilityMonitor* _reachability;
	MBCKDevice* _device;
	MBCKEncryptionManager* _encryptionManager;

}

@property (nonatomic,readonly) char isCancelled;                                         //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) char isFinished;                                            //@synthesize isFinished=_isFinished - In the implementation block
@property (assign,nonatomic) char hasError;                                              //@synthesize hasError=_hasError - In the implementation block
@property (nonatomic,retain) NSError * engineError;                                      //@synthesize engineError=_engineError - In the implementation block
@property (nonatomic,retain) NSError * injectedError;                                    //@synthesize injectedError=_injectedError - In the implementation block
@property (assign,nonatomic) char shouldAdvanceState;                                    //@synthesize shouldAdvanceState=_shouldAdvanceState - In the implementation block
@property (nonatomic,readonly) MBCKSettingsContext * context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) MBCKCache * cache;                                          //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) MBCKRetryStrategy * retryStrategy; 
@property (nonatomic,readonly) MBCKRetryStrategy * multistateRetryStrategy; 
@property (nonatomic,readonly) MBServiceReachabilityMonitor * reachability;              //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,readonly) MBCKProgressModel * progressModel; 
@property (nonatomic,retain) MBCKDevice * device;                                        //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) MBCKEncryptionManager * encryptionManager;                  //@synthesize encryptionManager=_encryptionManager - In the implementation block
@property (nonatomic,retain) MBAggregateDictionary * aggregateDictionary; 
@property (assign,nonatomic) char verifyProgressModel;                                   //@synthesize verifyProgressModel=_verifyProgressModel - In the implementation block
-(MBCKRetryStrategy *)retryStrategy;
-(MBCKProgressModel *)progressModel;
-(char)cleanupAfterError:(id)arg1 withError:(id*)arg2 ;
-(char)setupWithError:(id*)arg1 ;
-(char)shouldRetryAfterError:(id)arg1 ;
-(NSError *)engineError;
-(char)refreshCacheWithError:(id*)arg1 ;
-(void)runBlockOrFail:(/*^block*/id)arg1 ;
-(char)handleCancelation:(id*)arg1 ;
-(char)runWithError:(id*)arg1 ;
-(MBCKEncryptionManager *)encryptionManager;
-(MBCKRetryStrategy *)multistateRetryStrategy;
-(void)setEngineError:(NSError *)arg1 ;
-(MBAggregateDictionary *)aggregateDictionary;
-(void)setAggregateDictionary:(MBAggregateDictionary *)arg1 ;
-(void)setShouldAdvanceState:(char)arg1 ;
-(void)setVerifyProgressModel:(char)arg1 ;
-(char)verifyProgressModel;
-(char)_verifySnapshot:(id)arg1 shouldOutput:(char)arg2 withError:(id*)arg3 ;
-(char)_refreshSnapshot:(id)arg1 shouldSaveSnapshotToCache:(char)arg2 withError:(id*)arg3 ;
-(char)shouldAdvanceState;
-(NSError *)injectedError;
-(char)runWithQueue:(id)arg1 stateChange:(/*^block*/id)arg2 ;
-(char)lockWithError:(id*)arg1 ;
-(char)releaseLockWithError:(id*)arg1 ;
-(void)checkMemory;
-(void)setInjectedError:(NSError *)arg1 ;
-(void)setEncryptionManager:(MBCKEncryptionManager *)arg1 ;
-(void)cancel;
-(MBCKSettingsContext *)context;
-(char)isCancelled;
-(MBCKCache *)cache;
-(void)setCache:(MBCKCache *)arg1 ;
-(char)isFinished;
-(MBCKDevice *)device;
-(void)setIsFinished:(char)arg1 ;
-(void)makeStateTransition;
-(char)encrypted;
-(int)engineType;
-(MBServiceReachabilityMonitor *)reachability;
-(id)initWithSettingsContext:(id)arg1 debugContext:(id)arg2 domainManager:(id)arg3 ;
-(char)shouldCommitIfPossible;
-(void)setDevice:(MBCKDevice *)arg1 ;
-(void)setHasError:(char)arg1 ;
-(char)hasError;
@end

