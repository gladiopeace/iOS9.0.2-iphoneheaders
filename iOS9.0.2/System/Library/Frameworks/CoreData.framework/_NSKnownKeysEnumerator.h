/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface _NSKnownKeysEnumerator : NSEnumerator {

	id _target;
	const id* _list;
	const id* _referenceItems;
	NSRange _range;
	unsigned long _index;
	unsigned long _flags;

}
-(id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(const id*)arg3 andRange:(NSRange)arg4 andCopyItems:(char)arg5 ;
-(void)dealloc;
-(id)nextObject;
-(void)_invalidate;
@end

