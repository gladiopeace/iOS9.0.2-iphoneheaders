/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:14 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface MPUBorderConfiguration : NSObject <NSCopying> {

	float _borderAlpha;
	UIColor* _borderColor;
	float _borderWidth;
	float _fillAlpha;
	UIColor* _fillColor;
	float _dropShadowAlpha;
	UIColor* _dropShadowColor;
	unsigned _dropShadowEdges;
	float _dropShadowWidth;

}

@property (assign,nonatomic) float borderAlpha;                                              //@synthesize borderAlpha=_borderAlpha - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                          //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) float borderWidth;                                              //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) float fillAlpha;                                                //@synthesize fillAlpha=_fillAlpha - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                                            //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) float dropShadowAlpha;                                          //@synthesize dropShadowAlpha=_dropShadowAlpha - In the implementation block
@property (nonatomic,retain) UIColor * dropShadowColor;                                      //@synthesize dropShadowColor=_dropShadowColor - In the implementation block
@property (assign,nonatomic) unsigned dropShadowEdges;                                       //@synthesize dropShadowEdges=_dropShadowEdges - In the implementation block
@property (assign,nonatomic) float dropShadowWidth;                                          //@synthesize dropShadowWidth=_dropShadowWidth - In the implementation block
@property (getter=isFullyTransparent,nonatomic,readonly) char fullyTransparent; 
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(UIColor *)borderColor;
-(float)borderWidth;
-(char)isFullyTransparent;
-(float)borderAlpha;
-(float)fillAlpha;
-(float)dropShadowAlpha;
-(void)setDropShadowAlpha:(float)arg1 ;
-(UIColor *)dropShadowColor;
-(unsigned)dropShadowEdges;
-(float)dropShadowWidth;
-(void)setDropShadowColor:(UIColor *)arg1 ;
-(void)setDropShadowEdges:(unsigned)arg1 ;
-(void)setDropShadowWidth:(float)arg1 ;
-(void)setFillAlpha:(float)arg1 ;
-(void)setBorderAlpha:(float)arg1 ;
@end

