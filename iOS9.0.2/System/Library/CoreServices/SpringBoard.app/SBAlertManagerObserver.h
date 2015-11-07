/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:26 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBAlertManagerObserver <NSObject>
@optional
-(void)alertManager:(id)arg1 topAlert:(id)arg2 requestsWallpaperStyleChangeWithAnimationFactory:(id)arg3;
-(void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
-(void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3;
-(void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 top:(char)arg3;
-(void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 top:(char)arg3;
-(void)alertManager:(id)arg1 didChangeTopAlertFromAlert:(id)arg2 toAlert:(id)arg3;
-(void)alertManager:(id)arg1 topAlert:(id)arg2 didChangeStatusBarVisibility:(char)arg3;
-(void)alertManager:(id)arg1 topAlertDidChangeOrientationEventsEnabled:(id)arg2;
-(void)alertManager:(id)arg1 didCreateAlertWindow:(id)arg2;
-(void)alertManager:(id)arg1 willTearDownAlertWindow:(id)arg2;
-(void)alertManager:(id)arg1 didTearDownAlertWindow:(id)arg2;
-(void)alertManager:(id)arg1 didRemoveAlert:(id)arg2 fromWindow:(id)arg3;

@end

