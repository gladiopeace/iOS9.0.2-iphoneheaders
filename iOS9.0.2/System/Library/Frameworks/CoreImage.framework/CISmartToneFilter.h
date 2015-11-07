/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIContext;

@interface CISmartToneFilter : CIFilter {

	CIImage* inputImage;
	NSNumber* inputExposure;
	NSNumber* inputContrast;
	NSNumber* inputBrightness;
	NSNumber* inputShadows;
	NSNumber* inputHighlights;
	NSNumber* inputBlack;
	NSNumber* inputUseCube;
	CIImage* _cubeImage;
	CIContext* _cubeContext;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputExposure; 
@property (nonatomic,retain) NSNumber * inputContrast; 
@property (nonatomic,retain) NSNumber * inputBrightness; 
@property (nonatomic,retain) NSNumber * inputShadows; 
@property (nonatomic,retain) NSNumber * inputHighlights; 
@property (nonatomic,retain) NSNumber * inputBlack; 
@property (nonatomic,retain) NSNumber * inputUseCube; 
+(id)customAttributes;
-(char)_isIdentity;
-(NSNumber *)inputUseCube;
-(id)_kernelBneg;
-(id)_kernelBpos;
-(id)_kernelH;
-(id)_kernelC;
-(NSNumber *)inputExposure;
-(void)setInputExposure:(NSNumber *)arg1 ;
-(NSNumber *)inputShadows;
-(void)setInputShadows:(NSNumber *)arg1 ;
-(NSNumber *)inputHighlights;
-(void)setInputHighlights:(NSNumber *)arg1 ;
-(NSNumber *)inputBlack;
-(void)setInputBlack:(NSNumber *)arg1 ;
-(void)setInputUseCube:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)setInputBrightness:(NSNumber *)arg1 ;
-(void)setInputContrast:(NSNumber *)arg1 ;
-(NSNumber *)inputBrightness;
-(NSNumber *)inputContrast;
-(void)setInputImage:(CIImage *)arg1 ;
@end

