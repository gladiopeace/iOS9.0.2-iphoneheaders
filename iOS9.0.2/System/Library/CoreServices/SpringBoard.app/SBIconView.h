/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:30 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBIconObserver.h>
#import <SpringBoard/SBReusableView.h>

@protocol SBIconAccessoryView, SBReusableView, SBIconViewDelegate, SBIconViewObserver;
@class SBIcon, UIView, SBIconImageView, SBIconImageCrossfadeView, SBCloseBoxView, SBFParallaxSettings, SBIconLabelView, SBFolderIconBackgroundView, UILongPressGestureRecognizer, UIPreviewForceInteractionProgress, NSTimer, _UILegibilitySettings, NSString;

@interface SBIconView : UIView <_UISettingsKeyObserver, SBIconObserver, SBReusableView> {

	SBIcon* _icon;
	int _iconLocation;
	UIView* _currentImageView;
	SBIconImageView* _iconImageView;
	SBIconImageCrossfadeView* _crossfadeView;
	UIView*<SBIconAccessoryView> _accessoryView;
	SBCloseBoxView* _closeBox;
	SBFParallaxSettings* _closeBoxParallaxSettings;
	CGPoint _wallpaperRelativeCloseBoxCenter;
	SBIconLabelView* _labelView;
	UIView*<SBReusableView> _labelAccessoryView;
	int _currentLabelAccessoryType;
	SBFolderIconBackgroundView* _dropGlow;
	UILongPressGestureRecognizer* _shortcutMenuPeekGesture;
	UIPreviewForceInteractionProgress* _shortcutMenuPresentProgress;
	unsigned _drawsLabel : 1;
	unsigned _isEditing : 1;
	unsigned _isPaused : 1;
	unsigned _isGrabbed : 1;
	unsigned _isOverlapping : 1;
	unsigned _refusesRecipientStatus : 1;
	unsigned _highlighted : 1;
	unsigned _launchDisabled : 1;
	unsigned _isJittering : 1;
	unsigned _allowJitter : 1;
	unsigned _touchDownInIcon : 1;
	unsigned _hideLabel : 1;
	unsigned _hideLabelAccessoryView;
	CGPoint _unjitterPoint;
	CGPoint _grabPoint;
	NSTimer* _longPressTimer;
	double _longPressGrabDuration;
	CGRect _visibleImageRect;
	id<SBIconViewDelegate> _delegate;
	id<SBIconViewObserver> _observer;
	_UILegibilitySettings* _legibilitySettings;
	float _iconImageAlpha;
	float _iconAccessoryAlpha;
	float _iconLabelAlpha;
	CGPoint _wallpaperRelativeImageCenter;

}

