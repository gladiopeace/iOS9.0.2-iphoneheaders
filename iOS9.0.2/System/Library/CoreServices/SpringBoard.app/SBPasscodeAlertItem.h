/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoardUI/SBAlertItem.h>
#import <UIKit/UITextFieldDelegate.h>

@class NSString;

@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate> {

	int _mode;
	int _unlockScreenType;
	int _simplePasscodeType;
	NSString* _errorString;
	char _hasEmergencyCall;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPasscodeMode:(int)arg1 unlockScreenType:(int)arg2 simplePasscodeType:(int)arg3 ;
-(void)_setErrorString:(id)arg1 ;
-(void)didEndCall;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)configure:(char)arg1 requirePasscodeForActions:(char)arg2 ;
-(char)shouldShowInLockScreen;
-(void)returnKeyPressed:(id)arg1 ;
-(void)cleanPreviousConfiguration;
@end

