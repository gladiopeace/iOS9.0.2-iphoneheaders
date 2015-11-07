/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:45 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKOverlayRenderer.h>

@class UIColor, NSArray;

@interface MKOverlayPathRenderer : MKOverlayRenderer {

	UIColor* _fillColor;
	UIColor* _strokeColor;
	float _lineWidth;
	int _lineJoin;
	int _lineCap;
	float _miterLimit;
	float _lineDashPhase;
	NSArray* _lineDashPattern;
	CGPathRef _path;

}

@property (retain) UIColor * fillColor; 
@property (retain) UIColor * strokeColor; 
@property (assign) float lineWidth; 
@property (assign) int lineJoin; 
@property (assign) int lineCap; 
@property (assign) float miterLimit; 
@property (assign) float lineDashPhase; 
@property (copy) NSArray * lineDashPattern; 
@property (assign) const CGPathRef path; 
-(void)applyStrokePropertiesToContext:(CGContextRef)arg1 atZoomScale:(float)arg2 ;
-(void)setLineDashPhase:(float)arg1 ;
-(NSArray *)lineDashPattern;
-(void)fillPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)drawMapRect:(SCD_Struct_MK2)arg1 zoomScale:(float)arg2 inContext:(CGContextRef)arg3 ;
-(int)lineCap;
-(void)strokePath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)applyFillPropertiesToContext:(CGContextRef)arg1 atZoomScale:(float)arg2 ;
-(float)lineDashPhase;
-(id)initWithOverlay:(id)arg1 ;
-(void)invalidatePath;
-(void)dealloc;
-(const CGPathRef)path;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(void)setPath:(const CGPathRef)arg1 ;
-(void)setLineCap:(int)arg1 ;
-(void)setLineJoin:(int)arg1 ;
-(void)setLineDashPattern:(NSArray *)arg1 ;
-(void)createPath;
-(int)lineJoin;
@end

