/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 5:12:00 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Applications/CoreAuthUI.app/CoreAuthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreAuthUI/TransitionViewController.h>

@class UIAlertController, TouchIDAlertHeaderView;

@interface TouchIdViewController : TransitionViewController {

	UIAlertController* _alertController;
	TouchIDAlertHeaderView* _headerView;
	char _dismissed;
	char _showAlert;
	char _showFallback;

}
-(void)didReceiveAuthenticationData;
-(void)_setActionButtons;
-(void)_enterPassword;
-(void)dismissChildWithCompletionHandler:(/*^block*/id)arg1 ;
-(int)getPreferenceInt:(id)arg1 ;
-(void)mechanismEvent:(int)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)dismissViewControllerAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewDidAppear:(char)arg1 ;
@end

