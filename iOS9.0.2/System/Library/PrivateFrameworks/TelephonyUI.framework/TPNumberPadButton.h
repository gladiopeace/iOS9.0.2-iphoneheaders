/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/TPNumberPadButtonProtocol.h>

@class TPRevealingRingView, UIColor, CALayer, NSString;

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol> {

	TPRevealingRingView* _revealingRingView;
	unsigned character;
	UIColor* _color;
	CALayer* _glyphLayer;
	CALayer* _highlightedGlyphLayer;

}

@property (nonatomic,retain) UIColor * color;                                        //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) TPRevealingRingView * revealingRingView;              //@synthesize revealingRingView=_revealingRingView - In the implementation block
@property (assign,nonatomic) float alphaOutsideAndInsideRing; 
@property (retain) CALayer * glyphLayer;                                             //@synthesize glyphLayer=_glyphLayer - In the implementation block
@property (retain) CALayer * highlightedGlyphLayer;                                  //@synthesize highlightedGlyphLayer=_highlightedGlyphLayer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) unsigned character; 
+(CGSize)defaultSize;
+(float)horizontalPadding;
+(float)verticalPadding;
+(id)imageForCharacter:(unsigned)arg1 highlighted:(char)arg2 whiteVersion:(char)arg3 ;
+(id)imageForCharacter:(unsigned)arg1 ;
+(id)imageForCharacter:(unsigned)arg1 highlighted:(char)arg2 ;
+(float)highlightCrossfadeNormalBeginTime;
+(float)highlightCrossfadeHighlightBeginTime;
+(float)highlightCrossfadeNormalFadeDuration;
+(float)highlightCrossfadeHighlightFadeDuration;
+(float)unhighlightCrossfadeNormalBeginTime;
+(float)unhighlightCrossfadeHighlightBeginTime;
+(float)unhighlightCrossfadeNormalFadeDuration;
+(float)unhighlightCrossfadeHighlightFadeDuration;
+(char)usesTelephonyGlyphsWhereAvailable;
+(float)outerCircleDiameter;
+(char)usesBoldAssets;
+(UIEdgeInsets)paddingOutsideRing;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(char)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(unsigned)character;
-(id)defaultColor;
-(void)setCharacter:(unsigned)arg1 ;
-(id)initForCharacter:(unsigned)arg1 ;
-(TPRevealingRingView *)revealingRingView;
-(void)setGlyphLayer:(CALayer *)arg1 ;
-(void)setHighlightedGlyphLayer:(CALayer *)arg1 ;
-(void)touchDown;
-(void)touchUp;
-(void)touchCancelled;
-(CALayer *)glyphLayer;
-(CALayer *)highlightedGlyphLayer;
-(void)setUsesColorDodgeBlending;
-(void)setUsesColorBurnBlending;
-(float)alphaOutsideAndInsideRing;
-(void)setAlphaOutsideAndInsideRing:(float)arg1 ;
@end

