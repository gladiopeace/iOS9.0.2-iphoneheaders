/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@interface BWRingBuffer : NSObject <NSFastEnumeration> {

	void* _ringBuffer;
	int _outputIndex;
	int _inputIndex;
	int _length;
	unsigned long _typeSize;

}
-(unsigned)countByEnumeratingWithState:(SCD_Struct_BW32*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(int)count;
-(void)incrementRingIndex:(int*)arg1 ;
-(void)incrementRingIndex:(int*)arg1 withCount:(int)arg2 ;
-(int)lastElementIndex;
-(int)firstElementIndex;
-(int)lastElementIndexPlusOne;
-(id)initWithLength:(int)arg1 dataTypeSize:(unsigned long)arg2 ;
-(void)appendElement:(void*)arg1 ;
-(void)removeFirstElements:(int)arg1 ;
-(void*)firstElement;
-(void*)lastElement;
-(void*)elementAtIndex:(int)arg1 ;
@end