@property (nonatomic,retain) SBIcon * icon; 
@property (assign,nonatomic) id<SBIconViewDelegate> delegate;                                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) id<SBIconViewObserver> observer;                                              //@synthesize observer=_observer - In the implementation block
@property (assign,nonatomic) int location;                                                                 //@synthesize iconLocation=_iconLocation - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                   //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) float iconImageAlpha;                                                         //@synthesize iconImageAlpha=_iconImageAlpha - In the implementation block
@property (assign,nonatomic) float iconAccessoryAlpha;                                                     //@synthesize iconAccessoryAlpha=_iconAccessoryAlpha - In the implementation block
@property (assign,nonatomic) float iconLabelAlpha;                                                         //@synthesize iconLabelAlpha=_iconLabelAlpha - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * shortcutMenuPeekGesture;                       //@synthesize shortcutMenuPeekGesture=_shortcutMenuPeekGesture - In the implementation block
@property (nonatomic,retain) UIPreviewForceInteractionProgress * shortcutMenuPresentProgress;              //@synthesize shortcutMenuPresentProgress=_shortcutMenuPresentProgress - In the implementation block
@property (assign,nonatomic) char isEditing; 
@property (nonatomic,readonly) char shouldShowLabelAccessoryView; 
@property (nonatomic,readonly) int currentLabelAccessoryType;                                              //@synthesize currentLabelAccessoryType=_currentLabelAccessoryType - In the implementation block
@property (assign,nonatomic) CGPoint wallpaperRelativeImageCenter;                                         //@synthesize wallpaperRelativeImageCenter=_wallpaperRelativeImageCenter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)defaultIconSize;
+(CGSize)defaultVisibleIconImageSize;
+(CGSize)defaultIconImageSize;
+(CGPoint)defaultIconImageCenter;
+(CGRect)_rectForLayoutMetric:(int)arg1 ;
+(float)_labelHeight;
+(int)_defaultIconFormat;
+(CGRect)defaultIconImageFrame;
+(float)labelAccessoryViewRightMargin;
+(char)canShowLabelAccessoryView;
+(id)_jitterPositionAnimation;
+(id)_jitterTransformAnimation;
+(CGSize)maxLabelSize;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(void)removeAllIconAnimations;
-(void)setWallpaperRelativeImageCenter:(CGPoint)arg1 ;
-(CGPoint)iconImageCenter;
-(char)canReceiveGrabbedIcon:(id)arg1 ;
-(void)setIsEditing:(char)arg1 animated:(char)arg2 ;
-(char)isTouchDownInIcon;
-(void)setAllowJitter:(char)arg1 ;
-(void)setIconPosition:(CGPoint)arg1 ;
-(void)setIsGrabbed:(char)arg1 ;
-(void)setIsOverlapping:(char)arg1 ;
-(void)prepareDropGlow;
-(void)showDropGlow:(char)arg1 ;
-(void)removeDropGlow;
-(id)dropGlow;
-(void)setShortcutMenuPeekGesture:(UILongPressGestureRecognizer *)arg1 ;
-(void)setShortcutMenuPresentProgress:(UIPreviewForceInteractionProgress *)arg1 ;
-(char)isGrabbed;
-(UILongPressGestureRecognizer *)shortcutMenuPeekGesture;
-(UIPreviewForceInteractionProgress *)shortcutMenuPresentProgress;
-(void)setIconImageAndAccessoryAlpha:(float)arg1 ;
-(CGSize)iconImageVisibleSize;
-(void)iconAccessoriesDidUpdate:(id)arg1 ;
-(void)iconLaunchEnabledDidChange:(id)arg1 ;
-(id)iconImageSnapshot;
-(CGRect)iconImageFrame;
-(float)iconImageAlpha;
-(void)setIconLabelAlpha:(float)arg1 ;
-(void)setRefusesRecipientStatus:(char)arg1 ;
-(char)isInDock;
-(void)setSuppressesBlurryBackgroundChanges:(char)arg1 ;
-(void)setLabelHidden:(char)arg1 ;
-(void)setLabelAccessoryViewHidden:(char)arg1 ;
-(void)cancelLongPressTimer;
-(void)_updateJitter;
-(void)_updateIconImageViewAnimated:(char)arg1 ;
-(void)_updateLabelAccessoryView;
-(void)_updateProgressAnimated:(char)arg1 ;
-(void)_updateAccessoryViewWithAnimation:(char)arg1 ;
-(void)_setIcon:(id)arg1 animated:(char)arg2 ;
-(void)setIconImageAlpha:(float)arg1 ;
-(void)setIconAccessoryAlpha:(float)arg1 ;
-(void)_applyIconImageAlpha:(float)arg1 ;
-(void)_applyIconAccessoryAlpha:(float)arg1 ;
-(void)_applyIconLabelAlpha:(float)arg1 ;
-(CGRect)_frameForImageView;
-(CGRect)_frameForLabel;
-(CGRect)_frameForLabelAccessoryViewWithLabelFrame:(CGRect)arg1 ;
-(CGRect)_frameForAccessoryView;
-(CGPoint)_centerForCloseBox;
-(float)_labelVerticalOffset;
-(CGPoint)_centerForCloseBoxRelativeToVisibleImageFrame:(CGRect)arg1 ;
-(void)_updateAdaptiveColors;
-(id)_labelImageParameters;
-(id)_legibilitySettingsWithParameters:(id)arg1 ;
-(id)_legibilitySettingsWithStyle:(int)arg1 primaryColor:(id)arg2 ;
-(void)_configureLabelAccessoryViewForType:(int)arg1 ;
-(void)_createAccessoryViewIfNecessary;
-(void)_updateBrightness;
-(void)prepareToCrossfadeImageWithView:(id)arg1 maskCorners:(char)arg2 trueCrossfade:(char)arg3 anchorPoint:(CGPoint)arg4 ;
-(void)cleanupAfterImageCrossfade;
-(void)setImageCrossfadeFadeFraction:(float)arg1 ;
-(void)setImageCrossfadeMorphFraction:(float)arg1 totalScale:(float)arg2 ;
-(void)_handleSecondHalfLongPressTimer:(id)arg1 ;
-(void)_setPreparingForPotentialShortcutMenuPresentation:(char)arg1 ;
-(void)_delegateTouchEnded:(char)arg1 ;
-(double)grabDurationForEvent:(id)arg1 ;
-(void)_handleFirstHalfLongPressTimer:(id)arg1 ;
-(CGPoint)wallpaperRelativeImageCenter;
-(char)_delegateTapAllowed;
-(char)allowsTapWhileEditing;
-(void)_applyEditingStateAnimated:(char)arg1 ;
-(char)_isShowingCloseBox;
-(void)_closeBoxTapped;
-(void)setShouldRasterizeImageView:(char)arg1 ;
-(id)initWithContentType:(unsigned)arg1 ;
-(void)swapInIcon:(id)arg1 ;
-(CGRect)_frameForVisibleImage;
-(void)invalidateLabelLayoutGeometry;
-(id)_legibilitySettingsWithPrimaryColor:(id)arg1 ;
-(char)shouldShowLabelAccessoryView;
-(void)_recursiveNotifyInteractionTintColorDidChangeForReasons:(unsigned)arg1 ;
-(void)_recursivelyUpdateBackdropMaskFrames;
-(void)prepareToCrossfadeImageWithView:(id)arg1 maskCorners:(char)arg2 trueCrossfade:(char)arg3 ;
-(void)setTouchDownInIcon:(char)arg1 ;
-(UIEdgeInsets)snapshotEdgeInsets;
-(int)currentLabelAccessoryType;
-(float)iconAccessoryAlpha;
-(float)iconLabelAlpha;
-(void)setIsEditing:(char)arg1 ;
-(void)_updateCloseBoxAnimated:(char)arg1 ;
-(id)_iconImageView;
-(void)setDelegate:(id<SBIconViewDelegate>)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<SBIconViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_automationID;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)tintColor;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(void)_updateLabel;
-(char)isEditing;
-(void)prepareForReuse;
-(char)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<SBIconViewObserver>)observer;
-(void)setObserver:(id<SBIconViewObserver>)arg1 ;
-(void)setIcon:(SBIcon *)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setPaused:(char)arg1 ;
-(int)location;
-(id)_labelImage;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(SBIcon *)icon;
-(void)setLocation:(int)arg1 ;
-(id)labelView;
@end

