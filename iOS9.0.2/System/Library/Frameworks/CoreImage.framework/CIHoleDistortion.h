/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIHoleDistortion : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputRadius;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputRadius; 
+(id)customAttributes;
-(char)_isIdentity;
-(CIVector *)inputCenter;
-(void)setInputCenter:(CIVector *)arg1 ;
-(id)_geomKernel;
-(id)_colorKernel;
-(CGRect)computeDOD;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputImage:(CIImage *)arg1 ;
@end

