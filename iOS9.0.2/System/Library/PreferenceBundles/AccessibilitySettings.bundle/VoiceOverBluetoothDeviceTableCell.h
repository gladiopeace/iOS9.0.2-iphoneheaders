/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface VoiceOverBluetoothDeviceTableCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	int _state;

}
+(id)selectedCheckedImage;
+(id)checkedImage;
+(id)spacerImage;
-(void)_updateCheckMarkIcon;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setChecked:(char)arg1 ;
-(void)setDeviceStatePaired:(char)arg1 andConnected:(char)arg2 ;
-(void)setDeviceState:(int)arg1 ;
-(id)accessibilityTableViewCellText;
@end

