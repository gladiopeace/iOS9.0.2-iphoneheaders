/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineDescriptor.h>

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {

	MTLComputePipelineDescriptorPrivate* _private;

}
-(void)setComputeFunction:(id)arg1 ;
-(void)validateWithDevice:(id)arg1 ;
-(id)computeFunction;
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(char)arg1 ;
-(char)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
@end

