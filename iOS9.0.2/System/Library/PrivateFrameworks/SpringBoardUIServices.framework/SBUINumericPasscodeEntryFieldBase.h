/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:18 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIPasscodeEntryField.h>

@class NSMutableCharacterSet;

@interface SBUINumericPasscodeEntryFieldBase : SBUIPasscodeEntryField {

	NSMutableCharacterSet* _numericTrimmingSet;
	unsigned _maxNumbersAllowed;
	char _allowsNewlineAcceptance;
	char _autoAcceptWhenMaxNumbersMet;

}

@property (assign,nonatomic) unsigned maxNumbersAllowed;                    //@synthesize maxNumbersAllowed=_maxNumbersAllowed - In the implementation block
@property (assign,nonatomic) char allowsNewlineAcceptance;                  //@synthesize allowsNewlineAcceptance=_allowsNewlineAcceptance - In the implementation block
@property (assign,nonatomic) char autoAcceptWhenMaxNumbersMet;              //@synthesize autoAcceptWhenMaxNumbersMet=_autoAcceptWhenMaxNumbersMet - In the implementation block
+(char)_shouldResetAutoAcceptWhenMaxNumbersMetInResignFirstResponder;
-(void)dealloc;
-(char)resignFirstResponder;
-(void)_appendString:(id)arg1 ;
-(id)initWithDefaultSizeAndLightStyle:(char)arg1 ;
-(void)setMaxNumbersAllowed:(unsigned)arg1 ;
-(unsigned)maxNumbersAllowed;
-(void)_deleteLastCharacter;
-(void)setAllowsNewlineAcceptance:(char)arg1 ;
-(void)setAutoAcceptWhenMaxNumbersMet:(char)arg1 ;
-(char)shouldInsertPasscodeText:(id)arg1 ;
-(char)_hasMaxDigitsSpecified;
-(void)_reallyAppendString:(id)arg1 ;
-(char)allowsNewlineAcceptance;
-(char)autoAcceptWhenMaxNumbersMet;
@end

