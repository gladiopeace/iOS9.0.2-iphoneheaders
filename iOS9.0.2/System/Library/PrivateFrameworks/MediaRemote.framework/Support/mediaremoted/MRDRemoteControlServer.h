/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <mediaremoted/mediaremoted-Structs.h>
#import <mediaremoted/MRDXPCMessageHandling.h>

@protocol OS_dispatch_queue;
@class NSObject, TUCallCenter, NSMutableDictionary, NSTimer, MRDNowPlayingDataSource, NSString;

@interface MRDRemoteControlServer : NSObject <MRDXPCMessageHandling> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	TUCallCenter* _callCenter;
	NSMutableDictionary* _commandQueuesForDisplayIDs;
	NSMutableDictionary* _remoteControlContexts;
	NSTimer* _queuedCommandsTimeoutTimer;
	MRDNowPlayingDataSource* _nowPlayingDataSource;

}

@property (nonatomic,readonly) MRDNowPlayingDataSource * nowPlayingDataSource;              //@synthesize nowPlayingDataSource=_nowPlayingDataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_clientCanBeNowPlayingAppNotification:(id)arg1 ;
-(id)initWithNowPlayingDataSource:(id)arg1 ;
-(void)_sendLocalCommand:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_sendExternalCommand:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_handleSendCommandMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleGetSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleSetSupportedCommandsMessage:(id)arg1 fromClient:(id)arg2 ;
-(id)_clientForSupportedCommandsMessage:(id)arg1 ;
-(void)_notifySupportedCommandsDidChangeForOrigin:(MROriginRef)arg1 ;
-(void)_sendQueuedCommandsForDestinationClient:(id)arg1 ;
-(char)_shouldIgnoreCommand:(id)arg1 ;
-(id)_resolvedLocalDeviceDestinationAppDisplayIdentifierForCommand:(id)arg1 ;
-(id)_destinationClientForRemoteControlCommand:(id)arg1 ;
-(void)_sendRemoteControlCommand:(id)arg1 toDestinationClient:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_enqueueCommand:(id)arg1 forUnavailableApplicationWithDisplayID:(id)arg2 ;
-(void)_clearQueuedCommandsForApplicationWithDisplayID:(id)arg1 ;
-(id)_remoteControlContextForCommand:(id)arg1 ;
-(id)_contextuallyAwareDestinationAppDisplayIDForCommand:(id)arg1 ;
-(void)handleXPCMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)sendRemoteControlCommand:(id)arg1 ;
-(void)clearContextsForClient:(id)arg1 ;
-(MRDNowPlayingDataSource *)nowPlayingDataSource;
-(void)dealloc;
-(id)init;
@end

