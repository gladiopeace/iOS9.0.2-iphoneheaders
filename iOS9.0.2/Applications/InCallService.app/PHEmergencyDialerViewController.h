/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:24 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIEmergencyCallServiceViewController.h>
#import <libobjc.A.dylib/HKMedicalIDViewControllerDelegate.h>
#import <InCallService/TPDialerKeypadDelegate.h>
#import <InCallService/DialerViewDelegate.h>

@class PHEmergencyHandsetDialerView, NSTimer, UIButton, HKHealthStore, HKMedicalIDViewController, NSString;

@interface PHEmergencyDialerViewController : SBUIEmergencyCallServiceViewController <HKMedicalIDViewControllerDelegate, TPDialerKeypadDelegate, DialerViewDelegate> {

	char _shouldSetPresenceToken;
	char _callEnding;
	short _currentState;
	PHEmergencyHandsetDialerView* _dialerView;
	NSTimer* _callDurationTimer;
	UIButton* _backButton;
	UIButton* _medicalIDButton;
	UIButton* _endButton;
	HKHealthStore* _healthStore;
	HKMedicalIDViewController* _medicalIDViewController;

}

@property (assign) char shouldSetPresenceToken;                                      //@synthesize shouldSetPresenceToken=_shouldSetPresenceToken - In the implementation block
@property (retain) PHEmergencyHandsetDialerView * dialerView;                        //@synthesize dialerView=_dialerView - In the implementation block
@property (assign) NSTimer * callDurationTimer;                                      //@synthesize callDurationTimer=_callDurationTimer - In the implementation block
@property (retain) UIButton * backButton;                                            //@synthesize backButton=_backButton - In the implementation block
@property (retain) UIButton * medicalIDButton;                                       //@synthesize medicalIDButton=_medicalIDButton - In the implementation block
@property (retain) UIButton * endButton;                                             //@synthesize endButton=_endButton - In the implementation block
@property (assign,nonatomic) short currentState;                                     //@synthesize currentState=_currentState - In the implementation block
@property (assign) char callEnding;                                                  //@synthesize callEnding=_callEnding - In the implementation block
@property (retain) HKHealthStore * healthStore;                                      //@synthesize healthStore=_healthStore - In the implementation block
@property (retain) HKMedicalIDViewController * medicalIDViewController;              //@synthesize medicalIDViewController=_medicalIDViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_isSecureForRemoteViewService;
-(void)callStatusChangedNotification:(id)arg1 ;
-(void)backButtonTapped:(id)arg1 ;
-(void)endButtonTapped:(id)arg1 ;
-(UIButton *)endButton;
-(PHEmergencyHandsetDialerView *)dialerView;
-(void)setEndButton:(UIButton *)arg1 ;
-(char)isShowingDoubleHeightStatusBar;
-(void)statusBarHeightChanged:(id)arg1 ;
-(void)setShouldSetPresenceToken:(char)arg1 ;
-(void)callButtonTapped:(id)arg1 ;
-(void)medicalIDButtonTapped:(id)arg1 ;
-(void)setMedicalIDButton:(UIButton *)arg1 ;
-(HKMedicalIDViewController *)medicalIDViewController;
-(UIButton *)medicalIDButton;
-(void)updateCurrentState;
-(char)shouldSetPresenceToken;
-(void)continueCyclingEmergencyTitleLabel;
-(void)setCallEnding:(char)arg1 ;
-(void)updateEmergencyTitleLabelForCallDuration;
-(char)dialEmergencyCall;
-(void)dismissMedicalIDViewControllerIfNecessary;
-(void)emergencyCallBackModeChangedNotification:(id)arg1 ;
-(NSTimer *)callDurationTimer;
-(void)setCallDurationTimer:(NSTimer *)arg1 ;
-(void)setCurrentState:(short)arg1 animated:(char)arg2 ;
-(id)currentCallStatusStringForDisplay;
-(void)setDialerView:(PHEmergencyHandsetDialerView *)arg1 ;
-(char)callEnding;
-(void)setMedicalIDViewController:(HKMedicalIDViewController *)arg1 ;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)medicalIDViewControllerDidFinish:(id)arg1 ;
-(void)dealloc;
-(short)currentState;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)setCurrentState:(short)arg1 ;
-(void)setBackButton:(UIButton *)arg1 ;
-(void)deleteButtonTapped:(id)arg1 ;
-(void)noteTintColorForBackgroundStyleChanged:(id)arg1 ;
-(void)noteViewMovedOffscreenTemporarily;
-(UIButton *)backButton;
-(void)phonePad:(id)arg1 appendString:(id)arg2 ;
-(void)phonePad:(id)arg1 keyDown:(char)arg2 ;
-(void)phonePad:(id)arg1 keyUp:(char)arg2 ;
-(void)phonePadWillBeginSounds:(id)arg1 ;
-(void)phonePadDidEndSounds:(id)arg1 ;
-(void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2 ;
-(void)phonePadDeleteLastDigit:(id)arg1 ;
-(void)phonePad:(id)arg1 dialerCharacterButtonWasHeld:(unsigned)arg2 ;
@end

