/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@class MPSImageConvolution;

@interface MPSImageGaussianBlur : MPSUnaryImageKernel {

	float _sigma;
	MPSImageConvolution* smallConv;
	int _planSteps[8];
	unsigned _numSteps;
	const double* _plan;
	char _cheesyBlur;
	float _scale;

}

@property (nonatomic,readonly) float sigma;              //@synthesize sigma=_sigma - In the implementation block
-(id)initWithDevice:(id)arg1 sigma:(float)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(SCD_Struct_MP4)sourceRegionForDestinationSize:(SCD_Struct_MP8)arg1 ;
-(long)encodeWithComputeEncoder:(id)arg1 commandBuffer:(id)arg2 sourceTexture:(id)arg3 destinationTexture:(id)arg4 callInfo:(const SCD_Struct_MP10*)arg5 ;
-(void)toggleCheesyBlur;
-(void)dealloc;
-(id)debugDescription;
-(id)initWithDevice:(id)arg1 ;
-(float)sigma;
@end

