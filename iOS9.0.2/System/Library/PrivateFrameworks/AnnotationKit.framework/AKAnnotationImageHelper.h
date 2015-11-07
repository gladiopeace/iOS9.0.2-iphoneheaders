/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:49 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@interface AKAnnotationImageHelper : NSObject
+(id)imageForShapeTag:(int)arg1 ;
+(void)_drawFilledShapeImageForAnnotation:(id)arg1 inRect:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
+(void)_drawImageForPath:(id)arg1 inRect:(CGRect)arg2 inContext:(CGContextRef)arg3 ;
+(void)_drawImageForSignature:(id)arg1 withFillColor:(id)arg2 scale:(float)arg3 pathOffset:(CGPoint)arg4 inContext:(CGContextRef)arg5 ;
+(id)imageOfSize:(CGSize)arg1 forAnnotation:(id)arg2 ;
+(id)imageOfSize:(CGSize)arg1 forPath:(id)arg2 ;
+(id)imageOfSize:(CGSize)arg1 withFillColor:(id)arg2 forSignature:(id)arg3 ;
+(CGImageRef)createImageOfAnnotation:(id)arg1 withScale:(float)arg2 ;
@end

