/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:31 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class CMDrawableMapper, NSMutableArray, NSAffineTransform;

@interface CMDrawingContext : NSObject {

	CMDrawableMapper* _mapper;
	NSMutableArray* _actions;
	CGRect _frame;
	CGRect _finalFrame;
	CFDataRef _data;
	CGDataConsumerRef _dataConsumer;
	CGContextRef _cgContext;
	NSAffineTransform* _currentTransform;
	NSMutableArray* _transforms;
	CGImageRef _fillImage;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGRect)frame;
-(void)setLineWidth:(float)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setFillImage:(CGImageRef)arg1 ;
-(void)addTransform:(id)arg1 ;
-(void)restoreLastTransform;
-(CGRect)transformRectToGroup:(CGRect)arg1 ;
-(CGRect)pdfFrame;
-(id)copyPDF;
-(void)_applyTransform:(id)arg1 ;
-(void)_copyCGContext;
-(void)_playbackActions;
-(void)_closeContext;
-(void)_addTransform:(id)arg1 ;
-(void)_restoreLastTransform;
-(CGRect)_transformRect:(CGRect)arg1 withTransform:(id)arg2 ;
-(CGContextRef)_cgContext;
-(void)setMapper:(id)arg1 ;
-(id)mapper;
-(float)currentScaleFactor;
-(CGAffineTransform)currentTransform;
-(void)setLineDash:(id)arg1 ;
-(void)addDebugPath:(CGPathRef)arg1 ;
-(void)addPath:(CGPathRef)arg1 ;
-(CGRect)transformRectToPage:(CGRect)arg1 ;
@end

