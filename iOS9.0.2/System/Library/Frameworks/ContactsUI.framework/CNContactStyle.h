/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:30:19 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIColor, UIFont;

@interface CNContactStyle : NSObject <NSSecureCoding> {

	char _usesOpaqueBackground;
	char _usesTranslucentBarStyle;
	char _shouldPresentInCurrentContext;
	char _blurSupported;
	UIColor* _textColor;
	UIColor* _disabledTextColor;
	UIColor* _placeholderTextColor;
	UIColor* _highlightedTextColor;
	UIColor* _suggestedLabelTextColor;
	UIColor* _suggestedValueTextColor;
	UIColor* _readOnlyTextColor;
	UIColor* _notesTextColor;
	UIColor* _backgroundColor;
	int _separatorBackdropOverlayBlendMode;
	UIColor* _headerBackgroundColor;
	UIColor* _separatorColor;
	int _separatorStyle;
	UIColor* _sectionBackgroundColor;
	UIColor* _selectedCellBackgroundColor;
	int _barStyle;
	int _keyboardAppearance;

}

@property (nonatomic,retain) UIColor * textColor;                                //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * disabledTextColor;                        //@synthesize disabledTextColor=_disabledTextColor - In the implementation block
@property (nonatomic,retain) UIColor * placeholderTextColor;                     //@synthesize placeholderTextColor=_placeholderTextColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedTextColor;                     //@synthesize highlightedTextColor=_highlightedTextColor - In the implementation block
@property (nonatomic,retain) UIColor * suggestedLabelTextColor;                  //@synthesize suggestedLabelTextColor=_suggestedLabelTextColor - In the implementation block
@property (nonatomic,retain) UIColor * suggestedValueTextColor;                  //@synthesize suggestedValueTextColor=_suggestedValueTextColor - In the implementation block
@property (nonatomic,retain) UIColor * readOnlyTextColor;                        //@synthesize readOnlyTextColor=_readOnlyTextColor - In the implementation block
@property (nonatomic,retain) UIColor * notesTextColor;                           //@synthesize notesTextColor=_notesTextColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                          //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) char usesOpaqueBackground;                          //@synthesize usesOpaqueBackground=_usesOpaqueBackground - In the implementation block
@property (assign,nonatomic) int separatorBackdropOverlayBlendMode;              //@synthesize separatorBackdropOverlayBlendMode=_separatorBackdropOverlayBlendMode - In the implementation block
@property (nonatomic,retain) UIColor * headerBackgroundColor;                    //@synthesize headerBackgroundColor=_headerBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                           //@synthesize separatorColor=_separatorColor - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                 //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) UIColor * sectionBackgroundColor;                   //@synthesize sectionBackgroundColor=_sectionBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedCellBackgroundColor;              //@synthesize selectedCellBackgroundColor=_selectedCellBackgroundColor - In the implementation block
@property (assign,nonatomic) int barStyle;                                       //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic) char usesTranslucentBarStyle;                       //@synthesize usesTranslucentBarStyle=_usesTranslucentBarStyle - In the implementation block
@property (assign,nonatomic) int keyboardAppearance;                             //@synthesize keyboardAppearance=_keyboardAppearance - In the implementation block
@property (assign,nonatomic) char shouldPresentInCurrentContext;                 //@synthesize shouldPresentInCurrentContext=_shouldPresentInCurrentContext - In the implementation block
@property (assign,nonatomic) char blurSupported;                                 //@synthesize blurSupported=_blurSupported - In the implementation block
@property (nonatomic,readonly) UIFont * textFont; 
@property (nonatomic,readonly) UIFont * boldTextFont; 
+(id)faceTimeStyle;
+(id)watchStyle;
+(id)darkStyle;
+(id)starkStyle;
+(id)siriStyle;
+(id)testStyle;
+(id)currentStyle;
+(char)supportsSecureCoding;
+(void)setCurrentStyle:(id)arg1 ;
+(id)defaultStyle;
-(void)setSectionBackgroundColor:(UIColor *)arg1 ;
-(void)setSelectedCellBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)sectionBackgroundColor;
-(UIColor *)selectedCellBackgroundColor;
-(UIColor *)suggestedLabelTextColor;
-(UIColor *)suggestedValueTextColor;
-(char)shouldPresentInCurrentContext;
-(UIColor *)notesTextColor;
-(UIFont *)boldTextFont;
-(char)blurSupported;
-(char)usesOpaqueBackground;
-(int)separatorBackdropOverlayBlendMode;
-(void)setBlurSupported:(char)arg1 ;
-(void)setNotesTextColor:(UIColor *)arg1 ;
-(void)setUsesOpaqueBackground:(char)arg1 ;
-(void)setSeparatorBackdropOverlayBlendMode:(int)arg1 ;
-(void)setHeaderBackgroundColor:(UIColor *)arg1 ;
-(void)setUsesTranslucentBarStyle:(char)arg1 ;
-(void)setShouldPresentInCurrentContext:(char)arg1 ;
-(void)setDisabledTextColor:(UIColor *)arg1 ;
-(void)setPlaceholderTextColor:(UIColor *)arg1 ;
-(void)setReadOnlyTextColor:(UIColor *)arg1 ;
-(void)setSuggestedLabelTextColor:(UIColor *)arg1 ;
-(void)setSuggestedValueTextColor:(UIColor *)arg1 ;
-(UIColor *)placeholderTextColor;
-(UIColor *)readOnlyTextColor;
-(UIColor *)headerBackgroundColor;
-(char)usesTranslucentBarStyle;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setBarStyle:(int)arg1 ;
-(int)barStyle;
-(UIColor *)separatorColor;
-(void)setSeparatorStyle:(int)arg1 ;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(int)separatorStyle;
-(UIColor *)textColor;
-(int)keyboardAppearance;
-(void)setKeyboardAppearance:(int)arg1 ;
-(void)setHighlightedTextColor:(UIColor *)arg1 ;
-(UIColor *)disabledTextColor;
-(UIColor *)highlightedTextColor;
-(UIFont *)textFont;
@end

