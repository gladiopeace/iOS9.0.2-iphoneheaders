/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>
#import <libobjc.A.dylib/PSPasscodeFieldDelegate.h>

@protocol KeychainSyncPasscodeFieldDelegate;
@class PSPasscodeField, NSString;

@interface PasscodeFieldCell : PSTableCell <PSPasscodeFieldDelegate> {

	PSPasscodeField* _passcodeField;
	char _convertsNumeralsToASCII;
	char _denyFirstResponder;
	id<KeychainSyncPasscodeFieldDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<KeychainSyncPasscodeFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char convertsNumeralsToASCII;                                       //@synthesize convertsNumeralsToASCII=_convertsNumeralsToASCII - In the implementation block
@property (assign,nonatomic) char denyFirstResponder;                                            //@synthesize denyFirstResponder=_denyFirstResponder - In the implementation block
@property (nonatomic,readonly) PSPasscodeField * passcodeField;                                  //@synthesize passcodeField=_passcodeField - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cellTapped:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setDelegate:(id<KeychainSyncPasscodeFieldDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<KeychainSyncPasscodeFieldDelegate>)delegate;
-(char)becomeFirstResponder;
-(char)hasText;
-(void)deleteBackward;
-(int)keyboardType;
-(id)passcodeField:(id)arg1 shouldInsertText:(id)arg2 ;
-(PSPasscodeField *)passcodeField;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)setConvertsNumeralsToASCII:(char)arg1 ;
-(char)denyFirstResponder;
-(char)convertsNumeralsToASCII;
-(void)_setSecureTextEntry:(char)arg1 ;
-(void)setPasscodeText:(id)arg1 ;
-(id)passcodeText;
-(void)setDenyFirstResponder:(char)arg1 ;
@end

