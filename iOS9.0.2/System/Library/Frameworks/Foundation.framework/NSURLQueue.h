/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLQueueNode;

@interface NSURLQueue : NSObject {

	unsigned count;
	NSURLQueueNode* head;
	NSURLQueueNode* tail;
	id monitor;
	char waitOnTake;
	char _pad1;
	char _pad2;
	char _pad3;

}
+(id)newNode;
-(void)put:(id)arg1 ;
-(id)take;
-(id)peek;
-(id)peekAt:(unsigned)arg1 ;
-(int)indexOf:(id)arg1 ;
-(char)waitOnTake;
-(void)setWaitOnTake:(char)arg1 ;
-(char)remove:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(char)isEmpty;
-(void)clear;
-(void)finalize;
@end

