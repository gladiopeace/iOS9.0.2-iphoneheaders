/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:21 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDictionary, NSMutableDictionary;


@protocol MTLCommandBufferSPI <MTLCommandBuffer>
@property (getter=isProfilingEnabled) char profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@optional
-(id)debugCommandEncoder;
-(id)sampledRenderCommandEncoderWithDescriptor:(id)arg1 programInfoBuffer:(/*function pointer*/void**)arg2 capacity:(unsigned)arg3;
-(void)commitAndHold;
-(id)fragmentRenderCommandEncoderWithDescriptor:(id)arg1;
-(id)sampledComputeCommandEncoderWithProgramInfoBuffer:(/*function pointer*/void**)arg1 capacity:(unsigned)arg2;

@required
-(char)isProfilingEnabled;
-(NSMutableDictionary *)userDictionary;
-(void)setProfilingEnabled:(char)arg1;
-(NSDictionary *)profilingResults;

@end

