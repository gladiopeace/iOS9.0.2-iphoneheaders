/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:58 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface PKPaymentSetupCardDetailsFooterView : UIView {

	int _context;
	UIButton* _manualEntryButton;
	UIButton* _setupLaterButton;

}

@property (assign,nonatomic) int context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIButton * manualEntryButton;              //@synthesize manualEntryButton=_manualEntryButton - In the implementation block
@property (nonatomic,retain) UIButton * setupLaterButton;               //@synthesize setupLaterButton=_setupLaterButton - In the implementation block
-(char)isBuddyiPad;
-(void)setManualEntryButton:(UIButton *)arg1 ;
-(void)setSetupLaterButton:(UIButton *)arg1 ;
-(UIButton *)manualEntryButton;
-(UIButton *)setupLaterButton;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(int)context;
-(void)setContext:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 context:(int)arg2 ;
@end

