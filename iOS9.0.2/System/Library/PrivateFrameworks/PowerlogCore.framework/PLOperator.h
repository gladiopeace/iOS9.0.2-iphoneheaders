/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, PLTimer, PLCoreStorage, NSString;

@interface PLOperator : NSObject {

	NSMutableDictionary* _localCache;
	NSMutableDictionary* _filterDefinitions;
	NSMutableDictionary* _filterDeltaLastEntryIDs;
	NSMutableArray* _bufferedEntries;
	PLTimer* _triggerBufferFlush;
	NSMutableDictionary* _lastLogDateForEntryKey;

}

@property (__weak,readonly) NSObject*<OS_dispatch_queue> workQueue; 
@property (__weak,readonly) NSObject*<OS_dispatch_queue> storageQueue; 
@property (__weak,readonly) PLCoreStorage * storage; 
@property (__weak,readonly) NSString * className; 
@property (__weak,readonly) NSString * storageQueueName; 
@property (retain) NSMutableDictionary * localCache;                                //@synthesize localCache=_localCache - In the implementation block
@property (retain) NSMutableDictionary * filterDefinitions;                         //@synthesize filterDefinitions=_filterDefinitions - In the implementation block
@property (retain) NSMutableDictionary * filterDeltaLastEntryIDs;                   //@synthesize filterDeltaLastEntryIDs=_filterDeltaLastEntryIDs - In the implementation block
@property (retain) NSMutableArray * bufferedEntries;                                //@synthesize bufferedEntries=_bufferedEntries - In the implementation block
@property (retain) PLTimer * triggerBufferFlush;                                    //@synthesize triggerBufferFlush=_triggerBufferFlush - In the implementation block
@property (retain) NSMutableDictionary * lastLogDateForEntryKey;                    //@synthesize lastLogDateForEntryKey=_lastLogDateForEntryKey - In the implementation block
+(id)defaults;
+(void)setEnabled:(char)arg1 ;
+(char)isEnabled;
+(id)className;
+(void)load;
+(char)isDebugEnabled;
+(void)setDebugEnabled:(char)arg1 ;
+(id)storageQueueName;
+(id)entryKeyForType:(id)arg1 andName:(id)arg2 isDynamic:(char)arg3 ;
+(id)entryDefinitions;
+(void)setDebugEnabled:(char)arg1 forKey:(id)arg2 ;
+(id)trimConditionsWithEntryKey:(id)arg1 withTrimDate:(id)arg2 withDuration:(id)arg3 withStartDateKey:(id)arg4 ;
+(id)trimConditionsWithEntryKey:(id)arg1 withTrimDate:(id)arg2 withCount:(id)arg3 withStartDateKey:(id)arg4 ;
+(id)entryKeyForType:(id)arg1 andName:(id)arg2 ;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
+(id)entryEventBackwardDefinitions;
+(id)entryEventIntervalDefinitions;
+(id)entryEventNoneDefinitions;
+(id)operator;
+(char)fullMode;
+(id)railDefinitions;
+(id)accountingGroupDefinitions;
+(id)entryKeys;
+(char)isDebugEnabledForKey:(id)arg1 ;
-(PLCoreStorage *)storage;
-(void)dealloc;
-(id)init;
-(void)log;
-(NSString *)className;
-(char)isDebugEnabled;
-(void)setDebugEnabled:(char)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)storageQueue;
-(id)tablesToTrimConditionsForTrimDate:(id)arg1 ;
-(NSString *)storageQueueName;
-(id)entryDefinitions;
-(void)setFilterDefinitions:(NSMutableDictionary *)arg1 ;
-(void)setFilterDeltaLastEntryIDs:(NSMutableDictionary *)arg1 ;
-(void)setBufferedEntries:(NSMutableArray *)arg1 ;
-(void)setTriggerBufferFlush:(PLTimer *)arg1 ;
-(void)subscribeNotificationsForEntries;
-(id)defaultObjectForKey:(id)arg1 ;
-(void)setDebugEnabled:(char)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)lastLogDateForEntryKey;
-(NSMutableArray *)bufferedEntries;
-(PLTimer *)triggerBufferFlush;
-(void)flushBuffer;
-(char)shouldWriteEntry:(id)arg1 withDebug:(char)arg2 ;
-(void)enableBufferFlushTimer:(unsigned)arg1 ;
-(void)postEntries:(id)arg1 ;
-(void)postEntries:(id)arg1 withGroupID:(id)arg2 ;
-(NSMutableDictionary *)filterDefinitions;
-(char)postFilteredNotificationForEntry:(id)arg1 withFilteredDefition:(id)arg2 withNotificationName:(id)arg3 ;
-(NSMutableDictionary *)filterDeltaLastEntryIDs;
-(void)logRequestNotification:(id)arg1 ;
-(void)setupFilterRequest:(id)arg1 ;
-(void)setLocalCache:(NSMutableDictionary *)arg1 ;
-(void)setLastLogDateForEntryKey:(NSMutableDictionary *)arg1 ;
-(double)defaultDoubleForKey:(id)arg1 ;
-(void)logEntry:(id)arg1 ;
-(void)initOperatorDependancies;
-(void)logEntries:(id)arg1 withGroupID:(id)arg2 ;
-(char)defaultBoolForKey:(id)arg1 ;
-(long)defaultLongForKey:(id)arg1 ;
-(void)updateEntry:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)trimConditionsForEntryKey:(id)arg1 forTrimDate:(id)arg2 ;
-(double)timeIntervalSinceLastLogForEntryKey:(id)arg1 ;
-(void)logFromCFCallback:(id)arg1 ;
-(id)entryKeys;
-(char)isDebugEnabledForKey:(id)arg1 ;
-(NSMutableDictionary *)localCache;
@end
