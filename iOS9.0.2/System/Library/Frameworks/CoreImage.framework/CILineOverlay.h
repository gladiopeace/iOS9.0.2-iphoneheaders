/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CILineOverlay : CIFilter {

	CIImage* inputImage;
	NSNumber* inputNRNoiseLevel;
	NSNumber* inputNRSharpness;
	NSNumber* inputEdgeIntensity;
	NSNumber* inputThreshold;
	NSNumber* inputContrast;

}
+(id)customAttributes;
-(id)_CIComicNoiseReduction;
-(id)_CISobelEdges;
-(id)_CIColorControls;
-(id)outputImage;
@end

