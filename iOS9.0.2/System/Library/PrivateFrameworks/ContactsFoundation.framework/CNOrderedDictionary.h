/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSMutableArray, NSArray;

@interface CNOrderedDictionary : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _dictionary;
	NSMutableArray* _orderedKeys;

}

@property (copy,readonly) NSArray * allKeys; 
+(id)dictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)orderedDictionary;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(NSArray *)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end
