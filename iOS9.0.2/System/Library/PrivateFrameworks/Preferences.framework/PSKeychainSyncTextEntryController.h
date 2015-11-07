/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSKeychainSyncViewController.h>
#import <libobjc.A.dylib/KeychainSyncPasscodeFieldDelegate.h>

@protocol UIKeyInput;
@class PSTableCell, UIView, PSSpecifier, NSString;

@interface PSKeychainSyncTextEntryController : PSKeychainSyncViewController <KeychainSyncPasscodeFieldDelegate> {

	PSTableCell* _textEntryCell;
	UIView*<UIKeyInput> _textEntryView;
	PSSpecifier* _textEntrySpecifier;
	char _hidesNextButton;
	char _secureTextEntry;
	char _textFieldHasRoundBorder;
	char _convertsNumeralsToASCII;
	int _textEntryType;
	unsigned _numberOfPasscodeFields;
	NSString* _textValue;

}

@property (assign,nonatomic) int textEntryType;                            //@synthesize textEntryType=_textEntryType - In the implementation block
@property (assign,nonatomic) char hidesNextButton;                         //@synthesize hidesNextButton=_hidesNextButton - In the implementation block
@property (assign,nonatomic) char secureTextEntry;                         //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (assign,nonatomic) char textFieldHasRoundBorder;                 //@synthesize textFieldHasRoundBorder=_textFieldHasRoundBorder - In the implementation block
@property (assign,nonatomic) char convertsNumeralsToASCII;                 //@synthesize convertsNumeralsToASCII=_convertsNumeralsToASCII - In the implementation block
@property (assign,nonatomic) unsigned numberOfPasscodeFields;              //@synthesize numberOfPasscodeFields=_numberOfPasscodeFields - In the implementation block
@property (nonatomic,retain) NSString * textValue;                         //@synthesize textValue=_textValue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textFieldChanged:(id)arg1 ;
-(id)specifiers;
-(id)placeholderText;
-(id)textEntryView;
-(void)dealloc;
-(id)init;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)becomeFirstResponder;
-(void)loadView;
-(void)setSecureTextEntry:(char)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setTextEntryType:(int)arg1 ;
-(void)setHidesNextButton:(char)arg1 ;
-(int)textEntryType;
-(Class)textEntryCellClass;
-(id)textEntryCell;
-(void)nextPressed;
-(void)setTextFieldHasRoundBorder:(char)arg1 ;
-(void)updateNextButton;
-(void)setTextEntryText:(id)arg1 ;
-(id)textEntryText;
-(void)setNumberOfPasscodeFields:(unsigned)arg1 ;
-(void)textEntryViewDidChange:(id)arg1 ;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)willBecomeActive;
-(void)setConvertsNumeralsToASCII:(char)arg1 ;
-(void)passcodeField:(id)arg1 didUpdateEnteredPasscode:(id)arg2 ;
-(char)convertsNumeralsToASCII;
-(char)hidesNextButton;
-(NSString *)textValue;
-(void)setTextValue:(NSString *)arg1 ;
-(id)textEntrySpecifier;
-(void)setTextValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)getTextValueForSpecifier:(id)arg1 ;
-(unsigned)numberOfPasscodeFields;
-(char)textFieldHasRoundBorder;
-(char)secureTextEntry;
@end

