/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLBuffer;
@class NSMutableIndexSet;

@interface SCNFixedSizePage : NSObject {

	id<MTLBuffer> _buffer;
	unsigned _elementSize;
	NSMutableIndexSet* _freeIndices;

}

@property (nonatomic,readonly) id<MTLBuffer> buffer;              //@synthesize buffer=_buffer - In the implementation block
-(char)isFull;
-(id)newSubBuffer;
-(void)deallocateElementAtOffset:(unsigned)arg1 ;
-(unsigned)_allocateElement;
-(id)initWithBuffer:(id)arg1 elementSize:(unsigned)arg2 ;
-(char)hasFreeElementsLeft;
-(void)dealloc;
-(id<MTLBuffer>)buffer;
@end

