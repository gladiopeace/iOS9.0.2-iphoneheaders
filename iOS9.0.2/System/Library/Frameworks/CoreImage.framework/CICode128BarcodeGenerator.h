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

@interface CICode128BarcodeGenerator : CICodeGenerator {

	NSNumber* inputQuietSpace;

}

@property (nonatomic,copy) NSNumber * inputQuietSpace; 
+(id)customAttributes;
-(NSNumber *)inputQuietSpace;
-(void)setInputQuietSpace:(NSNumber *)arg1 ;
-(CGImageRef)outputCGImage;
@end

