/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CADistanceFieldLayer : CALayer

@property (copy) NSString * renderMode; 
@property (assign) char invertsShape; 
@property (assign) CGColorRef foregroundColor; 
@property (assign) float offset; 
@property (assign) float sharpness; 
@property (assign) float lineWidth; 
+(id)defaultValueForKey:(id)arg1 ;
+(char)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(char)_hasRenderLayerSubclass;
-(void)setRenderMode:(NSString *)arg1 ;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(float)sharpness;
-(char)invertsShape;
-(unsigned)_renderImageCopyFlags;
-(void)setInvertsShape:(char)arg1 ;
-(void)setSharpness:(float)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(void)setOffset:(float)arg1 ;
-(float)offset;
-(CGColorRef)foregroundColor;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(NSString *)renderMode;
@end

