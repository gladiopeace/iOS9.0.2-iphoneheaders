/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:33 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCountedSet, NSMutableDictionary;

@interface SBCountedMap : NSObject {

	NSCountedSet* _countedKeys;
	NSMutableDictionary* _map;

}
-(void)checkinValue:(id)arg1 ;
-(id)checkoutValueForKey:(id)arg1 creationBlock:(/*^block*/id)arg2 ;
-(void)checkinValues:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

