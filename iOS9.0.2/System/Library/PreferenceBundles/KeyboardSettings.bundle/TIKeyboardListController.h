/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:40 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class NSMutableArray, PSSpecifier, TIAboutKeyboardPrivacyController;

@interface TIKeyboardListController : PSListController {

	NSMutableArray* _keyboardsArray;
	PSSpecifier* _groupSeparator;
	PSSpecifier* _addNewInputModeSpecifier;
	char _newKeyboardsAdded;
	unsigned _totalKeyboardsCount;
	unsigned _numberOfEnabledKeyboards;
	char deletingRow;
	TIAboutKeyboardPrivacyController* _aboutPrivacyController;

}

@property (nonatomic,readonly) NSMutableArray * keyboardsArray;                                      //@synthesize keyboardsArray=_keyboardsArray - In the implementation block
@property (assign,nonatomic) char newKeyboardsAdded;                                                 //@synthesize newKeyboardsAdded=_newKeyboardsAdded - In the implementation block
@property (nonatomic,retain) TIAboutKeyboardPrivacyController * aboutPrivacyController;              //@synthesize aboutPrivacyController=_aboutPrivacyController - In the implementation block
+(id)inputModes;
+(void)setInputModes:(id)arg1 ;
+(id)keyboardDisplayNameForIdentifier:(id)arg1 ;
+(id)softwareLayoutsForBaseInputMode:(id)arg1 ;
+(id)displayNameForHardwareLayout:(id)arg1 ;
+(id)supportedBaseInputModesForLanguage:(id)arg1 ;
+(id)availableSoftwareLayoutsForBaseInputMode:(id)arg1 ;
+(id)supportedInputModesForLanguage:(id)arg1 ;
+(id)availableInputModesForLanguage:(id)arg1 ;
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(int)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)addNewKeyboards:(id)arg1 ;
-(char)allKeyboardsEnabled;
-(void)_writeKeyboards;
-(void)updateEditButtonState;
-(id)specifierForInputMode:(id)arg1 ;
-(id)specifierForExtensionInputMode:(id)arg1 ;
-(void)setAboutPrivacyController:(TIAboutKeyboardPrivacyController *)arg1 ;
-(TIAboutKeyboardPrivacyController *)aboutPrivacyController;
-(id)normalizedIdentifierForInputMode:(id)arg1 ;
-(void)_addInputModes:(id)arg1 ;
-(NSMutableArray *)keyboardsArray;
-(char)newKeyboardsAdded;
-(void)setNewKeyboardsAdded:(char)arg1 ;
-(void)reloadSpecifiers;
@end

