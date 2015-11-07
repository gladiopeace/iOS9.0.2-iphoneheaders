/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:39:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NPKCompanionAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NPDCardSetupReminderNotificationSchedulerDelegate <NSObject>
@required
-(char)hasWatchPaymentPassWithUniqueID:(id)arg1;
-(void)removeReminderNotificationForPassWithUniqueID:(id)arg1;
-(char)hasCompanionPaymentPassWithUniqueID:(id)arg1;
-(void)postAddReminderNotificationForPassWithUniqueID:(id)arg1;
-(char)hasWatchPaymentPassRequiringVerificationWithUniqueID:(id)arg1;
-(void)postVerifyReminderNotificationForPassWithUniqueID:(id)arg1;
-(char)hasAnyWatchPaymentPasses;

@end

