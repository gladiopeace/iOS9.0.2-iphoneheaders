/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PAContiguousThreadArray : NSObject {

	NSMutableArray* _threads;
	unsigned _firstTimestampIndex;
	unsigned long long _previousCpuTimeNs;

}

@property (readonly) unsigned long long threadId; 
@property (readonly) unsigned long long dispatchQueueId; 
-(void)dealloc;
-(unsigned)count;
-(id)debugDescription;
-(unsigned long long)dispatchQueueId;
-(unsigned long long)threadId;
-(unsigned)firstTimestampIndex;
-(char)isProcessorIdleThread;
-(unsigned long long)cpuTimeNs;
-(id)sampleThreadAtTimestampIndex:(unsigned)arg1 ;
-(char)isSingleStackWithLeafFrame:(id)arg1 ;
-(id)initWithTimestampIndex:(unsigned)arg1 andPreviousCpuTimeNs:(unsigned long long)arg2 ;
-(void)addSampleThread:(id)arg1 ;
-(char)threadExistedPreviously;
@end

