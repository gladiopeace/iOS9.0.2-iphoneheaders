/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriViewService/SVSStarkCancelButtonGatekeeperHeaderView.h>

@class UILabel, UIButton;

@interface SVSStarkMapsGatekeeperHeaderView : SVSStarkCancelButtonGatekeeperHeaderView {

	UILabel* _titleLabel;
	UIButton* _keyboardButton;

}

@property (getter=_titleLabel,nonatomic,readonly) UILabel * titleLabel;                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (getter=_keyboardButton,nonatomic,readonly) UIButton * keyboardButton;              //@synthesize keyboardButton=_keyboardButton - In the implementation block
-(id)initWithRequestOptions:(id)arg1 ;
-(void)_keyboardButtonTapped:(id)arg1 ;
-(id)_keyboardButton;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)layoutSubviews;
-(id)_titleLabel;
@end

