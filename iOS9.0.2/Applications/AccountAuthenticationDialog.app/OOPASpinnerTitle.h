/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:11:56 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/AccountAuthenticationDialog.app/AccountAuthenticationDialog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountAuthenticationDialog/AccountAuthenticationDialog-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView;

@interface OOPASpinnerTitle : UIView {

	UILabel* _titleView;
	UIActivityIndicatorView* _spinner;

}
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
@end

