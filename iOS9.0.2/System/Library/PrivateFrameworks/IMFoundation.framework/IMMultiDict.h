/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:11 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface IMMultiDict : NSObject {

	NSMutableDictionary* _dictionary;
	unsigned _count;

}

@property (nonatomic,readonly) unsigned count;                              //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) NSArray * allKeys; 
@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(void)enumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(NSArray *)allKeys;
-(void)pushObject:(id)arg1 forKey:(id)arg2 ;
-(id)peekObjectForKey:(id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(id)popObjectForKey:(id)arg1 ;
-(void)enqueueObject:(id)arg1 forKey:(id)arg2 ;
-(id)headObjectForKey:(id)arg1 ;
-(id)dequeueObjectForKey:(id)arg1 ;
-(void)removeObjectsForKey:(id)arg1 ;
-(unsigned)countForKey:(id)arg1 ;
-(void)removeObject:(id)arg1 forKey:(id)arg2 ;
@end

