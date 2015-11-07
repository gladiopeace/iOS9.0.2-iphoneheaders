/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface HKTableViewHeaderFooterView : UIView {

	UILabel* _label;
	float _preferredMaxLayoutWidth;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                 //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) float preferredMaxLayoutWidth;              //@synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(CGSize)intrinsicContentSize;
-(UILabel *)label;
-(void)setPreferredMaxLayoutWidth:(float)arg1 ;
-(float)preferredMaxLayoutWidth;
-(void)updateFont;
@end

