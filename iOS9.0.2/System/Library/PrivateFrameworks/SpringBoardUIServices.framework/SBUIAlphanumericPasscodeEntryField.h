/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class UIView, UITextInputTraits;

@interface SBUIAlphanumericPasscodeEntryField : SBUIPasscodeEntryField {

	UIView* _leftPaddingView;
	UIView* _rightPaddingView;
	UIView* _springView;
	UIView* _springViewParent;

}

@property (nonatomic,readonly) UITextInputTraits * textInputTraits; 
-(void)dealloc;
-(void)layoutSubviews;
-(UITextInputTraits *)textInputTraits;
-(void)setBackgroundAlpha:(float)arg1 ;
-(void)setCustomBackgroundColor:(id)arg1 ;
-(void)_autofillForMesaWithCompletion:(/*^block*/id)arg1 ;
-(void)_resetForFailedPasscode:(char)arg1 playUnlockFailedSound:(char)arg2 ;
-(id)initWithDefaultSizeAndLightStyle:(char)arg1 ;
-(void)notePasscodeFieldTextDidChange;
@end

