/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CIVector : NSObject <NSCopying, NSSecureCoding> {

	unsigned long _count;
	SCD_Union_CI16* _u;

}

@property (readonly) float* _values; 
@property (readonly) unsigned long count; 
@property (readonly) float X; 
@property (readonly) float Y; 
@property (readonly) float Z; 
@property (readonly) float W; 
@property (readonly) CGPoint CGPointValue; 
@property (readonly) CGRect CGRectValue; 
@property (readonly) CGAffineTransform CGAffineTransformValue; 
@property (readonly) NSString * stringRepresentation; 
+(id)vectorWithString:(id)arg1 ;
+(id)vectorWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
+(id)vectorWithX:(float)arg1 ;
+(id)vectorWithCGPoint:(CGPoint)arg1 ;
+(id)vectorWithCGAffineTransform:(CGAffineTransform)arg1 ;
+(id)vectorWithX:(float)arg1 Y:(float)arg2 ;
+(id)vectorWithValues:(const float*)arg1 count:(unsigned long)arg2 ;
+(char)supportsSecureCoding;
+(id)vectorWithCGRect:(CGRect)arg1 ;
+(id)vectorWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3 W:(float)arg4 ;
-(id)initWithValues:(const float*)arg1 count:(unsigned long)arg2 ;
-(id)initWithX:(float)arg1 ;
-(id)initWithX:(float)arg1 Y:(float)arg2 ;
-(id)initWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3 ;
-(id)initWithX:(float)arg1 Y:(float)arg2 Z:(float)arg3 W:(float)arg4 ;
-(id)initWithCGPoint:(CGPoint)arg1 ;
-(id)initWithCGRect:(CGRect)arg1 ;
-(id)initWithCGAffineTransform:(CGAffineTransform)arg1 ;
-(float)valueAtIndex:(unsigned long)arg1 ;
-(float)Z;
-(float)W;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long)count;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(CGAffineTransform)CGAffineTransformValue;
-(CGRect)CGRectValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)CGPointValue;
-(id)initWithString:(id)arg1 ;
-(float*)_values;
-(void)finalize;
-(float)X;
-(float)Y;
-(NSString *)stringRepresentation;
@end

