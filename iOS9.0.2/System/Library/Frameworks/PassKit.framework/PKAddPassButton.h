/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIButton.h>

@class CAShapeLayer, PKShapeView, UIImageView, UILabel, CAFilter;

@interface PKAddPassButton : UIButton {

	CAShapeLayer* _layer;
	CGSize _boundsSize;
	PKShapeView* _maskView;
	UIImageView* _iconView;
	UILabel* _singleLineLabel;
	UILabel* _multiLineLabel;
	CAFilter* _highlightFilter;
	char _highlighted;
	CGSize _iconSize;
	CGSize _singlelineSize;
	CGSize _multilineSize;
	int _addPassButtonStyle;

}

@property (assign,nonatomic) int addPassButtonStyle;              //@synthesize addPassButtonStyle=_addPassButtonStyle - In the implementation block
+(id)addPassButtonWithStyle:(int)arg1 ;
+(Class)layerClass;
-(id)initWithAddPassButtonStyle:(int)arg1 ;
-(void)_applyStyle;
-(void)_adjustVisibleLabel;
-(void)_createHighlightFilterIfNecessary;
-(void)setAddPassButtonStyle:(int)arg1 ;
-(int)addPassButtonStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(char)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
@end

