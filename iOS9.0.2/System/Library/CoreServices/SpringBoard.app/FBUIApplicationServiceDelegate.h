/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:36:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol FBUIApplicationServiceDelegate <NSObject>
@optional
-(void)applicationService:(id)arg1 setBadgeValue:(id)arg2 forBundleIdentifier:(id)arg3;
-(void)applicationService:(id)arg1 getBadgeValueForBundleIdentifier:(id)arg2 withCompletion:(/*^block*/id)arg3;
-(void)applicationService:(id)arg1 deleteAllSnapshotsForBundleIdentifier:(id)arg2;
-(void)applicationService:(id)arg1 setNextWakeDate:(id)arg2 forBundleIdentifier:(id)arg3;
-(void)applicationService:(id)arg1 suspendApplicationWithBundleIdentifier:(id)arg2;

@end

