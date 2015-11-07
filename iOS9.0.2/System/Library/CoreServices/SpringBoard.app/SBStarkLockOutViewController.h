/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SBStarkSessionConfiguring;
@class SBStarkScreenController, SBStarkLockOutView, FBSceneHostManager, NSString, SBUIStarkStartupAnimation;

@interface SBStarkLockOutViewController : UIViewController {

	id<SBStarkSessionConfiguring> _configuration;
	SBStarkScreenController* _screenController;
	int _mode;
	SBStarkLockOutView* _modeView;
	SBStarkLockOutView* _previousModeView;
	FBSceneHostManager* _layoutWindowHostManager;
	NSString* _layoutWindowHostRequester;
	char _inDealloc;
	char _pendingAnimated;
	int _pendingMode;
	SBUIStarkStartupAnimation* _startupAnimation;

}

@property (assign,nonatomic) int lockOutMode; 
@property (nonatomic,retain,readonly) SBStarkLockOutView * lockoutView;               //@synthesize modeView=_modeView - In the implementation block
@property (nonatomic,retain) SBStarkScreenController * screenController;              //@synthesize screenController=_screenController - In the implementation block
-(void)animationController:(id)arg1 willBeginAnimation:(char)arg2 ;
-(void)animationControllerDidFinishAnimation:(id)arg1 ;
-(SBStarkScreenController *)screenController;
-(void)setScreenController:(SBStarkScreenController *)arg1 ;
-(void)setLockOutMode:(int)arg1 animated:(char)arg2 ;
-(int)lockOutMode;
-(id)_newModeViewForMode:(int)arg1 ;
-(void)_updateLockOutModeIfPending;
-(SBStarkLockOutView *)lockoutView;
-(void)setLockOutMode:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)preferredFocusedItem;
-(void)viewWillLayoutSubviews;
-(void)viewDidAppear:(char)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
@end

