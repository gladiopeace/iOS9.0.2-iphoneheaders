/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSKeyValueFastMutableArray.h>

@class NSKeyValueGetter;

@interface NSKeyValueFastMutableArray2 : NSKeyValueFastMutableArray {

	NSKeyValueGetter* _valueGetter;

}
+(SCD_Struct_NS36*)_proxyNonGCPoolPointer;
-(id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2 ;
-(void)_proxyNonGCFinalize;
-(id)_nonNilArrayValueWithSelector:(SEL)arg1 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
@end

