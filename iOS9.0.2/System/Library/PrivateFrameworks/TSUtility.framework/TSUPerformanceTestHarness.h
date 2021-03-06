/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@class NSMutableArray;

@interface TSUPerformanceTestHarness : NSObject {

	NSMutableArray* mTestCases;
	char mQuiet;
	int mPassingTests;
	int mTotalTests;
	char mPassed;
	timeval mSetupTime;

}

@property (assign,nonatomic) char quiet; 
@property (nonatomic,readonly) int passingTestCount; 
@property (nonatomic,readonly) int testCount; 
@property (nonatomic,readonly) char passed; 
+(id)harness;
-(id)testWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)testSuite;
-(id)p_createResultDirectory;
-(void)p_writeSystemConfigurationToDirectory:(id)arg1 ;
-(void)p_writeConsoleMessagesToDirectory:(id)arg1 ;
-(void)p_writeCsvResultsToDirectory:(id)arg1 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 ;
-(void)runTestWithName:(id)arg1 selector:(SEL)arg2 goalTime:(double)arg3 precision:(double)arg4 ;
-(char)runTests;
-(int)passingTestCount;
-(int)testCount;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(void)report;
-(char)quiet;
-(void)setQuiet:(char)arg1 ;
-(char)passed;
-(void)setup;
@end

