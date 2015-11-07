/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSNumber;

@interface CIAztecCodeGenerator : CICodeGenerator {

	NSNumber* inputCorrectionLevel;
	NSNumber* inputLayers;
	NSNumber* inputCompactStyle;

}

@property (nonatomic,copy) NSNumber * inputCorrectionLevel; 
@property (nonatomic,copy) NSNumber * inputLayers; 
@property (nonatomic,copy) NSNumber * inputCompactStyle; 
+(id)customAttributes;
-(void)setInputCompactStyle:(NSNumber *)arg1 ;
-(void)setInputCorrectionLevel:(NSNumber *)arg1 ;
-(NSNumber *)inputCompactStyle;
-(NSNumber *)inputCorrectionLevel;
-(void)setInputLayers:(NSNumber *)arg1 ;
-(NSNumber *)inputLayers;
-(CGImageRef)outputCGImage;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

