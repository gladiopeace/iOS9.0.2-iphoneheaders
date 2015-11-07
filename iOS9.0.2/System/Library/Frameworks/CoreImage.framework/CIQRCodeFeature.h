/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFeature.h>

@class NSString;

@interface CIQRCodeFeature : CIFeature {

	CGRect bounds;
	CGPoint topLeft;
	CGPoint topRight;
	CGPoint bottomLeft;
	CGPoint bottomRight;
	NSString* messageString;

}

@property (readonly) CGRect bounds; 
@property (readonly) CGPoint topLeft; 
@property (readonly) CGPoint topRight; 
@property (readonly) CGPoint bottomLeft; 
@property (readonly) CGPoint bottomRight; 
@property (readonly) NSString * messageString; 
-(id)initWithBounds:(CGRect)arg1 topLeft:(CGPoint)arg2 topRight:(CGPoint)arg3 bottomLeft:(CGPoint)arg4 bottomRight:(CGPoint)arg5 messageString:(id)arg6 ;
-(CGRect)bounds;
-(void)dealloc;
-(id)type;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(CGPoint)bottomRight;
-(CGPoint)bottomLeft;
-(NSString *)messageString;
@end

