/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCountedSet, NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface FBOcclusionsStack : NSObject {

	NSCountedSet* _levels;
	NSMutableDictionary* _levelToCompositeOcclusions;
	NSMutableDictionary* _keyToEntry;
	NSMutableArray* _orderedEntries;
	NSMutableSet* _dirtyKeys;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(char)isEmpty;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)_adjustEntry:(id)arg1 forLevel:(float)arg2 occlusions:(id)arg3 ;
-(void)setKey:(id)arg1 toLevel:(float)arg2 withOcclusions:(id)arg3 ;
-(void)enumerateKeysByLevelWithBlock:(/*^block*/id)arg1 ;
-(id)dirtyKeys;
-(id)occlusionsAppliedToKey:(id)arg1 ;
-(void)removeKey:(id)arg1 ;
-(char)isDirty;
@end

