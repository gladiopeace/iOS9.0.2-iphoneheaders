/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:57 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPassFooterContentView.h>

@class UILabel, UIButton, UIImageView, UIView;

@interface PKPassPaymentMessageView : PKPassFooterContentView {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	UIButton* _button;
	UIImageView* _alertImageView;
	UIView* _bottomRule;

}
-(id)initWithPass:(id)arg1 title:(id)arg2 body:(id)arg3 buttonTitle:(id)arg4 action:(SEL)arg5 isImportant:(char)arg6 ;
-(id)_bottomRule;
-(id)_alertImage;
-(id)initWithPass:(id)arg1 title:(id)arg2 body:(id)arg3 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)_titleLabel;
-(id)_actionButton;
-(id)_bodyLabel;
@end

