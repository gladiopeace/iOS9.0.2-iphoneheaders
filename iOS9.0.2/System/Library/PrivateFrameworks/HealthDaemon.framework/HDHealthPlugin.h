/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:01 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol HDHealthPlugin <NSObject>
@optional
-(char)daemonDidReceiveNotification:(const char*)arg1;
-(void)setDataCollectionOptions:(id)arg1 forKey:(id)arg2 type:(id)arg3 clientUUID:(id)arg4;
-(id)dataCollectors;
-(void)suppressActivityAlertsForIdentifier:(id)arg1 suppressionReason:(int)arg2 timeoutUntilDate:(id)arg3;
-(void)invalidateActivityAlertSuppressionForIdentifier:(id)arg1;
-(void)updateActivityCacheForNewWorkoutSamples;
-(id)queryServerForUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 client:(id)arg5 healthDaemon:(id)arg6 queryDelegate:(id)arg7;
-(void)_setPluginCatherineFeeder:(id)arg1;
-(void)_setPluginHeartRateEnable:(char)arg1;

@required
-(id)initWithHealthDaemon:(id)arg1;

@end
