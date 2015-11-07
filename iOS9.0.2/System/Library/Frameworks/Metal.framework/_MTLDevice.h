/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Metal/Metal-Structs.h>
@class MTLCompiler, NSObject, MTLIOMemoryInfo, NSString;

@interface _MTLDevice : NSObject {

	long limits_init;
	SCD_Struct_MT6* _limits;
	MTLCompiler* _compiler;
	NSObject*<OS_dispatch_queue> _serialQueue;
	MTLIOMemoryInfo* _memoryInfo;
	unsigned long long _globalTraceObjectID;
	int _commandQueueCount;

}

@property (readonly) NSString * name; 
@property (readonly) const SCD_Struct_MT6* limits; 
@property (readonly) unsigned long long globalTraceObjectID;                                                             //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (getter=isLowPower,readonly) char lowPower; 
@property (getter=isHeadless,readonly) char headless; 
@property (getter=isDepth24Stencil8PixelFormatSupported,readonly) char depth24Stencil8PixelFormatSupported; 
@property (readonly) unsigned maxColorAttachments; 
@property (readonly) unsigned maxVertexAttributes; 
@property (readonly) unsigned maxVertexBuffers; 
@property (readonly) unsigned maxVertexTextures; 
@property (readonly) unsigned maxVertexSamplers; 
@property (readonly) unsigned maxVertexInlineDataSize; 
@property (readonly) unsigned maxInterpolants; 
@property (readonly) unsigned maxFragmentBuffers; 
@property (readonly) unsigned maxFragmentTextures; 
@property (readonly) unsigned maxFragmentSamplers; 
@property (readonly) unsigned maxFragmentInlineDataSize; 
@property (readonly) unsigned maxComputeBuffers; 
@property (readonly) unsigned maxComputeTextures; 
@property (readonly) unsigned maxComputeSamplers; 
@property (readonly) unsigned maxComputeInlineDataSize; 
@property (readonly) unsigned maxComputeLocalMemorySizes; 
@property (readonly) unsigned maxTotalComputeThreadsPerThreadgroup; 
@property (readonly) unsigned maxComputeThreadgroupMemory; 
@property (readonly) float maxLineWidth; 
@property (readonly) float maxPointSize; 
@property (readonly) unsigned maxVisibilityQueryOffset; 
@property (readonly) unsigned maxBufferLength; 
@property (readonly) unsigned minConstantBufferAlignmentBytes; 
@property (readonly) unsigned minBufferNoCopyAlignmentBytes; 
@property (readonly) unsigned maxTextureWidth1D; 
@property (readonly) unsigned maxTextureWidth2D; 
@property (readonly) unsigned maxTextureHeight2D; 
@property (readonly) unsigned maxTextureWidth3D; 
@property (readonly) unsigned maxTextureHeight3D; 
@property (readonly) unsigned maxTextureDepth3D; 
@property (readonly) unsigned maxTextureDimensionCube; 
@property (readonly) unsigned maxTextureLayers; 
@property (readonly) unsigned linearTextureAlignmentBytes; 
@property (readonly) unsigned iosurfaceTextureAlignmentBytes; 
@property (readonly) unsigned iosurfaceReadOnlyTextureAlignmentBytes; 
@property (readonly) unsigned maxFramebufferStorageBits; 
@property (readonly) NSObject*<OS_dispatch_queue> serialQueue;                                                           //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) unsigned acceleratorPort; 
@property (readonly) MTLCompiler * compiler;                                                                             //@synthesize compiler=_compiler - In the implementation block
+(char)featureProfile:(unsigned)arg1 supportsFeatureSet:(unsigned)arg2 ;
-(const SCD_Struct_MT6*)limits;
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT7*)arg2 error:(id*)arg3 ;
-(unsigned long long)globalTraceObjectID;
-(unsigned)minConstantBufferAlignmentBytes;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)unloadShaderCaches;
-(SCD_Struct_MT8)libraryCacheStats;
-(SCD_Struct_MT8)pipelineCacheStats;
-(unsigned)maxColorAttachments;
-(unsigned)maxVertexAttributes;
-(unsigned)maxVertexBuffers;
-(unsigned)maxVertexTextures;
-(unsigned)maxVertexSamplers;
-(unsigned)maxVertexInlineDataSize;
-(unsigned)maxInterpolants;
-(unsigned)maxFragmentBuffers;
-(unsigned)maxFragmentTextures;
-(unsigned)maxFragmentSamplers;
-(unsigned)maxFragmentInlineDataSize;
-(unsigned)maxComputeBuffers;
-(unsigned)maxComputeTextures;
-(unsigned)maxComputeSamplers;
-(unsigned)maxComputeInlineDataSize;
-(unsigned)maxComputeLocalMemorySizes;
-(unsigned)maxTotalComputeThreadsPerThreadgroup;
-(unsigned)maxComputeThreadgroupMemory;
-(float)maxLineWidth;
-(float)maxPointSize;
-(unsigned)maxVisibilityQueryOffset;
-(unsigned)maxBufferLength;
-(unsigned)minBufferNoCopyAlignmentBytes;
-(unsigned)maxTextureWidth1D;
-(unsigned)maxTextureWidth2D;
-(unsigned)maxTextureHeight2D;
-(unsigned)maxTextureWidth3D;
-(unsigned)maxTextureHeight3D;
-(unsigned)maxTextureDepth3D;
-(unsigned)maxTextureDimensionCube;
-(unsigned)maxTextureLayers;
-(unsigned)linearTextureAlignmentBytes;
-(unsigned)iosurfaceTextureAlignmentBytes;
-(unsigned)maxFramebufferStorageBits;
-(unsigned)acceleratorPort;
-(void)initLimits;
-(MTLCompiler *)compiler;
-(void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 fragmentKeySize:(unsigned*)arg2 previousStateVariant:(id)arg3 ;
-(void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 vertexKeySize:(unsigned*)arg2 nextStageVariant:(id)arg3 ;
-(void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 keySize:(unsigned*)arg2 ;
-(void)_purgeDevice;
-(void)validateComputeFunction:(id)arg1 ;
-(void*)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned)arg2 previousStateVariant:(id)arg3 fragmentKeySize:(unsigned*)arg4 ;
-(void*)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned)arg2 nextStageVariant:(id)arg3 vertexKeySize:(unsigned*)arg4 ;
-(void)freeFragmentFunctionKey:(void*)arg1 fragmentKeySize:(unsigned long)arg2 ;
-(void)freeVertexFunctionKey:(void*)arg1 vertexKeySize:(unsigned long)arg2 ;
-(void*)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned)arg2 keySize:(unsigned*)arg3 ;
-(void)freeComputeFunctionKey:(void*)arg1 keySize:(unsigned long)arg2 ;
-(id)fragmentVariantWithCompilerOutput:(id)arg1 ;
-(NSObject*)computeVariantWithCompilerOutput:(id)arg1 ;
-(id)vertexVariantWithCompilerOutput:(id)arg1 ;
-(id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3 ;
-(id)newComputePipelineWithDescriptor:(id)arg1 variant:(NSObject*)arg2 ;
-(SCD_Struct_MT9)pipelineFlagsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 ;
-(SCD_Struct_MT10)pipelineFlagsWithComputeVariant:(NSObject*)arg1 ;
-(id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 ;
-(id)pipelinePerformanceStatisticsWithComputeVariant:(NSObject*)arg1 ;
-(void)_incrementCommandQueueCount;
-(void)_decrementCommandQueueCount;
-(void)compilerPropagatesThreadPriority:(BOOL)arg1 ;
-(unsigned)iosurfaceReadOnlyTextureAlignmentBytes;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(id)newDefaultLibrary;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(char)supportsFeatureSet:(unsigned)arg1 ;
-(id)newLibraryWithData:(id)arg1 error:(id*)arg2 ;
-(void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 error:(id*)arg2 ;
-(id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(char)supportsTextureSampleCount:(unsigned)arg1 ;
-(char)isLowPower;
-(char)isHeadless;
-(char)isDepth24Stencil8PixelFormatSupported;
-(id)init;
-(id)description;
-(NSString *)name;
-(id)familyName;
-(id)productName;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id)vendorName;
@end

