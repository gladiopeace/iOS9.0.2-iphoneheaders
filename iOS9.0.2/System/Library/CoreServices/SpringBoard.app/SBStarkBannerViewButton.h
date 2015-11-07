/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:37 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, UIColor, UIImage, UIView, UIImageView;

@interface SBStarkBannerViewButton : UIControl {

	UILabel* _textLabel;
	UIColor* _unselectedTextColor;
	UIColor* _selectedTextColor;
	UIImage* _unselectedImage;
	UIImage* _selectedImage;
	UIView* _highlightView;
	UIImageView* _imageView;
	UIColor* _highlightColor;

}

@property (nonatomic,retain) UILabel * textLabel;                        //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIColor * unselectedTextColor;              //@synthesize unselectedTextColor=_unselectedTextColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedTextColor;                //@synthesize selectedTextColor=_selectedTextColor - In the implementation block
@property (nonatomic,retain) UIImage * unselectedImage;                  //@synthesize unselectedImage=_unselectedImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;                    //@synthesize selectedImage=_selectedImage - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                   //@synthesize highlightColor=_highlightColor - In the implementation block
-(void)setUnselectedTextColor:(UIColor *)arg1 ;
-(UIColor *)unselectedTextColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(UIImage *)selectedImage;
-(UIImage *)unselectedImage;
-(void)setSelectedTextColor:(UIColor *)arg1 ;
-(UIColor *)selectedTextColor;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(void)setUnselectedImage:(UIImage *)arg1 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

