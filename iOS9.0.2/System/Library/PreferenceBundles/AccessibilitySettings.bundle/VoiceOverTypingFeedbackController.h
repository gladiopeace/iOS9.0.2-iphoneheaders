/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>

@interface VoiceOverTypingFeedbackController : AccessibilityBaseListController {

	int _optionSoftware;
	int _optionHardware;
	int _optionBrailleGestures;
	int _swSelectedRow;
	int _hwSelectedRow;
	int _brailleGesturesSelectedRow;

}
-(int)feedbackTypeForString:(id)arg1 ;
-(int)rowForTypingFeedbackOption:(int)arg1 section:(int)arg2 ;
-(id)specifiers;
-(void)_updateSelectedRows;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
@end

