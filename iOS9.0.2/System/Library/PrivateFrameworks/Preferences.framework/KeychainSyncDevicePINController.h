/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:55 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSKeychainSyncTextEntryController.h>

@class DevicePINController, NSString, UIKeyboard;

@interface KeychainSyncDevicePINController : PSKeychainSyncTextEntryController {

	DevicePINController* _devicePINController;
	char _showingBlockedMessage;
	NSString* _enterPasscodeTitle;
	NSString* _enterPasscodeReason;
	UIKeyboard* _disabledKeyboard;

}

@property (nonatomic,retain) NSString * enterPasscodeTitle;               //@synthesize enterPasscodeTitle=_enterPasscodeTitle - In the implementation block
@property (nonatomic,retain) NSString * enterPasscodeReason;              //@synthesize enterPasscodeReason=_enterPasscodeReason - In the implementation block
@property (nonatomic,retain) UIKeyboard * disabledKeyboard;               //@synthesize disabledKeyboard=_disabledKeyboard - In the implementation block
-(id)specifiers;
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)setEnterPasscodeTitle:(NSString *)arg1 ;
-(void)setEnterPasscodeReason:(NSString *)arg1 ;
-(void)updateBlockedState:(id)arg1 ;
-(void)setDisabledKeyboard:(UIKeyboard *)arg1 ;
-(NSString *)enterPasscodeTitle;
-(NSString *)enterPasscodeReason;
-(UIKeyboard *)disabledKeyboard;
@end

