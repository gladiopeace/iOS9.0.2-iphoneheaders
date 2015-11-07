/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:05:34 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/DuetExpertCenter/Experts/MagicalMoments.bundle/MagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MCProfileConnectionObserver <NSObject>
@optional
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
-(void)profileConnectionDidReceivePasscodeChangedNotification:(id)arg1 userInfo:(id)arg2;
-(void)profileConnectionDidReceivePasscodePolicyChangedNotification:(id)arg1 userInfo:(id)arg2;
-(void)profileConnectionDidReceiveProfileListChangedNotification:(id)arg1 userInfo:(id)arg2;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
-(void)profileConnectionDidReceiveDefaultsChangedNotification:(id)arg1 userInfo:(id)arg2;
-(void)profileConnectionDidReceiveAppWhitelistChangedNotification:(id)arg1 userInfo:(id)arg2;

@end

