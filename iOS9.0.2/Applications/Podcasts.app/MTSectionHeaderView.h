/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@protocol MTSectionHeaderViewDelegate;
@class UILabel, MTColorTheme, _UIBackdropView, UIView, NSString;

@interface MTSectionHeaderView : UIView {

	char _floating;
	char _alwaysFloating;
	UILabel* _textLabel;
	id<MTSectionHeaderViewDelegate> _delegate;
	MTColorTheme* _colorTheme;
	_UIBackdropView* _backgroundView;
	UIView* _contentView;
	UIView* _dividerBar;
	_UIBackdropView* _backdropView;
	UIEdgeInsets _contentInset;
	UIEdgeInsets __layoutMargins;

}

@property (nonatomic,retain) UILabel * textLabel;                                          //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic,__weak) id<MTSectionHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MTColorTheme * colorTheme;                                    //@synthesize colorTheme=_colorTheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                    //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) char floating;                                                //@synthesize floating=_floating - In the implementation block
@property (assign,nonatomic) char alwaysFloating;                                          //@synthesize alwaysFloating=_alwaysFloating - In the implementation block
@property (nonatomic,retain) NSString * backdropGroupName; 
@property (nonatomic,retain) _UIBackdropView * backgroundView;                             //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * dividerBar;                                          //@synthesize dividerBar=_dividerBar - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                               //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets _layoutMargins;                                  //@synthesize _layoutMargins=__layoutMargins - In the implementation block
+(id)font;
+(float)height;
-(void)set_layoutMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)_layoutMargins;
-(void)setAlwaysFloating:(char)arg1 ;
-(void)_configureSubviews;
-(UIView *)dividerBar;
-(void)_updateBlurEffects;
-(char)alwaysFloating;
-(void)setDividerBar:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MTSectionHeaderViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MTSectionHeaderViewDelegate>)delegate;
-(UIEdgeInsets)contentInset;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setFloating:(char)arg1 ;
-(void)setBackgroundView:(_UIBackdropView *)arg1 ;
-(void)prepareForReuse;
-(UILabel *)textLabel;
-(_UIBackdropView *)backgroundView;
-(char)floating;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)setColorTheme:(MTColorTheme *)arg1 ;
-(MTColorTheme *)colorTheme;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(NSString *)backdropGroupName;
@end

