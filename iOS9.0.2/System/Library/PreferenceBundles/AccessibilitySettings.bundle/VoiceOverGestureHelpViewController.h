/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:07:59 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSViewController.h>

@class VoiceOverGestureHelpView;

@interface VoiceOverGestureHelpViewController : PSViewController {

	VoiceOverGestureHelpView* _gestureHelpView;

}

@property (nonatomic,retain) VoiceOverGestureHelpView * gestureHelpView;              //@synthesize gestureHelpView=_gestureHelpView - In the implementation block
+(char)_shouldForwardViewWillTransitionToSize;
-(VoiceOverGestureHelpView *)gestureHelpView;
-(void)setGestureHelpView:(VoiceOverGestureHelpView *)arg1 ;
-(id)_applicableHelpModes;
-(id)_titleForHelpMode:(int)arg1 ;
-(void)_didChooseHelpMode:(id)arg1 ;
-(void)hide;
-(void)show;
-(void)dealloc;
-(id)init;
-(char)prefersStatusBarHidden;
-(unsigned)supportedInterfaceOrientations;
-(char)shouldAutorotate;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
@end

