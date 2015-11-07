/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIFilter;

@interface BLAuraFilter : CIFilter {

	char _needsReprocess;
	float _lastAmount;
	float _lastSaturationHighPoint;
	int _lastVersion;
	CIImage* _inputImage;
	NSNumber* _inputAmount;
	NSNumber* _inputSaturationHighPoint;
	NSNumber* _inputVersion;
	CIFilter* _colorCubeFilter;

}

@property (nonatomic,retain) CIImage * inputImage;                           //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,copy) NSNumber * inputAmount;                           //@synthesize inputAmount=_inputAmount - In the implementation block
@property (nonatomic,copy) NSNumber * inputSaturationHighPoint;              //@synthesize inputSaturationHighPoint=_inputSaturationHighPoint - In the implementation block
@property (nonatomic,copy) NSNumber * inputVersion;                          //@synthesize inputVersion=_inputVersion - In the implementation block
@property (nonatomic,retain) CIFilter * colorCubeFilter;                     //@synthesize colorCubeFilter=_colorCubeFilter - In the implementation block
-(void)setInputAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputAmount;
-(CIImage *)inputImage;
-(id)outputImage;
-(void)setDefaults;
-(id)init;
-(CIFilter *)colorCubeFilter;
-(void)setColorCubeFilter:(CIFilter *)arg1 ;
-(NSNumber *)inputVersion;
-(void)setInputVersion:(NSNumber *)arg1 ;
-(void)setInputSaturationHighPoint:(NSNumber *)arg1 ;
-(NSNumber *)inputSaturationHighPoint;
-(void)setInputImage:(CIImage *)arg1 ;
@end

