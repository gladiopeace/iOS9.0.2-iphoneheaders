/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:43 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLBaseLayerStack.h>

@interface BLRetouchLayerStack : BLBaseLayerStack {

	CGContextRef _labContextRef;
	SCD_Struct_BL9 _edgeAwareColor;

}
+(id)layerStack;
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(void)buildEdgeDetectFromImage:(id)arg1 ;
-(void)setStrokesDataDictionary:(id)arg1 ;
-(id)strokesDataDictionary;
-(char)haveLayerMask;
-(char)readyToDraw;
-(void)updateLabColorsInRect:(CGRect)arg1 ;
-(void)sampleEdgeDetectColorFromRect:(CGRect)arg1 ;
-(void)findEdgesInRect:(CGRect)arg1 result:(CGContextRef)arg2 ;
-(int)maxEdgeSize;
-(int)disabledBrushTypes;
-(void)addLayer:(id)arg1 ;
@end

