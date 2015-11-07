/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:20 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSCoding.h>

@class UIColor, NSArray, NSString, UIImageView;

@interface UIActivityIndicatorView : UIView <NSCoding> {

	double _duration;
	char _animating;
	int _activityIndicatorViewStyle;
	int _actualActivityIndicatorViewStyle;
	char _hidesWhenStopped;
	char _hasShadow;
	char _clockWise;
	char _spinning;
	char _useArtwork;
	char _useOutlineShadow;
	float _width;
	UIColor* _color;
	int _spokeCount;
	UIColor* _shadowColor;
	float _innerRadius;
	int _spokeFrameRatio;
	NSArray* _spokeImages;
	float _spinningDuration;
	NSString* _artBackupKeyString;
	NSString* _highlightArtBackupKeyString;
	UIImageView* _internalView;
	NSArray* _spokeHighlightImages;
	CGSize _shadowOffset;

}

@property (assign,nonatomic) int activityIndicatorViewStyle;                        //@synthesize activityIndicatorViewStyle=_activityIndicatorViewStyle - In the implementation block
@property (assign,nonatomic) char hidesWhenStopped;                                 //@synthesize hidesWhenStopped=_hidesWhenStopped - In the implementation block
@property (nonatomic,retain) UIColor * color;                                       //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                                   //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                                 //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) UIImageView * internalView;                          //@synthesize internalView=_internalView - In the implementation block
@property (assign,nonatomic) float width;                                           //@synthesize width=_width - In the implementation block
@property (assign) char hasShadow;                                                  //@synthesize hasShadow=_hasShadow - In the implementation block
@property (assign,nonatomic) int spokeCount;                                        //@synthesize spokeCount=_spokeCount - In the implementation block
@property (assign,nonatomic) float innerRadius;                                     //@synthesize innerRadius=_innerRadius - In the implementation block
@property (assign,nonatomic) int spokeFrameRatio;                                   //@synthesize spokeFrameRatio=_spokeFrameRatio - In the implementation block
@property (readonly) NSArray * spokeImages;                                         //@synthesize spokeImages=_spokeImages - In the implementation block
@property (readonly) NSArray * spokeHighlightImages;                                //@synthesize spokeHighlightImages=_spokeHighlightImages - In the implementation block
@property (assign,nonatomic) char clockWise;                                        //@synthesize clockWise=_clockWise - In the implementation block
@property (assign) char spinning;                                                   //@synthesize spinning=_spinning - In the implementation block
@property (assign,nonatomic) float spinningDuration;                                //@synthesize spinningDuration=_spinningDuration - In the implementation block
@property (assign,nonatomic) char useArtwork;                                       //@synthesize useArtwork=_useArtwork - In the implementation block
@property (nonatomic,readonly) NSString * artBackupKeyString;                       //@synthesize artBackupKeyString=_artBackupKeyString - In the implementation block
@property (nonatomic,readonly) NSString * highlightArtBackupKeyString;              //@synthesize highlightArtBackupKeyString=_highlightArtBackupKeyString - In the implementation block
@property (assign,nonatomic) char useOutlineShadow;                                 //@synthesize useOutlineShadow=_useOutlineShadow - In the implementation block
+(CGSize)size;
+(CGSize)defaultSizeForStyle:(int)arg1 ;
+(char)_isModernStyle:(int)arg1 ;
+(id)_loadResourcesForStyle:(int)arg1 ;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(char)_contentHuggingDefault_isUsuallyFixedHeight;
-(char)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)_commonInit;
-(void)tintColorDidChange;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_removeAllAnimations:(char)arg1 ;
-(CGSize)shadowOffset;
-(void)setStyle:(int)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UIColor *)shadowColor;
-(char)isHighlighted;
-(float)width;
-(void)stopAnimation;
-(char)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setAnimating:(char)arg1 ;
-(int)activityIndicatorViewStyle;
-(void)setActivityIndicatorViewStyle:(int)arg1 ;
-(void)startAnimation;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setWidth:(float)arg1 ;
-(void)_tearDownAnimation;
-(void)_setUpAnimation;
-(void)setHidesWhenStopped:(char)arg1 ;
-(int)_internalStyleForStyle:(int)arg1 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)_feedTheGear;
-(id)_defaultColorForStyle:(int)arg1 ;
-(id)_layoutInfosForStyle:(int)arg1 ;
-(int)_externalStyleForStyle:(int)arg1 ;
-(char)hidesWhenStopped;
-(char)_canCustomize;
-(int)spokeCount;
-(int)spokeFrameRatio;
-(float)_spokeWidthForGearWidth:(float)arg1 ;
-(float)_spokeLengthForGearWidth:(float)arg1 ;
-(float)_widthForGearWidth:(float)arg1 ;
-(float)_alphaValueForStep:(int)arg1 ;
-(char)_isModern;
-(id)_artBackupKeyWithHighlight:(char)arg1 ;
-(id)_imageForStep:(int)arg1 withColor:(id)arg2 ;
-(char)_shouldGoToCustomStyle;
-(int)_customStyleForStyle:(int)arg1 ;
-(char)_shouldGoBackToBaseStyle;
-(char)_hasCustomColor;
-(id)_generateModernImagesForImages:(id)arg1 color:(id)arg2 ;
-(char)_isArtWorkBased;
-(id)_generateImagesForColor:(id)arg1 highlight:(char)arg2 ;
-(id)_highlightColorForStyle:(int)arg1 ;
-(void)_updateInternalViewFrameWithBounds:(CGRect)arg1 ;
-(char)_canCustomizeStyle:(int)arg1 ;
-(id)initWithActivityIndicatorStyle:(int)arg1 ;
-(void)setUseOutlineShadow:(char)arg1 ;
-(void)setSpokeCount:(int)arg1 ;
-(void)setInnerRadius:(float)arg1 ;
-(void)setSpokeFrameRatio:(int)arg1 ;
-(void)setClockWise:(char)arg1 ;
-(void)setSpinningDuration:(float)arg1 ;
-(id)artBackupKey;
-(NSString *)highlightArtBackupKeyString;
-(id)_styleNameForStyle:(int)arg1 ;
-(void)generateImages;
-(char)hasShadow;
-(void)setHasShadow:(char)arg1 ;
-(float)innerRadius;
-(NSArray *)spokeImages;
-(char)clockWise;
-(char)spinning;
-(void)setSpinning:(char)arg1 ;
-(float)spinningDuration;
-(char)useArtwork;
-(void)setUseArtwork:(char)arg1 ;
-(NSString *)artBackupKeyString;
-(UIImageView *)internalView;
-(char)useOutlineShadow;
-(NSArray *)spokeHighlightImages;
-(char)isElementAccessibilityExposedToInterfaceBuilder;
@end

