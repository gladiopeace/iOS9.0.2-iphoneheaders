/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector, CIFilter, NSData;

@interface BLDramaFilter : CIFilter {

	char _needsReprocess;
	float _lastAmount;
	float _lastPhototone;
	float _lastNeutralGamma;
	CIImage* _inputImage;
	NSNumber* _inputAmount;
	CIVector* _inputHueStrengthArray;
	NSNumber* _inputPhototone;
	NSNumber* _inputNeutralGamma;
	CIFilter* _colorCubeFilterDrama;
	NSData* _precomputedCube;
	CIVector* _lastHueStrengthArray;

}

@property (nonatomic,retain) CIImage * inputImage;                         //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,copy) NSNumber * inputAmount;                         //@synthesize inputAmount=_inputAmount - In the implementation block
@property (nonatomic,copy) CIVector * inputHueStrengthArray;               //@synthesize inputHueStrengthArray=_inputHueStrengthArray - In the implementation block
@property (nonatomic,copy) NSNumber * inputPhototone;                      //@synthesize inputPhototone=_inputPhototone - In the implementation block
@property (nonatomic,copy) NSNumber * inputNeutralGamma;                   //@synthesize inputNeutralGamma=_inputNeutralGamma - In the implementation block
@property (nonatomic,retain) CIFilter * colorCubeFilterDrama;              //@synthesize colorCubeFilterDrama=_colorCubeFilterDrama - In the implementation block
@property (nonatomic,retain) NSData * precomputedCube;                     //@synthesize precomputedCube=_precomputedCube - In the implementation block
@property (nonatomic,retain) CIVector * lastHueStrengthArray;              //@synthesize lastHueStrengthArray=_lastHueStrengthArray - In the implementation block
-(void)setInputAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputAmount;
-(NSNumber *)inputNeutralGamma;
-(void)setInputNeutralGamma:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setDefaults;
-(id)init;
-(void)setInputHueStrengthArray:(CIVector *)arg1 ;
-(void)setInputPhototone:(NSNumber *)arg1 ;
-(NSData *)precomputedCube;
-(void)setPrecomputedCube:(NSData *)arg1 ;
-(CIFilter *)colorCubeFilterDrama;
-(void)setColorCubeFilterDrama:(CIFilter *)arg1 ;
-(void)setLastHueStrengthArray:(CIVector *)arg1 ;
-(CIVector *)inputHueStrengthArray;
-(NSNumber *)inputPhototone;
-(CIVector *)lastHueStrengthArray;
-(void)setInputImage:(CIImage *)arg1 ;
@end

