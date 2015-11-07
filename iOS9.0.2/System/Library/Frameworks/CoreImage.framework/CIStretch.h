/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIStretch : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	CIVector* inputSize;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) CIVector * inputSize; 
+(id)customAttributes;
-(id)_kernel;
-(CIVector *)inputPoint;
-(CIVector *)inputSize;
-(void)setInputSize:(CIVector *)arg1 ;
-(CGRect)computeDOD:(vec4)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setDefaults;
-(void)setInputPoint:(CIVector *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

