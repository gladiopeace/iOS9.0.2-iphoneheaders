/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBToAppsWorkspaceTransaction.h>

@class SBDisableActiveInterfaceOrientationChangeAssertion, SBStarkScreenController, SBWorkspaceApplication;

@interface SBRelaunchAppWorkspaceTransaction : SBToAppsWorkspaceTransaction {

	char _relaunchSuspended;
	char _willBeOccluded;
	SBDisableActiveInterfaceOrientationChangeAssertion* _disableActiveOrientationChangeAssertion;
	SBStarkScreenController* _starkScreenController;
	SBWorkspaceApplication* _toApp;

}

@property (nonatomic,retain) SBStarkScreenController * starkScreenController;              //@synthesize starkScreenController=_starkScreenController - In the implementation block
-(id)initWithTransitionRequest:(id)arg1 ;
-(void)setStarkScreenController:(SBStarkScreenController *)arg1 ;
-(SBStarkScreenController *)starkScreenController;
-(void)_handleApplicationUpdateScenesTransactionFailed:(id)arg1 ;
-(void)_cleanUpAnimation;
-(id)_animationForApp:(id)arg1 ;
-(void)_handleAppRelaunch:(id)arg1 ;
-(void)dealloc;
-(id)debugDescription;
-(void)_didComplete;
-(void)_begin;
-(id)_setupAnimation;
@end

