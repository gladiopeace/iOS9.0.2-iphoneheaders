/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface PKDisambiguationFooterView : UIView {

	UILabel* _descriptionLabel;
	UIButton* _actionButton;
	UIButton* _secondaryActionButton;
	float _topPadding;
	float _secondaryActionTopPadding;
	float _bottomPadding;

}

@property (nonatomic,retain,readonly) UILabel * descriptionLabel; 
@property (nonatomic,retain,readonly) UIButton * actionButton; 
@property (nonatomic,retain,readonly) UIButton * secondaryActionButton; 
@property (assign,nonatomic) float topPadding;                                       //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) float secondaryActionTopPadding;                        //@synthesize secondaryActionTopPadding=_secondaryActionTopPadding - In the implementation block
@property (assign,nonatomic) float bottomPadding;                                    //@synthesize bottomPadding=_bottomPadding - In the implementation block
-(float)topPadding;
-(UIButton *)actionButton;
-(UILabel *)descriptionLabel;
-(void)sizeToFitForTableView:(id)arg1 ;
-(float)_recommendedSecondaryActionTopPaddingForTableView:(id)arg1 ;
-(void)setSecondaryActionTopPadding:(float)arg1 ;
-(void)setTopPadding:(float)arg1 ;
-(float)secondaryActionTopPadding;
-(UIButton *)secondaryActionButton;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(float)bottomPadding;
-(void)setBottomPadding:(float)arg1 ;
@end
