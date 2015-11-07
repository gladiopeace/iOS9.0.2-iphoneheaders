/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:32:42 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@protocol MusicSwitcherButtonContainerViewDelegate;
@class UIFont, MPUTextButton, UIView, UIButton, NSString;

@interface MusicSwitcherButtonContainerView : UIView {

	UIFont* _defaultFontForTrailingAndLeadingButtons;
	MPUTextButton* _leadingButton;
	UIView* _leftHairlineView;
	MPUTextButton* _trailingButton;
	UIView* _rightHairlineView;
	UIButton* _switcherButton;
	char _isSwitcherButtonHidden;
	UIFont* _fontOfTextRightAbove;
	UIFont* _fontOfLeadingAndTrailingButtons;
	NSString* _leadingButtonTitle;
	NSString* _trailingButtonTitle;
	UIFont* _switcherButtonFont;
	NSString* _switcherButtonTitle;
	id<MusicSwitcherButtonContainerViewDelegate> _delegate;

}

@property (nonatomic,retain) UIFont * fontOfTextRightAbove;                                             //@synthesize fontOfTextRightAbove=_fontOfTextRightAbove - In the implementation block
@property (nonatomic,retain) UIFont * fontOfLeadingAndTrailingButtons;                                  //@synthesize fontOfLeadingAndTrailingButtons=_fontOfLeadingAndTrailingButtons - In the implementation block
@property (assign,nonatomic) char isSwitcherButtonHidden;                                               //@synthesize isSwitcherButtonHidden=_isSwitcherButtonHidden - In the implementation block
@property (nonatomic,copy) NSString * leadingButtonTitle;                                               //@synthesize leadingButtonTitle=_leadingButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * trailingButtonTitle;                                              //@synthesize trailingButtonTitle=_trailingButtonTitle - In the implementation block
@property (nonatomic,retain) UIFont * switcherButtonFont;                                               //@synthesize switcherButtonFont=_switcherButtonFont - In the implementation block
@property (nonatomic,copy) NSString * switcherButtonTitle;                                              //@synthesize switcherButtonTitle=_switcherButtonTitle - In the implementation block
@property (nonatomic,readonly) UIView * switcherButtonView; 
@property (assign,nonatomic,__weak) id<MusicSwitcherButtonContainerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(float)imageWidthForTraitCollection:(id)arg1 includingPadding:(char)arg2 ;
+(id)defaultHairlineColor;
+(float)heightWithFontOfTextRightAbove:(id)arg1 traitCollection:(id)arg2 shouldConsiderLeadingAndTrailingButtons:(char)arg3 ;
+(id)_chevronImageForTraitCollection:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MusicSwitcherButtonContainerViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MusicSwitcherButtonContainerViewDelegate>)delegate;
-(void)layoutMarginsDidChange;
-(void)setSwitcherButtonTitle:(NSString *)arg1 ;
-(UIView *)switcherButtonView;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setSwitcherButtonFont:(UIFont *)arg1 ;
-(void)setFontOfTextRightAbove:(UIFont *)arg1 ;
-(NSString *)switcherButtonTitle;
-(void)setLeadingButtonTitle:(NSString *)arg1 ;
-(void)setTrailingButtonTitle:(NSString *)arg1 ;
-(NSString *)leadingButtonTitle;
-(NSString *)trailingButtonTitle;
-(void)_handleSwitcherButtonTapped:(id)arg1 ;
-(id)_helperButtonsFont;
-(void)_handleLeadingButtonTapped:(id)arg1 ;
-(void)_handleTrailingButtonTapped:(id)arg1 ;
-(void)setIsSwitcherButtonHidden:(char)arg1 ;
-(void)setFontOfLeadingAndTrailingButtons:(UIFont *)arg1 ;
-(UIFont *)fontOfTextRightAbove;
-(UIFont *)fontOfLeadingAndTrailingButtons;
-(char)isSwitcherButtonHidden;
-(UIFont *)switcherButtonFont;
@end

