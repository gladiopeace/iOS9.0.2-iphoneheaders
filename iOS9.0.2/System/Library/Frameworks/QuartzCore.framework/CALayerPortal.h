/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class CALayer;

@interface CALayerPortal : CALayer {

	CALayer* _sourceLayer;

}

@property (retain) CALayer * sourceLayer; 
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)dealloc;
-(void)setSourceLayer:(CALayer *)arg1 ;
@end

