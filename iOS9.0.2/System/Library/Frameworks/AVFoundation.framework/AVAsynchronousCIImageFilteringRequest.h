/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:07 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVAsynchronousCIImageFilteringRequestInternal, CIImage;

@interface AVAsynchronousCIImageFilteringRequest : NSObject <NSCopying> {

	AVAsynchronousCIImageFilteringRequestInternal* _internal;

}

@property (nonatomic,readonly) CGSize renderSize; 
@property (nonatomic,readonly) SCD_Struct_CM5 compositionTime; 
@property (nonatomic,readonly) CIImage * sourceImage; 
-(CGSize)renderSize;
-(void)_willDeallocOrFinalize;
-(SCD_Struct_CM5)compositionTime;
-(void)finishWithError:(id)arg1 ;
-(id)initUsingCompositingRequest:(id)arg1 sourceFrame:(CVBufferRef)arg2 dstColorSpace:(CGColorSpaceRef)arg3 cancellationTest:(/*^block*/id)arg4 defaultCIContextProvider:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(CIImage *)sourceImage;
-(void)finishWithImage:(id)arg1 context:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)finalize;
@end

