/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineDescriptor.h>

@interface MTLRenderPipelineDescriptorInternal : MTLRenderPipelineDescriptor {

	MTLRenderPipelineDescriptorPrivate _private;

}
-(void)validateWithDevice:(id)arg1 ;
-(id)newSerializedVertexDataWithFlags:(unsigned)arg1 error:(id*)arg2 ;
-(id)fragmentFunction;
-(id)serializeFragmentData;
-(const MTLRenderPipelineDescriptorPrivate*)_descriptorPrivate;
-(unsigned)sampleMask;
-(void)setSampleMask:(unsigned)arg1 ;
-(float)sampleCoverage;
-(void)setSampleCoverage:(float)arg1 ;
-(char)isAlphaToCoverageEnabled;
-(void)setAlphaToCoverageEnabled:(char)arg1 ;
-(char)isAlphaToOneEnabled;
-(void)setAlphaToOneEnabled:(char)arg1 ;
-(char)isRasterizationEnabled;
-(void)setRasterizationEnabled:(char)arg1 ;
-(char)isVertexEnabled;
-(void)setVertexEnabled:(char)arg1 ;
-(id)fastBlendDescriptorAtIndex:(unsigned)arg1 ;
-(id)serializedVertexData;
-(id)vertexDescriptor;
-(void)setVertexDescriptor:(id)arg1 ;
-(id)colorAttachments;
-(void)setDepthAttachmentPixelFormat:(unsigned)arg1 ;
-(void)setStencilAttachmentPixelFormat:(unsigned)arg1 ;
-(unsigned)depthAttachmentPixelFormat;
-(unsigned)stencilAttachmentPixelFormat;
-(void)setVertexFunction:(id)arg1 ;
-(void)setFragmentFunction:(id)arg1 ;
-(id)vertexFunction;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(unsigned)sampleCount;
-(void)setSampleCount:(unsigned)arg1 ;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
@end

