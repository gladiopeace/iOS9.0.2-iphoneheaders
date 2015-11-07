/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPipelineReflection.h>

@class NSArray, NSDictionary;

@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection {

	SCD_Struct_MT9 _flags;
	NSArray* _vertexBuiltInArguments;
	NSArray* _vertexArguments;
	NSArray* _fragmentArguments;
	NSDictionary* _performanceStatistics;

}
-(id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned)arg5 flags:(SCD_Struct_MT9)arg6 ;
-(void)setPerformanceStatistics:(id)arg1 ;
-(id)performanceStatistics;
-(id)vertexBuiltInArguments;
-(id)vertexArguments;
-(id)fragmentArguments;
-(void)dealloc;
-(id)description;
@end

