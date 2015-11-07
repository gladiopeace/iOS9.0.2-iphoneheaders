/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsDevice.h>

@interface MTLDebugDevice : MTLToolsDevice
-(id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const SCD_Struct_MT3*)arg2 error:(id*)arg3 ;
-(id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(id)newLibraryWithFile:(id)arg1 error:(id*)arg2 ;
-(id)newDefaultLibrary;
-(id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(id)newCommandQueueWithMaxCommandBufferCount:(unsigned)arg1 ;
-(id)newDepthStencilStateWithDescriptor:(id)arg1 ;
-(id)newBufferWithBytes:(const void*)arg1 length:(unsigned)arg2 options:(unsigned)arg3 ;
-(id)newBufferWithLength:(unsigned)arg1 options:(unsigned)arg2 ;
-(id)newTextureWithDescriptor:(id)arg1 ;
-(id)newSamplerStateWithDescriptor:(id)arg1 ;
-(id)newCommandQueue;
-(id)newBufferWithBytesNoCopy:(void*)arg1 length:(unsigned)arg2 options:(unsigned)arg3 deallocator:(/*^block*/id)arg4 ;
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
-(id)newTextureWithDescriptor:(id)arg1 iosurface:(IOSurfaceRef)arg2 plane:(unsigned)arg3 ;
-(void)validateResourceOptions:(unsigned)arg1 isTexture:(char)arg2 isIOSurface:(char)arg3 ;
-(void)validateNewBufferArgs:(unsigned)arg1 options:(unsigned)arg2 ;
-(id)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned)arg2 reflection:(id*)arg3 error:(id*)arg4 ;
-(void)_newComputePipelineStateWithFunction:(id)arg1 options:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

