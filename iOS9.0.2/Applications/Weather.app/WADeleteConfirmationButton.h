/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:13:04 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Weather.app/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Weather/Weather-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel;

@interface WADeleteConfirmationButton : UIButton {

	UILabel* _titleLabel;
	float _idealWidth;

}

@property (assign,nonatomic) float idealWidth;              //@synthesize idealWidth=_idealWidth - In the implementation block
+(id)confirmationButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 backgroundColor:(id)arg4 ;
-(void)setIdealWidth:(float)arg1 ;
-(float)idealWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

