/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/Support/fud
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <fud/FudStateMachineDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class FudStorage, NSMutableDictionary, NSObject, NSString;

@interface FudIpcDispatch : NSObject <FudStateMachineDelegate> {

	FudStorage* storage;
	NSMutableDictionary* pendingDeviceAttachedEvents;
	NSObject*<OS_dispatch_queue> workQueue;
	NSMutableDictionary* eventFlags;
	NSObject*<OS_dispatch_semaphore> criticalSectionSemaphore;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isStateMachineBusyInExclusionGroup:(id)arg1 ;
-(char)sendDeviceClassAttached:(id)arg1 toClient:(id)arg2 ;
-(char)isEventStateless:(id)arg1 ;
-(char)dispatchStatelessEvent:(id)arg1 ;
-(char)isEventQueryRequest:(id)arg1 ;
-(char)dispatchQueryEvent:(id)arg1 ;
-(char)dispatchStateMachineEvent:(id)arg1 ;
-(int)getCommandForState:(int)arg1 ;
-(char)registerClientWithEvent:(id)arg1 error:(id*)arg2 ;
-(char)unregisterClientWithEvent:(id)arg1 error:(id*)arg2 ;
-(char)setupClientSessionWithEvent:(id)arg1 error:(id*)arg2 ;
-(char)notifyAccessoryAttachedWithEvent:(id)arg1 ;
-(char)setLastRemoteFindWithEvent:(id)arg1 ;
-(char)sendReplyToDictionary:(id)arg1 forCommand:(int)arg2 withStatus:(char)arg3 withError:(id)arg4 ;
-(char)isStateMachineForFilterAcceptingNewStreamEvents:(id)arg1 ;
-(char)shouldBlockCriticalSectionDuringStep:(int)arg1 ;
-(void)aquireCriticalSectionLock;
-(void)disableStreamEventsForStateMachine:(id)arg1 ;
-(void)enableStreamEventsForStateMachine:(id)arg1 ;
-(char)shouldUnblockCriticalSectionAfterStep:(int)arg1 wasSuccessful:(char)arg2 ;
-(void)releaseCriticalSectionLock;
-(id)getPluginWithName:(id)arg1 forFilter:(id)arg2 delegate:(id)arg3 info:(id*)arg4 options:(id)arg5 ;
-(id)getStorage;
-(void)stepWillBegin:(int)arg1 stateMachine:(id)arg2 ;
-(void)stepComplete:(int)arg1 stateMachine:(id)arg2 status:(char)arg3 error:(id)arg4 info:(id)arg5 ;
-(void)stepProgress:(int)arg1 stateMachine:(id)arg2 progress:(double)arg3 overallProgress:(double)arg4 ;
-(void)accessoryDisconnected:(id)arg1 error:(id)arg2 ;
-(char)isStateMachineAcceptingNewStreamEvents:(id)arg1 ;
-(void)dealloc;
-(id)initWithStorage:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(char)dispatchEvent:(id)arg1 ;
@end

