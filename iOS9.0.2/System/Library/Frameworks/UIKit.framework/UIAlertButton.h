/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class UIImageView, UIImage;

@interface UIAlertButton : UIButton {

	float _imageOffset;
	char _isNewStyle;
	UIImageView* _highlightView;

}

@property (assign,nonatomic) float imageOffset;                     //@synthesize imageOffset=_imageOffset - In the implementation block
@property (readonly) UIImageView * highlightView;                   //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) UIImage * highlightImage; 
@property (assign,nonatomic) char isNewStyle;                       //@synthesize isNewStyle=_isNewStyle - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setEnabled:(char)arg1 ;
-(id)image;
-(char)canBecomeFocused;
-(void)focusedViewDidChange;
-(void)setImage:(id)arg1 forState:(unsigned)arg2 ;
-(id)initWithTitle:(id)arg1 ;
-(void)setHighlighted:(char)arg1 ;
-(UIImageView *)highlightView;
-(void)_transitionHighlightViewToHighlighted:(char)arg1 ;
-(void)setHighlightImage:(UIImage *)arg1 ;
-(UIImage *)highlightImage;
-(void)setIsNewStyle:(char)arg1 ;
-(float)imageOffset;
-(void)setImageOffset:(float)arg1 ;
-(char)isNewStyle;
@end

