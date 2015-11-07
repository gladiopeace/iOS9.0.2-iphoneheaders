/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:08 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_xpc_object;
@class NSObject, IDSWRMMetricContainer;

@interface IDSWRMExchange : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _connection;
	unsigned long long _recommendedLinkType;
	unsigned long long _activeLinkType;
	char _registered;
	char _subscribed;
	unsigned long long _reportInterval;
	char _shouldSendReport;
	IDSWRMMetricContainer* _metrics;
	unsigned short _connectCount;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	/*^block*/id _delegateBlock;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)submitMetric:(id)arg1 ;
-(void)_resetLocalMetric;
-(void)_startXPCConnection;
-(void)_registerWithWRM;
-(void)_stopXPCConnection;
-(void)_processXPCEvent:(id)arg1 ;
-(void)_restartSubscriptionIfNeeded;
-(void)_submitBlockAsync:(/*^block*/id)arg1 ;
-(char)_processXPCMessage:(id)arg1 ;
-(void)_reconnectUntilTimeout;
-(void)_restartClient;
-(void)_dispatchAfter:(double)arg1 block:(/*^block*/id)arg2 ;
-(char)_isXPCDictionary:(id)arg1 ;
-(id)_newPrefSubscribeMessage:(char)arg1 ;
-(id)_newRegisterMessage;
-(void)_sendXPCMessage:(id)arg1 ;
-(id)_newSubscribeMessage;
-(id)_newUnsubscribeMessage;
-(char)_setRecommendedLinkType:(unsigned long long)arg1 ;
-(char)_processLinkPreferenceNotificationEvent:(id)arg1 ;
-(char)_processMetricsConfigEvent:(id)arg1 ;
-(void)_notifyDelegate;
-(void)_sendMetricReportPeriodically;
-(void)_setReportInterval:(unsigned long long)arg1 ;
-(id)_newMetricReportMessage;
-(void)_sendMetricReport;
-(void)_updateLocalMetric:(id)arg1 ;
-(id)_newSubscribeStatusUpdateMessage;
-(void)subscribeForRecommendation:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)unsubscribeForRecommendation;
-(char)isWiFiRecommended;
-(char)isBTRecommended;
-(void)handleActiveLinkChange:(unsigned long long)arg1 ;
-(unsigned long long)recommendedLinkType;
@end

