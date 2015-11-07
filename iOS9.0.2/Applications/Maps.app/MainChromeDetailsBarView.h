/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class BlurView, BarShadowView, UILabel, UIButton, UIView, UIActivityIndicatorView, NSArray, NSLayoutConstraint, MainChromeDetailsBarContent;

@interface MainChromeDetailsBarView : UIView {

	BlurView* _backdrop;
	BarShadowView* _shadow;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIButton* _button;
	UIView* _contentView;
	UIView* _spacer;
	UIActivityIndicatorView* _activityIndicator;
	char _isDark;
	NSArray* _activityIndicatorConstraints;
	NSLayoutConstraint* _primaryToTopContraint;
	NSLayoutConstraint* _secondaryToPrimaryConstraint;
	NSLayoutConstraint* _primaryTrailingToButtonConstraint;
	NSLayoutConstraint* _centerPrimaryLabelYConstraint;
	NSLayoutConstraint* _centerPrimaryLabelXConstraint;
	NSLayoutConstraint* _primaryLabelLeadingConstraint;
	char _enabled;
	MainChromeDetailsBarContent* _content;

}

@property (nonatomic,retain) MainChromeDetailsBarContent * content;              //@synthesize content=_content - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                      //@synthesize enabled=_enabled - In the implementation block
+(float)defaultHeight;
+(char)requiresConstraintBasedLayout;
-(void)_updateActivityIndicatorFromContent;
-(void)_updateFromContent;
-(void)setContent:(id)arg1 animated:(char)arg2 ;
-(void)_updateTextColorFromContent;
-(id)initWithFrame:(CGRect)arg1 settingsButtonWidth:(float)arg2 ;
-(void)setLightness:(int)arg1 ;
-(char)_showsActivity;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(MainChromeDetailsBarContent *)content;
-(void)transitionToPrivateStyle:(int)arg1 ;
-(void)_buttonTapped:(id)arg1 ;
-(void)setContent:(MainChromeDetailsBarContent *)arg1 ;
@end

