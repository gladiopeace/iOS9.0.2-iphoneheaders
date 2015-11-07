/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:54 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyInput.h>

@protocol PSPasscodeFieldDelegate;
@class NSMutableArray, NSMutableString, UIColor, NSArray, NSString;

@interface PSPasscodeField : UIView <UIKeyInput> {

	NSMutableArray* _dashViews;
	NSMutableArray* _dotViews;
	NSMutableArray* _digitViews;
	NSMutableString* _stringValue;
	char _securePasscodeEntry;
	id<PSPasscodeFieldDelegate> _delegate;
	unsigned _numberOfEntryFields;
	UIColor* _foregroundColor;
	int _keyboardAppearance;
	NSArray* _fieldSpacing;

}

@property (assign,nonatomic,__weak) id<PSPasscodeFieldDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned numberOfEntryFields;                               //@synthesize numberOfEntryFields=_numberOfEntryFields - In the implementation block
@property (assign,nonatomic) char securePasscodeEntry;                                   //@synthesize securePasscodeEntry=_securePasscodeEntry - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor;                                  //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (assign,nonatomic) int keyboardAppearance;                                     //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (nonatomic,retain) NSArray * fieldSpacing;                                     //@synthesize fieldSpacing=_fieldSpacing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
-(void)setDelegate:(id<PSPasscodeFieldDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<PSPasscodeFieldDelegate>)delegate;
-(char)becomeFirstResponder;
-(char)canBecomeFirstResponder;
-(int)keyboardAppearance;
-(char)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)setSecureTextEntry:(char)arg1 ;
-(char)isSecureTextEntry;
-(int)keyboardType;
-(void)setKeyboardAppearance:(int)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(unsigned)numberOfEntryFields;
-(void)setNumberOfEntryFields:(unsigned)arg1 ;
-(UIColor *)foregroundColor;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)passcodeFieldTapped:(id)arg1 ;
-(void)setSecurePasscodeEntry:(char)arg1 ;
-(id)initWithNumberOfEntryFields:(unsigned)arg1 ;
-(void)setFieldSpacing:(NSArray *)arg1 ;
-(char)securePasscodeEntry;
-(NSArray *)fieldSpacing;
@end

