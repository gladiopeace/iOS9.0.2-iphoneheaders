/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface _UIGraphicsLetterpressStyle : NSObject <NSCopying> {

	UIColor* embossHighlightColor;
	UIColor* embossShadowColor;
	float embossSize;
	UIColor* innerShadowColor;
	float innerShadowBlur;
	int innerShadowBlendMode;
	UIColor* outerShadowColor;
	float outerShadowBlur;
	int outerShadowBlendMode;
	UIColor* topGradientColor;
	UIColor* bottomGradientColor;
	float innerOpacity;
	CGPoint innerShadowOffset;
	CGPoint outerShadowOffset;

}

@property (nonatomic,retain) UIColor * embossHighlightColor; 
@property (nonatomic,retain) UIColor * embossShadowColor; 
@property (assign,nonatomic) float embossSize; 
@property (nonatomic,retain) UIColor * innerShadowColor; 
@property (assign,nonatomic) CGPoint innerShadowOffset; 
@property (assign,nonatomic) float innerShadowBlur; 
@property (assign,nonatomic) int innerShadowBlendMode; 
@property (nonatomic,retain) UIColor * outerShadowColor; 
@property (assign,nonatomic) CGPoint outerShadowOffset; 
@property (assign,nonatomic) float outerShadowBlur; 
@property (assign,nonatomic) int outerShadowBlendMode; 
@property (nonatomic,retain) UIColor * topGradientColor; 
@property (nonatomic,retain) UIColor * bottomGradientColor; 
@property (assign,nonatomic) float innerOpacity; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
+(id)old2xLetterpressStyle;
+(id)defaultLetterpressStyle;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEmbossHighlightColor:(UIColor *)arg1 ;
-(void)setEmbossShadowColor:(UIColor *)arg1 ;
-(void)setEmbossSize:(float)arg1 ;
-(void)setInnerShadowColor:(UIColor *)arg1 ;
-(void)setInnerShadowOffset:(CGPoint)arg1 ;
-(void)setInnerShadowBlur:(float)arg1 ;
-(void)setInnerShadowBlendMode:(int)arg1 ;
-(void)setOuterShadowColor:(UIColor *)arg1 ;
-(void)setOuterShadowOffset:(CGPoint)arg1 ;
-(void)setOuterShadowBlur:(float)arg1 ;
-(void)setOuterShadowBlendMode:(int)arg1 ;
-(void)setTopGradientColor:(UIColor *)arg1 ;
-(void)setBottomGradientColor:(UIColor *)arg1 ;
-(void)setInnerOpacity:(float)arg1 ;
-(UIColor *)embossHighlightColor;
-(UIColor *)embossShadowColor;
-(float)embossSize;
-(UIColor *)innerShadowColor;
-(CGPoint)innerShadowOffset;
-(float)innerShadowBlur;
-(int)innerShadowBlendMode;
-(UIColor *)outerShadowColor;
-(CGPoint)outerShadowOffset;
-(float)outerShadowBlur;
-(int)outerShadowBlendMode;
-(UIColor *)topGradientColor;
-(UIColor *)bottomGradientColor;
-(float)innerOpacity;
-(UIEdgeInsets)edgeInsets;
@end

