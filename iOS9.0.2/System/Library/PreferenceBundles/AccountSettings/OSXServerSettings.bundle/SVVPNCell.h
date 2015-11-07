/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:08:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/OSXServerSettings.bundle/OSXServerSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIButton;

@interface SVVPNCell : PSTableCell {

	char _VPNEnabled;
	UIButton* _installButton;

}

@property (nonatomic,retain) UIButton * installButton;              //@synthesize installButton=_installButton - In the implementation block
@property (assign,nonatomic) char VPNEnabled;                       //@synthesize VPNEnabled=_VPNEnabled - In the implementation block
-(char)VPNEnabled;
-(UIButton *)installButton;
-(void)setVPNEnabled:(char)arg1 ;
-(id)_buttonBackgroundImageForState:(unsigned)arg1 ;
-(void)setInstallButton:(UIButton *)arg1 ;
-(void)installButtonPressed:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)updateButtonState;
@end

