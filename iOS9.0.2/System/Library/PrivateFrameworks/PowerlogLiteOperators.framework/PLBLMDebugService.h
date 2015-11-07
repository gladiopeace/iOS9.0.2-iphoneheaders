/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:53 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLiteOperators/PowerlogLiteOperators-Structs.h>
#import <PowerlogCore/PLService.h>

@class PLXPCListenerOperatorComposition, PLEntryNotificationOperatorComposition, PLTimer, NSMutableDictionary;

@interface PLBLMDebugService : PLService {

	PLXPCListenerOperatorComposition* _xpcListenerBLMDebugTrigger;
	PLEntryNotificationOperatorComposition* _ioreportCallback;
	PLEntryNotificationOperatorComposition* _processmonitorCallback;
	PLEntryNotificationOperatorComposition* _processnetworkCallback;
	PLEntryNotificationOperatorComposition* _wifiCallback;
	PLEntryNotificationOperatorComposition* _bbCallback;
	PLEntryNotificationOperatorComposition* _btCallback;
	PLTimer* _debugTimers;
	NSMutableDictionary* _triggers;

}

@property (retain) PLXPCListenerOperatorComposition * xpcListenerBLMDebugTrigger;                //@synthesize xpcListenerBLMDebugTrigger=_xpcListenerBLMDebugTrigger - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * ioreportCallback;                    //@synthesize ioreportCallback=_ioreportCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * processmonitorCallback;              //@synthesize processmonitorCallback=_processmonitorCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * processnetworkCallback;              //@synthesize processnetworkCallback=_processnetworkCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * wifiCallback;                        //@synthesize wifiCallback=_wifiCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * bbCallback;                          //@synthesize bbCallback=_bbCallback - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * btCallback;                          //@synthesize btCallback=_btCallback - In the implementation block
@property (retain) PLTimer * debugTimers;                                                        //@synthesize debugTimers=_debugTimers - In the implementation block
@property (retain) NSMutableDictionary * triggers;                                               //@synthesize triggers=_triggers - In the implementation block
+(void)load;
+(id)entryEventNoneDefinitions;
+(id)entryEventNoneDefinitionBLMDebug;
+(char)isModelTriggerRun;
-(id)init;
-(NSMutableDictionary *)triggers;
-(void)setTriggers:(NSMutableDictionary *)arg1 ;
-(void)initOperatorDependancies;
-(void)registerTrigger:(id)arg1 ;
-(void)setXpcListenerBLMDebugTrigger:(PLXPCListenerOperatorComposition *)arg1 ;
-(void)setIoreportCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setProcessmonitorCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setProcessnetworkCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setWifiCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setBbCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)setBtCallback:(PLEntryNotificationOperatorComposition *)arg1 ;
-(void)triggerLoggersNow:(id)arg1 ;
-(void)triggerSelectorAtDate:(id)arg1 withSelector:(SEL)arg2 withUseInfo:(id)arg3 ;
-(id)respondBLMDDebugQuery:(id)arg1 ;
-(PLEntryNotificationOperatorComposition *)bbCallback;
-(id)logRailData:(int)arg1 withTriggerName:(id)arg2 inTimeRange:(PLTimeIntervalRange)arg3 ;
-(double)energyForRootNodeID:(int)arg1 withRange:(PLTimeIntervalRange)arg2 ;
-(id)Testservice:(id)arg1 ;
-(void)debugTrigger;
-(PLXPCListenerOperatorComposition *)xpcListenerBLMDebugTrigger;
-(PLEntryNotificationOperatorComposition *)ioreportCallback;
-(PLEntryNotificationOperatorComposition *)processmonitorCallback;
-(PLEntryNotificationOperatorComposition *)processnetworkCallback;
-(PLEntryNotificationOperatorComposition *)wifiCallback;
-(PLEntryNotificationOperatorComposition *)btCallback;
-(PLTimer *)debugTimers;
-(void)setDebugTimers:(PLTimer *)arg1 ;
@end

