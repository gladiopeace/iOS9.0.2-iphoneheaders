/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:22 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIColor, _UILegibilitySettings;

@interface _UIVibrantSettings : NSObject {

	int _style;
	UIColor* _referenceColor;
	_UILegibilitySettings* _legibilitySettings;
	float _referenceContrast;
	UIColor* _tintColor;
	UIColor* _shimmerColor;
	UIColor* _chevronShimmerColor;
	UIColor* _highlightColor;
	UIColor* _highlightLimitingColor;

}

@property (nonatomic,readonly) UIColor * referenceColor;                                //@synthesize referenceColor=_referenceColor - In the implementation block
@property (nonatomic,readonly) float referenceContrast;                                 //@synthesize referenceContrast=_referenceContrast - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                       //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * shimmerColor;                                    //@synthesize shimmerColor=_shimmerColor - In the implementation block
@property (nonatomic,retain) UIColor * chevronShimmerColor;                             //@synthesize chevronShimmerColor=_chevronShimmerColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                                  //@synthesize highlightColor=_highlightColor - In the implementation block
@property (nonatomic,readonly) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,readonly) int style;                                               //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIColor * highlightLimitingColor;                          //@synthesize highlightLimitingColor=_highlightLimitingColor - In the implementation block
+(id)vibrantSettingsWithReferenceColor:(id)arg1 referenceContrast:(float)arg2 legibilitySettings:(id)arg3 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)style;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(int)_style;
-(UIColor *)referenceColor;
-(UIColor *)highlightColor;
-(_UILegibilitySettings *)legibilitySettings;
-(id)initWithReferenceColor:(id)arg1 referenceContrast:(float)arg2 legibilitySettings:(id)arg3 ;
-(id)_computeSourceColorDodgeColorForDestinationColor:(id)arg1 producingLuminanceChange:(float)arg2 ;
-(UIColor *)highlightLimitingColor;
-(UIColor *)shimmerColor;
-(UIColor *)chevronShimmerColor;
-(id)tintViewWithFrame:(CGRect)arg1 ;
-(id)highlightLimitingViewWithFrame:(CGRect)arg1 ;
-(float)referenceContrast;
-(void)setShimmerColor:(UIColor *)arg1 ;
-(void)setChevronShimmerColor:(UIColor *)arg1 ;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setHighlightLimitingColor:(UIColor *)arg1 ;
@end

