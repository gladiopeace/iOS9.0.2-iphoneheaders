/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:34:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptNativeObject.h>
#import <libobjc.A.dylib/SUScriptTextFieldDelegate.h>

@class SUScriptTextFieldDelegate, NSString;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate> {

	SUScriptTextFieldDelegate* _textFieldDelegate;

}

@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int keyboardType; 
@property (nonatomic,copy) NSString * placeholder; 
@property (nonatomic,copy) NSString * value; 
@property (assign,nonatomic) float width; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(float)width;
-(int)autocapitalizationType;
-(void)setAutocapitalizationType:(int)arg1 ;
-(int)autocorrectionType;
-(void)setAutocorrectionType:(int)arg1 ;
-(int)keyboardType;
-(void)setKeyboardType:(int)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(char)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(NSString *)placeholder;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)setWidth:(float)arg1 ;
-(char)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)destroyNativeObject;
-(void)setupNativeObject;
-(id)_nativeObjectDelegate;
-(void)_setNativeObjectDelegate:(id)arg1 ;
-(void)_textDidChange:(id)arg1 ;
-(void)_textDidEndEditingOnExit:(id)arg1 ;
-(void)_sendScriptDidChange;
@end

