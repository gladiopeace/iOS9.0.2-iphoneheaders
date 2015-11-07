/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKTableViewCell.h>

@class PKPaymentSetupProduct;

@interface PKPaymentSetupProductCell : PKTableViewCell {

	char _drawsTopSeperator;
	PKPaymentSetupProduct* _product;
	float _textLabelOffset;

}

@property (nonatomic,retain) PKPaymentSetupProduct * product;              //@synthesize product=_product - In the implementation block
@property (assign,nonatomic) float textLabelOffset;                        //@synthesize textLabelOffset=_textLabelOffset - In the implementation block
@property (assign,nonatomic) char drawsTopSeperator;                       //@synthesize drawsTopSeperator=_drawsTopSeperator - In the implementation block
+(id)reuseIdentifier;
-(void)_updateDisplay;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(id)pk_childrenForAppearance;
-(void)setProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)setTextLabelOffset:(float)arg1 ;
-(PKPaymentSetupProduct *)product;
-(float)textLabelOffset;
-(char)drawsTopSeperator;
-(void)setDrawsTopSeperator:(char)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
@end

