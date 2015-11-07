/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLParallelRenderCommandEncoder.h>

@protocol MTLDevice, MTLCommandQueue, MTLCommandBuffer;
@class NSString, _MTLCommandBuffer, MTLRenderPassDescriptor;

@interface _MTLParallelRenderCommandEncoder : NSObject <MTLParallelRenderCommandEncoder> {

	id<MTLDevice> _device;
	id<MTLCommandQueue> _queue;
	NSString* _label;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;
	_MTLCommandBuffer*<MTLCommandBuffer> _commandBuffer;
	MTLRenderPassDescriptor* _renderPassDescriptor;
	opaque_pthread_mutex_t _lock;
	unsigned long _commandBuffersSize;
	unsigned long _commandBuffersCount;
	id* _commandBuffers;
	char _retainedReferences;
	unsigned _type;
	unsigned _numRequestedCounters;
	unsigned _numThisEncoder;
	unsigned _numCommands;
	char _StatEnabled;
	unsigned long long _StatOptions;
	unsigned long long _StatLocations;

}

@property (readonly) unsigned long long globalTraceObjectID;              //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device;                                //@synthesize device=_device - In the implementation block
@property (copy) NSString * label;                                        //@synthesize label=_label - In the implementation block
-(unsigned long long)globalTraceObjectID;
-(id)_renderCommandEncoderCommon;
-(id)renderCommandEncoder;
-(void)insertDebugSignpost:(id)arg1 ;
-(id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2 ;
-(id)sampledRenderCommandEncoderWithProgramInfoBuffer:(SCD_Struct_MT21*)arg1 capacity:(unsigned)arg2 ;
-(id)commandBuffer;
-(void)endEncoding;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)dealloc;
-(NSString *)description;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id<MTLDevice>)device;
@end

