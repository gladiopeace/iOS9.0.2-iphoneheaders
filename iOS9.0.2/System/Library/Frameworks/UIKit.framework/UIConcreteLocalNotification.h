/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:31:25 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UILocalNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSTimeZone, NSCalendar, CLRegion, NSString, NSData;

@interface UIConcreteLocalNotification : UILocalNotification <NSSecureCoding> {

	NSDate* fireDate;
	NSTimeZone* timeZone;
	unsigned repeatInterval;
	NSCalendar* repeatCalendar;
	int totalRepeatCount;
	int remainingRepeatCount;
	CLRegion* region;
	char regionTriggersOnce;
	NSString* alertBody;
	char hasAction;
	NSString* alertAction;
	NSString* alertLaunchImage;
	NSString* alertTitle;
	NSString* soundName;
	int applicationIconBadgeNumber;
	NSData* userInfoData;
	char hideAlertTitle;
	char allowSnooze;
	int soundType;
	char interruptAudioAndLockDevice;
	char resumeApplicationInBackground;
	char fireNotificationsWhenAppRunning;
	char showAlarmStatusBarItem;
	NSString* customLockSliderLabel;
	NSString* firedNotificationName;
	NSString* snoozedNotificationName;
	NSString* category;
	NSString* vibrationName;
	char isTransient;
	char fromSnooze;

}
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setCategory:(id)arg1 ;
-(id)category;
-(char)isValid;
-(void)setUserInfo:(id)arg1 ;
-(void)setFireDate:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(void)setRepeatInterval:(unsigned)arg1 ;
-(int)applicationIconBadgeNumber;
-(void)setApplicationIconBadgeNumber:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)userInfo;
-(unsigned)repeatInterval;
-(id)timeZone;
-(void)setSoundType:(int)arg1 ;
-(void)setRepeatCalendar:(id)arg1 ;
-(void)setTotalRepeatCount:(int)arg1 ;
-(void)setRemainingRepeatCount:(int)arg1 ;
-(void)setAlertBody:(id)arg1 ;
-(void)setHasAction:(char)arg1 ;
-(void)setAlertAction:(id)arg1 ;
-(void)setAlertLaunchImage:(id)arg1 ;
-(void)setAlertTitle:(id)arg1 ;
-(void)setSoundName:(id)arg1 ;
-(void)_setUserInfoData:(id)arg1 ;
-(void)setHideAlertTitle:(char)arg1 ;
-(void)setAllowSnooze:(char)arg1 ;
-(void)setInterruptAudioAndLockDevice:(char)arg1 ;
-(void)setResumeApplicationInBackground:(char)arg1 ;
-(void)setFireNotificationsWhenAppRunning:(char)arg1 ;
-(void)setShowAlarmStatusBarItem:(char)arg1 ;
-(void)setCustomLockSliderLabel:(id)arg1 ;
-(void)setFiredNotificationName:(id)arg1 ;
-(void)setSnoozedNotificationName:(id)arg1 ;
-(void)setIsTransient:(char)arg1 ;
-(void)setRegion:(id)arg1 ;
-(void)setRegionTriggersOnce:(char)arg1 ;
-(void)setVibrationName:(id)arg1 ;
-(void)setFromSnooze:(char)arg1 ;
-(id)fireDate;
-(id)repeatCalendar;
-(int)totalRepeatCount;
-(id)alertBody;
-(char)hasAction;
-(id)alertAction;
-(id)alertLaunchImage;
-(id)alertTitle;
-(id)soundName;
-(char)hideAlertTitle;
-(char)allowSnooze;
-(int)soundType;
-(char)interruptAudioAndLockDevice;
-(char)resumeApplicationInBackground;
-(char)fireNotificationsWhenAppRunning;
-(char)showAlarmStatusBarItem;
-(id)customLockSliderLabel;
-(id)firedNotificationName;
-(id)snoozedNotificationName;
-(id)region;
-(char)regionTriggersOnce;
-(id)vibrationName;
-(id)nextFireDateForLastFireDate:(id)arg1 ;
-(char)isTriggeredByDate;
-(id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2 ;
-(int)compareFireDates:(id)arg1 ;
-(void)clearNonSystemProperties;
-(void)validate;
-(int)remainingRepeatCount;
-(char)isTransient;
-(char)isFromSnooze;
@end

