/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextInputTraits.h>

@protocol UITextInputTraits <NSObject>
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
@optional
-(int)keyboardAppearance;
-(void)setSecureTextEntry:(char)arg1;
-(char)isSecureTextEntry;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1;
-(int)spellCheckingType;
-(void)setSpellCheckingType:(int)arg1;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1;
-(void)setKeyboardAppearance:(int)arg1;
-(int)returnKeyType;
-(void)setReturnKeyType:(int)arg1;
-(char)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(char)arg1;

@end

#import <UIKit/UITextInputTraits_Private.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, UIImage;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying> {

	int autocapitalizationType;
	int autocorrectionType;
	int spellCheckingType;
	unsigned keyboardType : 8;
	unsigned keyboardAppearance : 8;
	int returnKeyType;
	char enablesReturnKeyAutomatically;
	char secureTextEntry;
	CFCharacterSetRef textTrimmingSet;
	UIColor* insertionPointColor;
	UIColor* selectionBarColor;
	UIColor* selectionHighlightColor;
	UIImage* selectionDragDotImage;
	unsigned insertionPointWidth;
	int textLoupeVisibility;
	int textSelectionBehavior;
	id textSuggestionDelegate;
	char isSingleLineDocument;
	char contentsIsSingleValue;
	char acceptsEmoji;
	char forceEnableDictation;
	char returnKeyGoesToNextResponder;
	char acceptsFloatingKeyboard;
	char acceptsSplitKeyboard;
	char displaySecureTextUsingPlainText;
	char learnsCorrections;
	int emptyContentReturnKeyType;
	int shortcutConversionType;
	char suppressReturnKeyStyling;
	char useInterfaceLanguageForLocalization;
	char deferBecomingResponder;
	char enablesReturnKeyOnNonWhiteSpaceContent;
	NSString* autocorrectionContext;
	NSString* responseContext;
	char disablePrediction;
	char isCarPlayIdiom;
	NSString* recentInputIdentifier;

}

@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (assign,nonatomic) unsigned insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) char isSingleLineDocument; 
@property (assign,nonatomic) char contentsIsSingleValue; 
@property (assign,nonatomic) char acceptsEmoji; 
@property (assign,nonatomic) char forceEnableDictation; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) char returnKeyGoesToNextResponder; 
@property (assign,nonatomic) char acceptsFloatingKeyboard; 
@property (assign,nonatomic) char acceptsSplitKeyboard; 
@property (assign,nonatomic) char displaySecureTextUsingPlainText; 
@property (assign,nonatomic) char learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) char suppressReturnKeyStyling; 
@property (assign,nonatomic) char useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) char deferBecomingResponder; 
@property (assign,nonatomic) char enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (assign,nonatomic) char disablePrediction; 
@property (assign,nonatomic) char isCarPlayIdiom; 
+(id)traitsByAdoptingTraits:(id)arg1 ;
+(id)defaultTextInputTraits;
+(int)accessibleAppearanceForAppearance:(int)arg1 ;
+(int)configuredAppearanceForAppearance:(int)arg1 withTraitEnvironment:(id)arg2 ;
+(char)keyboardTypeRequiresASCIICapable:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setToDefaultValues;
-(void)takeTraitsFrom:(id)arg1 ;
-(int)textSelectionBehavior;
-(int)keyboardAppearance;
-(void)setSecureTextEntry:(char)arg1 ;
-(char)isSecureTextEntry;
-(char)displaySecureTextUsingPlainText;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1 ;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1 ;
-(int)spellCheckingType;
-(void)setSpellCheckingType:(int)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(void)setKeyboardAppearance:(int)arg1 ;
-(int)returnKeyType;
-(void)setReturnKeyType:(int)arg1 ;
-(char)enablesReturnKeyAutomatically;
-(void)setEnablesReturnKeyAutomatically:(char)arg1 ;
-(CFCharacterSetRef)textTrimmingSet;
-(char)acceptsSplitKeyboard;
-(int)shortcutConversionType;
-(char)acceptsFloatingKeyboard;
-(char)disablePrediction;
-(char)learnsCorrections;
-(void)setLearnsCorrections:(char)arg1 ;
-(void)setIsCarPlayIdiom:(char)arg1 ;
-(NSString *)autocorrectionContext;
-(NSString *)responseContext;
-(void)setResponseContext:(NSString *)arg1 ;
-(int)updateResultComparedToTraits:(id)arg1 ;
-(NSString *)recentInputIdentifier;
-(void)setRecentInputIdentifier:(NSString *)arg1 ;
-(void)setTextTrimmingSet:(CFCharacterSetRef)arg1 ;
-(UIColor *)insertionPointColor;
-(void)setInsertionPointColor:(UIColor *)arg1 ;
-(UIColor *)selectionBarColor;
-(void)setSelectionBarColor:(UIColor *)arg1 ;
-(UIColor *)selectionHighlightColor;
-(void)setSelectionHighlightColor:(UIColor *)arg1 ;
-(UIImage *)selectionDragDotImage;
-(void)setSelectionDragDotImage:(UIImage *)arg1 ;
-(unsigned)insertionPointWidth;
-(void)setInsertionPointWidth:(unsigned)arg1 ;
-(int)textLoupeVisibility;
-(void)setTextLoupeVisibility:(int)arg1 ;
-(void)setTextSelectionBehavior:(int)arg1 ;
-(id)textSuggestionDelegate;
-(void)setTextSuggestionDelegate:(id)arg1 ;
-(char)isSingleLineDocument;
-(void)setIsSingleLineDocument:(char)arg1 ;
-(char)contentsIsSingleValue;
-(void)setContentsIsSingleValue:(char)arg1 ;
-(char)acceptsEmoji;
-(void)setAcceptsEmoji:(char)arg1 ;
-(char)forceEnableDictation;
-(void)setForceEnableDictation:(char)arg1 ;
-(int)emptyContentReturnKeyType;
-(void)setEmptyContentReturnKeyType:(int)arg1 ;
-(char)returnKeyGoesToNextResponder;
-(void)setReturnKeyGoesToNextResponder:(char)arg1 ;
-(void)setAcceptsFloatingKeyboard:(char)arg1 ;
-(void)setAcceptsSplitKeyboard:(char)arg1 ;
-(void)setDisplaySecureTextUsingPlainText:(char)arg1 ;
-(void)setShortcutConversionType:(int)arg1 ;
-(char)suppressReturnKeyStyling;
-(void)setSuppressReturnKeyStyling:(char)arg1 ;
-(char)useInterfaceLanguageForLocalization;
-(void)setUseInterfaceLanguageForLocalization:(char)arg1 ;
-(char)deferBecomingResponder;
-(void)setDeferBecomingResponder:(char)arg1 ;
-(char)enablesReturnKeyOnNonWhiteSpaceContent;
-(void)setEnablesReturnKeyOnNonWhiteSpaceContent:(char)arg1 ;
-(void)setAutocorrectionContext:(NSString *)arg1 ;
-(void)setDisablePrediction:(char)arg1 ;
-(char)isCarPlayIdiom;
-(id)dictionaryRepresentation;
-(void)setToSecureValues;
-(char)publicTraitsMatchTraits:(id)arg1 ;
-(void)_setColorsToMatchTintColor:(id)arg1 ;
@end

