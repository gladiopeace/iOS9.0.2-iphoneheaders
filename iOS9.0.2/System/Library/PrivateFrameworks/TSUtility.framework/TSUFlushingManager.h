/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSUFlushable;
#import <TSUtility/TSUtility-Structs.h>
@class TSURetainedPointerKeyDictionary, TSUPointerKeyDictionary, NSCondition, TSUMemoryWatcher, NSThread;

@interface TSUFlushingManager : NSObject {

	TSURetainedPointerKeyDictionary* _objects;
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerFlushingOrderLess, std::__1::allocator<TSUFlushableObjectInfo *> >* _sortedObjects;
	set<TSUFlushableObjectInfo *, TSUFlushableObjectInfoPointerTimeStampLess, std::__1::allocator<TSUFlushableObjectInfo *> >* _sortedNewObjects;
	TSUPointerKeyDictionary* _inactiveObjects;
	unsigned long _clock;
	char _alwaysFlushing;
	char _stopFlushing;
	char _stopFlushingWhenQueueEmpty;
	char _isFlushing;
	id<TSUFlushable> _flushingObject;
	NSCondition* _cond;
	NSCondition* _isFlushingCond;
	TSUMemoryWatcher* _memoryWatcher;
	NSThread* _bgThread;
	unsigned _backgroundTransitionTaskId;
	unsigned _activeBgThreadTask;

}
+(id)sharedManager;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(void)removeObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned)retainCount;
-(void)didReceiveMemoryWarning;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)willEnterForeground;
-(void)_startFlushingObjects;
-(void)_stopFlushingObjects;
-(void)advanceClock;
-(void)_didUseObject:(id)arg1 ;
-(TSUFlushableObjectInfo*)eraseInfoForObject:(id)arg1 ;
-(void)insertObjectInfo:(TSUFlushableObjectInfo*)arg1 ;
-(void)_flushAllEligible;
-(void)_bgTaskStarted;
-(void)_backgroundThread:(id)arg1 ;
-(void)_bgThreadActive;
-(void)_bgThreadInactive;
-(void)_bgTaskFinished;
-(char)isNewObject:(TSUFlushableObjectInfo*)arg1 ;
-(void)transferNewObjects;
-(void)protectObject:(id)arg1 ;
-(void)stopProtectingObject:(id)arg1 ;
-(void)doneWithObject:(id)arg1 ;
-(void)unsafeToFlush:(id)arg1 ;
-(void)safeToFlush:(id)arg1 wasAccessed:(char)arg2 ;
-(void)didEnterBackground;
-(void)memoryLevelIncreased:(int)arg1 was:(int)arg2 ;
-(void)memoryLevelDecreased:(int)arg1 was:(int)arg2 ;
-(char)controlsActiveObject:(id)arg1 ;
-(char)controlsInactiveObject:(id)arg1 ;
@end

