/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:41 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/MobilePhoneSettings.bundle/MobilePhoneSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhoneSettings/MobilePhoneSettings-Structs.h>
#import <Preferences/PSTextEditingPane.h>

@class NSString;

@interface PhoneSettingsMyNumberPane : PSTextEditingPane {

	NSString* _previousValue;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(SCD_Struct_Ph3)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(void)setMyNumberText:(id)arg1 ;
-(char)drawLabel;
-(void)setPreferenceSpecifier:(id)arg1 ;
-(id)navigationTitle;
-(char)handlesDoneButton;
-(void)_textDidChange:(id)arg1 ;
@end

