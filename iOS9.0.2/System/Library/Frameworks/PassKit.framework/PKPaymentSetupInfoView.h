/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, PKPaymentSetupPrivacyFooterView, UIActivityIndicatorView;

@interface PKPaymentSetupInfoView : UIView {

	UILabel* _bodyLabel;
	char _requiresClearBackgroundColor;
	UIImageView* _logo;
	PKPaymentSetupPrivacyFooterView* _privacyFooter;
	int _context;
	UIActivityIndicatorView* _activityIndicatorView;

}

@property (nonatomic,retain) UIImageView * logo;                                           //@synthesize logo=_logo - In the implementation block
@property (nonatomic,retain) PKPaymentSetupPrivacyFooterView * privacyFooter;              //@synthesize privacyFooter=_privacyFooter - In the implementation block
@property (assign,nonatomic) int context;                                                  //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) char requiresClearBackgroundColor;                            //@synthesize requiresClearBackgroundColor=_requiresClearBackgroundColor - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)pk_applyAppearance:(PKAppearanceSpecifier*)arg1 ;
-(char)isBuddyiPad;
-(void)setRequiresClearBackgroundColor:(char)arg1 ;
-(PKPaymentSetupPrivacyFooterView *)privacyFooter;
-(id)_bodyFont;
-(void)setPrivacyFooter:(PKPaymentSetupPrivacyFooterView *)arg1 ;
-(char)requiresClearBackgroundColor;
-(id)bodyLabel;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)context;
-(void)setContext:(int)arg1 ;
-(id)_titleFont;
-(id)initWithFrame:(CGRect)arg1 context:(int)arg2 ;
-(UIImageView *)logo;
-(void)setLogo:(UIImageView *)arg1 ;
@end

