/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:27 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIButton, UISlider, NSAttributedString, NSString, UIImage;

@interface SKUIDownloadsCellView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _imageView;
	UIButton* _button;
	UISlider* _progressSlider;
	NSAttributedString* _attributedTitle;
	NSString* _subtitle;
	int _buttonType;
	char _isPad;

}

@property (nonatomic,retain) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                               //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) int buttonType;                                    //@synthesize buttonType=_buttonType - In the implementation block
@property (nonatomic,readonly) UIButton * button;                               //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) char isPad;                                        //@synthesize isPad=_isPad - In the implementation block
-(void)setButtonType:(int)arg1 ;
-(UIButton *)button;
-(void)setImage:(UIImage *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setAttributedTitle:(NSAttributedString *)arg1 ;
-(UIImage *)image;
-(void)setProgress:(float)arg1 ;
-(NSString *)subtitle;
-(int)buttonType;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSAttributedString *)attributedTitle;
-(float)progress;
-(void)setIsPad:(char)arg1 ;
-(char)isPad;
@end

