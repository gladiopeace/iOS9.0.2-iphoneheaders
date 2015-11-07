/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, UnderlineButton, UIColor;

@interface MultitaskingGestureExplanationView : UIView <PSHeaderFooterView> {

	UILabel* _labels[4];
	UnderlineButton* _videoLinkButton;
	float _sized;
	float _width;
	UIColor* _footerTextColor;

}
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
-(void)layoutSubviews;
-(char)isRTL;
-(id)newRegionSampleLabelUnderlined;
-(id)_accessibilityLabels;
@end

