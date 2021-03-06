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

@interface CIMirror : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	NSNumber* inputAngle;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) NSNumber * inputAngle; 
+(id)customAttributes;
-(NSNumber *)inputAngle;
-(id)_kernel;
-(void)setInputAngle:(NSNumber *)arg1 ;
-(Rectangle)computeDOD:(vec2)arg1 tst:(vec3)arg2 off:(vec4)arg3 mtx:(vec4)arg4 ;
-(CIVector *)inputPoint;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputPoint:(CIVector *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

