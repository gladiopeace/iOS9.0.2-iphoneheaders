/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TSUNoCopyDictionary, NSMutableArray;

@interface TSULRUCache : NSObject {

	TSUNoCopyDictionary* mData;
	NSMutableArray* mOrderedKeys;
	unsigned mMax;
	id mCallbackTarget;
	SEL mCallback;

}

@property (nonatomic,readonly) unsigned maxSize; 
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(unsigned)maxSize;
-(id)allValues;
-(void)p_removeOldestObject;
-(id)initWithMaxSize:(unsigned)arg1 ;
-(void)setEvictionCallbackTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)clearEvictionCallbackTarget;
@end
