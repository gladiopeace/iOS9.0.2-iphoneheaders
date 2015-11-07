/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class UIView, NSString, UIImageView;

@interface IMPopoverView : UIView {

	float _arrowX;
	UIView* _contentView;
	NSString* _templateName;
	NSString* _lastBackgroundImageName;
	UIImageView* _backgroundSliceLeft;
	UIImageView* _backgroundSliceRight;
	float _internalPadding;
	float _borderWidth;
	float _screenPadding;
	float _topCornerHeightAdjustment;
	float _bottomArrowHeightAdjustment;
	float _bottomCornerHeightAdjustment;
	unsigned _arrowDirection;
	char _arrowHidden;

}

@property (nonatomic,retain) UIView * contentView;                            //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) float arrowX;                                    //@synthesize arrowX=_arrowX - In the implementation block
@property (assign,nonatomic) unsigned arrowDirection;                         //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (assign,nonatomic) char arrowHidden;                                //@synthesize arrowHidden=_arrowHidden - In the implementation block
@property (nonatomic,retain) NSString * templateName;                         //@synthesize templateName=_templateName - In the implementation block
@property (assign,nonatomic) float internalPadding;                           //@synthesize internalPadding=_internalPadding - In the implementation block
@property (assign,nonatomic) float borderWidth;                               //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) float screenPadding;                             //@synthesize screenPadding=_screenPadding - In the implementation block
@property (assign,nonatomic) float topCornerHeightAdjustment;                 //@synthesize topCornerHeightAdjustment=_topCornerHeightAdjustment - In the implementation block
@property (assign,nonatomic) float bottomArrowHeightAdjustment;               //@synthesize bottomArrowHeightAdjustment=_bottomArrowHeightAdjustment - In the implementation block
@property (assign,nonatomic) float bottomCornerHeightAdjustment;              //@synthesize bottomCornerHeightAdjustment=_bottomCornerHeightAdjustment - In the implementation block
+(float)arrowHeight;
+(id)_shadowPathForRect:(CGRect)arg1 arrowDirection:(unsigned)arg2 ;
-(void)setArrowHidden:(char)arg1 animated:(char)arg2 ;
-(float)arrowX;
-(float)internalPadding;
-(void)setArrowHidden:(char)arg1 ;
-(void)setArrowX:(float)arg1 ;
-(void)setInternalPadding:(float)arg1 ;
-(float)screenPadding;
-(void)setScreenPadding:(float)arg1 ;
-(float)topCornerHeightAdjustment;
-(void)setTopCornerHeightAdjustment:(float)arg1 ;
-(float)bottomArrowHeightAdjustment;
-(void)setBottomArrowHeightAdjustment:(float)arg1 ;
-(float)bottomCornerHeightAdjustment;
-(void)setBottomCornerHeightAdjustment:(float)arg1 ;
-(char)arrowHidden;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)setBorderWidth:(float)arg1 ;
-(float)borderWidth;
-(unsigned)arrowDirection;
-(void)setArrowDirection:(unsigned)arg1 ;
-(id)backgroundImageName;
-(id)_shadowPath;
-(void)_updateShadow;
-(void)setTemplateName:(NSString *)arg1 ;
-(NSString *)templateName;
@end

