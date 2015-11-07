/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FMCoreUI/FMDynamicTypeButton.h>

@class UIColor;

@interface FMBorderedButton : FMDynamicTypeButton {

	char _hairlineBorder;
	UIColor* _borderColor;

}

@property (assign,nonatomic) float borderWidth; 
@property (assign,nonatomic) float cornerRadius; 
@property (nonatomic,retain) UIColor * borderColor;              //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) char hairlineBorder;                //@synthesize hairlineBorder=_hairlineBorder - In the implementation block
-(void)setEnabled:(char)arg1 ;
-(void)setCornerRadius:(float)arg1 ;
-(void)awakeFromNib;
-(float)cornerRadius;
-(void)tintColorDidChange;
-(void)setHighlighted:(char)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(float)borderWidth;
-(void)prepareForInterfaceBuilder;
-(void)setHairlineBorder:(char)arg1 ;
-(char)hairlineBorder;
-(void)_bbUpdateLayer;
@end

