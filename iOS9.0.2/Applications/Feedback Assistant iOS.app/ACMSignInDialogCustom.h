/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:03 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <Feedback Assistant iOS/ACMSignInDialog.h>

@class UIButton, UIBarButtonItem, NSString;

@interface ACMSignInDialogCustom : ACMSignInDialog {

	UIButton* _signInButton;
	UIButton* _cancelButton;
	UIBarButtonItem* _signInBarButton;
	UIBarButtonItem* _cancelBarButton;
	char _shouldAuthenticateOnUserInput;

}

@property (assign,nonatomic) CGPoint widgetPosition; 
@property (assign,nonatomic) NSString * widgetAccountLabel; 
@property (assign,nonatomic) int widgetPasswordReturnKeyType; 
@property (nonatomic,retain) UIButton * signInButton;                        //@synthesize signInButton=_signInButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * signInBarButton;              //@synthesize signInBarButton=_signInBarButton - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                        //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelBarButton;              //@synthesize cancelBarButton=_cancelBarButton - In the implementation block
-(void)dealloc;
-(id)init;
-(void)loadView;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(UIButton *)signInButton;
-(void)checkFields;
-(char)shouldSignIn;
-(UIBarButtonItem *)signInBarButton;
-(UIBarButtonItem *)cancelBarButton;
-(CGPoint)widgetPosition;
-(NSString *)widgetAccountLabel;
-(int)widgetPasswordReturnKeyType;
-(char)shouldAuthenticateOnUserInput;
-(void)onSignIn:(id)arg1 ;
-(void)disableControls:(char)arg1 ;
-(void)setWidgetPosition:(CGPoint)arg1 ;
-(void)setWidgetAccountLabel:(NSString *)arg1 ;
-(void)setWidgetPasswordReturnKeyType:(int)arg1 ;
-(void)setSignInBarButton:(UIBarButtonItem *)arg1 ;
-(void)setSignInButton:(UIButton *)arg1 ;
-(void)setShouldAuthenticateOnUserInput:(char)arg1 ;
-(void)setCancelBarButton:(UIBarButtonItem *)arg1 ;
-(void)showWithParentViewController:(id)arg1 animated:(char)arg2 ;
-(void)hideWithParentViewController:(id)arg1 animated:(char)arg2 ;
@end

