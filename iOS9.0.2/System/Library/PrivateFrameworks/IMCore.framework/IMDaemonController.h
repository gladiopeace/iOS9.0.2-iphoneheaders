/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol IMRemoteDaemonProtocol, OS_dispatch_queue;
#import <IMCore/IMCore-Structs.h>
@class IMRemoteObject, NSMutableDictionary, IMLocalObject, IMDaemonListener, NSMutableArray, NSProtocolChecker, NSString, NSObject, NSRecursiveLock, NSArray, NSLock;

@interface IMDaemonController : NSObject {

	id _delegate;
	IMRemoteObject*<IMRemoteDaemonProtocol> _remoteObject;
	NSMutableDictionary* _listenerMap;
	IMLocalObject* _localObject;
	IMDaemonListener* _daemonListener;
	NSMutableArray* _services;
	NSProtocolChecker* _protocol;
	NSString* _listenerID;
	NSObject*<OS_dispatch_queue> _listenerLockQueue;
	NSObject*<OS_dispatch_queue> _remoteDaemonLockQueue;
	NSObject*<OS_dispatch_queue> _localObjectLockQueue;
	NSObject*<OS_dispatch_queue> _remoteMessageQueue;
	NSRecursiveLock* _connectionLock;
	NSArray* _servicesToAllow;
	NSArray* _servicesToDeny;
	CFRunLoopSourceRef _runLoopSource;
	NSLock* _blockingLock;
	char _hasCheckedForDaemon;
	char _preventReconnect;
	char _inBlockingConnect;
	char _acquiringDaemonConnection;
	char _autoReconnect;
	char _blocksConnectionAtResume;
	char _hasBeenSuspended;
	unsigned _gMyFZListenerCapabilities;
	unsigned _cachedCapabilities;
	unsigned _lastUpdatedCapabilities;

}

@property (nonatomic,readonly) IMDaemonListener * listener;                                                    //@synthesize daemonListener=_daemonListener - In the implementation block
@property (nonatomic,readonly) char isConnected; 
@property (nonatomic,readonly) unsigned capabilities; 
@property (setter=_setServicesToAllow:,retain) NSArray * _servicesToAllow;                                     //@synthesize servicesToAllow=_servicesToAllow - In the implementation block
@property (setter=_setServicesToDeny:,retain) NSArray * _servicesToDeny;                                       //@synthesize servicesToDeny=_servicesToDeny - In the implementation block
@property (setter=_setListenerID:,nonatomic,retain) NSString * _listenerID;                                    //@synthesize listenerID=_listenerID - In the implementation block
@property (assign,nonatomic) id delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=_setBlocksConnectionAtResume:,nonatomic) char _blocksConnectionAtResume;              //@synthesize blocksConnectionAtResume=_blocksConnectionAtResume - In the implementation block
@property (nonatomic,readonly) char isConnecting; 
@property (setter=__setCapabilities:) unsigned _capabilities;                                                  //@synthesize gMyFZListenerCapabilities=_gMyFZListenerCapabilities - In the implementation block
@property (setter=_setAutoReconnect:) char _autoReconnect;                                                     //@synthesize autoReconnect=_autoReconnect - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _remoteMessageQueue;                               //@synthesize remoteMessageQueue=_remoteMessageQueue - In the implementation block
+(id)sharedInstance;
+(id)sharedController;
+(void)_blockUntilSendQueueIsEmpty;
+(char)_applicationWillTerminate;
+(void)_setApplicationWillTerminate;
-(char)isConnecting;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(unsigned)_capabilities;
-(IMDaemonListener *)listener;
-(char)isConnected;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationDidResume;
-(void)blockUntilConnected;
-(char)connectToDaemonWithLaunch:(char)arg1 ;
-(void)_setCapabilities:(unsigned)arg1 ;
-(unsigned)capabilitiesForListenerID:(id)arg1 ;
-(void)sendABInformationToDaemon;
-(NSArray *)_servicesToAllow;
-(NSArray *)_servicesToDeny;
-(void)_noteSetupComplete;
-(void)_setAutoReconnect:(char)arg1 ;
-(void)_addressBookChanged:(id)arg1 ;
-(void)__setCapabilities:(unsigned)arg1 ;
-(void)_localObjectCleanup;
-(void)_remoteObjectCleanup;
-(void)_disconnectFromDaemonWithForce:(char)arg1 ;
-(char)_blocksConnectionAtResume;
-(char)__isLocalObjectValidOnQueue:(id)arg1 ;
-(char)__isRemoteObjectValidOnQueue:(id)arg1 ;
-(char)remoteObjectExists;
-(void)remoteObjectDiedNotification:(id)arg1 ;
-(void)localObjectDiedNotification:(id)arg1 ;
-(void)_blockUntilSendQueueIsEmpty;
-(char)localObjectExists;
-(char)connectToDaemon;
-(char)_autoReconnect;
-(char)_makeConnectionWithLaunch:(char)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_connectToDaemonWithLaunch:(char)arg1 capabilities:(unsigned)arg2 ;
-(char)connectToDaemonWithLaunch:(char)arg1 capabilities:(unsigned)arg2 blockUntilConnected:(char)arg3 ;
-(char)hasListenerForID:(id)arg1 ;
-(char)setCapabilities:(unsigned)arg1 forListenerID:(id)arg2 ;
-(void)_listenerSetUpdated;
-(void)setMyStatus:(unsigned)arg1 message:(id)arg2 forAccount:(id)arg3 ;
-(double)_connectionTimeout;
-(void)_agentDidLaunchNotification:(id)arg1 ;
-(void)_handleDaemonException:(id)arg1 ;
-(void)disconnectFromDaemonWithForce:(char)arg1 ;
-(void)disconnectFromDaemon;
-(char)addListenerID:(id)arg1 capabilities:(unsigned)arg2 ;
-(char)removeListenerID:(id)arg1 ;
-(id)_remoteObject;
-(void)setMyPicture:(id)arg1 smallPictureData:(id)arg2 ;
-(void)setMyProfile:(id)arg1 ;
-(void)setMyStatus:(unsigned)arg1 message:(id)arg2 ;
-(void)_setBlocksConnectionAtResume:(char)arg1 ;
-(char)_acquiringDaemonConnection;
-(void)listener:(id)arg1 setListenerCapabilities:(unsigned)arg2 ;
-(void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3 ;
-(void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3 ;
-(void)setDaemonTerminatesWithoutListeners:(char)arg1 ;
-(void)setDaemonLogsOutWithoutStatusListeners:(char)arg1 ;
-(NSString *)_listenerID;
-(void)_setListenerID:(id)arg1 ;
-(void)_setServicesToAllow:(id)arg1 ;
-(void)_setServicesToDeny:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)_remoteMessageQueue;
-(unsigned)capabilities;
@end

