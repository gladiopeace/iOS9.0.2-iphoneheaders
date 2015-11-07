/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKOverlay;
#import <MapKit/MapKit-Structs.h>
@interface MKOverlayRenderer : NSObject {

	id<MKOverlay> _overlay;
	SCD_Struct_MK2 _boundingMapRect;
	id _renderer;
	float _contentScaleFactor;
	float _alpha;

}

@property (nonatomic,readonly) id<MKOverlay> overlay;              //@synthesize overlay=_overlay - In the implementation block
@property (assign) float alpha;                                    //@synthesize alpha=_alpha - In the implementation block
@property (readonly) float contentScaleFactor; 
-(void)drawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(float)arg2 inContext:(CGContextRef)arg3 ;
-(id)initWithOverlay:(id)arg1 ;
-(SCD_Struct_MK2)mapRectForRect:(CGRect)arg1 ;
-(char)canDrawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(float)arg2 ;
-(void)set_boundingMapRect:(SCD_Struct_MK2)arg1 ;
-(CGRect)rectForMapRect:(SCD_Struct_MK2)arg1 ;
-(CGPoint)pointForMapPoint:(SCD_Struct_MK1)arg1 ;
-(SCD_Struct_MK2)_boundingMapRect;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK2)arg1 ;
-(void)set_renderer:(id)arg1 ;
-(id)_mk_overlayView;
-(void)overlay:(id)arg1 drawKey:(const SCD_Struct_MK12*)arg2 inContext:(CGContextRef)arg3 ;
-(SCD_Struct_MK1)_originMapPoint;
-(SCD_Struct_MK1)mapPointForPoint:(CGPoint)arg1 ;
-(char)overlay:(id)arg1 canDrawKey:(const SCD_Struct_MK12*)arg2 ;
-(id)_mk_overlayLayer;
-(void)setNeedsDisplayInMapRect:(SCD_Struct_MK2)arg1 zoomScale:(float)arg2 ;
-(id)_renderer;
-(void)setNeedsDisplay;
-(void)dealloc;
-(float)alpha;
-(void)setAlpha:(float)arg1 ;
-(id)init;
-(void)setContentScaleFactor:(float)arg1 ;
-(float)contentScaleFactor;
-(id<MKOverlay>)overlay;
@end

