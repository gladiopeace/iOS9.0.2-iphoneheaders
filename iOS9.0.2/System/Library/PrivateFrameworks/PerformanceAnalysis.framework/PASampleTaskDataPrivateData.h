/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <libobjc.A.dylib/PASerializable.h>

@class NSString;

@interface PASampleTaskDataPrivateData : NSObject <PASerializable> {

	int _suspend_count;
	int _task_size;
	int _faults;
	int _pageins;
	int _cow_faults;
	unsigned _ss_flags;
	unsigned _latency_qos;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int suspendCount;                               //@synthesize suspend_count=_suspend_count - In the implementation block
@property (readonly) int taskSizeInPages;                            //@synthesize task_size=_task_size - In the implementation block
@property (readonly) int numberOfPageFaults;                         //@synthesize faults=_faults - In the implementation block
@property (readonly) int numberOfPageIns;                            //@synthesize pageins=_pageins - In the implementation block
@property (readonly) int numberOfCopyOnWritePageFaults;              //@synthesize cow_faults=_cow_faults - In the implementation block
@property (readonly) unsigned latencyQos;                            //@synthesize latency_qos=_latency_qos - In the implementation block
@property (readonly) unsigned ss_flags;                              //@synthesize ss_flags=_ss_flags - In the implementation block
@property (readonly) char isTaskResourceFlagged; 
@property (readonly) char isTerminatedSnapshot; 
@property (readonly) char isPidSuspended; 
@property (readonly) char isFrozen; 
@property (readonly) char isDarwinBG; 
@property (readonly) char isDarwinExtBG; 
@property (readonly) char isVisible; 
@property (readonly) char isNonVisible; 
@property (readonly) char isForeground; 
@property (readonly) char isBoosted; 
@property (readonly) char isSuppressed; 
@property (readonly) char isTimerThrottled; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
-(int)suspendCount;
-(char)isFrozen;
-(char)isVisible;
-(char)isForeground;
-(void)addSelfToSerializationDictionary:(id)arg1 ;
-(unsigned long)sizeInBytesForSerializedVersion;
-(char)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(char)isDarwinBG;
-(char)isSuppressed;
-(unsigned)ss_flags;
-(char)isTerminatedSnapshot;
-(int)taskSizeInPages;
-(int)numberOfPageIns;
-(char)isBoosted;
-(char)isTaskResourceFlagged;
-(char)isPidSuspended;
-(char)isDarwinExtBG;
-(char)isNonVisible;
-(char)isTimerThrottled;
-(char)correspondsToTaskSnapshot:(const task_snapshot*)arg1 ;
-(id)initWithTaskSnapshot:(const task_snapshot*)arg1 ;
-(int)numberOfPageFaults;
-(int)numberOfCopyOnWritePageFaults;
-(unsigned)latencyQos;
@end

