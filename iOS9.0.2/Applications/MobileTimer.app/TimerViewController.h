/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:48 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileTimer/TKTonePickerViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <MobileTimer/StateManagement.h>
#import <MobileTimer/TimerControlsTarget.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class TimerControlsView, TKTonePickerViewController, UIPopoverController, NSString, NSTimer, NSUserActivity;

@interface TimerViewController : UIViewController <TKTonePickerViewControllerDelegate, UINavigationControllerDelegate, StateManagement, TimerControlsTarget, UIPopoverControllerDelegate> {

	TimerControlsView* _timerControlsView;
	TKTonePickerViewController* _tonePickerViewController;
	UIPopoverController* _soundPopoverController;
	NSString* _soundIdentifier;
	NSTimer* _timer;
	double _time;
	char _layoutForTraitChange;
	int _style;
	NSUserActivity* _userActivity;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateShortcutItemForCurrentState;
-(id)shortcutItemForCurrentState;
-(id)defaultShortcutItem;
-(id)updateSelectedSoundUIForIdentifier:(id)arg1 ;
-(void)timerTick:(id)arg1 ;
-(void)startUpdatingTimerUI;
-(void)stopUpdatingTimerUI;
-(void)prepareUIForState:(int)arg1 ;
-(void)dismissSoundPicker;
-(void)handleEnterBackground;
-(void)updateSelectedSoundUI;
-(id)startTimerShortcutItem;
-(id)stopTimerShortcutItem;
-(void)confirmPickingSound;
-(void)startTimer:(id)arg1 ;
-(void)cancelTimer:(id)arg1 ;
-(void)pauseResumeTimer:(id)arg1 ;
-(void)showSoundPicker:(id)arg1 ;
-(void)handleStartTimerShortcutAction;
-(void)handleStopTimerShortcutAction;
-(void)saveState;
-(void)dealloc;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(char)prefersStatusBarHidden;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setStyle:(int)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)defaultPNGName;
-(unsigned)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)reloadState;
-(void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2 ;
@end

