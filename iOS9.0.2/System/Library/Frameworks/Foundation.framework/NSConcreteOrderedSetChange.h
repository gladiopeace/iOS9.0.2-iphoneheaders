/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOrderedSetChange.h>

@interface NSConcreteOrderedSetChange : NSOrderedSetChange {

	unsigned _changeType;
	unsigned _sourceIndex;
	unsigned _destinationIndex;
	id _value;

}
-(id)initWithType:(unsigned)arg1 sourceIndex:(unsigned)arg2 destinationIndex:(unsigned)arg3 value:(id)arg4 ;
-(unsigned)sourceIndex;
-(unsigned)destinationIndex;
-(void)dealloc;
-(id)value;
-(unsigned)changeType;
@end

