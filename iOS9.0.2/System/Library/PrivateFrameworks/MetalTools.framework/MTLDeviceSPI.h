/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MTLDeviceSPI <MTLDevice>
@property (getter=isLowPower,readonly) char lowPower; 
@property (getter=isHeadless,readonly) char headless; 
@property (assign) char shaderDebugInfoCaching; 
@property (readonly) unsigned halfFPConfig; 
@property (readonly) unsigned singleFPConfig; 
@property (readonly) unsigned doubleFPConfig; 
@property (assign,nonatomic) char metalAssertionsEnabled; 
@property (readonly) unsigned featureProfile; 
@property (readonly) const SCD_Struct_MT2* limits; 
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
@property (readonly) unsigned acceleratorPort; 
@optional
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT3*)arg2 error:(id*)arg3;
-(char)mapShaderSampleBufferWithBuffer:(SCD_Struct_MT0*)arg1 capacity:(unsigned)arg2 size:(unsigned)arg3;
-(void)unmapShaderSampleBuffer;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(char)shaderDebugInfoCaching;
-(void)setShaderDebugInfoCaching:(char)arg1;
-(id)familyName;
-(id)productName;
-(id)vendorName;

@required
+(void)registerDevices;
-(const SCD_Struct_MT2*)limits;
-(unsigned)minConstantBufferAlignmentBytes;
-(void)unloadShaderCaches;
-(SCD_Struct_MT4*)libraryCacheStats;
-(SCD_Struct_MT4*)pipelineCacheStats;
-(char)supportsSampleCount:(unsigned)arg1;
-(unsigned)halfFPConfig;
-(unsigned)singleFPConfig;
-(unsigned)doubleFPConfig;
-(char)metalAssertionsEnabled;
-(void)setMetalAssertionsEnabled:(char)arg1;
-(unsigned)featureProfile;
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
-(void)compilerPropagatesThreadPriority:(BOOL)arg1;
-(unsigned)iosurfaceReadOnlyTextureAlignmentBytes;
-(char)isLowPower;
-(char)isHeadless;
-(id)newTextureWithDescriptor:(id)arg1 iosurface:(IOSurfaceRef)arg2 plane:(unsigned)arg3;

@end

