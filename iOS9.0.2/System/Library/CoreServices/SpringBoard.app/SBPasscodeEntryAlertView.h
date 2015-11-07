/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAlertView.h>

@protocol SBPasscodeEntryAlertViewDelegate;
@class SBUIPasscodeViewWithLockScreenStyle, SBAppStatusBarSettingsAssertion;

@interface SBPasscodeEntryAlertView : SBAlertView {

	SBUIPasscodeViewWithLockScreenStyle* _passcodeView;
	char _dismissing;
	SBAppStatusBarSettingsAssertion* _showStatusBarAssertion;
	id<SBPasscodeEntryAlertViewDelegate> _delegate;

}

@property (nonatomic,readonly) UIView*<SBUIPasscodeLockView> passcodeLockView; 
@property (assign,nonatomic) id<SBPasscodeEntryAlertViewDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(void)layoutForInterfaceOrientation:(int)arg1 ;
-(void)alertDisplayWillBecomeVisible;
-(void)alertDisplayBecameVisible;
-(char)isReadyToBeRemovedFromView;
-(UIView*<SBUIPasscodeLockView>)passcodeLockView;
-(/*^block*/id)_passcodeViewGenerator;
-(void)_dismissAnimationCompleted;
-(void)setPasscodeViewsToVisible:(char)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SBPasscodeEntryAlertViewDelegate>)arg1 ;
-(void)dealloc;
-(id<SBPasscodeEntryAlertViewDelegate>)delegate;
@end

