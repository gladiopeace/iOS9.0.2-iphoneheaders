/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:36 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBLockScreenNotificationListDelegate <NSObject>
@required
-(void)removeCoordinatedPresentingController:(id)arg1;
-(void)addCoordinatedPresentingController:(id)arg1;
-(void)attemptToUnlockUIFromNotification;
-(void)authenticateForNotificationActionWithCompletion:(/*^block*/id)arg1;
-(void)presentFullscreenBulletinAlertWithItem:(id)arg1;
-(void)notificationListBecomingVisible:(char)arg1;
-(void)modifyFullscreenBulletinAlertWithItem:(id)arg1;
-(void)dismissFullscreenBulletinAlertWithItem:(id)arg1;
-(id)lockScreenScrollView;
-(void)bannerEnablementChanged;

@end

