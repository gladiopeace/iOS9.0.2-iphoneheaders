/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CITriangleKaleidoscope : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	NSNumber* inputSize;
	NSNumber* inputRotation;
	NSNumber* inputDecay;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) NSNumber * inputSize; 
@property (nonatomic,retain) NSNumber * inputRotation; 
@property (nonatomic,retain) NSNumber * inputDecay; 
+(id)customAttributes;
-(NSNumber *)inputRotation;
-(CIVector *)inputPoint;
-(id)_geomKernel;
-(id)_colorKernel;
-(NSNumber *)inputSize;
-(void)setInputSize:(NSNumber *)arg1 ;
-(void)setInputRotation:(NSNumber *)arg1 ;
-(NSNumber *)inputDecay;
-(void)setInputDecay:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputPoint:(CIVector *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

