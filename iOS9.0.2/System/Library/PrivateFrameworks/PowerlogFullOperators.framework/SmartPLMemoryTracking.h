/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:52 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLSmartPLService, PLEntryNotificationOperatorComposition;

@interface SmartPLMemoryTracking : NSObject {

	PLSmartPLService* _operator;
	PLEntryNotificationOperatorComposition* _memoryTrackingNotification;

}

@property (__weak) PLSmartPLService * operator;                                                      //@synthesize operator=_operator - In the implementation block
@property (retain) PLEntryNotificationOperatorComposition * memoryTrackingNotification;              //@synthesize memoryTrackingNotification=_memoryTrackingNotification - In the implementation block
+(id)defaults;
-(void)startWithOperator:(id)arg1 ;
-(void)handleMemoryTracking:(id)arg1 ;
-(void)setMemoryTrackingNotification:(PLEntryNotificationOperatorComposition *)arg1 ;
-(PLEntryNotificationOperatorComposition *)memoryTrackingNotification;
-(PLSmartPLService *)operator;
-(void)setOperator:(PLSmartPLService *)arg1 ;
@end

