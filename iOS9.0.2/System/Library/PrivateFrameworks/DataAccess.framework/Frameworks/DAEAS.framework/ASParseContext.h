/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSFileHandle, ASTrafficLogger;

@interface ASParseContext : NSObject {

	char _moreDataExpected;
	char _keepPreviousData;
	char _lastLookedAtBufferHadStringEndPrefix;
	int _streamingState;
	int _codePage;
	NSString* _parseErrorReason;
	int _dataGeneration;
	NSMutableArray* _dataBuffers;
	unsigned _offsetIntoFirstData;
	unsigned _lastFoundBufferWithoutLineEnding;
	unsigned _numTokensInBuffersWithoutLineEndings;
	NSMutableArray* _bypassedDataBuffers;
	NSFileHandle* _logFileHandle;
	NSString* _logFilePath;
	ASTrafficLogger* _trafficLogger;
	long long _curOffset;
	long long _expectedTotalBytesCount;
	long long _currentBytesReceivedCount;

}

@property (assign,nonatomic) int streamingState;                                         //@synthesize streamingState=_streamingState - In the implementation block
@property (assign,nonatomic) long long curOffset;                                        //@synthesize curOffset=_curOffset - In the implementation block
@property (assign,nonatomic) int codePage;                                               //@synthesize codePage=_codePage - In the implementation block
@property (nonatomic,retain) NSString * parseErrorReason;                                //@synthesize parseErrorReason=_parseErrorReason - In the implementation block
@property (assign,nonatomic) char moreDataExpected;                                      //@synthesize moreDataExpected=_moreDataExpected - In the implementation block
@property (assign,nonatomic) int dataGeneration;                                         //@synthesize dataGeneration=_dataGeneration - In the implementation block
@property (assign,nonatomic) long long expectedTotalBytesCount;                          //@synthesize expectedTotalBytesCount=_expectedTotalBytesCount - In the implementation block
@property (assign,nonatomic) long long currentBytesReceivedCount;                        //@synthesize currentBytesReceivedCount=_currentBytesReceivedCount - In the implementation block
@property (assign,nonatomic) char keepPreviousData;                                      //@synthesize keepPreviousData=_keepPreviousData - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataBuffers;                               //@synthesize dataBuffers=_dataBuffers - In the implementation block
@property (assign,nonatomic) unsigned offsetIntoFirstData;                               //@synthesize offsetIntoFirstData=_offsetIntoFirstData - In the implementation block
@property (assign,nonatomic) unsigned lastFoundBufferWithoutLineEnding;                  //@synthesize lastFoundBufferWithoutLineEnding=_lastFoundBufferWithoutLineEnding - In the implementation block
@property (assign,nonatomic) unsigned numTokensInBuffersWithoutLineEndings;              //@synthesize numTokensInBuffersWithoutLineEndings=_numTokensInBuffersWithoutLineEndings - In the implementation block
@property (assign,nonatomic) char lastLookedAtBufferHadStringEndPrefix;                  //@synthesize lastLookedAtBufferHadStringEndPrefix=_lastLookedAtBufferHadStringEndPrefix - In the implementation block
@property (nonatomic,retain) NSMutableArray * bypassedDataBuffers;                       //@synthesize bypassedDataBuffers=_bypassedDataBuffers - In the implementation block
@property (nonatomic,retain) NSFileHandle * logFileHandle;                               //@synthesize logFileHandle=_logFileHandle - In the implementation block
@property (nonatomic,retain) NSString * logFilePath;                                     //@synthesize logFilePath=_logFilePath - In the implementation block
@property (nonatomic,retain) ASTrafficLogger * trafficLogger;                            //@synthesize trafficLogger=_trafficLogger - In the implementation block
-(void)dealloc;
-(id)init;
-(unsigned char)currentByte;
-(char)advanceOffsetByAmount:(unsigned)arg1 ;
-(long long)curOffset;
-(void)setParseErrorReason:(NSString *)arg1 ;
-(char*)bufferForLength:(unsigned)arg1 shouldFree:(char*)arg2 ;
-(NSString *)parseErrorReason;
-(char)hasNumberOfTokensRemaining:(unsigned)arg1 ;
-(void)setCodePage:(int)arg1 ;
-(int)codePage;
-(id)bufferWithAllData;
-(long)goodSizeForBuffer;
-(char)advanceOffsetByAmount:(unsigned)arg1 retainLastToken:(char)arg2 ;
-(int)dataGeneration;
-(long long)currentBytesReceivedCount;
-(long long)expectedTotalBytesCount;
-(int)streamingState;
-(void)setStreamingState:(int)arg1 ;
-(unsigned char)nextByte;
-(int)numTokensStreamableForNextStringSizeOfTerminator:(int*)arg1 ;
-(int)numTokensForNextString;
-(int)numTokensForNextOpaqueData;
-(void)setKeepPreviousData:(char)arg1 ;
-(ASTrafficLogger *)trafficLogger;
-(void)setTrafficLogger:(ASTrafficLogger *)arg1 ;
-(void)invalidateBuffers;
-(NSMutableArray *)dataBuffers;
-(unsigned)offsetIntoFirstData;
-(unsigned)lastFoundBufferWithoutLineEnding;
-(void)setLastFoundBufferWithoutLineEnding:(unsigned)arg1 ;
-(void)setNumTokensInBuffersWithoutLineEndings:(unsigned)arg1 ;
-(void)setLastLookedAtBufferHadStringEndPrefix:(char)arg1 ;
-(char)lastLookedAtBufferHadStringEndPrefix;
-(unsigned)numTokensInBuffersWithoutLineEndings;
-(void)setOffsetIntoFirstData:(unsigned)arg1 ;
-(char)keepPreviousData;
-(NSMutableArray *)bypassedDataBuffers;
-(void)setBypassedDataBuffers:(NSMutableArray *)arg1 ;
-(void)setCurOffset:(long long)arg1 ;
-(void)setDataBuffers:(NSMutableArray *)arg1 ;
-(void)setDataGeneration:(int)arg1 ;
-(void)setCurrentBytesReceivedCount:(long long)arg1 ;
-(NSFileHandle *)logFileHandle;
-(unsigned char)byteAtOffsetFromCurrentByte:(unsigned)arg1 ;
-(int)numberOfBytesUntilStringEnd:(char*)arg1 searchStringLength:(int)arg2 acceptingBufferBits:(char)arg3 ;
-(int)_numTokensForNextOpaqueDataCheckNumTokens:(char)arg1 ;
-(void)setShouldLog:(char)arg1 ;
-(void)resetToZeroOffset;
-(char)moreDataExpected;
-(void)setMoreDataExpected:(char)arg1 ;
-(void)setExpectedTotalBytesCount:(long long)arg1 ;
-(void)setLogFileHandle:(NSFileHandle *)arg1 ;
-(NSString *)logFilePath;
-(void)setLogFilePath:(NSString *)arg1 ;
-(void)flushLogs;
-(void)addData:(id)arg1 ;
@end

