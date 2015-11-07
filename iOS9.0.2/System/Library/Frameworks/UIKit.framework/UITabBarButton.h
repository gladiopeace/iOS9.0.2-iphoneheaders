/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, UIVisualEffectView, UITabBarButtonLabel, _UIBadgeView, UITabBarSelectionIndicatorView, UIImage, NSValue, NSMutableDictionary, UIColor;

@interface UITabBarButton : UIControl {

	CGRect _hitRect;
	UIView* _info;
	UIVisualEffectView* _vibrancyEffectView;
	UITabBarButtonLabel* _label;
	_UIBadgeView* _badge;
	UITabBarSelectionIndicatorView* _selectedIndicator;
	char _selected;
	char _barHeight;
	char _badgeAnimated;
	UIEdgeInsets _infoInsets;
	UIOffset _selectedInfoOffset;
	UIOffset _infoOffset;
	UIImage* _customSelectedIndicatorImage;
	NSValue* _labelOffsetValue;
	NSMutableDictionary* _buttonTintColorsForState;
	NSMutableDictionary* _contentTintColorsForState;
	char _showsHighlightedState;
	char _centerAllContents;
	Class _appearanceGuideClass;
	UIColor* _unselectedTintColor;

}

@property (assign,setter=_setAppearanceGuideClass:,nonatomic) Class _appearanceGuideClass;                                           //@synthesize appearanceGuideClass=_appearanceGuideClass - In the implementation block
@property (nonatomic,retain) NSValue * labelOffsetValue;                                                                             //@synthesize labelOffsetValue=_labelOffsetValue - In the implementation block
@property (nonatomic,readonly) UITabBarButtonLabel * tabBarButtonLabel;                                                              //@synthesize label=_label - In the implementation block
@property (assign,setter=_setCenterAllContents:,nonatomic) char _centerAllContents;                                                  //@synthesize centerAllContents=_centerAllContents - In the implementation block
@property (setter=_setUnselectedTintColor:,getter=_unselectedTintColor,nonatomic,retain) UIColor * unselectedTintColor;              //@synthesize unselectedTintColor=_unselectedTintColor - In the implementation block
@property (assign,setter=_setShowsHighlightedState:,nonatomic) char _showsHighlightedState;                                          //@synthesize showsHighlightedState=_showsHighlightedState - In the implementation block
@property (assign,setter=_setSelected:,getter=_isSelected,nonatomic) char _selected; 
+(id)_defaultLabelColor;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(char)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(CGRect)_responderSelectionRectForWindow:(id)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(CGSize)_sensitivitySize;
-(char)canBecomeFocused;
-(void)didUpdateFocusFromView:(id)arg1 ;
-(Class)_appearanceGuideClass;
-(id)_scriptingInfo;
-(void)setHighlighted:(char)arg1 ;
-(void)_UIAppearance_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setTitleTextAttributes:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setAppearanceGuideClass:(Class)arg1 ;
-(id)_tabBar;
-(void)_sendFocusAction;
-(char)_isSelected;
-(char)_useBarHeight;
-(void)_setBarHeight:(float)arg1 ;
-(id)_contentTintColorForState:(unsigned)arg1 ;
-(void)_setUnselectedTintColor:(id)arg1 ;
-(void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_setTitlePositionAdjustment:(UIOffset)arg1 ;
-(void)_applyTabBarButtonAppearanceStorage:(id)arg1 withTaggedSelectors:(id)arg2 ;
-(id)_unselectedTintColor;
-(void)_setContentTintColor:(id)arg1 forState:(unsigned)arg2 ;
-(void)_setUpSelectedIndicatorViewIfNeeded;
-(void)_updateSelectedIndicatorView;
-(void)_setSelected:(char)arg1 ;
-(void)_updateToMatchCurrentState;
-(char)_showsHighlightedState;
-(id)_buttonTintColorForState:(unsigned)arg1 ;
-(void)_setUnselectedTintColor:(id)arg1 forceLabelToConform:(char)arg2 ;
-(void)_positionBadge;
-(void)_badgeAnimationDidStop:(id)arg1 finished:(id)arg2 ;
-(CGRect)_frameForSelectedIndicator;
-(void)_updateInfoFrame;
-(void)_showSelectedIndicator:(char)arg1 changeSelection:(char)arg2 ;
-(void)_setShowsHighlightedState:(char)arg1 ;
-(UITabBarButtonLabel *)tabBarButtonLabel;
-(id)_selectedIndicatorView;
-(id)initWithImage:(id)arg1 selectedImage:(id)arg2 label:(id)arg3 withInsets:(UIEdgeInsets)arg4 ;
-(void)_setTabBarHitRect:(CGRect)arg1 ;
-(CGRect)_tabBarHitRect;
-(id)_swappableImageView;
-(void)_setSelectedInfoOffset:(UIOffset)arg1 ;
-(void)_setInfoOffset:(UIOffset)arg1 ;
-(void)_setBadgeValue:(id)arg1 ;
-(void)_setBadgeAnimated:(char)arg1 ;
-(void)_setCustomSelectedIndicatorImage:(id)arg1 ;
-(void)_setLabelHidden:(char)arg1 ;
-(UIOffset)_titlePositionAdjustment;
-(void)_setButtonTintColor:(id)arg1 forState:(unsigned)arg2 ;
-(NSValue *)labelOffsetValue;
-(void)setLabelOffsetValue:(NSValue *)arg1 ;
-(char)_centerAllContents;
-(void)_setCenterAllContents:(char)arg1 ;
@end

