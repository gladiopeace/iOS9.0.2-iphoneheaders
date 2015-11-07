/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/MZKeyValueStoreControllerDelegate.h>
#import <Podcasts/MTReachabilityObserver.h>

@class IMUniversalPlaybackPositionStore, MTUniversalPlaybackPositionDataSource, NSOperationQueue, IMKeyValueStoreController, NSString;

@interface MTSyncController : NSObject <MZKeyValueStoreControllerDelegate, MTReachabilityObserver> {

	double _lastOperation;
	char _uppSyncDirtyFlag;
	char _running;
	IMUniversalPlaybackPositionStore* _UPPStore;
	MTUniversalPlaybackPositionDataSource* _UPPDataSource;
	unsigned _backgroundTask;
	NSOperationQueue* _queue;
	IMKeyValueStoreController* _cloudSyncController;
	unsigned _uppSyncCount;
	unsigned _subscriptionSyncCount;
	unsigned _episodeSyncCount;
	unsigned _legacyEpisodeSyncCount;

}

@property (assign,nonatomic) char uppSyncDirtyFlag;                                              //@synthesize uppSyncDirtyFlag=_uppSyncDirtyFlag - In the implementation block
@property (assign,nonatomic) char syncDirtyFlag; 
@property (assign,nonatomic) char playlistSyncDirtyFlag; 
@property (assign,nonatomic) unsigned backgroundTask;                                            //@synthesize backgroundTask=_backgroundTask - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queue;                                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) IMUniversalPlaybackPositionStore * UPPStore;                        //@synthesize UPPStore=_UPPStore - In the implementation block
@property (nonatomic,retain) MTUniversalPlaybackPositionDataSource * UPPDataSource;              //@synthesize UPPDataSource=_UPPDataSource - In the implementation block
@property (nonatomic,retain) IMKeyValueStoreController * cloudSyncController;                    //@synthesize cloudSyncController=_cloudSyncController - In the implementation block
@property (assign,nonatomic) unsigned uppSyncCount;                                              //@synthesize uppSyncCount=_uppSyncCount - In the implementation block
@property (assign,nonatomic) unsigned subscriptionSyncCount;                                     //@synthesize subscriptionSyncCount=_subscriptionSyncCount - In the implementation block
@property (assign,nonatomic) unsigned episodeSyncCount;                                          //@synthesize episodeSyncCount=_episodeSyncCount - In the implementation block
@property (assign,nonatomic) unsigned legacyEpisodeSyncCount;                                    //@synthesize legacyEpisodeSyncCount=_legacyEpisodeSyncCount - In the implementation block
@property (assign,getter=isRunning,nonatomic) char running;                                      //@synthesize running=_running - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isSubscriptionSyncEnabled;
+(void)mergeArray:(id)arg1 fromArray:(id)arg2 properties:(id)arg3 lookupKey:(id)arg4 updateBlock:(/*^block*/id)arg5 insertBlock:(/*^block*/id)arg6 deleteBlock:(/*^block*/id)arg7 ;
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)applicationWilEnterForeground;
-(void)syncSubscriptions;
-(void)performUniversalPlaybackPositionSync;
-(void)setSyncDirtyFlag:(char)arg1 ;
-(void)setPlaylistSyncDirtyFlag:(char)arg1 ;
-(void)reachabilityChangedFrom:(char)arg1 to:(char)arg2 ;
-(char)keyValueStoreController:(id)arg1 transaction:(id)arg2 didFailWithError:(id)arg3 ;
-(void)keyValueStoreController:(id)arg1 transaction:(id)arg2 didCancelWithError:(id)arg3 ;
-(void)keyValueStoreController:(id)arg1 transactionDidFinish:(id)arg2 ;
-(void)resetToInitialState;
-(void)scheduleEpisodeStatePutWithFeedUrls:(id)arg1 ;
-(void)scheduleEpisodeStateGetWithFeedUrls:(id)arg1 ;
-(void)bagDidLoad:(id)arg1 ;
-(void)setUPPDataSource:(MTUniversalPlaybackPositionDataSource *)arg1 ;
-(void)setUPPStore:(IMUniversalPlaybackPositionStore *)arg1 ;
-(IMUniversalPlaybackPositionStore *)UPPStore;
-(MTUniversalPlaybackPositionDataSource *)UPPDataSource;
-(void)setUppSyncCount:(unsigned)arg1 ;
-(void)setSubscriptionSyncCount:(unsigned)arg1 ;
-(void)setEpisodeSyncCount:(unsigned)arg1 ;
-(void)setLegacyEpisodeSyncCount:(unsigned)arg1 ;
-(void)enableAssetDeletionIfPossible:(unsigned)arg1 ;
-(unsigned)backgroundTask;
-(char)queueContainsOperationType:(int)arg1 ;
-(char)canScheduleSyncRequest;
-(char)UPPEnabled;
-(unsigned)uppSyncCount;
-(char)isUserLoggedIn;
-(void)syncSubscriptions:(int)arg1 ;
-(void)syncPlaylists:(int)arg1 ;
-(char)syncDirtyFlag;
-(id)subscriptionKeys;
-(unsigned)subscriptionSyncCount;
-(char)playlistSyncDirtyFlag;
-(void)enableAssetDeletionIfPossible;
-(unsigned)episodeSyncCount;
-(id)expandFeedUrls:(id)arg1 ;
-(char)uppSyncDirtyFlag;
-(void)setUppSyncDirtyFlag:(char)arg1 ;
-(IMKeyValueStoreController *)cloudSyncController;
-(void)setCloudSyncController:(IMKeyValueStoreController *)arg1 ;
-(unsigned)legacyEpisodeSyncCount;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)start;
-(void)addOperation:(id)arg1 ;
-(char)isRunning;
-(void)setBackgroundTask:(unsigned)arg1 ;
-(void)setRunning:(char)arg1 ;
-(void)startBackgroundTask;
-(void)endBackgroundTask;
-(void)applicationDidEnterBackground;
-(void)operationFinished:(id)arg1 ;
@end

