/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PDDatabaseManagerNotificationServicesDelegate <NSObject>
@required
-(void)handlePushEnabledForPass:(id)arg1 withNotificationService:(id)arg2;
-(void)handlePushDisabledForPass:(id)arg1 withNotificationService:(id)arg2;
-(void)handleInsertionOfPass:(id)arg1 withNotificationService:(id)arg2;
-(void)handleDeletionOfPass:(id)arg1 withNotificationService:(id)arg2;
-(void)handleUpdateOfPass:(id)arg1 toPass:(id)arg2 oldNotificationService:(id)arg3 newNotificationService:(id)arg4;

@end

