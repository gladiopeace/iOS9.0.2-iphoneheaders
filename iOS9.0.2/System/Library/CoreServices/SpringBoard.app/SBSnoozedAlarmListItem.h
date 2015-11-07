/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:32 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBAwayListItem.h>

@class UILocalNotification, UIImage, NSDate;

@interface SBSnoozedAlarmListItem : SBAwayListItem {

	UILocalNotification* _localNotification;
	UIImage* _iconImage;

}

@property (nonatomic,retain) UILocalNotification * localNotification;              //@synthesize localNotification=_localNotification - In the implementation block
@property (nonatomic,retain,readonly) NSDate * fireDate; 
@property (nonatomic,retain,readonly) UIImage * iconImage;                         //@synthesize iconImage=_iconImage - In the implementation block
-(char)canBeRemovedByNotificationCenterPresentation;
-(char)canBeRemovedByUnlock;
-(UILocalNotification *)localNotification;
-(void)setLocalNotification:(UILocalNotification *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)sortDate;
-(UIImage *)iconImage;
-(NSDate *)fireDate;
@end

