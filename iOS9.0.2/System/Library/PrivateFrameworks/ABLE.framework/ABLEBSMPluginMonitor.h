/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:37:51 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, CDSession, CDAttribute, NSMutableArray, NSDate;

@interface ABLEBSMPluginMonitor : NSObject {

	int pluginEventToken;
	NSObject*<OS_dispatch_queue> syncQueue;
	CDSession* session;
	CDAttribute* batteryLevelAttribute;
	CDAttribute* pluginAttribute;
	CDAttribute* bundleIDAttribute;
	NSMutableArray* plugins;
	int secondsFromGMT;
	double pluginChargeLevelSum;
	char isValid;
	char isPluggedIn;
	NSDate* lastPluginDate;
	NSDate* lastUnplugDate;
	double lastPluginLevel;
	double lastUnplugLevel;

}

@property (readonly) char isValid; 
@property (readonly) char isPluggedIn; 
@property (readonly) NSDate * lastPluginDate; 
@property (readonly) double lastPluginLevel; 
@property (readonly) NSDate * lastUnplugDate; 
@property (readonly) double lastUnplugLevel; 
+(id)monitorWithSession:(id)arg1 ;
-(void)getHistoricalPluginEventsWithSession:(id)arg1 ;
-(void)handlePluginEventRaw:(char)arg1 ;
-(id)batteryLevelsAtSomeDates:(id)arg1 ;
-(id)batteryLevelsAtDates:(id)arg1 ;
-(int)slotFromDate:(id)arg1 slotsInDay:(int)arg2 ;
-(void)addEquivalentSlotsFromSlot:(int)arg1 toSet:(id)arg2 ;
-(id)midnightToday:(id)arg1 ;
-(id)temporalForecastAnyForHistoryWindow:(id)arg1 atDate:(id)arg2 ;
-(int)populateChargeTimes:(id)arg1 forLastWeek:(id)arg2 forYesterday:(id)arg3 withDate:(id)arg4 ;
-(id)closestDateFromSlots:(id)arg1 withCurrentDate:(id)arg2 andSlot:(int)arg3 ;
-(id)deviceInactivityTimeAfterDate:(id)arg1 ;
-(id)pluginsBetween:(id)arg1 and:(id)arg2 ;
-(id)predictedChargeTimeAfterDate:(id)arg1 ;
-(double)averageLevelAtCharge;
-(NSDate *)lastPluginDate;
-(double)lastPluginLevel;
-(NSDate *)lastUnplugDate;
-(double)lastUnplugLevel;
-(id)initWithSession:(id)arg1 ;
-(void)dealloc;
-(char)isValid;
-(char)isPluggedIn;
@end

