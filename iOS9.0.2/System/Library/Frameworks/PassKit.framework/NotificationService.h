/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:06 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface NotificationService : SQLiteEntity
+(id)_predicateForPushTopic:(id)arg1 ;
+(id)_predicateForServiceURL:(id)arg1 ;
+(id)_predicateForServiceType:(unsigned)arg1 ;
+(id)_notificationServicesInDatabase:(id)arg1 matchingPredicate:(id)arg2 ;
+(id)_propertySettersForPaymentTransaction;
+(id)insertNotificationServiceWithPushTopic:(id)arg1 serviceType:(unsigned)arg2 serviceURL:(id)arg3 deviceIdentifier:(id)arg4 inDatabase:(id)arg5 ;
+(id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 withServiceURL:(id)arg2 ;
+(id)anyInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned)arg3 serviceURL:(id)arg4 ;
+(id)notificationServicesInDatabase:(id)arg1 ;
+(id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2 ;
+(id)notificationServicesInDatabase:(id)arg1 withPushTopic:(id)arg2 serviceType:(unsigned)arg3 serviceURL:(id)arg4 ;
+(id)_predicateForNotificationServicePID:(id)arg1 ;
+(id)databaseTable;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
-(id)notificationService;
-(void)updateWithNotificationService:(id)arg1 ;
-(id)initWithPushTopic:(id)arg1 serviceType:(unsigned)arg2 serviceURL:(id)arg3 deviceIdentifier:(id)arg4 inDatabase:(id)arg5 ;
-(void)updateWithPushToken:(id)arg1 ;
-(void)updateWithAuthenticationToken:(id)arg1 ;
-(void)updateWithAppLaunchToken:(id)arg1 ;
-(void)updateWithLastUpdatedDate:(id)arg1 ;
-(void)updateWithLastUpdatedTag:(id)arg1 ;
@end
