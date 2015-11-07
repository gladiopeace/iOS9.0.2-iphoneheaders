/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImage, UIImageView, UIColor;

@interface PricePopoverBar : UIView {

	UILabel* _priceLabel;
	UILabel* _percentChangeLabel;
	UIImage* _backgroundImage;
	UIImageView* _priceChangeSignView;
	UIImageView* _percentChangeSignView;
	UIImageView* _percentSignView;
	UIColor* _imageMaskColor;

}

@property (nonatomic,retain) UIColor * imageMaskColor;              //@synthesize imageMaskColor=_imageMaskColor - In the implementation block
-(void)setImageMaskColor:(UIColor *)arg1 ;
-(id)initWithBackgroundImage:(id)arg1 ;
-(void)setPercentChange:(id)arg1 ;
-(void)setChangeImage:(id)arg1 ;
-(void)setPercentSignHidden:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(UIColor *)imageMaskColor;
-(void)setPriceString:(id)arg1 ;
@end

