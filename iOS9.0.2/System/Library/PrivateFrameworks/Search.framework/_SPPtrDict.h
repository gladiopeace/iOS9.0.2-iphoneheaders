/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <searchd/searchd-Structs.h>
@class NSObject;

@interface _SPPtrDict : NSObject {

	CFDictionaryRef _tagSet;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(id)init;
-(id)objectForKey:(void*)arg1 ;
-(void)removeObjectForKey:(void*)arg1 ;
-(void)setObject:(id)arg1 forKey:(void*)arg2 ;
@end

