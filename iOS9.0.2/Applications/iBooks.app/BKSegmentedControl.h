/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UISegmentedControl.h>

@class UIFont, UIColor, UIImage;

@interface BKSegmentedControl : UISegmentedControl {

	char _inMiniBar;
	UIFont* _font;
	CGPoint _frameOffset;
	CGSize _textShadowOffset;
	UIColor* _textColor;
	UIImage* _divider;
	UIImage* _dividerMini;
	UIImage* _dividerLeftPressed;
	UIImage* _dividerLeftPressedMini;
	UIImage* _dividerRightPressed;
	UIImage* _dividerRightPressedMini;
	UIImage* _background;
	UIImage* _backgroundMini;
	UIImage* _backgroundSelected;
	UIImage* _backgroundSelectedMini;
	UIImage* _divideRightPressedMini;

}

@property (nonatomic,retain) UIFont * font;                                  //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) CGPoint frameOffset;                            //@synthesize frameOffset=_frameOffset - In the implementation block
@property (assign,nonatomic) CGSize textShadowOffset;                        //@synthesize textShadowOffset=_textShadowOffset - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                            //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIImage * divider;                              //@synthesize divider=_divider - In the implementation block
@property (nonatomic,retain) UIImage * dividerMini;                          //@synthesize dividerMini=_dividerMini - In the implementation block
@property (nonatomic,retain) UIImage * dividerLeftPressed;                   //@synthesize dividerLeftPressed=_dividerLeftPressed - In the implementation block
@property (nonatomic,retain) UIImage * dividerLeftPressedMini;               //@synthesize dividerLeftPressedMini=_dividerLeftPressedMini - In the implementation block
@property (nonatomic,retain) UIImage * dividerRightPressed;                  //@synthesize dividerRightPressed=_dividerRightPressed - In the implementation block
@property (nonatomic,retain) UIImage * dividerRightPressedMini;              //@synthesize divideRightPressedMini=_divideRightPressedMini - In the implementation block
@property (nonatomic,retain) UIImage * background;                           //@synthesize background=_background - In the implementation block
@property (nonatomic,retain) UIImage * backgroundMini;                       //@synthesize backgroundMini=_backgroundMini - In the implementation block
@property (nonatomic,retain) UIImage * backgroundSelected;                   //@synthesize backgroundSelected=_backgroundSelected - In the implementation block
@property (nonatomic,retain) UIImage * backgroundSelectedMini;               //@synthesize backgroundSelectedMini=_backgroundSelectedMini - In the implementation block
-(void)updateAppearance;
-(void)IMToolbarUpdateForMiniBarState:(char)arg1 ;
-(CGPoint)frameOffset;
-(SCD_Struct_BK44)_appearanceStruct;
-(UIImage *)dividerMini;
-(UIImage *)divider;
-(UIImage *)dividerLeftPressed;
-(UIImage *)dividerRightPressed;
-(UIImage *)backgroundMini;
-(UIImage *)backgroundSelectedMini;
-(UIImage *)backgroundSelected;
-(CGSize)textShadowOffset;
-(char)useCustomButton;
-(void)setFrameOffset:(CGPoint)arg1 ;
-(void)setTextShadowOffset:(CGSize)arg1 ;
-(void)setDivider:(UIImage *)arg1 ;
-(void)setDividerMini:(UIImage *)arg1 ;
-(void)setDividerLeftPressed:(UIImage *)arg1 ;
-(UIImage *)dividerLeftPressedMini;
-(void)setDividerLeftPressedMini:(UIImage *)arg1 ;
-(void)setDividerRightPressed:(UIImage *)arg1 ;
-(UIImage *)dividerRightPressedMini;
-(void)setDividerRightPressedMini:(UIImage *)arg1 ;
-(void)setBackgroundMini:(UIImage *)arg1 ;
-(void)setBackgroundSelected:(UIImage *)arg1 ;
-(void)setBackgroundSelectedMini:(UIImage *)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(id)initWithItems:(id)arg1 ;
-(UIImage *)background;
-(void)setBackground:(UIImage *)arg1 ;
@end

