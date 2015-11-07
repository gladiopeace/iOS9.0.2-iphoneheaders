/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:44 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <MobilePhone/PHAbstractDialerView.h>
#import <MobilePhone/TPDialerKeypadDelegate.h>

@class UIView, NSLayoutConstraint, NSString;

@interface PHHandsetDialerView : PHAbstractDialerView <TPDialerKeypadDelegate> {

	UIView* _leftBlankView;
	UIView* _rightBlankView;
	UIView* _bottomBlankView;
	UIView* _topBlankView;
	NSLayoutConstraint* _statusBarToLCDViewConstraint;
	NSLayoutConstraint* _phonePadViewTopConstraint;
	NSLayoutConstraint* _callButtonKeypadOffsetConstraint;

}

@property (retain) UIView * leftBlankView;                                             //@synthesize leftBlankView=_leftBlankView - In the implementation block
@property (retain) UIView * rightBlankView;                                            //@synthesize rightBlankView=_rightBlankView - In the implementation block
@property (retain) UIView * bottomBlankView;                                           //@synthesize bottomBlankView=_bottomBlankView - In the implementation block
@property (retain) UIView * topBlankView;                                              //@synthesize topBlankView=_topBlankView - In the implementation block
@property (retain) NSLayoutConstraint * statusBarToLCDViewConstraint;                  //@synthesize statusBarToLCDViewConstraint=_statusBarToLCDViewConstraint - In the implementation block
@property (retain) NSLayoutConstraint * phonePadViewTopConstraint;                     //@synthesize phonePadViewTopConstraint=_phonePadViewTopConstraint - In the implementation block
@property (retain) NSLayoutConstraint * callButtonKeypadOffsetConstraint;              //@synthesize callButtonKeypadOffsetConstraint=_callButtonKeypadOffsetConstraint - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInCallMode:(char)arg1 ;
-(id)dialerColor;
-(id)newLCDView;
-(id)newNumberPadView;
-(id)newCallButton;
-(void)setLeftBlankView:(UIView *)arg1 ;
-(void)setRightBlankView:(UIView *)arg1 ;
-(void)setBottomBlankView:(UIView *)arg1 ;
-(void)setTopBlankView:(UIView *)arg1 ;
-(UIView *)leftBlankView;
-(UIView *)rightBlankView;
-(UIView *)bottomBlankView;
-(UIView *)topBlankView;
-(float)_yOffsetForLCDView;
-(void)setStatusBarToLCDViewConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)statusBarToLCDViewConstraint;
-(float)_yOffsetForKeypadView;
-(void)setPhonePadViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)phonePadViewTopConstraint;
-(float)_keypadToCallButtonYSpacing;
-(void)setCallButtonKeypadOffsetConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)callButtonKeypadOffsetConstraint;
-(void)updateContraintsForStatusBar;
-(void)createConstraints;
-(char)dialerIsNumericOnly;
-(id)numberPadButtonsForCharacters:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
@end

