/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWGamutMap : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	NSNumber* inputShouldWarn;

}
+(id)customAttributes;
-(id)customAttributes;
-(id)outputImage;
@end

