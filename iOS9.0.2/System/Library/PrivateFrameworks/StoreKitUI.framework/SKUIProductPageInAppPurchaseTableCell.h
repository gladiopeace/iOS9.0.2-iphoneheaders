/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUITableViewCell.h>

@class SKUIColorScheme, UILabel, NSString;

@interface SKUIProductPageInAppPurchaseTableCell : SKUITableViewCell {

	SKUIColorScheme* _colorScheme;
	UIEdgeInsets _contentInsets;
	UILabel* _indexLabel;
	UILabel* _nameLabel;
	UILabel* _priceLabel;

}

@property (nonatomic,retain) SKUIColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                 //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,copy) NSString * indexString; 
@property (nonatomic,copy) NSString * priceString; 
@property (nonatomic,copy) NSString * productName; 
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setSelected:(char)arg1 animated:(char)arg2 ;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setHighlighted:(char)arg1 animated:(char)arg2 ;
-(SKUIColorScheme *)colorScheme;
-(void)setColorScheme:(SKUIColorScheme *)arg1 ;
-(NSString *)indexString;
-(NSString *)priceString;
-(NSString *)productName;
-(void)setIndexString:(NSString *)arg1 ;
-(void)setPriceString:(NSString *)arg1 ;
-(void)setProductName:(NSString *)arg1 ;
@end

