/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:23 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@interface MRUtilities : NSObject
+(int)operationQueueConcurrentOperationCount;
+(id)executeScript:(id)arg1 withHeader:(id)arg2 andAttributes:(id)arg3 ;
+(CGPoint)valueForPointAnimationPath:(id)arg1 withPlugTiming:(id)arg2 atTime:(double)arg3 defaultsTo:(CGPoint)arg4 previousKeyPoint:(CGPoint*)arg5 nextKeyPoint:(CGPoint*)arg6 animationIsOver:(char*)arg7 ;
+(double)transformTime:(double)arg1 forAnimationPath:(id)arg2 withPlugTiming:(id)arg3 ;
+(float)valueForScalarAnimationPath:(id)arg1 withPlugTiming:(id)arg2 atTime:(double)arg3 defaultsTo:(float)arg4 previousKeyValue:(float*)arg5 nextKeyValue:(float*)arg6 animationIsOver:(char*)arg7 ;
+(int)operatingSystemMinorVersion;
+(int)operatingSystemMajorVersion;
+(void)initialize;
+(CGColorSpaceRef)newColorSpaceForDevice;
@end

