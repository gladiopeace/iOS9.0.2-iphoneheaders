/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:35 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSObservationTransformer.h>

@interface NSObservationBuffer : NSObservationTransformer

@property (getter=isMemoryPressureSensitive) char memoryPressureSensitive; 
@property (copy) id bufferFullHandler; 
@property (assign) char automaticallyEmitsObjects; 
+(id)bufferWithMaximumObjectCount:(unsigned)arg1 fullPolicy:(int)arg2 outputQueue:(id)arg3 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)bufferWithOutputQueue:(id)arg1 ;
-(id)initWithMaximumObjectCount:(unsigned)arg1 fullPolicy:(int)arg2 outputQueue:(id)arg3 ;
-(id)bufferFullHandler;
-(void)emitObject;
-(void)emitAllObjects;
-(void)setBufferFullHandler:(id)arg1 ;
-(char)automaticallyEmitsObjects;
-(void)setAutomaticallyEmitsObjects:(char)arg1 ;
-(char)isMemoryPressureSensitive;
-(void)setMemoryPressureSensitive:(char)arg1 ;
@end

