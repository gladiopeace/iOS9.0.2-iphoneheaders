/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MPPlayableContentDataSource, MPPlayableContentDelegate;
@class NSMutableSet, NSObject, NSOperationQueue, AVExternalDevice, MPPlayableContentManagerContext;

@interface MPPlayableContentManager : NSObject {

	NSMutableSet* _mutatedContentItems;
	NSMutableSet* _contentItemIdentifiersSentToMediaRemote;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSOperationQueue* _artworkUpdateQueue;
	char _coalescingUpdates;
	char _scheduledSupportedAPIsChange;
	AVExternalDevice* _externalDevice;
	id<MPPlayableContentDataSource> _dataSource;
	id<MPPlayableContentDelegate> _delegate;
	MPPlayableContentManagerContext* _context;

}

@property (assign,nonatomic,__weak) id<MPPlayableContentDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<MPPlayableContentDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPPlayableContentManagerContext * context;                      //@synthesize context=_context - In the implementation block
+(id)sharedContentManager;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(char)_areContentLimitsEnforced;
-(char)_musicListsLimited;
-(void)_setupMediaRemoteEndpoint;
-(void)_tearDownMediaRemoteEndpoint;
-(void)_scheduleUpdateSupportedAPIs;
-(void)_pushContentItemsUpdate;
-(char)_onQueueContentItemWasSentToMediaRemote:(id)arg1 ;
-(void)_contentItemChangedNotification:(id)arg1 ;
-(void)_limitedUIChanged:(id)arg1 ;
-(void)_browsableContentEndpointChanged:(id)arg1 ;
-(void)_updateSupportedAPIs;
-(void)_enqueueArtworkUpdate:(id)arg1 forContentItem:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_handleBeginLoadingCompletedAtIndexPath:(id)arg1 withError:(id)arg2 ;
-(void)_handlePlaybackInitializationCompletedWithContext:(id)arg1 error:(id)arg2 ;
-(char)_contentItemWasSentToMediaRemote:(id)arg1 ;
-(void)_markContentItemsAsSentToMediaRemote:(id)arg1 ;
-(void)setDataSource:(id<MPPlayableContentDataSource>)arg1 ;
-(void)setDelegate:(id<MPPlayableContentDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(id<MPPlayableContentDataSource>)dataSource;
-(id<MPPlayableContentDelegate>)delegate;
-(id)_init;
-(MPPlayableContentManagerContext *)context;
-(void)beginUpdates;
-(void)endUpdates;
-(void)setContext:(MPPlayableContentManagerContext *)arg1 ;
@end

