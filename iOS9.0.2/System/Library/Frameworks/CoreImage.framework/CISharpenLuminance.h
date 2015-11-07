/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISharpenLuminance : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSharpness;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSharpness; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_kernel;
-(NSNumber *)inputSharpness;
-(void)setInputSharpness:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

