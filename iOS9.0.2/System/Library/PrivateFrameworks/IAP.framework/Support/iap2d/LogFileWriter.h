/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:38:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSString, NSTimer, NSObject;

@interface LogFileWriter : NSObject {

	NSMutableArray* _logData;
	NSString* _daemon;
	NSString* _filePath;
	unsigned _logDataSize;
	NSTimer* _flushTimer;
	NSObject*<OS_dispatch_queue> _logQueue;

}
-(void)unscheduleFlush;
-(void)scheduleFlush;
-(void)createFilePath;
-(void)timerFlush;
-(id)initFor:(id)arg1 ;
-(void)dealloc;
-(void)flush;
-(void)log:(id)arg1 ;
@end

