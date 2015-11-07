/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:09 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ScreenReaderOutputServer/ScreenReaderOutputServer-Structs.h>
@class NSLock, NSMutableArray;

@interface SCROBrailleEventDispatcher : NSObject {

	NSLock* _queueLock;
	CFRunLoopRef _runLoop;
	CFRunLoopSourceRef _queueSource;
	CFArrayRef _queue;
	NSMutableArray* _brailleEventQueue;
	id _target;
	char _isValid;

}
-(void)dealloc;
-(void)invalidate;
-(char)isValid;
-(id)initWithTarget:(id)arg1 ;
-(void)start;
-(void)enqueueEvent:(id)arg1 ;
-(void)_processQueue;
@end

