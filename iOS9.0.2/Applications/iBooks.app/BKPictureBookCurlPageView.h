/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:17 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, CAGradientLayer, UIImage;

@interface BKPictureBookCurlPageView : UIView {

	char _mirror;
	UIImageView* _imageView;
	float _scale;
	char _drawsSpine;
	char _right;
	UIView* _topView;
	UIImageView* _gutter;
	int _pageOffset;
	double _duration;
	char _useNightColors;
	char _hasGradient;
	char _animate;
	CAGradientLayer* _largeGradientLayer;

}

@property (assign,getter=isMirror,nonatomic) char mirror;                       //@synthesize mirror=_mirror - In the implementation block
@property (assign,nonatomic) float scale;                                       //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) char drawsSpine;                                   //@synthesize drawsSpine=_drawsSpine - In the implementation block
@property (assign,getter=isRight,nonatomic) char right;                         //@synthesize right=_right - In the implementation block
@property (readonly) UIView * topView;                                          //@synthesize topView=_topView - In the implementation block
@property (assign,nonatomic) int pageOffset;                                    //@synthesize pageOffset=_pageOffset - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) char useNightColors;                               //@synthesize useNightColors=_useNightColors - In the implementation block
@property (assign,nonatomic) char shouldHaveGradient;                           //@synthesize hasGradient=_hasGradient - In the implementation block
@property (assign,nonatomic) char shouldAnimate;                                //@synthesize animate=_animate - In the implementation block
@property (nonatomic,retain) CAGradientLayer * largeGradientLayer;              //@synthesize largeGradientLayer=_largeGradientLayer - In the implementation block
@property (assign,nonatomic) double duration;                                   //@synthesize duration=_duration - In the implementation block
-(char)drawsSpine;
-(void)setDrawsSpine:(char)arg1 ;
-(void)setPageOffset:(int)arg1 ;
-(void)addGutter:(char)arg1 ;
-(char)useNightColors;
-(void)setTopView:(id)arg1 isRightPage:(char)arg2 ;
-(void)setMirror:(char)arg1 ;
-(void)setShouldHaveGradient:(char)arg1 ;
-(void)updateCurlPercent:(float)arg1 ;
-(void)pageCurlWillCancel;
-(CAGradientLayer *)largeGradientLayer;
-(void)setLargeGradientLayer:(CAGradientLayer *)arg1 ;
-(void)setUseNightColors:(char)arg1 ;
-(char)shouldHaveGradient;
-(char)isMirror;
-(void)setShouldAnimate:(char)arg1 ;
-(char)isRight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(char)shouldAnimate;
-(void)setScale:(float)arg1 ;
-(void)reset;
-(float)scale;
-(UIImage *)image;
-(UIView *)topView;
-(int)pageOffset;
-(void)setRight:(char)arg1 ;
@end

