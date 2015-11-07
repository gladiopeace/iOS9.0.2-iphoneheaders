/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBRemoteAlertAdapter;

@interface SBInCallAlertManager : NSObject {

	SBRemoteAlertAdapter* _currentActiveInCallAlert;
	char _endingCallForLockButtonPress;

}

@property (nonatomic,retain) SBRemoteAlertAdapter * currentActiveInCallAlert;                                      //@synthesize currentActiveInCallAlert=_currentActiveInCallAlert - In the implementation block
@property (assign,getter=isEndingCallForLockButtonPress,nonatomic) char endingCallForLockButtonPress;              //@synthesize endingCallForLockButtonPress=_endingCallForLockButtonPress - In the implementation block
+(id)sharedInstance;
-(char)isEndingCallForLockButtonPress;
-(void)maybeLockUIAfterCallEnded;
-(void)setEndingCallForLockButtonPress:(char)arg1 ;
-(SBRemoteAlertAdapter *)currentActiveInCallAlert;
-(void)setCurrentActiveInCallAlert:(SBRemoteAlertAdapter *)arg1 ;
-(void)reactivateAlertFromStatusBarTap;
-(void)reactivateAlertForActivityContinuationWithActivityIdentifier:(id)arg1 ;
-(void)reactivateAlertFromLockScreenWithUIUnlock:(char)arg1 disableAnimatedTransition:(char)arg2 ;
-(void)reactivateAlertForLockButtonPress;
-(id)init;
@end

