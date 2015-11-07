/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:29 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class BarShadowView, BlurView, UIView;

@interface RoutePickingCompactBarView : UIView {

	BarShadowView* _shadowView;
	BlurView* _blurView;
	UIView* _contentView;

}

@property (nonatomic,retain) BlurView * blurView;               //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(void)_setupContentViewConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(BlurView *)blurView;
-(void)setBlurView:(BlurView *)arg1 ;
@end

