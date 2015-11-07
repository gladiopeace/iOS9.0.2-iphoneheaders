/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:38 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPImageDescriptor : NSObject {

	float* _featureVector;

}
+(int)preferredPixelFormat;
-(void)dealloc;
-(id)initWithImage:(CVBufferRef)arg1 ;
-(long)computeDistanceWith:(id)arg1 distance:(float*)arg2 ;
-(long)computeRegionHistogram:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 histogram:(float*)arg5 ;
-(long)computeFeature:(CVBufferRef)arg1 ;
@end

